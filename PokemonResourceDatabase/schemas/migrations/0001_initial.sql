-- PokemonResourceDatabase schema 1. SQLite >= 3.37 (STRICT).
-- Applied by tools/schema_manager.py; do not insert speculative canonical mappings.
CREATE TABLE games(
 game_id TEXT PRIMARY KEY,
 name TEXT NOT NULL
) STRICT;
CREATE TABLE platforms(
 platform_id TEXT PRIMARY KEY,
 name TEXT NOT NULL
) STRICT;
CREATE TABLE source_releases(
 release_id TEXT PRIMARY KEY,
 game_id TEXT NOT NULL REFERENCES games(game_id),
 platform_id TEXT NOT NULL REFERENCES platforms(platform_id),
 version TEXT NOT NULL,
 build_id TEXT NOT NULL DEFAULT '',
 UNIQUE(game_id,platform_id,version,build_id)
) STRICT;
CREATE TABLE languages(
 language_id TEXT PRIMARY KEY,
 name TEXT NOT NULL
) STRICT;
CREATE TABLE resource_types(
 type_id TEXT PRIMARY KEY
) STRICT;
CREATE TABLE image_roles(
 role_id TEXT PRIMARY KEY
) STRICT;
CREATE TABLE texture_formats(
 format_id TEXT PRIMARY KEY,
 description TEXT NOT NULL
) STRICT;
CREATE TABLE evidence(
 evidence_id TEXT PRIMARY KEY,
 release_id TEXT REFERENCES source_releases(release_id),
 uri TEXT NOT NULL,
 revision TEXT NOT NULL DEFAULT '',
 locator TEXT NOT NULL DEFAULT '',
 sha256 TEXT CHECK(sha256 IS NULL OR (length(sha256)=64 AND sha256 NOT GLOB '*[^0-9a-f]*')),
 note TEXT NOT NULL DEFAULT ''
) STRICT;

