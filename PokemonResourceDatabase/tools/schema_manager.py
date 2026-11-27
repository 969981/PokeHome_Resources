# /// script
# requires-python = ">=3.11"
# dependencies = []
# ///
"""Transactional SQLite migrations and schema-derived CSV dictionary/templates."""
import argparse,csv,hashlib,json,re,sqlite3
from pathlib import Path

BASE=Path(__file__).resolve().parents[1]
MIG=BASE/"schemas/migrations"
META="""CREATE TABLE IF NOT EXISTS schema_migrations(
 version INTEGER PRIMARY KEY, filename TEXT NOT NULL UNIQUE,
 sha256 TEXT NOT NULL, applied_at TEXT NOT NULL DEFAULT CURRENT_TIMESTAMP
) STRICT"""
def connect(path):
    con=sqlite3.connect(path)
    con.execute("PRAGMA foreign_keys=ON")
    if sqlite3.sqlite_version_info<(3,37,0): raise RuntimeError("SQLite >=3.37 required")
    return con
def migration_files():
    files=sorted(MIG.glob("[0-9][0-9][0-9][0-9]_*.sql"))
    versions=[int(p.name[:4]) for p in files]
    if versions!=list(range(1,len(files)+1)): raise ValueError("noncontiguous migrations")
    return [(int(p.name[:4]),p,hashlib.sha256(p.read_bytes()).hexdigest()) for p in files]
def migrate(con):
    # Reject partially initialized or manually versioned DBs.
    con.execute(META);con.commit()
    applied=con.execute("SELECT version,filename,sha256 FROM schema_migrations ORDER BY version").fetchall()
    files=migration_files()
    expected=[(n,p.name,h) for n,p,h in files[:len(applied)]]
    if applied!=expected or con.execute("PRAGMA user_version").fetchone()[0]!=len(applied):
        raise ValueError("migration history/checksum/user_version mismatch")
    for n,p,h in files[len(applied):]:
        # Only trusted repository migration SQL; migration files must not manage transactions.
        body=p.read_text(encoding="utf-8")
        try:
            con.executescript("BEGIN IMMEDIATE;\n"+body+"\n")
            if con.execute("PRAGMA foreign_key_check").fetchone(): raise ValueError("foreign key violation")
            if con.execute("PRAGMA integrity_check").fetchone()!=("ok",): raise ValueError("integrity check failed")
            con.execute("INSERT INTO schema_migrations(version,filename,sha256) VALUES(?,?,?)",(n,p.name,h))
            con.execute(f"PRAGMA user_version={n}")
            con.commit()
        except Exception:
            con.rollback();raise
    return len(files)
def dictionary(con,out):
    out.mkdir(parents=True,exist_ok=True);templates=out/"templates";templates.mkdir(exist_ok=True)
    tables=[r[0] for r in con.execute("SELECT name FROM sqlite_schema WHERE type='table' AND name NOT LIKE 'sqlite_%' AND name<>'schema_migrations' ORDER BY name")]
    rows=[]
    for table in tables:
        cols=con.execute(f"PRAGMA table_info({table})").fetchall()
        fks=con.execute(f"PRAGMA foreign_key_list({table})").fetchall()
        unique=[]
        for idx in con.execute(f"PRAGMA index_list({table})").fetchall():
            if idx[2]:
                unique.append((idx[1],{r[2] for r in con.execute(f"PRAGMA index_info({idx[1]})")}))
        for _,name,typ,nn,default,pk in cols:
            refs=[f"{r[2]}.{r[4]} [fk {r[0]}:{r[1]}]" for r in fks if r[3]==name]
            rows.append((table,name,typ,"no" if nn or pk else "yes",pk,default if default is not None else "", ";".join(refs),";".join(i for i,c in unique if name in c)))
        with (templates/f"{table}.csv").open("w",encoding="utf-8",newline="") as f: csv.writer(f).writerow([c[1] for c in cols])
    with (out/"field_dictionary.csv").open("w",encoding="utf-8",newline="") as f:
        w=csv.writer(f);w.writerow(["table","column","sql_type","nullable","pk_ordinal","default_sql","foreign_keys","unique_indexes"]);w.writerows(rows)
    return {"tables":len(tables),"fields":len(rows)}
def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--db",type=Path,required=True)
    p.add_argument("--dictionary",type=Path)
    a=p.parse_args();a.db.parent.mkdir(parents=True,exist_ok=True)
    with connect(a.db) as con:
        version=migrate(con); result={"schema_version":version,"foreign_keys":bool(con.execute("PRAGMA foreign_keys").fetchone()[0])}
        if a.dictionary: result.update(dictionary(con,a.dictionary))
        print(json.dumps(result))
if __name__=="__main__": main()
