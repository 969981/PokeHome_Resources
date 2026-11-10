/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f3138; name: FUN_.text__006f3138
 */


void FUN__text__006f3138(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x20)) {
    FUN__text__006ee718();
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}