-- Canonical semantic layer: identifiers assigned by a reviewed registry.
CREATE TABLE pokemon_species(
 species_id INTEGER PRIMARY KEY CHECK(species_id BETWEEN 1 AND 65535)
) STRICT;
CREATE TABLE pokemon_species_names(
 species_id INTEGER NOT NULL REFERENCES pokemon_species(species_id),
 language_id TEXT NOT NULL REFERENCES languages(language_id),
 name TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(species_id,language_id)
) STRICT;
CREATE TABLE pokemon_forms(
 form_uid TEXT PRIMARY KEY,
 species_id INTEGER NOT NULL REFERENCES pokemon_species(species_id),
 form_slug TEXT NOT NULL,
 UNIQUE(species_id,form_slug)
) STRICT;
CREATE TABLE pokemon_form_names(
 form_uid TEXT NOT NULL REFERENCES pokemon_forms(form_uid),
 language_id TEXT NOT NULL REFERENCES languages(language_id),
 name TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(form_uid,language_id)
) STRICT;
CREATE TABLE genders(
 gender_id TEXT PRIMARY KEY
) STRICT;
CREATE TABLE color_states(
 color_id TEXT PRIMARY KEY
) STRICT;
CREATE TABLE variants(
 variant_id TEXT PRIMARY KEY
) STRICT;
CREATE TABLE pokemon_appearances(
 appearance_id TEXT PRIMARY KEY,
 form_uid TEXT NOT NULL REFERENCES pokemon_forms(form_uid),
 gender_id TEXT NOT NULL REFERENCES genders(gender_id),
 color_id TEXT NOT NULL REFERENCES color_states(color_id),
 variant_id TEXT NOT NULL REFERENCES variants(variant_id)
) STRICT;
-- Extensible categorical attributes, not untyped EAV. V1 supports one value per
-- attribute for an appearance; scalar/range attributes require a migration.
CREATE TABLE attribute_definitions(
 attribute_id TEXT PRIMARY KEY,
 description TEXT NOT NULL
) STRICT;
CREATE TABLE attribute_values(
 attribute_id TEXT NOT NULL REFERENCES attribute_definitions(attribute_id),
 value_id TEXT NOT NULL,
 description TEXT NOT NULL,
 PRIMARY KEY(attribute_id,value_id)
) STRICT;
CREATE TABLE form_allowed_attributes(
 form_uid TEXT NOT NULL REFERENCES pokemon_forms(form_uid),
 attribute_id TEXT NOT NULL,
 value_id TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(form_uid,attribute_id,value_id),
 FOREIGN KEY(attribute_id,value_id) REFERENCES attribute_values(attribute_id,value_id)
) STRICT;
CREATE TABLE appearance_attributes(
 appearance_id TEXT NOT NULL REFERENCES pokemon_appearances(appearance_id),
 attribute_id TEXT NOT NULL,
 value_id TEXT NOT NULL,
 PRIMARY KEY(appearance_id,attribute_id),
 FOREIGN KEY(attribute_id,value_id) REFERENCES attribute_values(attribute_id,value_id)
) STRICT;
CREATE TRIGGER appearance_attribute_allowed BEFORE INSERT ON appearance_attributes
WHEN NOT EXISTS(
 SELECT 1 FROM pokemon_appearances a JOIN form_allowed_attributes f
 ON f.form_uid=a.form_uid
 WHERE a.appearance_id=NEW.appearance_id AND f.attribute_id=NEW.attribute_id AND f.value_id=NEW.value_id
)
BEGIN SELECT RAISE(ABORT,'attribute not allowed for appearance form'); END;
CREATE TRIGGER appearance_attribute_update BEFORE UPDATE ON appearance_attributes
WHEN NOT EXISTS(
 SELECT 1 FROM pokemon_appearances a JOIN form_allowed_attributes f
 ON f.form_uid=a.form_uid
 WHERE a.appearance_id=NEW.appearance_id AND f.attribute_id=NEW.attribute_id AND f.value_id=NEW.value_id
)
BEGIN SELECT RAISE(ABORT,'attribute not allowed for appearance form'); END;
CREATE TRIGGER appearance_form_immutable BEFORE UPDATE OF form_uid ON pokemon_appearances
WHEN OLD.form_uid<>NEW.form_uid AND EXISTS(SELECT 1 FROM appearance_attributes WHERE appearance_id=OLD.appearance_id)
BEGIN SELECT RAISE(ABORT,'remove appearance attributes before changing form'); END;
CREATE TRIGGER allowed_attribute_delete BEFORE DELETE ON form_allowed_attributes
WHEN EXISTS(SELECT 1 FROM appearance_attributes x JOIN pokemon_appearances a USING(appearance_id)
 WHERE a.form_uid=OLD.form_uid AND x.attribute_id=OLD.attribute_id AND x.value_id=OLD.value_id)
BEGIN SELECT RAISE(ABORT,'allowed attribute is in use'); END;
CREATE TRIGGER allowed_attribute_update BEFORE UPDATE OF form_uid,attribute_id,value_id ON form_allowed_attributes
WHEN EXISTS(SELECT 1 FROM appearance_attributes x JOIN pokemon_appearances a USING(appearance_id)
 WHERE a.form_uid=OLD.form_uid AND x.attribute_id=OLD.attribute_id AND x.value_id=OLD.value_id)
BEGIN SELECT RAISE(ABORT,'allowed attribute is in use'); END;

-- Typed resource registry. Add new subtype tables via migration, not a polymorphic
-- entity_id with no FK. A registry row may be staged before subtype creation.
CREATE TABLE resource_subjects(
 subject_id TEXT PRIMARY KEY,
 type_id TEXT NOT NULL REFERENCES resource_types(type_id),
 stable_slug TEXT NOT NULL,
 UNIQUE(type_id,stable_slug)
) STRICT;
CREATE TABLE pokemon_subjects(
 subject_id TEXT PRIMARY KEY REFERENCES resource_subjects(subject_id),
 appearance_id TEXT NOT NULL UNIQUE REFERENCES pokemon_appearances(appearance_id)
) STRICT;
CREATE TRIGGER pokemon_subject_type_insert BEFORE INSERT ON pokemon_subjects
WHEN (SELECT type_id FROM resource_subjects WHERE subject_id=NEW.subject_id)<>'pokemon'
BEGIN SELECT RAISE(ABORT,'pokemon subject type mismatch'); END;
CREATE TRIGGER pokemon_subject_type_update BEFORE UPDATE OF subject_id ON pokemon_subjects
WHEN (SELECT type_id FROM resource_subjects WHERE subject_id=NEW.subject_id)<>'pokemon'
BEGIN SELECT RAISE(ABORT,'pokemon subject type mismatch'); END;
CREATE TRIGGER subject_type_immutable BEFORE UPDATE OF type_id ON resource_subjects
WHEN OLD.type_id<>NEW.type_id
BEGIN SELECT RAISE(ABORT,'resource type is immutable'); END;
CREATE TABLE resource_subject_names(
 subject_id TEXT NOT NULL REFERENCES resource_subjects(subject_id),
 language_id TEXT NOT NULL REFERENCES languages(language_id),
 name TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(subject_id,language_id)
) STRICT;

