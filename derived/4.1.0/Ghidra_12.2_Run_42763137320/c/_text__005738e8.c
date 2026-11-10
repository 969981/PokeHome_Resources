/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005738e8; name: FUN_.text__005738e8
 */


long FUN__text__005738e8(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (DAT_00aec600 == 0)) &&
     (lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x18,0x70fbe8,0xeb), lVar1 != 0)) {
    FUN__text__00573b70(lVar1,param_1);
  }
  return DAT_00aec600;
}


