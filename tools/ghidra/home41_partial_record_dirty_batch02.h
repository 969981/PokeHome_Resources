/*
 * HOME 4.1.0 — partial, evidence-graded offset layouts.
 *
 * RESEARCH ONLY; not original Nintendo source code.
 * Original main.elf SHA256:
 * bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra 12.2 Run #42763137320. Fields without independent provenance
 * remain opaque. Do not treat these as verified full object/class types.
 *
 * NOTE: packed/unaligned fields describe serialized bytes, not an ABI guarantee
 * for every C++ in-memory owner. Read unaligned fields using memcpy where needed.
 */
#ifndef HOME41_PARTIAL_RECORD_DIRTY_BATCH02_H
#define HOME41_PARTIAL_RECORD_DIRTY_BATCH02_H

#include <stdint.h>
#include <stddef.h>

#pragma pack(push, 1)
typedef struct HOME41_Record_Partial {
    uint8_t unknown_00[0x0a];          /* record+0x00 .. +0x09 */
    uint32_t ciphertext_crc_le_0a;     /* record+0x0A; CRC compare and seal */
    uint16_t record_length_le_0e;      /* record+0x0E */
    uint8_t unknown_10[0x02];          /* record+0x10 .. +0x11 */
    struct HOME41_GameDataCore_Prefix_Partial {
        uint64_t tracker;               /* GameDataCore+0x00 = record+0x12 */
        uint32_t encryption_constant;   /* GameDataCore+0x08 = record+0x1A */
        uint8_t is_bad_egg;             /* GameDataCore+0x0C = record+0x1E */
    } game_data_core;
    uint8_t unknown_1f[0x0b];
    uint16_t field_u16_2a;             /* getter/setter under LightEvent */
    uint8_t unknown_2c[0x2a];
    uint8_t field_56_first_byte;       /* address of an exported field; width UNKNOWN */
    uint8_t unknown_57[0x4e];
    uint8_t field_u8_a5;              /* flag-sensitive getter */
    uint8_t unknown_a6[0x30];
    uint16_t side_data_length_le_d6;
    uint8_t side_data_tlv_d8[];        /* [u8 tag][u16 len][bytes payload] */
} HOME41_Record_Partial;
#pragma pack(pop)

typedef struct HOME41_RecordView16_Partial {
    uintptr_t dispatch_00;            /* seen as 0x8988B0 by wrapper initializer */
    uint8_t *record_08;
} HOME41_RecordView16_Partial;

typedef struct HOME41_RecordStateView18_Partial {
    uintptr_t dispatch_00;
    uint8_t *record_08;
    uint8_t state_10;                  /* seal/decrypt transitions, meaning pending */
    uint8_t state_11;                  /* mutation gate, meaning pending */
    uint8_t unknown_12[2];
    uint8_t light_event_region_14[4]; /* lock/wait fields cross +0x14 to +0x17 */
} HOME41_RecordStateView18_Partial;

typedef struct HOME41_DirtyOwner94_Partial {
    uint8_t unknown_00[0x58];
    void *child_58;                    /* passed to packed two-bit update routine */
    uint64_t home_tracker_60;          /* PH4 GameDataCore Tracker; compared/deduped */
    uint8_t unknown_68[0x28];
    int32_t mode_90;                   /* branch when equal to 2 */
} HOME41_DirtyOwner94_Partial;

/* Global manager: main+0x7E5630; list entries are HOME Tracker values. */
#define HOME41_MANAGER_RVA                   UINT64_C(0x7E5630)
#define HOME41_TRACKER_DIRTY_SET_OFFSET         UINT64_C(0x7FC18)
#define HOME41_DIRTY_COUNT_OFFSET            UINT64_C(0x93498)
#define HOME41_TRACKER_DIRTY_SET_RVA            UINT64_C(0x865248)
#define HOME41_DIRTY_COUNT_RVA               UINT64_C(0x878AC8)
#define HOME41_PRE_DIRTY_COPY_OFFSET         UINT64_C(0x7D1E8)
#define HOME41_PRE_DIRTY_COPY_BYTES          UINT64_C(0x2A30)

/* These compile-time offsets are structural checks, NOT runtime validation. */
_Static_assert(offsetof(HOME41_Record_Partial, ciphertext_crc_le_0a) == 0x0a, "CRC");
_Static_assert(offsetof(HOME41_Record_Partial, record_length_le_0e) == 0x0e, "length");
_Static_assert(offsetof(HOME41_Record_Partial, game_data_core) == 0x12, "GameDataCore");
_Static_assert(offsetof(HOME41_Record_Partial, game_data_core.tracker) == 0x12, "Tracker");
_Static_assert(offsetof(HOME41_Record_Partial, game_data_core.encryption_constant) == 0x1a, "EC");
_Static_assert(offsetof(HOME41_Record_Partial, game_data_core.is_bad_egg) == 0x1e, "IsBadEgg");
_Static_assert(offsetof(HOME41_Record_Partial, field_u16_2a) == 0x2a, "u16");
_Static_assert(offsetof(HOME41_Record_Partial, field_56_first_byte) == 0x56, "field");
_Static_assert(offsetof(HOME41_Record_Partial, field_u8_a5) == 0xa5, "u8");
_Static_assert(offsetof(HOME41_Record_Partial, side_data_length_le_d6) == 0xd6, "TLV len");
_Static_assert(offsetof(HOME41_Record_Partial, side_data_tlv_d8) == 0xd8, "TLV start");
_Static_assert(offsetof(HOME41_RecordView16_Partial, record_08) == 8, "view ptr");
_Static_assert(offsetof(HOME41_RecordStateView18_Partial, state_10) == 0x10, "state");
_Static_assert(offsetof(HOME41_RecordStateView18_Partial, state_11) == 0x11, "mutation");
_Static_assert(offsetof(HOME41_RecordStateView18_Partial, light_event_region_14) == 0x14, "sync");
_Static_assert(offsetof(HOME41_DirtyOwner94_Partial, child_58) == 0x58, "child");
_Static_assert(offsetof(HOME41_DirtyOwner94_Partial, home_tracker_60) == 0x60, "key");
_Static_assert(offsetof(HOME41_DirtyOwner94_Partial, mode_90) == 0x90, "mode");
_Static_assert(HOME41_PRE_DIRTY_COPY_OFFSET + HOME41_PRE_DIRTY_COPY_BYTES ==
               HOME41_TRACKER_DIRTY_SET_OFFSET, "copy end boundary");

#endif /* HOME41_PARTIAL_RECORD_DIRTY_BATCH02_H */
