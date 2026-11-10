/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bc4ec; name: FUN_.text__005bc4ec
 */


void FUN__text__005bc4ec(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  
  FUN__text__005a7c38(param_1,0,1);
  *param_1 = 0x896170;
  param_1[9] = 0x8961f8;
  param_1[10] = 0x896238;
  uVar1 = tpidr_el0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) goto LAB__text__005bc550;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005bc550:
  param_1[0x19] = lVar2;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 3;
  return;
}


