/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00585f10; name: FUN_.text__00585f10
 */


void FUN__text__00585f10(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (**(long **)(param_1 + 0x28) != 0) {
      FUN__text__00400fc0(5,**(long **)(param_1 + 0x28));
      **(undefined8 **)(param_1 + 0x28) = 0;
      lVar1 = *(long *)(param_1 + 0x20);
    }
    FUN__text__00400fc0(5,lVar1);
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}


