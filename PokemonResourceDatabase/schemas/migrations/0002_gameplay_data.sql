-- V2: release-scoped data staging and verified item records. Keep unknown semantics raw.
CREATE TABLE data_datasets(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 dataset_id TEXT NOT NULL,
 module TEXT NOT NULL,
 native_scope TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('decoded','structural','semantic_partial')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,dataset_id)
) STRICT;
CREATE TABLE dataset_files(
 release_id TEXT NOT NULL, dataset_id TEXT NOT NULL, file_id TEXT NOT NULL,
 role TEXT NOT NULL,
 PRIMARY KEY(release_id,dataset_id,file_id),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id),
 FOREIGN KEY(release_id,file_id) REFERENCES source_files(release_id,file_id)
) STRICT;
CREATE TABLE native_text_tables(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,
 language_id TEXT NOT NULL REFERENCES languages(language_id),table_name TEXT NOT NULL,
 PRIMARY KEY(release_id,dataset_id),
 UNIQUE(release_id,language_id,table_name),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id)
) STRICT;
CREATE TABLE native_text_entries(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,row_index INTEGER NOT NULL CHECK(row_index>=0),
 label TEXT NOT NULL,hash_hex TEXT NOT NULL CHECK(length(hash_hex)=16),
 text TEXT NOT NULL,flags INTEGER NOT NULL,source_offset INTEGER NOT NULL,
 PRIMARY KEY(release_id,dataset_id,row_index),
 FOREIGN KEY(release_id,dataset_id) REFERENCES native_text_tables(release_id,dataset_id)
) STRICT;
CREATE INDEX text_label_lookup ON native_text_entries(release_id,label);
CREATE TABLE native_personal_fields(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,record_index INTEGER NOT NULL,
 field_index INTEGER NOT NULL,raw_hex TEXT NOT NULL,
 PRIMARY KEY(release_id,dataset_id,record_index,field_index),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id)
) STRICT;
CREATE TABLE native_move_records(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,move_id INTEGER NOT NULL,
 file_id TEXT NOT NULL,
 PRIMARY KEY(release_id,dataset_id,move_id),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id),
 FOREIGN KEY(release_id,file_id) REFERENCES source_files(release_id,file_id)
) STRICT;
CREATE TABLE native_move_fields(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,move_id INTEGER NOT NULL,
 field_index INTEGER NOT NULL,present INTEGER NOT NULL CHECK(present IN (0,1)),
 object_offset INTEGER NOT NULL,raw_hex TEXT,
 PRIMARY KEY(release_id,dataset_id,move_id,field_index),
 FOREIGN KEY(release_id,dataset_id,move_id) REFERENCES native_move_records(release_id,dataset_id,move_id)
) STRICT;
CREATE TABLE native_item_records(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,record_index INTEGER NOT NULL,
 source_offset INTEGER NOT NULL,raw_hex TEXT NOT NULL CHECK(length(raw_hex)=96),
 price INTEGER NOT NULL,price_watts INTEGER NOT NULL,price_alternate INTEGER NOT NULL,
 pouch_code INTEGER NOT NULL,effect_field INTEGER NOT NULL,can_use_raw INTEGER NOT NULL,sprite_signed INTEGER NOT NULL,
 PRIMARY KEY(release_id,dataset_id,record_index),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id)
) STRICT;
CREATE TABLE native_item_ids(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,item_id INTEGER NOT NULL,record_index INTEGER NOT NULL,
 PRIMARY KEY(release_id,dataset_id,item_id),
 FOREIGN KEY(release_id,dataset_id,record_index) REFERENCES native_item_records(release_id,dataset_id,record_index)
) STRICT;
CREATE TABLE native_item_hash_slots(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,slot INTEGER NOT NULL,hash_hex TEXT NOT NULL,
 index_raw INTEGER NOT NULL,reserved_raw INTEGER NOT NULL,
 PRIMARY KEY(release_id,dataset_id,slot),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id)
) STRICT;
CREATE TABLE native_growth_values(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,level_index INTEGER NOT NULL,experience INTEGER NOT NULL CHECK(experience>=0),
 PRIMARY KEY(release_id,dataset_id,level_index),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id)
) STRICT;
