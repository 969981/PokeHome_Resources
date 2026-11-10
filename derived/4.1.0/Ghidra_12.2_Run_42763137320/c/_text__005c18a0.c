/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c18a0; name: FUN_.text__005c18a0
 */


void FUN__text__005c18a0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar8 = lVar3 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar8) {
    FUN__text__005c1b10(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar2 * 0x5555555555555556;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
    uVar4 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar4 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 * 0x18,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__005c1b04:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar10 = (undefined4 *)(lVar2 + lVar3 * 8);
  *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_1[3];
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  *puVar10 = *param_2;
  lVar1 = *(long *)(param_2 + 2);
  *(long *)(lVar2 + lVar3 * 8 + 8) = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_2 + 4);
  *(long *)(lVar2 + lVar3 * 8 + 0x10) = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = lVar2 + uVar4 * 0x18;
  lVar3 = *(long *)(uVar8 + 0x98) + -1;
  *(long *)(uVar8 + 0x98) = lVar3;
  puVar9 = (undefined4 *)*param_1;
  puVar7 = (undefined4 *)param_1[1];
  puVar11 = puVar10;
  if (puVar7 == puVar9) {
    lVar3 = param_1[2];
    *param_1 = (long)puVar10;
    param_1[1] = (long)(puVar10 + 6);
    param_1[2] = lVar2;
  }
  else {
    do {
      if (lVar3 == 0x10) goto LAB__text__005c1b04;
      *(long *)(uVar8 + 0x18 + lVar3 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar6 = puVar7 + -6;
      puVar12 = puVar11 + -6;
      *puVar12 = *puVar6;
      uVar5 = *(undefined8 *)(puVar7 + -4);
      *(undefined8 *)(puVar7 + -4) = 0;
      *(undefined8 *)(puVar11 + -4) = uVar5;
      uVar5 = *(undefined8 *)(puVar7 + -2);
      *(undefined8 *)(puVar7 + -2) = 0;
      *(undefined8 *)(puVar11 + -2) = uVar5;
      lVar3 = *(long *)(uVar8 + 0x98) + -1;
      *(long *)(uVar8 + 0x98) = lVar3;
      puVar7 = puVar6;
      puVar11 = puVar12;
    } while (puVar6 != puVar9);
    puVar7 = (undefined4 *)*param_1;
    puVar9 = (undefined4 *)param_1[1];
    lVar3 = param_1[2];
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar10 + 6);
    param_1[2] = lVar2;
    for (; puVar9 != puVar7; puVar9 = puVar9 + -6) {
      if (*(long *)(puVar9 + -2) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar9 + -2) + 0x48) + 0x18))();
        *(undefined8 *)(puVar9 + -2) = 0;
      }
      if (*(long *)(puVar9 + -4) != 0) {
        (**(code **)(*(long *)(*(long *)(puVar9 + -4) + 0x48) + 0x18))();
        *(undefined8 *)(puVar9 + -4) = 0;
      }
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c1ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar7,lVar3 - (long)puVar7,8);
  return;
}


