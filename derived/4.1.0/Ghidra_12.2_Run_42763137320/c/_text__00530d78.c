/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530d78; name: FUN_.text__00530d78
 */


undefined8 FUN__text__00530d78(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0xffff;
  }
  uVar1 = FUN__text__0050f0f0(*(long *)(param_1 + 0x30),param_1);
  return uVar1;
}


