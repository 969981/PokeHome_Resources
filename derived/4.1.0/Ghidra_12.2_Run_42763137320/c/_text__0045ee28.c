/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ee28; name: FUN_.text__0045ee28
 */


void FUN__text__0045ee28(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN__text__0045df80();
  FUN__text__004690e0(param_1,param_2);
  uVar2 = FUN__text__0045df80(param_1);
  if (((uVar1 & 1) == (uVar2 & 1)) || (*(long *)(param_1 + 0x70) == 0)) {
    return;
  }
  FUN__text__0041595c(1);
  return;
}


