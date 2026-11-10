/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006aea90; name: FUN_.text__006aea90
 */


void FUN__text__006aea90(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,
                        undefined8 param_5,uint *param_6,long param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  ulong uVar8;
  uint local_98 [6];
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  if ((*(byte *)(param_7 + 0x10) & 1) == 0) {
    if ((*(byte *)(param_7 + 0x10) >> 1 & 1) == 0) {
      plVar3 = *(long **)(*(long *)(param_3 + 0x18) + (long)param_8 * 0x10 + 8);
      if (plVar3 == (long *)0x0) {
        uVar8 = 0;
        fVar6 = 0.0;
      }
      else {
        local_98[0] = 0;
        (**(code **)(*plVar3 + 0x20))(local_98);
        uVar7 = NEON_ucvtf(local_98[0] & 0xffff);
        uVar8 = CONCAT44(uVar9,uVar7);
        fVar6 = (float)NEON_ucvtf(local_98[0] >> 0x10);
      }
    }
    else {
      uVar8 = (ulong)*param_6;
      fVar6 = (float)param_6[1];
    }
  }
  else {
    uVar8 = (ulong)*(uint *)(*(long *)(param_4 + 0xc0) + 0x28);
    fVar6 = *(float *)(*(long *)(param_4 + 0xc0) + 0x2c);
  }
  uVar2 = *(byte *)(*(long *)(param_3 + 0x18) +
                    ((ulong)*(uint *)(param_3 + 0x10) & 3) * 0x10 +
                    ((ulong)(*(uint *)(param_3 + 0x10) >> 2) & 3) * 0x14 + (long)param_8 * 0x10 + 1)
          - 3;
  if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006aeb78 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__006aeb90 + (ulong)*(byte *)((ulong)uVar2 + 0x766310) * 4))
              (fVar6,uVar8,fVar6 * 0.5);
    return;
  }
  if (param_8 == 2) {
    lVar4 = *(long *)(*(long *)(param_4 + 200) + 0x38);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + (ulong)*(uint *)(param_3 + 0x30);
    }
    puVar5 = (undefined8 *)(lVar1 + 0x160);
  }
  else if (param_8 == 1) {
    lVar4 = *(long *)(*(long *)(param_4 + 200) + 0x38);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + (ulong)*(uint *)(param_3 + 0x30);
    }
    puVar5 = (undefined8 *)(lVar1 + 0x120);
  }
  else {
    if (param_8 != 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(param_4 + 200) + 0x38);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + (ulong)*(uint *)(param_3 + 0x30);
    }
    puVar5 = (undefined8 *)(lVar1 + 0xe0);
  }
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  return;
}


