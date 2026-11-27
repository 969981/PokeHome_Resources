-- V3: release-scoped native Personal dispatch, learnsets and move guard evidence.
-- Integer addresses are ELF virtual addresses, not live ASLR pointers.
CREATE TABLE native_personal_selectors(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 selector INTEGER NOT NULL CHECK(selector BETWEEN 0 AND 255),
 slot_va INTEGER NOT NULL CHECK(slot_va>=0),
 dataset_id TEXT,
 status TEXT NOT NULL CHECK(status IN ('static_verified','unsupported','candidate')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,selector), UNIQUE(release_id,dataset_id), UNIQUE(release_id,slot_va),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id),
 CHECK((status='unsupported' AND dataset_id IS NULL) OR (status<>'unsupported' AND dataset_id IS NOT NULL))
) STRICT;
CREATE TABLE native_personal_dispatch(
 release_id TEXT NOT NULL, selector INTEGER NOT NULL,
 registration_va INTEGER NOT NULL, got_va INTEGER NOT NULL, vtable_va INTEGER NOT NULL,
 store_va INTEGER NOT NULL, count_getter_va INTEGER NOT NULL, entry_getter_va INTEGER NOT NULL,
 lookup_va INTEGER NOT NULL, holder_va INTEGER NOT NULL, index_base_va INTEGER NOT NULL,
 loader_call_va INTEGER NOT NULL,
 PRIMARY KEY(release_id,selector),
 FOREIGN KEY(release_id,selector) REFERENCES native_personal_selectors(release_id,selector)
) STRICT;
CREATE TABLE native_learnset_layouts(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,
 move_field INTEGER NOT NULL CHECK(move_field IN (0,1)),
 code_field INTEGER NOT NULL CHECK(code_field IN (0,1)),
 extra_field INTEGER CHECK(extra_field IS NULL OR extra_field=2),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,dataset_id),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id),
 CHECK(move_field<>code_field)
) STRICT;
CREATE TABLE native_personal_records(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,record_index INTEGER NOT NULL CHECK(record_index>=0),
 native_species INTEGER NOT NULL CHECK(native_species BETWEEN 0 AND 65535),
 native_form INTEGER NOT NULL CHECK(native_form BETWEEN 0 AND 65535),
 table_offset INTEGER NOT NULL CHECK(table_offset>=0),
 vector_offset INTEGER NOT NULL CHECK(vector_offset>=0),
 vector_count INTEGER NOT NULL CHECK(vector_count>=0),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,dataset_id,record_index),
 UNIQUE(release_id,dataset_id,native_species,native_form),
 FOREIGN KEY(release_id,dataset_id) REFERENCES native_learnset_layouts(release_id,dataset_id)
) STRICT;
CREATE TABLE native_personal_learnset_entries(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,record_index INTEGER NOT NULL,
 ordinal INTEGER NOT NULL CHECK(ordinal>=0), table_offset INTEGER NOT NULL CHECK(table_offset>=0),
 field0_u16 INTEGER CHECK(field0_u16 BETWEEN 0 AND 65535),
 field1_u16 INTEGER CHECK(field1_u16 BETWEEN 0 AND 65535),
 field2_u16 INTEGER CHECK(field2_u16 BETWEEN 0 AND 65535),
 PRIMARY KEY(release_id,dataset_id,record_index,ordinal),
 FOREIGN KEY(release_id,dataset_id,record_index) REFERENCES native_personal_records(release_id,dataset_id,record_index)
) STRICT;
CREATE TABLE native_move_guard_tables(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),table_id TEXT NOT NULL,
 table_va INTEGER NOT NULL CHECK(table_va>=0),entry_count INTEGER NOT NULL CHECK(entry_count>=0),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,table_id), UNIQUE(release_id,table_va)
) STRICT;
CREATE TABLE native_move_guard_entries(
 release_id TEXT NOT NULL,table_id TEXT NOT NULL,ordinal INTEGER NOT NULL CHECK(ordinal>=0),
 move_id_raw INTEGER NOT NULL CHECK(move_id_raw BETWEEN 0 AND 4294967295),
 PRIMARY KEY(release_id,table_id,ordinal),
 FOREIGN KEY(release_id,table_id) REFERENCES native_move_guard_tables(release_id,table_id)
) STRICT;
CREATE INDEX native_guard_move_lookup ON native_move_guard_entries(release_id,table_id,move_id_raw);
CREATE TABLE native_move_guard_rules(
 release_id TEXT NOT NULL,selector INTEGER NOT NULL,
 strategy TEXT NOT NULL CHECK(strategy IN ('allow','allow_table','exclude_table','dynamic')),
 table_id TEXT, extra_excluded_move INTEGER,
 dynamic_function_va INTEGER,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,selector),
 FOREIGN KEY(release_id,selector) REFERENCES native_personal_selectors(release_id,selector),
 FOREIGN KEY(release_id,table_id) REFERENCES native_move_guard_tables(release_id,table_id),
 CHECK((strategy IN ('allow_table','exclude_table') AND table_id IS NOT NULL AND dynamic_function_va IS NULL) OR
 (strategy='allow' AND table_id IS NULL AND dynamic_function_va IS NULL) OR
 (strategy='dynamic' AND table_id IS NULL AND dynamic_function_va IS NOT NULL)),
 CHECK(extra_excluded_move IS NULL OR strategy='exclude_table')
) STRICT;
CREATE TABLE native_move_exclusion_entries(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 table_va INTEGER NOT NULL,ordinal INTEGER NOT NULL CHECK(ordinal>=0),
 word0 INTEGER NOT NULL,native_species INTEGER NOT NULL,native_form INTEGER NOT NULL,
 raw_u16_0a INTEGER NOT NULL,move_id INTEGER NOT NULL,
 raw_hex TEXT NOT NULL CHECK(length(raw_hex)=32),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,table_va,ordinal)
) STRICT;
CREATE TABLE native_function_evidence(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 function_va INTEGER NOT NULL, research_name TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('static_verified','partial')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,function_va)
) STRICT;
-- Raw NULL is retained in base table. Derived values model successful getters only.
-- Never synthesize query-failure sentinel 101 as a real record.
CREATE VIEW v_native_personal_learnsets AS
SELECT e.release_id,s.selector,e.dataset_id,e.record_index,e.ordinal,p.native_species,p.native_form,
 e.table_offset,e.field0_u16,e.field1_u16,e.field2_u16,
 COALESCE(CASE l.move_field WHEN 0 THEN e.field0_u16 ELSE e.field1_u16 END,0) AS native_move_id,
 COALESCE(CASE l.code_field WHEN 0 THEN e.field0_u16 ELSE e.field1_u16 END,0) AS native_code,
 CASE WHEN l.extra_field=2 THEN COALESCE(e.field2_u16,0) ELSE 0 END AS native_extra_code
FROM native_personal_learnset_entries e
JOIN native_personal_records p USING(release_id,dataset_id,record_index)
JOIN native_learnset_layouts l USING(release_id,dataset_id)
JOIN native_personal_selectors s USING(release_id,dataset_id)
WHERE s.status='static_verified';