-- Version-scoped native data. Native species 0 is permitted here, never in canonical species.
CREATE TABLE native_species_mappings(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 native_species INTEGER NOT NULL CHECK(native_species>=0),
 species_id INTEGER NOT NULL REFERENCES pokemon_species(species_id),
 status TEXT NOT NULL CHECK(status IN ('candidate','confirmed','rejected')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,native_species,species_id)
) STRICT;
CREATE UNIQUE INDEX native_species_confirmed ON native_species_mappings(release_id,native_species) WHERE status='confirmed';
CREATE TABLE native_form_mappings(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 native_species INTEGER NOT NULL CHECK(native_species>=0),
 native_form INTEGER NOT NULL CHECK(native_form>=0),
 form_uid TEXT NOT NULL REFERENCES pokemon_forms(form_uid),
 status TEXT NOT NULL CHECK(status IN ('candidate','confirmed','rejected')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,native_species,native_form,form_uid)
) STRICT;
CREATE UNIQUE INDEX native_form_confirmed ON native_form_mappings(release_id,native_species,native_form) WHERE status='confirmed';
CREATE TABLE native_enum_values(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 enum_domain TEXT NOT NULL,
 native_code INTEGER NOT NULL,
 native_tag TEXT NOT NULL,
 semantic_label TEXT,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,enum_domain,native_code)
) STRICT;
CREATE TABLE native_enum_compatibility(
 release_id TEXT NOT NULL,
 enum_domain TEXT NOT NULL,
 request_code INTEGER NOT NULL,
 resource_code INTEGER NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,enum_domain,request_code,resource_code),
 FOREIGN KEY(release_id,enum_domain,resource_code) REFERENCES native_enum_values(release_id,enum_domain,native_code)
) STRICT;
CREATE TABLE native_resource_keys(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 namespace TEXT NOT NULL,
 key_id TEXT NOT NULL,
 raw_name TEXT NOT NULL,
 native_order INTEGER CHECK(native_order IS NULL OR native_order>=0),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,namespace,key_id)
) STRICT;
CREATE UNIQUE INDEX native_order_unique ON native_resource_keys(release_id,namespace,native_order) WHERE native_order IS NOT NULL;
CREATE TABLE native_pokemon_keys(
 release_id TEXT NOT NULL,
 namespace TEXT NOT NULL,
 key_id TEXT NOT NULL,
 native_species INTEGER NOT NULL CHECK(native_species>=0),
 native_form INTEGER NOT NULL CHECK(native_form>=0),
 color_code INTEGER NOT NULL CHECK(color_code>=0),
 view_code INTEGER NOT NULL CHECK(view_code>=0),
 gender_code INTEGER NOT NULL CHECK(gender_code>=0),
 variant_code INTEGER NOT NULL CHECK(variant_code>=0),
 decoration_raw INTEGER NOT NULL CHECK(decoration_raw BETWEEN 0 AND 4294967295),
 PRIMARY KEY(release_id,namespace,key_id),
 FOREIGN KEY(release_id,namespace,key_id) REFERENCES native_resource_keys(release_id,namespace,key_id),
 UNIQUE(release_id,namespace,native_species,native_form,color_code,view_code,gender_code,variant_code,decoration_raw)
) STRICT;
CREATE TABLE subject_native_links(
 subject_id TEXT NOT NULL REFERENCES resource_subjects(subject_id),
 release_id TEXT NOT NULL,
 namespace TEXT NOT NULL,
 key_id TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('candidate','confirmed','rejected')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(subject_id,release_id,namespace,key_id),
 FOREIGN KEY(release_id,namespace,key_id) REFERENCES native_resource_keys(release_id,namespace,key_id)
) STRICT;
CREATE TABLE resource_selection_rules(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 namespace TEXT NOT NULL,
 rule_version INTEGER NOT NULL CHECK(rule_version>0),
 implementation_ref TEXT NOT NULL,
 status TEXT NOT NULL CHECK(status IN ('candidate','static_model','runtime_verified')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,namespace,rule_version)
) STRICT;

