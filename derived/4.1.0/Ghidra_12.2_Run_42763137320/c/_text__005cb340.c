/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb340; name: FUN_.text__005cb340
 */


void FUN__text__005cb340(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar3 = (undefined8 *)*param_1;
  uVar4 = tpidr_el0;
  if (puVar3 != param_3) {
    uVar5 = uVar4 & 0xffffffffffffe000;
    lVar7 = *(long *)(uVar5 + 0x98);
    puVar6 = param_3;
    do {
      if (lVar7 == 0x10) goto LAB__text__005cb460;
      *(long *)((uVar5 | 0x18) + lVar7 * 8) = param_1[3];
      *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
      puVar6 = puVar6 + -1;
      uVar8 = *puVar6;
      *puVar6 = 0;
      puVar1 = puVar1 + -1;
      *puVar1 = uVar8;
      lVar7 = *(long *)(uVar5 + 0x98) + -1;
      *(long *)(uVar5 + 0x98) = lVar7;
    } while (puVar6 != puVar3);
  }
  param_2[1] = puVar1;
  puVar3 = (undefined8 *)param_2[2];
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != param_3) {
    uVar4 = uVar4 & 0xffffffffffffe000;
    lVar7 = *(long *)(uVar4 + 0x98);
    puVar1 = puVar3;
    do {
      if (lVar7 == 0x10) {
LAB__text__005cb460:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long *)((uVar4 | 0x18) + lVar7 * 8) = param_1[3];
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      uVar8 = *param_3;
      puVar2 = param_3 + 1;
      *param_3 = 0;
      puVar3 = puVar1 + 1;
      *puVar1 = uVar8;
      lVar7 = *(long *)(uVar4 + 0x98) + -1;
      *(long *)(uVar4 + 0x98) = lVar7;
      param_3 = puVar2;
      puVar1 = puVar3;
    } while (puVar2 != puVar6);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar3;
  lVar7 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar7;
  lVar7 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar7;
  lVar7 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar7;
  *param_2 = param_2[1];
  return;
}


