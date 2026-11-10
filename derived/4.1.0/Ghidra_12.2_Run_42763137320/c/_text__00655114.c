/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00655114; name: FUN_.text__00655114
 */


int FUN__text__00655114(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[0xa4] != 0) {
    param_1[0xd] = param_1[0xa4];
    param_1[0xa4] = 0;
  }
  iVar1 = FUN__text__00670d60(param_1);
  if (iVar1 != 0) {
    FUN__text__00670414(*param_1,param_1,1);
  }
  return iVar1;
}


