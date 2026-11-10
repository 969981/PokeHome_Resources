/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e368c; name: FUN_.text__005e368c
 */


void FUN__text__005e368c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN__text__005e3c7c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x005e36cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],lVar1,param_1[2],param_1[3]);
  return;
}


