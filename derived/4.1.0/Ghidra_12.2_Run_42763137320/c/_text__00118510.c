/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00118510; name: FUN_.text__00118510
 */


void FUN__text__00118510(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar9 = param_1[1] - *param_1 >> 7;
  uVar11 = lVar9 + 1;
  if (uVar11 >> 0x39 != 0) {
    FUN__text__001187a4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  uVar3 = param_1[2] - *param_1;
  uVar6 = (long)uVar3 >> 6;
  if (uVar6 <= uVar11) {
    uVar6 = uVar11;
  }
  if (0x7fffffffffffff7f < uVar3) {
    uVar6 = 0x1ffffffffffffff;
  }
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar6 << 7,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  uVar11 = tpidr_el0;
  uVar11 = uVar11 & 0xffffffffffffe000;
  if (*(long *)(uVar11 + 0x98) == 0x10) {
LAB__text__00118798:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar1 = (undefined8 *)(lVar2 + lVar9 * 0x80);
  *(long *)(uVar11 + 0x18 + *(long *)(uVar11 + 0x98) * 8) = param_1[3];
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,puVar1 + 4);
    uVar4 = param_2[1];
    puVar1[3] = param_2[3];
    uVar7 = param_2[2];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar7;
    pcVar5 = (code *)param_2[1];
    if (pcVar5 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar5)(param_2 + 4);
    }
  }
  lVar2 = lVar2 + uVar6 * 0x80;
  lVar9 = *(long *)(uVar11 + 0x98) + -1;
  *(long *)(uVar11 + 0x98) = lVar9;
  puVar10 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  puVar12 = puVar1;
  if (puVar8 == puVar10) {
    lVar9 = param_1[2];
    *param_1 = (long)puVar1;
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar9 == 0x10) goto LAB__text__00118798;
      puVar13 = puVar12 + -0x10;
      puVar14 = puVar8 + -0x10;
      *(long *)(uVar11 + 0x18 + lVar9 * 8) = param_1[3];
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      *puVar13 = 0;
      puVar12[-0xf] = 0;
      if ((code *)puVar8[-0xd] != (code *)0x0) {
        (*(code *)puVar8[-0xd])(puVar8 + -0xc,puVar12 + -0xc);
        uVar4 = puVar8[-0xf];
        puVar12[-0xd] = puVar8[-0xd];
        uVar7 = puVar8[-0xe];
        *puVar13 = *puVar14;
        puVar12[-0xf] = uVar4;
        puVar12[-0xe] = uVar7;
        pcVar5 = (code *)puVar8[-0xf];
        if (pcVar5 != (code *)0x0) {
          puVar8[-0xe] = 0;
          puVar8[-0xd] = 0;
          *puVar14 = 0;
          puVar8[-0xf] = 0;
          (*pcVar5)(puVar8 + -0xc);
        }
      }
      lVar9 = *(long *)(uVar11 + 0x98) + -1;
      *(long *)(uVar11 + 0x98) = lVar9;
      puVar8 = puVar14;
      puVar12 = puVar13;
    } while (puVar14 != puVar10);
    puVar8 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    lVar9 = param_1[2];
    *param_1 = (long)puVar13;
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = lVar2;
    while (puVar1 = puVar10, puVar1 != puVar8) {
      pcVar5 = (code *)puVar1[-0xf];
      puVar10 = puVar1 + -0x10;
      if (pcVar5 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        *puVar10 = 0;
        puVar1[-0xf] = 0;
        (*pcVar5)(puVar1 + -0xc);
      }
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00118744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar8,lVar9 - (long)puVar8,0x10);
  return;
}


