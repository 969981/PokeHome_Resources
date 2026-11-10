/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f12f0; name: FUN_.text__003f12f0
 */


void FUN__text__003f12f0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar11 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0x1c71c71c71c71c7 < uVar11) {
    FUN__text__003f1608(param_1);
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e);
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar7 = lVar4 * 0x1c71c71c71c71c72;
  if (uVar7 <= uVar11) {
    uVar7 = uVar11;
  }
  if (0xe38e38e38e38e2 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
    uVar7 = 0x1c71c71c71c71c7;
  }
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 * 0x90,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
  }
  uVar11 = tpidr_el0;
  uVar11 = uVar11 & 0xffffffffffffe000;
  if (*(long *)(uVar11 + 0x98) == 0x10) {
LAB__text__003f15fc:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  puVar12 = (undefined8 *)(lVar4 + lVar6 * 0x10);
  *(long *)(uVar11 + 0x18 + *(long *)(uVar11 + 0x98) * 8) = param_1[3];
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  uVar8 = *param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,puVar12 + 4);
    uVar2 = param_2[3];
    puVar12[1] = param_2[1];
    puVar12[3] = uVar2;
    uVar2 = *param_2;
    puVar12[2] = param_2[2];
    *puVar12 = uVar2;
  }
  lVar5 = lVar4 + uVar7 * 0x90;
  *(undefined8 *)(lVar4 + lVar6 * 0x10 + 0x80) = uVar8;
  lVar6 = *(long *)(uVar11 + 0x98) + -1;
  *(long *)(uVar11 + 0x98) = lVar6;
  puVar10 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == puVar10) {
    lVar6 = param_1[2];
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar12 + 0x12);
    param_1[2] = lVar5;
  }
  else {
    lVar4 = 0;
    do {
      if (lVar6 == 0x10) goto LAB__text__003f15fc;
      puVar9 = (undefined8 *)((long)puVar12 + lVar4 + -0x90);
      *(long *)(uVar11 + 0x18 + lVar6 * 8) = param_1[3];
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x80) = 0;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x78) = 0;
      *puVar9 = 0;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x88) = 0;
      pcVar3 = *(code **)((long)puVar1 + lVar4 + -0x78);
      if (pcVar3 != (code *)0x0) {
        lVar6 = (long)puVar1 + lVar4 + -0x70;
        puVar13 = (undefined8 *)((long)puVar1 + lVar4 + -0x90);
        (*pcVar3)(lVar6,(long)puVar12 + lVar4 + -0x70);
        uVar8 = *(undefined8 *)((long)puVar1 + lVar4 + -0x88);
        *(undefined8 *)((long)puVar12 + lVar4 + -0x78) =
             *(undefined8 *)((long)puVar1 + lVar4 + -0x78);
        uVar2 = *(undefined8 *)((long)puVar1 + lVar4 + -0x80);
        *puVar9 = *puVar13;
        *(undefined8 *)((long)puVar12 + lVar4 + -0x88) = uVar8;
        *(undefined8 *)((long)puVar12 + lVar4 + -0x80) = uVar2;
        pcVar3 = *(code **)((long)puVar1 + lVar4 + -0x88);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)((long)puVar1 + lVar4 + -0x80) = 0;
          *(undefined8 *)((long)puVar1 + lVar4 + -0x78) = 0;
          *puVar13 = 0;
          *(undefined8 *)((long)puVar1 + lVar4 + -0x88) = 0;
          (*pcVar3)(lVar6);
        }
      }
      lVar14 = lVar4 + -0x90;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x10) = *(undefined8 *)((long)puVar1 + lVar4 + -0x10)
      ;
      lVar6 = *(long *)(uVar11 + 0x98) + -1;
      *(long *)(uVar11 + 0x98) = lVar6;
      lVar4 = lVar14;
    } while ((undefined8 *)((long)puVar1 + lVar14) != puVar10);
    puVar1 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    *param_1 = (long)puVar12 + lVar14;
    lVar6 = param_1[2];
    param_1[1] = (long)(puVar12 + 0x12);
    param_1[2] = lVar5;
    while (puVar12 = puVar10, puVar12 != puVar1) {
      pcVar3 = (code *)puVar12[-0x11];
      puVar10 = puVar12 + -0x12;
      if (pcVar3 != (code *)0x0) {
        puVar12[-0x10] = 0;
        puVar12[-0xf] = 0;
        *puVar10 = 0;
        puVar12[-0x11] = 0;
        (*pcVar3)(puVar12 + -0xe);
      }
    }
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003f1598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar1,lVar6 - (long)puVar1,0x10);
  return;
}


