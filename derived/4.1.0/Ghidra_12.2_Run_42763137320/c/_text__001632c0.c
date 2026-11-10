/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001632c0; name: FUN_.text__001632c0
 */


void FUN__text__001632c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (param_2 != param_3) {
    lVar4 = *(long *)(uVar3 + 0x98);
    puVar2 = param_5;
    do {
      if (lVar4 == 0x10) goto LAB__text__001633a8;
      *(undefined8 *)(uVar3 + 0x18 + lVar4 * 8) = *param_1;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      uVar5 = *param_2;
      puVar1 = param_2 + 1;
      *param_2 = 0;
      param_5 = puVar2 + 1;
      *puVar2 = uVar5;
      lVar4 = *(long *)(uVar3 + 0x98) + -1;
      *(long *)(uVar3 + 0x98) = lVar4;
      param_2 = puVar1;
      puVar2 = param_5;
    } while (puVar1 != param_3);
  }
  if (*(long *)(uVar3 + 0x98) == 0x10) {
LAB__text__001633a8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = *param_1;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  uVar5 = *param_7;
  *param_7 = 0;
  *param_5 = uVar5;
  lVar4 = *(long *)(uVar3 + 0x98) + -1;
  *(long *)(uVar3 + 0x98) = lVar4;
  if (param_3 != param_4) {
    puVar2 = param_5 + param_6;
    do {
      if (lVar4 == 0x10) goto LAB__text__001633a8;
      *(undefined8 *)(uVar3 + 0x18 + lVar4 * 8) = *param_1;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      uVar5 = *param_3;
      puVar1 = param_3 + 1;
      *param_3 = 0;
      *puVar2 = uVar5;
      lVar4 = *(long *)(uVar3 + 0x98) + -1;
      *(long *)(uVar3 + 0x98) = lVar4;
      param_3 = puVar1;
      puVar2 = puVar2 + 1;
    } while (puVar1 != param_4);
  }
  return;
}


