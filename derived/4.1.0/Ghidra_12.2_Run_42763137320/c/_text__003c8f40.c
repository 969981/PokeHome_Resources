/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8f40; name: FUN_.text__003c8f40
 */


void FUN__text__003c8f40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if (param_2 != param_3) {
    lVar2 = *(long *)(uVar1 + 0x98);
    do {
      if (lVar2 == 0x10) goto LAB__text__003c9054;
      *(undefined8 *)(uVar1 + 0x18 + lVar2 * 8) = *param_1;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *param_5 = *param_2;
      uVar3 = param_2[1];
      param_2[1] = 0;
      param_2 = param_2 + 2;
      param_5[1] = uVar3;
      param_5 = param_5 + 2;
      lVar2 = *(long *)(uVar1 + 0x98) + -1;
      *(long *)(uVar1 + 0x98) = lVar2;
    } while (param_2 != param_3);
  }
  if (*(long *)(uVar1 + 0x98) == 0x10) {
LAB__text__003c9054:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar1 + 0x18 + *(long *)(uVar1 + 0x98) * 8) = *param_1;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  *param_5 = *param_7;
  uVar3 = param_7[1];
  param_7[1] = 0;
  param_5[1] = uVar3;
  lVar2 = *(long *)(uVar1 + 0x98) + -1;
  *(long *)(uVar1 + 0x98) = lVar2;
  if (param_3 != param_4) {
    param_5 = param_5 + param_6 * 2;
    do {
      if (lVar2 == 0x10) goto LAB__text__003c9054;
      *(undefined8 *)(uVar1 + 0x18 + lVar2 * 8) = *param_1;
      *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
      *param_5 = *param_3;
      uVar3 = param_3[1];
      param_3[1] = 0;
      param_3 = param_3 + 2;
      param_5[1] = uVar3;
      param_5 = param_5 + 2;
      lVar2 = *(long *)(uVar1 + 0x98) + -1;
      *(long *)(uVar1 + 0x98) = lVar2;
    } while (param_3 != param_4);
  }
  return;
}


