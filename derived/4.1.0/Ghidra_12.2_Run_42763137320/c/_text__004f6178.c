/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6178; name: FUN_.text__004f6178
 */


long FUN__text__004f6178(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if (lVar1 == 0) {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    lVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0xd0))();
    *param_2 = lVar1;
    if (lVar1 != 0) {
      return 0;
    }
    lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x110) + 0x10) + 0xd0))();
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x78);
    if (param_2 == (long *)0x0) {
      return lVar1;
    }
    lVar2 = *(long *)(lVar1 + 0x78);
  }
  *param_2 = lVar2;
  return lVar1;
}


