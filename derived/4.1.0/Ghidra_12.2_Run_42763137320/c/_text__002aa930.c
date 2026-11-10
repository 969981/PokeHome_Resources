/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002aa930; name: FUN_.text__002aa930
 */


void FUN__text__002aa930(long *param_1,undefined4 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = param_1[1] - *param_1 >> 4;
  uVar16 = lVar12 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar16) {
    FUN__text__002aabd8(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar10 = param_1[2] - *param_1 >> 4;
  uVar13 = lVar10 * 0x5555555555555556;
  if (uVar13 <= uVar16) {
    uVar13 = uVar16;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
    uVar13 = 0x555555555555555;
  }
  if (uVar13 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar13 * 0x30,8);
    if (lVar10 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  uVar16 = tpidr_el0;
  uVar16 = uVar16 & 0xffffffffffffe000;
  if (*(long *)(uVar16 + 0x98) == 0x10) {
LAB__text__002aabcc:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long *)(uVar16 + 0x18 + *(long *)(uVar16 + 0x98) * 8) = param_1[3];
  lVar15 = lVar10 + lVar12 * 0x10;
  puVar11 = (undefined8 *)(lVar10 + lVar12 * 0x10);
  *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
  uVar14 = *param_4;
  *(undefined4 *)puVar11 = *param_2;
  *(long *)(lVar15 + 8) = 0;
  *(undefined8 *)(lVar15 + 0x10) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined1 *)(lVar15 + 0x28) = 1;
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3,uVar14);
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3,uVar14);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    if (lVar4 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,lVar4,uVar14);
    }
    if (lVar5 != 0) {
      (**(code **)(*param_3 + 0x18))(param_3,lVar5,uVar14);
    }
  }
  else {
    *(long *)(lVar15 + 8) = lVar4;
    lVar12 = lVar10 + lVar12 * 0x10;
    *(long *)(lVar12 + 0x10) = lVar5;
    *(undefined8 *)(lVar12 + 0x18) = uVar14;
    *(undefined8 *)(lVar12 + 0x20) = uVar14;
  }
  lVar12 = *(long *)(uVar16 + 0x98) + -1;
  *(long *)(uVar16 + 0x98) = lVar12;
  puVar1 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 == puVar1) {
    puVar9 = puVar11;
  }
  else {
    puVar8 = puVar11;
    do {
      if (lVar12 == 0x10) goto LAB__text__002aabcc;
      *(long *)(uVar16 + 0x18 + lVar12 * 8) = param_1[3];
      *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
      puVar6 = puVar7 + -6;
      uVar14 = puVar7[-5];
      puVar9 = puVar8 + -6;
      *puVar9 = *puVar6;
      puVar8[-5] = uVar14;
      uVar14 = puVar7[-4];
      uVar2 = puVar7[-3];
      uVar3 = puVar7[-1];
      puVar8[-2] = puVar7[-2];
      puVar8[-1] = uVar3;
      puVar8[-4] = uVar14;
      puVar8[-3] = uVar2;
      lVar12 = *(long *)(uVar16 + 0x98) + -1;
      *(long *)(uVar16 + 0x98) = lVar12;
      puVar7 = puVar6;
      puVar8 = puVar9;
    } while (puVar6 != puVar1);
    puVar7 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar9;
  param_1[1] = (long)(puVar11 + 6);
  lVar12 = param_1[2];
  param_1[2] = lVar10 + uVar13 * 0x30;
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002aaba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar7,lVar12 - (long)puVar7,8);
  return;
}


