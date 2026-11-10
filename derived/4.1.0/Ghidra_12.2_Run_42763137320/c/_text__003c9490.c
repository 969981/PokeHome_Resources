/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c9490; name: FUN_.text__003c9490
 */


void FUN__text__003c9490(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (param_2 != param_3) {
    lVar3 = *(long *)(uVar2 + 0x98);
    do {
      if (lVar3 == 0x10) goto LAB__text__003c95bc;
      *(undefined8 *)(uVar2 + 0x18 + lVar3 * 8) = *param_1;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
      *param_5 = *param_2;
      uVar4 = param_2[1];
      param_2[1] = 0;
      param_5[1] = uVar4;
      puVar1 = param_2 + 2;
      param_2 = param_2 + 3;
      *(undefined4 *)(param_5 + 2) = *(undefined4 *)puVar1;
      param_5 = param_5 + 3;
      lVar3 = *(long *)(uVar2 + 0x98) + -1;
      *(long *)(uVar2 + 0x98) = lVar3;
    } while (param_2 != param_3);
  }
  if (*(long *)(uVar2 + 0x98) == 0x10) {
LAB__text__003c95bc:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar2 + 0x18 + *(long *)(uVar2 + 0x98) * 8) = *param_1;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  *param_5 = *param_7;
  uVar4 = param_7[1];
  param_7[1] = 0;
  param_5[1] = uVar4;
  *(undefined4 *)(param_5 + 2) = *(undefined4 *)(param_7 + 2);
  lVar3 = *(long *)(uVar2 + 0x98) + -1;
  *(long *)(uVar2 + 0x98) = lVar3;
  if (param_3 != param_4) {
    param_5 = param_5 + param_6 * 3;
    do {
      if (lVar3 == 0x10) goto LAB__text__003c95bc;
      *(undefined8 *)(uVar2 + 0x18 + lVar3 * 8) = *param_1;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
      *param_5 = *param_3;
      uVar4 = param_3[1];
      param_3[1] = 0;
      param_5[1] = uVar4;
      puVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      *(undefined4 *)(param_5 + 2) = *(undefined4 *)puVar1;
      param_5 = param_5 + 3;
      lVar3 = *(long *)(uVar2 + 0x98) + -1;
      *(long *)(uVar2 + 0x98) = lVar3;
    } while (param_3 != param_4);
  }
  return;
}


