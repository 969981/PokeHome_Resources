/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9978; name: FUN_.text__003a9978
 */


undefined8 FUN__text__003a9978(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if (param_2 == 0) {
    FUN__text__003a9230(param_1);
    return 1;
  }
  uVar1 = FUN__text__003a9338(param_1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x85) = 1;
  FUN__text__003a1648(param_1,0);
  return 1;
}


