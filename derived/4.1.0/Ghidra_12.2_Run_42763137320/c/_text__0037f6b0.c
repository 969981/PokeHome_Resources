/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037f6b0; name: FUN_.text__0037f6b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037f6b0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar12 = lVar9 + 1;
  if (uVar12 >> 0x39 != 0) {
    FUN__text__002b2784(param_1);
    FUN__text__0038ac74();
    return;
  }
  uVar4 = param_1[2] - *param_1;
  uVar7 = (long)uVar4 >> 6;
  if (uVar7 <= uVar12) {
    uVar7 = uVar12;
  }
  if (0x7fffffffffffff7f < uVar4) {
    uVar7 = 0x1ffffffffffffff;
  }
  if (uVar7 != 0) {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 7,0x10);
    if (lVar3 != 0) goto LAB__text__0037f740;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar3 = 0;
LAB__text__0037f740:
  uVar12 = tpidr_el0;
  uVar12 = uVar12 & 0xffffffffffffe000;
  if (*(long *)(uVar12 + 0x98) == 0x10) {
LAB__text__0037f908:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x80);
  lVar3 = lVar3 + uVar7 * 0x80;
  *(long *)(uVar12 + 0x18 + *(long *)(uVar12 + 0x98) * 8) = param_1[3];
  uVar8 = _DAT_008a3210;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  uVar2 = _DAT_008a3218;
  uVar5 = _DAT_008a3208;
  *puVar1 = uVar8;
  puVar1[1] = uVar5;
  uVar5 = _DAT_008a3220;
  puVar1[2] = uVar2;
  puVar1[3] = uVar5;
  lVar9 = *(long *)(uVar12 + 0x98) + -1;
  *(long *)(uVar12 + 0x98) = lVar9;
  puVar11 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  puVar13 = puVar1;
  if (puVar10 == puVar11) {
    lVar9 = param_1[2];
    *param_1 = (long)puVar1;
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = lVar3;
  }
  else {
    do {
      if (lVar9 == 0x10) goto LAB__text__0037f908;
      puVar14 = puVar13 + -0x10;
      puVar15 = puVar10 + -0x10;
      *(long *)(uVar12 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      puVar13[-0xe] = 0;
      puVar13[-0xd] = 0;
      *puVar14 = 0;
      puVar13[-0xf] = 0;
      if ((code *)puVar10[-0xd] != (code *)0x0) {
        (*(code *)puVar10[-0xd])(puVar10 + -0xc,puVar13 + -0xc);
        uVar5 = puVar10[-0xf];
        puVar13[-0xd] = puVar10[-0xd];
        uVar8 = puVar10[-0xe];
        *puVar14 = *puVar15;
        puVar13[-0xf] = uVar5;
        puVar13[-0xe] = uVar8;
        pcVar6 = (code *)puVar10[-0xf];
        if (pcVar6 != (code *)0x0) {
          puVar10[-0xe] = 0;
          puVar10[-0xd] = 0;
          *puVar15 = 0;
          puVar10[-0xf] = 0;
          (*pcVar6)(puVar10 + -0xc);
        }
      }
      lVar9 = *(long *)(uVar12 + 0x98) + -1;
      *(long *)(uVar12 + 0x98) = lVar9;
      puVar10 = puVar15;
      puVar13 = puVar14;
    } while (puVar15 != puVar11);
    puVar10 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)puVar14;
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = lVar3;
    while (puVar1 = puVar11, puVar1 != puVar10) {
      pcVar6 = (code *)puVar1[-0xf];
      puVar11 = puVar1 + -0x10;
      if (pcVar6 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        *puVar11 = 0;
        puVar1[-0xf] = 0;
        (*pcVar6)(puVar1 + -0xc);
      }
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0037f8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar10,lVar9 - (long)puVar10,0x10);
  return;
}


