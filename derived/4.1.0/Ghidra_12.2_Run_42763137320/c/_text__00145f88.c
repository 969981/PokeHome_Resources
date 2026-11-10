/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00145f88; name: FUN_.text__00145f88
 */


void FUN__text__00145f88(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x58) + 0x18);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    *param_1 = lVar1;
  }
  return;
}


