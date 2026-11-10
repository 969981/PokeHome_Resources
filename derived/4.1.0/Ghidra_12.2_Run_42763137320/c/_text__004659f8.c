/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004659f8; name: FUN_.text__004659f8
 */


int FUN__text__004659f8(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  iVar1 = FUN__text__004ce860(param_1 + 0x15,param_2,param_3);
  if (iVar1 == 1) {
    FUN__text__004cfa40(param_1 + 0x17,param_2,param_3);
    (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,0);
  }
  return iVar1;
}


