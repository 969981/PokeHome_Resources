/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004714a0; name: FUN_.text__004714a0
 */


undefined4 FUN__text__004714a0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_3 + 0x18) == 0) {
    uVar9 = 0x501502f9;
  }
  else {
    puVar4 = *(undefined8 **)(param_3 + 0x10);
    if (param_2 == 0) {
      do {
        puVar5 = puVar4 + 1;
        FUN__text__0047d7d0(*puVar4);
        puVar4 = puVar5;
      } while (puVar5 != (undefined8 *)
                         (*(long *)(param_3 + 0x10) + (ulong)*(uint *)(param_3 + 0x18) * 8));
      return 0x501502f9;
    }
    uVar9 = 0x501502f9;
    do {
      lVar1 = FUN__text__0047d7d0(*puVar4);
      if (lVar1 != 0) {
        uVar2 = (ulong)param_2;
        pdVar3 = (double *)(param_1 + 0x28);
        do {
          uVar2 = uVar2 - 1;
          fVar8 = (float)(*(double *)(lVar1 + 0x88) - *pdVar3);
          fVar7 = (float)(*(double *)(lVar1 + 0x80) - pdVar3[-1]);
          fVar6 = (float)(*(double *)(lVar1 + 0x78) - pdVar3[-2]);
          uVar9 = NEON_fminnm(uVar9,SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) *
                                    (1.0 / *(float *)(lVar1 + 0x90)));
          pdVar3 = pdVar3 + 7;
        } while (uVar2 != 0);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)
                       (*(long *)(param_3 + 0x10) + (ulong)*(uint *)(param_3 + 0x18) * 8));
  }
  return uVar9;
}


