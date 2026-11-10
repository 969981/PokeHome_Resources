/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f218; name: FUN_.text__0045f218
 */


undefined4
FUN__text__0045f218(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN__text__0045df80(param_1 + -0x28);
  uVar2 = FUN__text__0042e050(param_1,param_2,param_3,param_4);
  uVar3 = FUN__text__0045df80(param_1 + -0x28);
  if (((uVar1 & 1) != (uVar3 & 1)) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN__text__0041595c(1);
  }
  return uVar2;
}


