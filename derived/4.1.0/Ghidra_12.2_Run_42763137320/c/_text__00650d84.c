/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650d84; name: FUN_.text__00650d84
 */


uint FUN__text__00650d84(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN__text__00677dd8();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN__text__00666f6c(param_1,param_2), (uVar2 & 1) == 0)) {
    uVar1 = FUN__text__00666b6c(*(undefined4 *)(param_1 + (long)param_2 * 4 + 600),0xffffffff,
                                0xffffffff,0);
    uVar1 = 0 < (int)uVar1 & uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


