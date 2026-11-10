/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476d7c; name: FUN_.text__00476d7c
 */


undefined8 FUN__text__00476d7c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x338) == param_2) &&
     (uVar1 = FUN__text__00476dd0(param_1), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x2a8) != 0) {
      uVar2 = FUN__text__0045135c(*(long *)(param_1 + 0x2a8),param_2);
      return uVar2;
    }
  }
  return uVar2;
}


