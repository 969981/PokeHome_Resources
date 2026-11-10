/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005504a0; name: FUN_.text__005504a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005504a0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint local_dc [11];
  undefined8 local_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  local_dc[0] = 1;
  local_dc[1] = 8;
  local_dc[2] = 3;
  local_dc[3] = 4;
  local_dc[6] = 3;
  local_dc[7] = 4;
  local_dc[4] = 5;
  local_dc[5] = 8;
  local_dc[8] = 5;
  local_dc[9] = 4;
  local_dc[10] = 1;
  local_58[0] = _DAT_008a3ac0;
  local_58[1] = _DAT_008a3ab0;
  local_58[2] = _DAT_008a3a80;
  local_58[3] = _DAT_008a3a90;
  local_38 = _DAT_008a3aa0;
  uStack_30 = _DAT_008a3b10;
  local_28 = _DAT_008a3ae0;
  uStack_20 = _DAT_008a3af0;
  local_18 = _DAT_008a3b00;
  uStack_10 = _DAT_008a3ad0;
  local_8 = _DAT_008a3b20;
  local_b0[0] = _DAT_008a3ac8;
  local_b0[1] = _DAT_008a3ab8;
  local_b0[2] = _DAT_008a3a88;
  local_b0[3] = _DAT_008a3a98;
  local_90 = _DAT_008a3aa8;
  uStack_88 = _DAT_008a3b18;
  local_80 = _DAT_008a3ae8;
  uStack_78 = _DAT_008a3af8;
  local_70 = _DAT_008a3b08;
  uStack_68 = _DAT_008a3ad8;
  local_60 = _DAT_008a3b28;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x2c) >> (*(int *)(param_1 + 0x30) == 1);
    uVar5 = uVar1;
    do {
      lVar6 = uVar4 * 4;
      lVar7 = uVar4 * 8;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar7) = local_58[*(uint *)(param_2 + lVar6)];
      *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7) = local_b0[*(uint *)(param_2 + lVar6)];
      uVar2 = 0;
      if (local_dc[*(uint *)(param_2 + lVar6)] != 0) {
        uVar2 = uVar5 / local_dc[*(uint *)(param_2 + lVar6)];
      }
      *(uint *)(*(long *)(param_1 + 8) + lVar6) = uVar2;
      uVar5 = 0;
      if (local_dc[*(uint *)(param_2 + lVar6)] != 0) {
        uVar5 = uVar1 / local_dc[*(uint *)(param_2 + lVar6)];
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar5 / uVar2;
      }
      *(uint *)(*(long *)(param_1 + 0x10) + lVar6) = uVar3;
      uVar5 = uVar2;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  return;
}


