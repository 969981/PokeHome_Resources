/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045f01c; name: FUN_.text__0045f01c
 */


undefined8 FUN__text__0045f01c(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN__text__0045df80(param_1 + -0x28);
  uVar3 = FUN__text__0042d840(param_1,param_2,param_3);
  uVar2 = FUN__text__0045df80(param_1 + -0x28);
  if (((uVar1 & 1) != (uVar2 & 1)) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN__text__0041595c(1);
  }
  return uVar3;
}


