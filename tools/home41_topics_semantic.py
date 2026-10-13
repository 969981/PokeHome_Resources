#!/usr/bin/env python3
"""HOME 4.1.0 topics semantic layer: actual species/form pairs and game candidates.

SOURCE facts: ROMFS topics_data.bin: 7 groups x 99 x 312; first 20 active each.
NATIVE facts: exact ELF SHA bdb558...; main+0x179540 group/record strides,
main+0x179568/56c species/form index, main+0x225C30 native bit-mask getter,
native bit-offset table 0x62D39C. See derived/.../p6_topics_native_flags.json.

Game titles are CROSS-VALIDATED CANDIDATES from first-topic Pokémon IDs,
NOT Nintendo's recovered symbolic enum names.
"""
from __future__ import annotations
from collections import Counter
import struct

NATIVE_ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
GROUP_LABEL_CANDIDATES = (
    "Let's Go Pikachu/Eevee", "Sword/Shield", "Brilliant Diamond/Shining Pearl",
    "Legends Arceus", "Scarlet/Violet", "Legends Z-A", "FireRed/LeafGreen",
)
NATIVE_BIT_POSITION = (0, 1, 2, 5, 6, 7, 9)
FIRST_TOPIC_REFERENCES = (
    (19, 69, 43, 16),
    (810, 813, 816),
    (387, 393, 390),
    (501, 722, 155),
    (906, 909, 912),
    (498, 152, 158),
    (4, 1, 7),
)
EXPECTED_REFERENCE_COUNTS = (75, 73, 68, 80, 70, 67, 67)


def annotate_topics(doc: dict) -> dict:
    """Only emit 140 active topics / 500 nonzero species-form references."""
    groups = doc["groups"]
    rows = doc["rows"]
    if doc["group_count"] != 7 or len(groups) != 7 or len(rows) != 7 * 99:
        raise ValueError("unexpected original topics group/record geometry")
    if doc["active_count"] != 140 or doc["placeholder_count"] != 553:
        raise ValueError("unexpected active topic or placeholder count")
    refs, summary, n_refs = [], [], []
    for group in range(7):
        start_len = len(refs)
        for topic_idx in range(20):
            rec = rows[group * 99 + topic_idx]
            if rec["is_shared_placeholder"]:
                raise ValueError("topic marked as placeholder in active 0..19")
            species = [rec[f"word_{i:02d}_raw_u32"] for i in range(6, 15)]
            forms = [rec[f"word_{i:02d}_raw_u32"] for i in range(15, 24)]
            kind = [rec[f"word_{i:02d}_raw_u32"] for i in range(24, 33)]
            if topic_idx == 0:
                expected = FIRST_TOPIC_REFERENCES[group]
                if tuple(species[:len(expected)]) != expected:
                    raise ValueError("game-identity source reference trio mismatch")
            if any(s > 1025 for s in species) or any(f > 6 for f in forms):
                raise ValueError("species/form candidate outside observed HOME 4.1 range")
            if any(not s and f for s, f in zip(species, forms)):
                raise ValueError("nonzero form without species candidate")
            opaque=struct.pack("<4I",*(rec[f"word_{j:02d}_raw_u32"] for j in range(4)))
            threshold_raw=rec["word_04_raw_u32"]
            for index, (s, f, flag) in enumerate(zip(species, forms, kind)):
                if not s:
                    continue
                refs.append({
                    "group_index": group,
                    "game_name_candidate": GROUP_LABEL_CANDIDATES[group],
                    "native_membership_bit_position": NATIVE_BIT_POSITION[group],
                    "topic_index": topic_idx,
                    "topic_record_file_offset": rec["absolute_file_offset"],
                    "topic_key_first16_raw_hex": opaque.hex(),
                    "topic_progress_code_raw_u32": threshold_raw,
                    "entry_index_0_to_8": index,
                    "species_no_candidate_u32": s,
                    "form_no_candidate_u32": f,
                    "additional_code_raw_u32": flag,
                    "native_species_offset_in_record": 0x18 + index * 4,
                    "native_form_offset_in_record": 0x3C + index * 4,
                    "native_flags_getter_rva": "0x225C30",
                })
        count = len(refs)-start_len
        n_refs.append(count)
        summary.append({
            "group_index": group, "game_candidate": GROUP_LABEL_CANDIDATES[group],
            "native_flags_bit_position": NATIVE_BIT_POSITION[group],
            "active_topics": 20, "species_form_references": count,
            "first_topic_species_candidates": list(FIRST_TOPIC_REFERENCES[group]),
            "game_label_evidence": "first-topic species group, not native symbolic enum",
        })
    if tuple(n_refs)!=EXPECTED_REFERENCE_COUNTS or len(refs)!=500:
        raise ValueError(f"reference counts unexpected: {n_refs}")
    return {
        "format": "P6 HOME topics native-linked per-game species/form reference overlay",
        "ELF_sha256": NATIVE_ELF_SHA,
        "native_evidence": {
            "group_slot_calculation": "main+0x179540",
            "species_form_flags_accessor": "main+0x225C30",
            "native_group_bits": "main+0x62D39C",
            "native_group_5_species_form_gate": "main+0x62D21A",
            "native_flags_json": "derived/4.1.0/native_item_topics/p6_topics_native_flags.json"
        },
        "certainty": (
            "species/form uint32 arrays and native game bit position directly supported "
            "by ELF, game names inferred via first-topic species trios; "
            "additional_code and progress_code raw semantics unverified."
        ),
        "group_summary": summary, "active_topics": 140,
        "reference_count": len(refs), "rows": refs,
    }


def native_species_form_group_gate(flags: int, group_index: int,
                                   species: int, form: int,
                                   group5_exception_pairs: set[tuple[int, int]]) -> bool:
    """Exact single-pair group-bit condition at main+0x179540.

    group 5 exception set is loaded from exact ELF table at main+0x62D21A.
    This does NOT implement the higher-level 20-topic completion state.
    """
    if not 0 <= group_index < 7 or not 0 <= flags < (1<<64):
        raise ValueError("group/flags out of supported raw range")
    if group_index == 5 and (species,form) in group5_exception_pairs:
        if not (flags & (1<<8)):
            return False
    return bool(flags & (1<<NATIVE_BIT_POSITION[group_index]))