-- Source provenance: container, archive member, texture or Unity object.
CREATE TABLE source_files(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 file_id TEXT NOT NULL,
 relative_path TEXT NOT NULL,
 bytes INTEGER CHECK(bytes IS NULL OR bytes>=0),
 sha256 TEXT CHECK(sha256 IS NULL OR (length(sha256)=64 AND sha256 NOT GLOB '*[^0-9a-f]*')),
 PRIMARY KEY(release_id,file_id),
 UNIQUE(release_id,relative_path)
) STRICT;
CREATE TABLE source_entries(
 release_id TEXT NOT NULL,
 file_id TEXT NOT NULL,
 entry_id TEXT NOT NULL,
 entry_kind TEXT NOT NULL CHECK(entry_kind IN ('texture','sprite','image','other')),
 member_path TEXT NOT NULL DEFAULT '',
 locator TEXT NOT NULL,
 raw_name TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,file_id,entry_id),
 FOREIGN KEY(release_id,file_id) REFERENCES source_files(release_id,file_id),
 UNIQUE(release_id,file_id,member_path,locator)
) STRICT;
CREATE TABLE source_texture_details(
 release_id TEXT NOT NULL,
 file_id TEXT NOT NULL,
 entry_id TEXT NOT NULL,
 format_id TEXT NOT NULL REFERENCES texture_formats(format_id),
 texture_index INTEGER CHECK(texture_index IS NULL OR texture_index>=0),
 mip_level INTEGER NOT NULL DEFAULT 0 CHECK(mip_level>=0),
 width INTEGER NOT NULL CHECK(width>0),
 height INTEGER NOT NULL CHECK(height>0),
 PRIMARY KEY(release_id,file_id,entry_id),
 FOREIGN KEY(release_id,file_id,entry_id) REFERENCES source_entries(release_id,file_id,entry_id)
) STRICT;

