/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00200310; name: FUN_.text__00200310
 */


ulong FUN__text__00200310(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  
  uVar8 = (long)param_2 - (long)param_1 >> 2;
  if (uVar8 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00200338 */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)(&UNK__text__00200348 + (ulong)*(byte *)(uVar8 + 0x726f26) * 4))(1);
    return uVar8;
  }
  uVar1 = *param_1;
  uVar9 = (ulong)uVar1;
  puVar11 = param_1 + 1;
  uVar2 = *puVar11;
  puVar10 = param_1 + 2;
  uVar3 = *puVar10;
  uVar8 = (ulong)uVar3;
  uVar4 = *(uint *)(param_3 + (ulong)uVar2 * 4);
  uVar5 = *(uint *)(param_3 + uVar8 * 4);
  puVar13 = param_1;
  if (uVar4 < *(uint *)(param_3 + uVar9 * 4)) {
    puVar15 = puVar10;
    if (uVar4 <= uVar5) {
      *param_1 = uVar2;
      param_1[1] = uVar1;
      puVar13 = puVar11;
      if (*(uint *)(param_3 + uVar9 * 4) <= *(uint *)(param_3 + uVar8 * 4))
      goto LAB__text__002004b8;
    }
  }
  else {
    if (uVar4 <= uVar5) goto LAB__text__002004b8;
    *puVar11 = uVar3;
    *puVar10 = uVar2;
    puVar15 = puVar11;
    if (*(uint *)(param_3 + uVar9 * 4) <= *(uint *)(param_3 + uVar8 * 4)) goto LAB__text__002004b8;
  }
  *puVar13 = uVar3;
  *puVar15 = uVar1;
LAB__text__002004b8:
  if (param_1 + 3 != param_2) {
    iVar7 = 0;
    lVar12 = 0xc;
    puVar13 = param_1 + 3;
    do {
      puVar11 = puVar13;
      uVar1 = *puVar11;
      uVar8 = (ulong)*puVar10;
      if (*(uint *)(param_3 + (ulong)uVar1 * 4) < *(uint *)(param_3 + uVar8 * 4)) {
        lVar14 = lVar12;
        do {
          lVar6 = lVar14 + -4;
          *(int *)((long)param_1 + lVar14) = (int)uVar8;
          if (lVar6 == 0) {
            *param_1 = uVar1;
            goto joined_r0x002004e0;
          }
          uVar8 = (ulong)*(uint *)((long)param_1 + lVar14 + -8);
          lVar14 = lVar6;
        } while (*(uint *)(param_3 + (ulong)uVar1 * 4) < *(uint *)(param_3 + uVar8 * 4));
        *(uint *)((long)param_1 + lVar6) = uVar1;
joined_r0x002004e0:
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return (ulong)(puVar11 + 1 == param_2);
        }
      }
      lVar12 = lVar12 + 4;
      puVar13 = puVar11 + 1;
      puVar10 = puVar11;
    } while (puVar11 + 1 != param_2);
  }
  return 1;
}


