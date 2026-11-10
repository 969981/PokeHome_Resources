/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c734; name: FUN_.text__0066c734
 */


int FUN__text__0066c734(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 - param_3;
  iVar1 = -0x80000000;
  if (-0x863 < param_1) {
    iVar1 = (param_2 - param_4) + param_1 * 1000000;
  }
  iVar2 = 0x7fffffff;
  if (param_1 < 0x863) {
    iVar2 = iVar1;
  }
  return iVar2;
}


