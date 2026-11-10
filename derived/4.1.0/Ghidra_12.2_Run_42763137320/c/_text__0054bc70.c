/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054bc70; name: FUN_.text__0054bc70
 */


undefined8 FUN__text__0054bc70(long param_1,byte param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = (uint)param_2;
  if (param_2 != 0) {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                      (*(long **)(param_1 + 0x20),(ulong)param_2 * 0x40 + (ulong)param_2 * -8,
                       0x70b09e,0x62);
    *(long *)(param_1 + 8) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    lVar7 = 0;
    while( true ) {
      if (lVar4 != 0) {
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined4 *)(puVar1 + 6) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
      }
      if ((ulong)param_2 * 0x38 + -0x38 == lVar7) break;
      lVar4 = *(long *)(param_1 + 8);
      lVar7 = lVar7 + 0x38;
    }
    fVar8 = *(float *)(param_1 + 0x68);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    lVar4 = 0;
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xbc));
    do {
      lVar7 = *(long *)(param_1 + 8);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      uVar3 = (**(code **)(*plVar5 + 0x18))();
      uVar6 = FUN__text__0054d364(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x34),
                                  *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),
                                  lVar7 + lVar4,uVar6,(int)(fVar8 * 0.001 * fVar9),uVar3);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      lVar4 = lVar4 + 0x38;
    } while ((ulong)uVar2 * 0x38 != lVar4);
  }
  return 1;
}


