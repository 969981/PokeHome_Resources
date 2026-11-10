/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066498c; name: FUN_.text__0066498c
 */


int FUN__text__0066498c(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    FUN__text__006783e4(*param_2);
    *param_2 = 0;
    iVar1 = *param_3;
  }
  if (iVar1 != 0) {
    iVar1 = FUN__text__00689140(param_2);
    if ((param_4 == 0) && (iVar1 != 0)) {
      FUN__text__006646f8(param_1,param_2);
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}


