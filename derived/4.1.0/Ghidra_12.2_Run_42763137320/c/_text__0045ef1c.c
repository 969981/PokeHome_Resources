/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ef1c; name: FUN_.text__0045ef1c
 */


void FUN__text__0045ef1c(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN__text__0045df80(param_1 + -0x28);
  FUN__text__004a15c0(param_1,param_2,param_3,param_4);
  uVar2 = FUN__text__0045df80(param_1 + -0x28);
  if (((uVar1 & 1) == (uVar2 & 1)) || (*(long *)(param_1 + 0x48) == 0)) {
    return;
  }
  FUN__text__0041595c(1);
  return;
}


