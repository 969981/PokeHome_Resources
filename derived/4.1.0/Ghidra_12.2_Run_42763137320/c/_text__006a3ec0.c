/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3ec0; name: FUN_.text__006a3ec0
 */


void FUN__text__006a3ec0(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != param_1 + 8; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x28))((long *)(lVar1 + -8));
  }
  for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x48))();
  }
  return;
}