-- Encoded bytes vs canonical pixels. SHA256 of raw RGBA alone is retained as
-- evidence; content_id is separately hashed with dimensions and pixel contract.
CREATE TABLE image_contents(
 content_id TEXT PRIMARY KEY CHECK(length(content_id)=64 AND content_id NOT GLOB '*[^0-9a-f]*'),
 width INTEGER NOT NULL CHECK(width>0),
 height INTEGER NOT NULL CHECK(height>0),
 pixel_contract TEXT NOT NULL,
 rgba_sha256 TEXT NOT NULL CHECK(length(rgba_sha256)=64 AND rgba_sha256 NOT GLOB '*[^0-9a-f]*'),
 UNIQUE(width,height,pixel_contract,rgba_sha256)
) STRICT;
CREATE TABLE image_files(
 file_sha256 TEXT PRIMARY KEY CHECK(length(file_sha256)=64 AND file_sha256 NOT GLOB '*[^0-9a-f]*'),
 content_id TEXT NOT NULL REFERENCES image_contents(content_id),
 encoding TEXT NOT NULL,
 bytes INTEGER NOT NULL CHECK(bytes>0),
 cas_path TEXT NOT NULL UNIQUE
) STRICT;
CREATE TABLE image_assets(
 release_id TEXT NOT NULL REFERENCES source_releases(release_id),
 asset_id TEXT NOT NULL,
 source_file_id TEXT NOT NULL,
 source_entry_id TEXT NOT NULL,
 file_sha256 TEXT NOT NULL REFERENCES image_files(file_sha256),
 archive_path TEXT NOT NULL,
 quality_status TEXT NOT NULL CHECK(quality_status IN ('native','native_lowres','unreferenced_alternative','unreferenced_placeholder','candidate','derived')),
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,asset_id),
 FOREIGN KEY(release_id,source_file_id,source_entry_id) REFERENCES source_entries(release_id,file_id,entry_id),
 UNIQUE(release_id,archive_path)
) STRICT;
CREATE TABLE native_key_images(
 release_id TEXT NOT NULL,
 namespace TEXT NOT NULL,
 key_id TEXT NOT NULL,
 role_id TEXT NOT NULL REFERENCES image_roles(role_id),
 asset_id TEXT NOT NULL,
 evidence_id TEXT NOT NULL REFERENCES evidence(evidence_id),
 PRIMARY KEY(release_id,namespace,key_id,role_id),
 FOREIGN KEY(release_id,namespace,key_id) REFERENCES native_resource_keys(release_id,namespace,key_id),
 FOREIGN KEY(release_id,asset_id) REFERENCES image_assets(release_id,asset_id)
) STRICT;
CREATE TRIGGER reject_unreferenced_binding_insert BEFORE INSERT ON native_key_images
WHEN (SELECT quality_status FROM image_assets WHERE release_id=NEW.release_id AND asset_id=NEW.asset_id) IN ('unreferenced_alternative','unreferenced_placeholder','candidate','derived')
BEGIN SELECT RAISE(ABORT,'non-native asset cannot be a native binding'); END;
CREATE TRIGGER reject_unreferenced_binding_update BEFORE UPDATE ON native_key_images
WHEN (SELECT quality_status FROM image_assets WHERE release_id=NEW.release_id AND asset_id=NEW.asset_id) IN ('unreferenced_alternative','unreferenced_placeholder','candidate','derived')
BEGIN SELECT RAISE(ABORT,'non-native asset cannot be a native binding'); END;
CREATE TRIGGER reject_bound_asset_demotion BEFORE UPDATE OF quality_status ON image_assets
WHEN NEW.quality_status IN ('unreferenced_alternative','unreferenced_placeholder','candidate','derived')
AND EXISTS(SELECT 1 FROM native_key_images WHERE release_id=OLD.release_id AND asset_id=OLD.asset_id)
BEGIN SELECT RAISE(ABORT,'remove native bindings before demotion'); END;
CREATE INDEX native_images_asset_idx ON native_key_images(release_id,asset_id);
CREATE INDEX assets_content_idx ON image_assets(file_sha256);
CREATE INDEX image_files_content_idx ON image_files(content_id);
CREATE INDEX appearance_form_idx ON pokemon_appearances(form_uid);
CREATE INDEX native_pokemon_lookup ON native_pokemon_keys(release_id,namespace,native_species,native_form,color_code,view_code);
CREATE INDEX subject_native_reverse ON subject_native_links(release_id,namespace,key_id);

-- Flat view is generated, never a hand-maintained source table.
CREATE VIEW v_native_pokemon_images AS
SELECT k.release_id,k.namespace,k.key_id,r.raw_name,r.native_order,k.native_species,k.native_form,
 k.color_code,k.view_code,k.gender_code,k.variant_code,k.decoration_raw,
 b.role_id,b.asset_id,a.archive_path,a.quality_status,c.width,c.height,c.rgba_sha256,f.file_sha256,f.cas_path
FROM native_pokemon_keys k JOIN native_resource_keys r USING(release_id,namespace,key_id)
JOIN native_key_images b USING(release_id,namespace,key_id)
JOIN image_assets a USING(release_id,asset_id)
JOIN image_files f USING(file_sha256) JOIN image_contents c USING(content_id);

-- Stable schema dictionaries only; no HOME data import.
INSERT INTO resource_types VALUES ('pokemon'),('item'),('ball'),('type'),('ribbon'),('mark'),('achievement'),('wallpaper'),('ui');
INSERT INTO image_roles VALUES ('portrait'),('icon'),('thumbnail'),('wallpaper'),('badge'),('atlas'),('other');
INSERT INTO genders VALUES ('male'),('female'),('genderless'),('shared'),('unknown');
INSERT INTO color_states VALUES ('normal'),('shiny'),('unknown');
INSERT INTO variants VALUES ('normal'),('gigantamax'),('unknown');
