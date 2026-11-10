/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476ea4; name: FUN_.text__00476ea4
 */


undefined8 FUN__text__00476ea4(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x340) == param_2) {
    if ((param_3 & 1) == 0) {
      return 1;
    }
    uVar2 = FUN__text__00476dd0(param_1);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x2a8) == 0) {
    return 0;
  }
  uVar1 = FUN__text__004514e8(*(long *)(param_1 + 0x2a8),param_2,param_3 & 1);
  return uVar1;
}


