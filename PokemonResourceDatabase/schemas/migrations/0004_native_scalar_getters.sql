-- V4 native scalar getter registry; do not replace original V2 bytes or V3 keys.
CREATE TABLE native_scalar_getters(
 release_id TEXT NOT NULL,dataset_id TEXT NOT NULL,domain TEXT NOT NULL CHECK(domain IN ('personal','waza')),
 field_index INTEGER NOT NULL CHECK(field_index>=0),
 selector INTEGER NOT NULL, vtable_slot INTEGER NOT NULL, getter_va INTEGER NOT NULL,
 width_bytes INTEGER NOT NULL CHECK(width_bytes IN (1,2,4)),
 transform TEXT NOT NULL CHECK(transform IN ('unsigned','nonzero_bool')),
 missing_default INTEGER NOT NULL, null_record_default INTEGER,
 semantic_label TEXT NOT NULL,
 semantic_status TEXT NOT NULL CHECK(semantic_status IN ('identity_verified','consumer_supported','sample_supported','unresolved')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,dataset_id,field_index),
 UNIQUE(release_id,dataset_id,vtable_slot),
 FOREIGN KEY(release_id,dataset_id) REFERENCES data_datasets(release_id,dataset_id),
 FOREIGN KEY(release_id,selector) REFERENCES native_personal_selectors(release_id,selector)
) STRICT;
CREATE VIEW v_native_scalar_values AS
WITH source AS (
 SELECT g.*,p.record_index AS native_record_id,p.native_species,p.native_form,
 f.raw_hex,CASE WHEN f.field_index IS NULL THEN 0 ELSE 1 END AS present
 FROM native_scalar_getters g JOIN native_personal_records p USING(release_id,dataset_id)
 LEFT JOIN native_personal_fields f ON f.release_id=p.release_id AND f.dataset_id=p.dataset_id
 AND f.record_index=p.record_index AND f.field_index=g.field_index
 WHERE g.domain='personal'
 UNION ALL
 SELECT g.*,m.move_id AS native_record_id,NULL,NULL,
 CASE WHEN f.present=1 THEN f.raw_hex ELSE NULL END,
 COALESCE(f.present,0)
 FROM native_scalar_getters g JOIN native_move_records m USING(release_id,dataset_id)
 LEFT JOIN native_move_fields f ON f.release_id=m.release_id AND f.dataset_id=m.dataset_id
 AND f.move_id=m.move_id AND f.field_index=g.field_index
 WHERE g.domain='waza'
), decoded AS (
 SELECT *,CASE WHEN present=0 THEN NULL
 WHEN raw_hex IS NULL OR length(raw_hex)<width_bytes*2
 OR lower(substr(raw_hex,1,width_bytes*2)) GLOB '*[^0-9a-f]*' THEN NULL
 WHEN width_bytes=1 THEN (((instr('0123456789abcdef',lower(substr(raw_hex,1,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,2,1)))-1))*1)
 WHEN width_bytes=2 THEN (((instr('0123456789abcdef',lower(substr(raw_hex,1,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,2,1)))-1))*1+((instr('0123456789abcdef',lower(substr(raw_hex,3,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,4,1)))-1))*256)
 WHEN width_bytes=4 THEN (((instr('0123456789abcdef',lower(substr(raw_hex,1,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,2,1)))-1))*1+((instr('0123456789abcdef',lower(substr(raw_hex,3,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,4,1)))-1))*256+((instr('0123456789abcdef',lower(substr(raw_hex,5,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,6,1)))-1))*65536+((instr('0123456789abcdef',lower(substr(raw_hex,7,1)))-1)*16+(instr('0123456789abcdef',lower(substr(raw_hex,8,1)))-1))*16777216) END AS raw_value
 FROM source
)
SELECT release_id,dataset_id,domain,native_record_id,native_species,native_form,
 field_index,selector,semantic_label,semantic_status,present,raw_hex,raw_value,
 CASE WHEN present=0 THEN missing_default WHEN raw_value IS NULL THEN NULL
 WHEN transform='nonzero_bool' THEN (raw_value<>0) ELSE raw_value END AS native_value
FROM decoded;
CREATE VIEW v_native_personal_base_data AS
SELECT release_id,dataset_id,selector,native_record_id AS record_index,native_species,native_form,
 MAX(CASE WHEN field_index=2 THEN native_value END) AS flag2,
 MAX(CASE WHEN field_index=3 THEN native_value END) AS type1_raw,
 MAX(CASE WHEN field_index=4 THEN native_value END) AS type2_raw,
 MAX(CASE WHEN field_index=5 THEN native_value END) AS ability1_raw,
 MAX(CASE WHEN field_index=6 THEN native_value END) AS ability2_raw,
 MAX(CASE WHEN field_index=7 THEN native_value END) AS ability3_raw,
 MAX(CASE WHEN field_index=8 THEN native_value END) AS base_hp,
 MAX(CASE WHEN field_index=9 THEN native_value END) AS base_attack,
 MAX(CASE WHEN field_index=10 THEN native_value END) AS base_defense,
 MAX(CASE WHEN field_index=11 THEN native_value END) AS base_sp_attack,
 MAX(CASE WHEN field_index=12 THEN native_value END) AS base_sp_defense,
 MAX(CASE WHEN field_index=13 THEN native_value END) AS base_speed,
 MAX(CASE WHEN field_index=14 THEN native_value END) AS gender_ratio_raw,
 MAX(CASE WHEN field_index=15 THEN native_value END) AS growth_code_candidate,
 MAX(CASE WHEN field_index=16 THEN native_value END) AS field16_raw,
 MAX(CASE WHEN field_index=17 THEN native_value END) AS height_raw,
 MAX(CASE WHEN field_index=18 THEN native_value END) AS weight_raw,
 MAX(CASE WHEN field_index=19 THEN native_value END) AS hatch_cycles_candidate,
 MAX(CASE WHEN field_index=20 THEN native_value END) AS friendship_candidate
FROM v_native_scalar_values WHERE domain='personal'
GROUP BY release_id,dataset_id,selector,native_record_id,native_species,native_form;
CREATE VIEW v_native_waza_base_data AS
SELECT release_id,dataset_id,selector,native_record_id AS move_id,
 MAX(CASE WHEN field_index=0 THEN native_value END) AS native_move_id,
 MAX(CASE WHEN field_index=1 THEN native_value END) AS flag1,
 MAX(CASE WHEN field_index=2 THEN native_value END) AS type_raw,
 MAX(CASE WHEN field_index=3 THEN native_value END) AS field3_raw,
 MAX(CASE WHEN field_index=4 THEN native_value END) AS damage_class_raw,
 MAX(CASE WHEN field_index=5 THEN native_value END) AS power,
 MAX(CASE WHEN field_index=6 THEN native_value END) AS accuracy_raw,
 MAX(CASE WHEN field_index=6 THEN native_value=101 END) AS accuracy_code_101,
 MAX(CASE WHEN field_index=7 THEN native_value END) AS base_pp
FROM v_native_scalar_values WHERE domain='waza'
GROUP BY release_id,dataset_id,selector,native_record_id;
