/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e31a0; name: FUN_.text__005e31a0
 */


undefined8 * FUN__text__005e31a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  puVar8 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_2[1];
  uVar7 = tpidr_el0;
  puVar10 = puVar9;
  if (puVar8 != param_3) {
    uVar11 = uVar7 & 0xffffffffffffe000;
    lVar3 = *(long *)(uVar11 + 0x98);
    puVar12 = puVar9;
    puVar6 = param_3;
    do {
      if (lVar3 == 0x10) goto LAB__text__005e33b0;
      puVar10 = puVar12 + -0x10;
      puVar5 = puVar6 + -0x10;
      *(undefined8 *)((uVar11 | 0x18) + lVar3 * 8) = param_1[3];
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar12[-0xe] = 0;
      puVar12[-0xd] = 0;
      *puVar10 = 0;
      puVar12[-0xf] = 0;
      if ((code *)puVar6[-0xd] != (code *)0x0) {
        (*(code *)puVar6[-0xd])(puVar6 + -0xc,puVar12 + -0xc);
        uVar1 = puVar6[-0xf];
        puVar12[-0xd] = puVar6[-0xd];
        uVar4 = puVar6[-0xe];
        *puVar10 = *puVar5;
        puVar12[-0xf] = uVar1;
        puVar12[-0xe] = uVar4;
        pcVar2 = (code *)puVar6[-0xf];
        if (pcVar2 != (code *)0x0) {
          puVar6[-0xe] = 0;
          puVar6[-0xd] = 0;
          *puVar5 = 0;
          puVar6[-0xf] = 0;
          (*pcVar2)(puVar6 + -0xc);
        }
      }
      lVar3 = *(long *)(uVar11 + 0x98) + -1;
      *(long *)(uVar11 + 0x98) = lVar3;
      puVar12 = puVar10;
      puVar6 = puVar5;
    } while (puVar5 != puVar8);
  }
  param_2[1] = puVar10;
  puVar8 = (undefined8 *)param_2[2];
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 != param_3) {
    uVar7 = uVar7 & 0xffffffffffffe000;
    lVar3 = *(long *)(uVar7 + 0x98);
    do {
      if (lVar3 == 0x10) {
LAB__text__005e33b0:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)((uVar7 | 0x18) + lVar3 * 8) = param_1[3];
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      if ((code *)param_3[3] != (code *)0x0) {
        (*(code *)param_3[3])(param_3 + 4,puVar8 + 4);
        uVar1 = param_3[1];
        puVar8[3] = param_3[3];
        uVar4 = param_3[2];
        *puVar8 = *param_3;
        puVar8[1] = uVar1;
        puVar8[2] = uVar4;
        pcVar2 = (code *)param_3[1];
        if (pcVar2 != (code *)0x0) {
          param_3[2] = 0;
          param_3[3] = 0;
          *param_3 = 0;
          param_3[1] = 0;
          (*pcVar2)(param_3 + 4);
        }
      }
      param_3 = param_3 + 0x10;
      puVar8 = puVar8 + 0x10;
      lVar3 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar3;
    } while (param_3 != puVar12);
    puVar10 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar8;
  uVar1 = *param_1;
  *param_1 = puVar10;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return puVar9;
}


