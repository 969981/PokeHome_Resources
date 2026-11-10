/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00147c6c; name: FUN_.text__00147c6c
 */


void FUN__text__00147c6c(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00147cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  return;
}


