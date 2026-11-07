.class public final Lcom/google/android/gms/measurement/internal/zzgv;
.super Lcom/google/android/gms/measurement/internal/zzg;
.source "com.google.android.gms:play-services-measurement-impl@@22.4.0"


# static fields
.field private static final zza:[Ljava/lang/String;


# instance fields
.field private final zzb:Lcom/google/android/gms/measurement/internal/zzgt;

.field private zzc:Z


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "app_version_int"

    const-string v1, "ALTER TABLE messages ADD COLUMN app_version_int INTEGER;"

    const-string v2, "app_version"

    const-string v3, "ALTER TABLE messages ADD COLUMN app_version TEXT;"

    filled-new-array {v2, v3, v0, v1}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/google/android/gms/measurement/internal/zzgv;->zza:[Ljava/lang/String;

    return-void
.end method

.method constructor <init>(Lcom/google/android/gms/measurement/internal/zzio;)V
    .locals 2

    .line 1
    invoke-direct {p0, p1}, Lcom/google/android/gms/measurement/internal/zzg;-><init>(Lcom/google/android/gms/measurement/internal/zzio;)V

    new-instance p1, Lcom/google/android/gms/measurement/internal/zzgt;

    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 2
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaT()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 3
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    const-string v1, "google_app_measurement_local.db"

    .line 4
    invoke-direct {p1, p0, v0, v1}, Lcom/google/android/gms/measurement/internal/zzgt;-><init>(Lcom/google/android/gms/measurement/internal/zzgv;Landroid/content/Context;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzb:Lcom/google/android/gms/measurement/internal/zzgt;

    return-void
.end method

.method static bridge synthetic zzr()[Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/google/android/gms/measurement/internal/zzgv;->zza:[Ljava/lang/String;

    return-object v0
.end method

.method private final zzs(I[B)Z
    .locals 18

    move-object/from16 v1, p0

    .line 1
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzjq;->zzg()V

    iget-boolean v0, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    goto :goto_2

    :cond_0
    iget-object v3, v1, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 2
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    move-result-object v0

    .line 3
    sget-object v4, Lcom/google/android/gms/measurement/internal/zzgi;->zzbl:Lcom/google/android/gms/measurement/internal/zzgg;

    const/4 v5, 0x0

    .line 4
    invoke-virtual {v0, v5, v4}, Lcom/google/android/gms/measurement/internal/zzam;->zzx(Ljava/lang/String;Lcom/google/android/gms/measurement/internal/zzgg;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, v1, Lcom/google/android/gms/measurement/internal/zzf;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 5
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzh()Lcom/google/android/gms/measurement/internal/zzgs;

    move-result-object v0

    .line 6
    invoke-virtual {v0, v5}, Lcom/google/android/gms/measurement/internal/zzgs;->zzk(Ljava/lang/String;)Lcom/google/android/gms/measurement/internal/zzr;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v5

    :goto_0
    new-instance v4, Landroid/content/ContentValues;

    .line 7
    invoke-direct {v4}, Landroid/content/ContentValues;-><init>()V

    .line 8
    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    const-string v7, "type"

    invoke-virtual {v4, v7, v6}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    const-string v6, "entry"

    move-object/from16 v7, p2

    .line 9
    invoke-virtual {v4, v6, v7}, Landroid/content/ContentValues;->put(Ljava/lang/String;[B)V

    .line 10
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    move-result-object v6

    sget-object v7, Lcom/google/android/gms/measurement/internal/zzgi;->zzbl:Lcom/google/android/gms/measurement/internal/zzgg;

    .line 11
    invoke-virtual {v6, v5, v7}, Lcom/google/android/gms/measurement/internal/zzam;->zzx(Ljava/lang/String;Lcom/google/android/gms/measurement/internal/zzgg;)Z

    move-result v6

    if-eqz v6, :cond_2

    if-eqz v0, :cond_2

    const-string v6, "app_version"

    iget-object v7, v0, Lcom/google/android/gms/measurement/internal/zzr;->zzc:Ljava/lang/String;

    .line 12
    invoke-virtual {v4, v6, v7}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v6, v0, Lcom/google/android/gms/measurement/internal/zzr;->zzj:J

    const-string v0, "app_version_int"

    .line 13
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v4, v0, v6}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 14
    :cond_2
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    const/4 v6, 0x5

    move v7, v2

    move v8, v6

    :goto_1
    if-ge v7, v6, :cond_e

    const/4 v9, 0x1

    .line 15
    :try_start_0
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzh()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v10
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_0 .. :try_end_0} :catch_d
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_0 .. :try_end_0} :catch_b
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_a
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v10, :cond_3

    :try_start_1
    iput-boolean v9, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    :goto_2
    return v2

    .line 16
    :cond_3
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "select count(1) from messages"

    .line 17
    invoke-virtual {v10, v0, v5}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v11
    :try_end_1
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_1 .. :try_end_1} :catch_9
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_1 .. :try_end_1} :catch_8
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_1 .. :try_end_1} :catch_7
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-wide/16 v12, 0x0

    if-eqz v11, :cond_4

    .line 18
    :try_start_2
    invoke-interface {v11}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 19
    invoke-interface {v11, v2}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v12
    :try_end_2
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_2 .. :try_end_2} :catch_1
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_5

    :catch_0
    move-exception v0

    move/from16 v17, v2

    :goto_3
    move/from16 p2, v9

    goto/16 :goto_7

    :catch_1
    move/from16 v17, v2

    goto/16 :goto_8

    :catch_2
    move-exception v0

    move/from16 v17, v2

    :goto_4
    move/from16 p2, v9

    goto/16 :goto_a

    :cond_4
    :goto_5
    const-wide/32 v14, 0x186a0

    cmp-long v0, v12, v14

    const-string v14, "messages"

    if-ltz v0, :cond_5

    .line 20
    :try_start_3
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 21
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v15, "Data loss, local db full"

    invoke-virtual {v0, v15}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    const-string v0, "rowid in (select rowid from messages order by rowid asc limit ?)"

    const-wide/32 v15, 0x186a1

    sub-long/2addr v15, v12

    .line 22
    invoke-static/range {v15 .. v16}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v12

    filled-new-array {v12}, [Ljava/lang/String;

    move-result-object v12

    .line 23
    invoke-virtual {v10, v14, v0, v12}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0

    int-to-long v12, v0

    cmp-long v0, v12, v15

    if-eqz v0, :cond_5

    .line 24
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 25
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0
    :try_end_3
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_3 .. :try_end_3} :catch_2
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    move/from16 v17, v2

    :try_start_4
    const-string v2, "Different delete count than expected in local db. expected, received, difference"

    .line 26
    invoke-static/range {v15 .. v16}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6
    :try_end_4
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_4 .. :try_end_4} :catch_4
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_4 .. :try_end_4} :catch_c
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_4 .. :try_end_4} :catch_3
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    move/from16 p2, v9

    .line 27
    :try_start_5
    invoke-static {v12, v13}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v9

    sub-long/2addr v15, v12

    .line 28
    invoke-static/range {v15 .. v16}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v12

    .line 29
    invoke-virtual {v0, v2, v6, v9, v12}, Lcom/google/android/gms/measurement/internal/zzhc;->zzd(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V

    goto :goto_6

    :catch_3
    move-exception v0

    goto :goto_3

    :catch_4
    move-exception v0

    goto :goto_4

    :cond_5
    move/from16 v17, v2

    move/from16 p2, v9

    .line 30
    :goto_6
    invoke-virtual {v10, v14, v5, v4}, Landroid/database/sqlite/SQLiteDatabase;->insertOrThrow(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    .line 31
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V

    .line 32
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_5
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_5 .. :try_end_5} :catch_6
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_5 .. :try_end_5} :catch_c
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_5 .. :try_end_5} :catch_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v11, :cond_6

    .line 37
    invoke-interface {v11}, Landroid/database/Cursor;->close()V

    .line 38
    :cond_6
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    return p2

    :catch_5
    move-exception v0

    goto :goto_7

    :catch_6
    move-exception v0

    goto/16 :goto_a

    :catchall_0
    move-exception v0

    goto/16 :goto_c

    :catch_7
    move-exception v0

    move/from16 v17, v2

    move/from16 p2, v9

    move-object v11, v5

    goto :goto_7

    :catch_8
    move/from16 v17, v2

    move-object v11, v5

    goto :goto_8

    :catch_9
    move-exception v0

    move/from16 v17, v2

    move/from16 p2, v9

    move-object v11, v5

    goto :goto_a

    :catchall_1
    move-exception v0

    move-object v10, v5

    goto/16 :goto_c

    :catch_a
    move-exception v0

    move/from16 v17, v2

    move/from16 p2, v9

    move-object v10, v5

    move-object v11, v10

    :goto_7
    if-eqz v10, :cond_7

    .line 33
    :try_start_6
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->inTransaction()Z

    move-result v2

    if-eqz v2, :cond_7

    .line 34
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :cond_7
    iget-object v2, v1, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 35
    invoke-virtual {v2}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v2

    .line 36
    invoke-virtual {v2}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v2

    const-string v6, "Error writing entry to local database"

    invoke-virtual {v2, v6, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    move/from16 v2, p2

    iput-boolean v2, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    if-eqz v11, :cond_8

    .line 37
    invoke-interface {v11}, Landroid/database/Cursor;->close()V

    :cond_8
    if-eqz v10, :cond_b

    goto :goto_9

    :catch_b
    move/from16 v17, v2

    move-object v10, v5

    move-object v11, v10

    :catch_c
    :goto_8
    int-to-long v12, v8

    .line 39
    :try_start_7
    invoke-static {v12, v13}, Landroid/os/SystemClock;->sleep(J)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    add-int/lit8 v8, v8, 0x14

    if-eqz v11, :cond_9

    .line 37
    invoke-interface {v11}, Landroid/database/Cursor;->close()V

    :cond_9
    if-eqz v10, :cond_b

    .line 38
    :goto_9
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    goto :goto_b

    :catch_d
    move-exception v0

    move/from16 v17, v2

    move-object v10, v5

    move-object v11, v10

    .line 43
    :goto_a
    :try_start_8
    iget-object v2, v1, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 40
    invoke-virtual {v2}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v2

    .line 41
    invoke-virtual {v2}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v2

    const-string v6, "Error writing entry; local database full"

    invoke-virtual {v2, v6, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    const/4 v2, 0x1

    iput-boolean v2, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    if-eqz v11, :cond_a

    .line 37
    invoke-interface {v11}, Landroid/database/Cursor;->close()V

    :cond_a
    if-eqz v10, :cond_b

    goto :goto_9

    :cond_b
    :goto_b
    add-int/lit8 v7, v7, 0x1

    move/from16 v2, v17

    const/4 v6, 0x5

    goto/16 :goto_1

    :catchall_2
    move-exception v0

    move-object v5, v11

    :goto_c
    if-eqz v5, :cond_c

    invoke-interface {v5}, Landroid/database/Cursor;->close()V

    :cond_c
    if-eqz v10, :cond_d

    .line 38
    invoke-virtual {v10}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    .line 44
    :cond_d
    throw v0

    :cond_e
    move/from16 v17, v2

    .line 38
    iget-object v0, v1, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 42
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 43
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zzj()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v2, "Failed to write entry to local database"

    invoke-virtual {v0, v2}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    return v17
.end method


# virtual methods
.method protected final zzf()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method final zzh()Landroid/database/sqlite/SQLiteDatabase;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/database/sqlite/SQLiteException;
        }
    .end annotation

    .line 1
    iget-boolean v0, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzb:Lcom/google/android/gms/measurement/internal/zzgt;

    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzgt;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    return-object v1

    :cond_1
    return-object v0
.end method

.method public final zzi(I)Ljava/util/List;
    .locals 27

    move-object/from16 v1, p0

    .line 1
    const-string v2, "entry"

    const-string v3, "type"

    const-string v4, "Error reading entries from local database"

    const-string v5, "rowid"

    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzjq;->zzg()V

    iget-boolean v0, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    const/4 v6, 0x0

    if-eqz v0, :cond_0

    return-object v6

    :cond_0
    new-instance v7, Ljava/util/ArrayList;

    .line 2
    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 3
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzl()Z

    move-result v0

    if-eqz v0, :cond_1c

    const/4 v8, 0x5

    const/4 v9, 0x0

    move v11, v8

    move v10, v9

    :goto_0
    if-ge v10, v8, :cond_1b

    const/4 v12, 0x1

    .line 4
    :try_start_0
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzh()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v13
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_0 .. :try_end_0} :catch_23
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_0 .. :try_end_0} :catch_20
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_1f
    .catchall {:try_start_0 .. :try_end_0} :catchall_e

    if-nez v13, :cond_1

    :try_start_1
    iput-boolean v12, v1, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    return-object v6

    .line 5
    :cond_1
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v0, "3"
    :try_end_1
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_1 .. :try_end_1} :catch_1e
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_1 .. :try_end_1} :catch_1d
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_1 .. :try_end_1} :catch_1c
    .catchall {:try_start_1 .. :try_end_1} :catchall_d

    :try_start_2
    const-string v14, "messages"

    filled-new-array {v5}, [Ljava/lang/String;

    move-result-object v15

    const-string v16, "type=?"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v17

    const-string v20, "rowid desc"

    const-string v21, "1"

    const/16 v18, 0x0

    const/16 v19, 0x0

    .line 6
    invoke-virtual/range {v13 .. v21}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v14
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_b

    .line 7
    :try_start_3
    invoke-interface {v14}, Landroid/database/Cursor;->moveToFirst()Z

    move-result v0

    const-wide/16 v22, -0x1

    if-eqz v0, :cond_2

    .line 9
    invoke-interface {v14, v9}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v15
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_a

    if-eqz v14, :cond_4

    .line 8
    :try_start_4
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    goto :goto_1

    :cond_2
    if-eqz v14, :cond_3

    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    :cond_3
    move-wide/from16 v15, v22

    :cond_4
    :goto_1
    cmp-long v0, v15, v22

    if-eqz v0, :cond_5

    const-string v0, "rowid<?"

    new-array v14, v12, [Ljava/lang/String;

    .line 11
    invoke-static/range {v15 .. v16}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v15

    aput-object v15, v14, v9

    move-object/from16 v16, v0

    move-object/from16 v17, v14

    goto :goto_2

    :cond_5
    move-object/from16 v16, v6

    move-object/from16 v17, v16

    :goto_2
    filled-new-array {v5, v3, v2}, [Ljava/lang/String;

    move-result-object v0

    iget-object v14, v1, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 12
    invoke-virtual {v14}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    move-result-object v15

    move/from16 p1, v12

    .line 13
    sget-object v12, Lcom/google/android/gms/measurement/internal/zzgi;->zzbl:Lcom/google/android/gms/measurement/internal/zzgg;

    .line 14
    invoke-virtual {v15, v6, v12}, Lcom/google/android/gms/measurement/internal/zzam;->zzx(Ljava/lang/String;Lcom/google/android/gms/measurement/internal/zzgg;)Z

    move-result v12

    const/4 v15, 0x4

    const/16 v25, 0x3

    const/4 v6, 0x2

    if-eqz v12, :cond_6

    new-array v0, v8, [Ljava/lang/String;

    aput-object v5, v0, v9

    aput-object v3, v0, p1

    aput-object v2, v0, v6

    const-string v12, "app_version"

    aput-object v12, v0, v25

    const-string v12, "app_version_int"

    aput-object v12, v0, v15

    :cond_6
    move-object v12, v14

    const-string v14, "messages"

    const-string v20, "rowid asc"

    const/16 v18, 0x64

    .line 15
    invoke-static/range {v18 .. v18}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v21

    const/16 v18, 0x0

    const/16 v19, 0x0

    move/from16 v26, v15

    move-object v15, v0

    move/from16 v0, v26

    .line 16
    invoke-virtual/range {v13 .. v21}, Landroid/database/sqlite/SQLiteDatabase;->query(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v14
    :try_end_4
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_4 .. :try_end_4} :catch_1e
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_4 .. :try_end_4} :catch_1d
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_4 .. :try_end_4} :catch_1c
    .catchall {:try_start_4 .. :try_end_4} :catchall_d

    .line 17
    :goto_3
    :try_start_5
    invoke-interface {v14}, Landroid/database/Cursor;->moveToNext()Z

    move-result v15

    if-eqz v15, :cond_10

    .line 18
    invoke-interface {v14, v9}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v22

    move/from16 v15, p1

    .line 19
    invoke-interface {v14, v15}, Landroid/database/Cursor;->getInt(I)I

    move-result v8

    .line 20
    invoke-interface {v14, v6}, Landroid/database/Cursor;->getBlob(I)[B

    move-result-object v15

    .line 21
    invoke-virtual {v12}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    move-result-object v6
    :try_end_5
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_5 .. :try_end_5} :catch_19
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_5 .. :try_end_5} :catch_18
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_5 .. :try_end_5} :catch_17
    .catchall {:try_start_5 .. :try_end_5} :catchall_9

    :try_start_6
    sget-object v9, Lcom/google/android/gms/measurement/internal/zzgi;->zzbl:Lcom/google/android/gms/measurement/internal/zzgg;
    :try_end_6
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_6 .. :try_end_6} :catch_14
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_6 .. :try_end_6} :catch_11
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_6 .. :try_end_6} :catch_10
    .catchall {:try_start_6 .. :try_end_6} :catchall_9

    move-object/from16 v19, v2

    const/4 v2, 0x0

    .line 22
    :try_start_7
    invoke-virtual {v6, v2, v9}, Lcom/google/android/gms/measurement/internal/zzam;->zzx(Ljava/lang/String;Lcom/google/android/gms/measurement/internal/zzgg;)Z

    move-result v6

    if-eqz v6, :cond_7

    move/from16 v2, v25

    .line 23
    invoke-interface {v14, v2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v6

    .line 24
    invoke-interface {v14, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v20
    :try_end_7
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_7 .. :try_end_7} :catch_f
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_7 .. :try_end_7} :catch_e
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_7 .. :try_end_7} :catch_d
    .catchall {:try_start_7 .. :try_end_7} :catchall_9

    move-object v2, v6

    goto :goto_4

    :cond_7
    const-wide/16 v20, 0x0

    const/4 v2, 0x0

    :goto_4
    move-wide/from16 v0, v20

    if-nez v8, :cond_a

    .line 25
    :try_start_8
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v8
    :try_end_8
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_8 .. :try_end_8} :catch_3
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_8 .. :try_end_8} :catch_2
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_8 .. :try_end_8} :catch_1
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    .line 26
    :try_start_9
    array-length v9, v15

    const/4 v6, 0x0

    invoke-virtual {v8, v15, v6, v9}, Landroid/os/Parcel;->unmarshall([BII)V

    .line 27
    invoke-virtual {v8, v6}, Landroid/os/Parcel;->setDataPosition(I)V

    .line 28
    sget-object v6, Lcom/google/android/gms/measurement/internal/zzbh;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v6, v8}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/google/android/gms/measurement/internal/zzbh;
    :try_end_9
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_9 .. :try_end_9} :catch_0
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    .line 31
    :try_start_a
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    if-eqz v6, :cond_8

    new-instance v8, Lcom/google/android/gms/measurement/internal/zzgu;

    invoke-direct {v8, v6, v2, v0, v1}, Lcom/google/android/gms/measurement/internal/zzgu;-><init>(Lcom/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable;Ljava/lang/String;J)V

    .line 32
    invoke-interface {v7, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_a
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_a .. :try_end_a} :catch_3
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_a .. :try_end_a} :catch_2
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_a .. :try_end_a} :catch_1
    .catchall {:try_start_a .. :try_end_a} :catchall_2

    :cond_8
    const/4 v2, 0x3

    move-object/from16 v6, p0

    move-object/from16 v21, v3

    goto :goto_6

    :catchall_0
    move-exception v0

    move-object/from16 v6, p0

    goto :goto_7

    :catch_0
    move-object/from16 v6, p0

    .line 10
    :try_start_b
    iget-object v0, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 29
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 30
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Failed to load event from local database"

    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_1

    .line 31
    :try_start_c
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    move-object/from16 v21, v3

    :cond_9
    :goto_5
    const/4 v2, 0x3

    :goto_6
    const/4 v3, 0x0

    goto/16 :goto_e

    :catchall_1
    move-exception v0

    :goto_7
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    .line 64
    throw v0

    :catchall_2
    move-exception v0

    move-object/from16 v6, p0

    goto/16 :goto_1e

    :catch_1
    move-exception v0

    move-object/from16 v6, p0

    goto/16 :goto_f

    :catch_2
    move-object/from16 v6, p0

    goto/16 :goto_11

    :catch_3
    move-exception v0

    move-object/from16 v6, p0

    goto/16 :goto_12

    :cond_a
    const/4 v9, 0x1

    move-object/from16 v6, p0

    if-ne v8, v9, :cond_b

    .line 33
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v8
    :try_end_c
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_c .. :try_end_c} :catch_7
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_c .. :try_end_c} :catch_12
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_c .. :try_end_c} :catch_6
    .catchall {:try_start_c .. :try_end_c} :catchall_8

    .line 34
    :try_start_d
    array-length v9, v15
    :try_end_d
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_d .. :try_end_d} :catch_4
    .catchall {:try_start_d .. :try_end_d} :catchall_4

    move-object/from16 v21, v3

    const/4 v3, 0x0

    :try_start_e
    invoke-virtual {v8, v15, v3, v9}, Landroid/os/Parcel;->unmarshall([BII)V

    .line 35
    invoke-virtual {v8, v3}, Landroid/os/Parcel;->setDataPosition(I)V

    .line 36
    sget-object v3, Lcom/google/android/gms/measurement/internal/zzqb;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v3, v8}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/google/android/gms/measurement/internal/zzqb;
    :try_end_e
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_e .. :try_end_e} :catch_5
    .catchall {:try_start_e .. :try_end_e} :catchall_3

    .line 39
    :try_start_f
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V
    :try_end_f
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_f .. :try_end_f} :catch_a
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_f .. :try_end_f} :catch_13
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_f .. :try_end_f} :catch_9
    .catchall {:try_start_f .. :try_end_f} :catchall_8

    goto :goto_8

    :catchall_3
    move-exception v0

    goto :goto_9

    :catchall_4
    move-exception v0

    move-object/from16 v21, v3

    goto :goto_9

    :catch_4
    move-object/from16 v21, v3

    .line 64
    :catch_5
    :try_start_10
    iget-object v3, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 37
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v3

    .line 38
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v3

    const-string v9, "Failed to load user property from local database"

    invoke-virtual {v3, v9}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V
    :try_end_10
    .catchall {:try_start_10 .. :try_end_10} :catchall_3

    .line 39
    :try_start_11
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    const/4 v3, 0x0

    :goto_8
    if-eqz v3, :cond_9

    new-instance v8, Lcom/google/android/gms/measurement/internal/zzgu;

    invoke-direct {v8, v3, v2, v0, v1}, Lcom/google/android/gms/measurement/internal/zzgu;-><init>(Lcom/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable;Ljava/lang/String;J)V

    .line 40
    invoke-interface {v7, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_5

    .line 39
    :goto_9
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    .line 65
    throw v0

    :catch_6
    move-exception v0

    goto/16 :goto_f

    :catch_7
    move-exception v0

    goto/16 :goto_12

    :cond_b
    move-object/from16 v21, v3

    const/4 v3, 0x2

    if-ne v8, v3, :cond_c

    .line 41
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v8
    :try_end_11
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_11 .. :try_end_11} :catch_a
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_11 .. :try_end_11} :catch_13
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_11 .. :try_end_11} :catch_9
    .catchall {:try_start_11 .. :try_end_11} :catchall_8

    .line 42
    :try_start_12
    array-length v9, v15

    const/4 v3, 0x0

    invoke-virtual {v8, v15, v3, v9}, Landroid/os/Parcel;->unmarshall([BII)V

    .line 43
    invoke-virtual {v8, v3}, Landroid/os/Parcel;->setDataPosition(I)V

    .line 44
    sget-object v3, Lcom/google/android/gms/measurement/internal/zzai;->CREATOR:Landroid/os/Parcelable$Creator;

    .line 45
    invoke-interface {v3, v8}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/google/android/gms/measurement/internal/zzai;
    :try_end_12
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_12 .. :try_end_12} :catch_8
    .catchall {:try_start_12 .. :try_end_12} :catchall_5

    .line 49
    :try_start_13
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V
    :try_end_13
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_13 .. :try_end_13} :catch_a
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_13 .. :try_end_13} :catch_13
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_13 .. :try_end_13} :catch_9
    .catchall {:try_start_13 .. :try_end_13} :catchall_8

    goto :goto_a

    :catchall_5
    move-exception v0

    goto :goto_b

    .line 65
    :catch_8
    :try_start_14
    iget-object v3, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 46
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v3

    .line 47
    invoke-virtual {v3}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v3

    const-string v9, "Failed to load conditional user property from local database"

    .line 48
    invoke-virtual {v3, v9}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V
    :try_end_14
    .catchall {:try_start_14 .. :try_end_14} :catchall_5

    .line 49
    :try_start_15
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    const/4 v3, 0x0

    :goto_a
    if-eqz v3, :cond_9

    new-instance v8, Lcom/google/android/gms/measurement/internal/zzgu;

    invoke-direct {v8, v3, v2, v0, v1}, Lcom/google/android/gms/measurement/internal/zzgu;-><init>(Lcom/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable;Ljava/lang/String;J)V

    .line 50
    invoke-interface {v7, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 49
    :goto_b
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    .line 66
    throw v0

    :catch_9
    move-exception v0

    goto/16 :goto_10

    :catch_a
    move-exception v0

    goto/16 :goto_13

    :cond_c
    const/4 v3, 0x4

    if-ne v8, v3, :cond_e

    .line 51
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v8
    :try_end_15
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_15 .. :try_end_15} :catch_a
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_15 .. :try_end_15} :catch_13
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_15 .. :try_end_15} :catch_9
    .catchall {:try_start_15 .. :try_end_15} :catchall_8

    .line 52
    :try_start_16
    array-length v9, v15
    :try_end_16
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_16 .. :try_end_16} :catch_b
    .catchall {:try_start_16 .. :try_end_16} :catchall_7

    const/4 v3, 0x0

    :try_start_17
    invoke-virtual {v8, v15, v3, v9}, Landroid/os/Parcel;->unmarshall([BII)V

    .line 53
    invoke-virtual {v8, v3}, Landroid/os/Parcel;->setDataPosition(I)V

    .line 54
    sget-object v9, Lcom/google/android/gms/measurement/internal/zzbf;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v9, v8}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/google/android/gms/measurement/internal/zzbf;
    :try_end_17
    .catch Lcom/google/android/gms/common/internal/safeparcel/SafeParcelReader$ParseException; {:try_start_17 .. :try_end_17} :catch_c
    .catchall {:try_start_17 .. :try_end_17} :catchall_6

    .line 58
    :try_start_18
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V
    :try_end_18
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_18 .. :try_end_18} :catch_16
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_18 .. :try_end_18} :catch_22
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_18 .. :try_end_18} :catch_15
    .catchall {:try_start_18 .. :try_end_18} :catchall_8

    goto :goto_c

    :catchall_6
    move-exception v0

    goto :goto_d

    :catchall_7
    move-exception v0

    const/4 v3, 0x0

    goto :goto_d

    :catch_b
    const/4 v3, 0x0

    .line 66
    :catch_c
    :try_start_19
    iget-object v9, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 55
    invoke-virtual {v9}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v9

    .line 56
    invoke-virtual {v9}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v9

    const-string v15, "Failed to load default event parameters from local database"

    .line 57
    invoke-virtual {v9, v15}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V
    :try_end_19
    .catchall {:try_start_19 .. :try_end_19} :catchall_6

    .line 58
    :try_start_1a
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    const/4 v9, 0x0

    :goto_c
    if-eqz v9, :cond_d

    new-instance v8, Lcom/google/android/gms/measurement/internal/zzgu;

    invoke-direct {v8, v9, v2, v0, v1}, Lcom/google/android/gms/measurement/internal/zzgu;-><init>(Lcom/google/android/gms/common/internal/safeparcel/AbstractSafeParcelable;Ljava/lang/String;J)V

    .line 59
    invoke-interface {v7, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_d
    const/4 v2, 0x3

    goto :goto_e

    .line 58
    :goto_d
    invoke-virtual {v8}, Landroid/os/Parcel;->recycle()V

    .line 67
    throw v0

    :cond_e
    const/4 v2, 0x3

    const/4 v3, 0x0

    if-ne v8, v2, :cond_f

    .line 59
    iget-object v0, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 62
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 63
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zzk()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Skipping app launch break"

    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    goto :goto_e

    :cond_f
    iget-object v0, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 60
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 61
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Unknown record type in local database"

    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    :goto_e
    move/from16 v25, v2

    move v9, v3

    move-object v1, v6

    move-object/from16 v2, v19

    move-object/from16 v3, v21

    const/16 p1, 0x1

    const/4 v0, 0x4

    const/4 v6, 0x2

    const/4 v8, 0x5

    goto/16 :goto_3

    :catch_d
    move-exception v0

    move-object v6, v1

    goto :goto_f

    :catch_e
    move-object v6, v1

    goto :goto_11

    :catch_f
    move-exception v0

    move-object v6, v1

    goto :goto_12

    :catch_10
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    :goto_f
    move-object/from16 v21, v3

    :goto_10
    const/4 v3, 0x0

    goto/16 :goto_17

    :catch_11
    move-object v6, v1

    move-object/from16 v19, v2

    :catch_12
    :goto_11
    move-object/from16 v21, v3

    :catch_13
    const/4 v3, 0x0

    goto/16 :goto_19

    :catch_14
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    :goto_12
    move-object/from16 v21, v3

    :goto_13
    const/4 v3, 0x0

    goto/16 :goto_1c

    :cond_10
    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    const-string v0, "messages"

    const-string v1, "rowid <= ?"

    .line 68
    invoke-static/range {v22 .. v23}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v2

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    .line 69
    invoke-virtual {v13, v0, v1, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0

    .line 70
    invoke-interface {v7}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_11

    iget-object v0, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 71
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 72
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Fewer entries removed from local database than expected"

    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    .line 73
    :cond_11
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V

    .line 74
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_1a
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_1a .. :try_end_1a} :catch_16
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_1a .. :try_end_1a} :catch_22
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_1a .. :try_end_1a} :catch_15
    .catchall {:try_start_1a .. :try_end_1a} :catchall_8

    if-eqz v14, :cond_12

    .line 79
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    .line 80
    :cond_12
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    return-object v7

    :catchall_8
    move-exception v0

    goto/16 :goto_1e

    :catch_15
    move-exception v0

    goto/16 :goto_17

    :catch_16
    move-exception v0

    goto/16 :goto_1c

    :catchall_9
    move-exception v0

    move-object v6, v1

    goto/16 :goto_1e

    :catch_17
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto/16 :goto_17

    :catch_18
    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto/16 :goto_19

    :catch_19
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto/16 :goto_1c

    :catchall_a
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto :goto_14

    :catchall_b
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    const/4 v14, 0x0

    :goto_14
    if-eqz v14, :cond_13

    .line 8
    :try_start_1b
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    .line 10
    :cond_13
    throw v0
    :try_end_1b
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_1b .. :try_end_1b} :catch_1b
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_1b .. :try_end_1b} :catch_21
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_1b .. :try_end_1b} :catch_1a
    .catchall {:try_start_1b .. :try_end_1b} :catchall_c

    :catchall_c
    move-exception v0

    goto :goto_15

    :catch_1a
    move-exception v0

    goto :goto_16

    :catch_1b
    move-exception v0

    goto/16 :goto_1b

    :catchall_d
    move-exception v0

    move-object v6, v1

    goto :goto_15

    :catch_1c
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto :goto_16

    :catch_1d
    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto :goto_18

    :catch_1e
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    goto :goto_1b

    :catchall_e
    move-exception v0

    move-object v6, v1

    const/4 v13, 0x0

    :goto_15
    const/4 v14, 0x0

    goto/16 :goto_1e

    :catch_1f
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    const/4 v13, 0x0

    :goto_16
    const/4 v14, 0x0

    :goto_17
    if-eqz v13, :cond_14

    .line 75
    :try_start_1c
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->inTransaction()Z

    move-result v1

    if-eqz v1, :cond_14

    .line 76
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :cond_14
    iget-object v1, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 77
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v1

    .line 78
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v1

    invoke-virtual {v1, v4, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    const/4 v15, 0x1

    iput-boolean v15, v6, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z
    :try_end_1c
    .catchall {:try_start_1c .. :try_end_1c} :catchall_8

    if-eqz v14, :cond_15

    .line 79
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    :cond_15
    if-eqz v13, :cond_18

    goto :goto_1a

    :catch_20
    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    const/4 v13, 0x0

    :catch_21
    :goto_18
    const/4 v14, 0x0

    :catch_22
    :goto_19
    int-to-long v0, v11

    .line 81
    :try_start_1d
    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V
    :try_end_1d
    .catchall {:try_start_1d .. :try_end_1d} :catchall_8

    add-int/lit8 v11, v11, 0x14

    if-eqz v14, :cond_16

    .line 79
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    :cond_16
    if-eqz v13, :cond_18

    .line 80
    :goto_1a
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    goto :goto_1d

    :catch_23
    move-exception v0

    move-object v6, v1

    move-object/from16 v19, v2

    move-object/from16 v21, v3

    move v3, v9

    const/4 v13, 0x0

    :goto_1b
    const/4 v14, 0x0

    .line 85
    :goto_1c
    :try_start_1e
    iget-object v1, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 82
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v1

    .line 83
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v1

    invoke-virtual {v1, v4, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    const/4 v15, 0x1

    iput-boolean v15, v6, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z
    :try_end_1e
    .catchall {:try_start_1e .. :try_end_1e} :catchall_8

    if-eqz v14, :cond_17

    .line 79
    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    :cond_17
    if-eqz v13, :cond_18

    goto :goto_1a

    :cond_18
    :goto_1d
    add-int/lit8 v10, v10, 0x1

    move v9, v3

    move-object v1, v6

    move-object/from16 v2, v19

    move-object/from16 v3, v21

    const/4 v6, 0x0

    const/4 v8, 0x5

    goto/16 :goto_0

    :goto_1e
    if-eqz v14, :cond_19

    invoke-interface {v14}, Landroid/database/Cursor;->close()V

    :cond_19
    if-eqz v13, :cond_1a

    .line 80
    invoke-virtual {v13}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    .line 86
    :cond_1a
    throw v0

    :cond_1b
    move-object v6, v1

    .line 8
    iget-object v0, v6, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 84
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 85
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zzk()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Failed to read events from database in reasonable time"

    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    const/16 v24, 0x0

    return-object v24

    :cond_1c
    move-object v6, v1

    return-object v7
.end method

.method public final zzj()V
    .locals 3

    .line 1
    invoke-virtual {p0}, Lcom/google/android/gms/measurement/internal/zzjq;->zzg()V

    .line 2
    :try_start_0
    invoke-virtual {p0}, Lcom/google/android/gms/measurement/internal/zzgv;->zzh()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "messages"

    const/4 v2, 0x0

    .line 3
    invoke-virtual {v0, v1, v2, v2}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    iget-object v1, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 4
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v1

    .line 5
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzj()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v1

    const-string v2, "Reset local analytics data. records"

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    iget-object v1, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 6
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v1

    .line 7
    invoke-virtual {v1}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v1

    const-string v2, "Error resetting local analytics data. error"

    invoke-virtual {v1, v2, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method public final zzk()Z
    .locals 2

    const/4 v0, 0x0

    .line 1
    new-array v0, v0, [B

    const/4 v1, 0x3

    invoke-direct {p0, v1, v0}, Lcom/google/android/gms/measurement/internal/zzgv;->zzs(I[B)Z

    move-result v0

    return v0
.end method

.method final zzl()Z
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaT()Landroid/content/Context;

    move-result-object v1

    .line 2
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzf()Lcom/google/android/gms/measurement/internal/zzam;

    const-string v0, "google_app_measurement_local.db"

    .line 3
    invoke-virtual {v1, v0}, Landroid/content/Context;->getDatabasePath(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    return v0
.end method

.method public final zzm()Z
    .locals 10

    .line 1
    const-string v0, "Error deleting app launch break from local database"

    invoke-virtual {p0}, Lcom/google/android/gms/measurement/internal/zzjq;->zzg()V

    iget-boolean v1, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    goto/16 :goto_6

    .line 2
    :cond_0
    invoke-virtual {p0}, Lcom/google/android/gms/measurement/internal/zzgv;->zzl()Z

    move-result v1

    if-eqz v1, :cond_6

    const/4 v1, 0x5

    move v4, v1

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_5

    const/4 v5, 0x0

    const/4 v6, 0x1

    .line 3
    :try_start_0
    invoke-virtual {p0}, Lcom/google/android/gms/measurement/internal/zzgv;->zzh()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v5

    if-nez v5, :cond_1

    iput-boolean v6, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    goto/16 :goto_6

    .line 4
    :cond_1
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->beginTransaction()V

    const-string v7, "messages"

    const-string v8, "type == ?"

    const/4 v9, 0x3

    .line 5
    invoke-static {v9}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v9

    filled-new-array {v9}, [Ljava/lang/String;

    move-result-object v9

    .line 6
    invoke-virtual {v5, v7, v8, v9}, Landroid/database/sqlite/SQLiteDatabase;->delete(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I

    .line 7
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->setTransactionSuccessful()V

    .line 8
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V
    :try_end_0
    .catch Landroid/database/sqlite/SQLiteFullException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Landroid/database/sqlite/SQLiteDatabaseLockedException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Landroid/database/sqlite/SQLiteException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 13
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    return v6

    :catchall_0
    move-exception v0

    goto :goto_5

    :catch_0
    move-exception v7

    goto :goto_1

    :catch_1
    move-exception v7

    goto :goto_3

    :goto_1
    if-eqz v5, :cond_2

    .line 9
    :try_start_1
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->inTransaction()Z

    move-result v8

    if-eqz v8, :cond_2

    .line 10
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->endTransaction()V

    :cond_2
    iget-object v8, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 11
    invoke-virtual {v8}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v8

    .line 12
    invoke-virtual {v8}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v8

    invoke-virtual {v8, v0, v7}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    iput-boolean v6, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z

    if-eqz v5, :cond_3

    goto :goto_2

    :catch_2
    int-to-long v6, v4

    .line 14
    invoke-static {v6, v7}, Landroid/os/SystemClock;->sleep(J)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v4, v4, 0x14

    if-eqz v5, :cond_3

    .line 13
    :goto_2
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    goto :goto_4

    .line 19
    :goto_3
    :try_start_2
    iget-object v8, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 15
    invoke-virtual {v8}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v8

    .line 16
    invoke-virtual {v8}, Lcom/google/android/gms/measurement/internal/zzhe;->zze()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v8

    invoke-virtual {v8, v0, v7}, Lcom/google/android/gms/measurement/internal/zzhc;->zzb(Ljava/lang/String;Ljava/lang/Object;)V

    iput-boolean v6, p0, Lcom/google/android/gms/measurement/internal/zzgv;->zzc:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v5, :cond_3

    goto :goto_2

    :cond_3
    :goto_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :goto_5
    if-eqz v5, :cond_4

    .line 13
    invoke-virtual {v5}, Landroid/database/sqlite/SQLiteDatabase;->close()V

    .line 20
    :cond_4
    throw v0

    .line 13
    :cond_5
    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 17
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object v0

    .line 18
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzhe;->zzk()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object v0

    const-string v1, "Error deleting app launch break from local database in reasonable time"

    .line 19
    invoke-virtual {v0, v1}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    :cond_6
    :goto_6
    return v2
.end method

.method public final zzn(Lcom/google/android/gms/measurement/internal/zzai;)Z
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzw()Lcom/google/android/gms/measurement/internal/zzqf;

    move-result-object v1

    .line 2
    invoke-virtual {v1, p1}, Lcom/google/android/gms/measurement/internal/zzqf;->zzay(Landroid/os/Parcelable;)[B

    move-result-object p1

    .line 3
    array-length v1, p1

    const/high16 v2, 0x20000

    if-le v1, v2, :cond_0

    .line 4
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object p1

    .line 5
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzh()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object p1

    const-string v0, "Conditional user property too long for local database. Sending directly to service"

    .line 6
    invoke-virtual {p1, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 v0, 0x2

    .line 7
    invoke-direct {p0, v0, p1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzs(I[B)Z

    move-result p1

    return p1
.end method

.method public final zzo(Lcom/google/android/gms/measurement/internal/zzbf;)Z
    .locals 4

    .line 1
    iget-object v0, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzw()Lcom/google/android/gms/measurement/internal/zzqf;

    move-result-object v1

    .line 2
    invoke-virtual {v1, p1}, Lcom/google/android/gms/measurement/internal/zzqf;->zzay(Landroid/os/Parcelable;)[B

    move-result-object p1

    const/4 v1, 0x0

    if-nez p1, :cond_0

    .line 3
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object p1

    .line 4
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzh()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object p1

    const-string v0, "Null default event parameters; not writing to database"

    invoke-virtual {p1, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    return v1

    :cond_0
    array-length v2, p1

    const/high16 v3, 0x20000

    if-le v2, v3, :cond_1

    .line 5
    invoke-virtual {v0}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object p1

    .line 6
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzh()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object p1

    const-string v0, "Default event parameters too long for local database. Sending directly to service"

    .line 7
    invoke-virtual {p1, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    return v1

    :cond_1
    const/4 v0, 0x4

    .line 8
    invoke-direct {p0, v0, p1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzs(I[B)Z

    move-result p1

    return p1
.end method

.method public final zzp(Lcom/google/android/gms/measurement/internal/zzbh;)Z
    .locals 3

    .line 1
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    const/4 v1, 0x0

    .line 2
    invoke-static {p1, v0, v1}, Lcom/google/android/gms/measurement/internal/zzbi;->zza(Lcom/google/android/gms/measurement/internal/zzbh;Landroid/os/Parcel;I)V

    .line 3
    invoke-virtual {v0}, Landroid/os/Parcel;->marshall()[B

    move-result-object p1

    .line 4
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 5
    array-length v0, p1

    const/high16 v2, 0x20000

    if-le v0, v2, :cond_0

    iget-object p1, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 6
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object p1

    .line 7
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzh()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object p1

    const-string v0, "Event is too long for local database. Sending event directly to service"

    .line 8
    invoke-virtual {p1, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    return v1

    .line 9
    :cond_0
    invoke-direct {p0, v1, p1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzs(I[B)Z

    move-result p1

    return p1
.end method

.method public final zzq(Lcom/google/android/gms/measurement/internal/zzqb;)Z
    .locals 3

    .line 1
    invoke-static {}, Landroid/os/Parcel;->obtain()Landroid/os/Parcel;

    move-result-object v0

    const/4 v1, 0x0

    .line 2
    invoke-static {p1, v0, v1}, Lcom/google/android/gms/measurement/internal/zzqc;->zza(Lcom/google/android/gms/measurement/internal/zzqb;Landroid/os/Parcel;I)V

    .line 3
    invoke-virtual {v0}, Landroid/os/Parcel;->marshall()[B

    move-result-object p1

    .line 4
    invoke-virtual {v0}, Landroid/os/Parcel;->recycle()V

    .line 5
    array-length v0, p1

    const/high16 v2, 0x20000

    if-le v0, v2, :cond_0

    iget-object p1, p0, Lcom/google/android/gms/measurement/internal/zzjq;->zzu:Lcom/google/android/gms/measurement/internal/zzio;

    .line 6
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzio;->zzaW()Lcom/google/android/gms/measurement/internal/zzhe;

    move-result-object p1

    .line 7
    invoke-virtual {p1}, Lcom/google/android/gms/measurement/internal/zzhe;->zzh()Lcom/google/android/gms/measurement/internal/zzhc;

    move-result-object p1

    const-string v0, "User property too long for local database. Sending directly to service"

    .line 8
    invoke-virtual {p1, v0}, Lcom/google/android/gms/measurement/internal/zzhc;->zza(Ljava/lang/String;)V

    return v1

    :cond_0
    const/4 v0, 0x1

    .line 9
    invoke-direct {p0, v0, p1}, Lcom/google/android/gms/measurement/internal/zzgv;->zzs(I[B)Z

    move-result p1

    return p1
.end method
