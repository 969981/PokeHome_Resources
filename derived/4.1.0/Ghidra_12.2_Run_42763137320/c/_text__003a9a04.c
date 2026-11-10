/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9a04; name: FUN_.text__003a9a04
 */


undefined8 FUN__text__003a9a04(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_3 & 1) == 0) {
    return 1;
  }
  lVar2 = param_1 + -0xa0;
  if (param_2 == 0) {
    FUN__text__003a9230(lVar2);
    return 1;
  }
  uVar1 = FUN__text__003a9338(lVar2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + -0x1b) = 1;
  FUN__text__003a1648(lVar2,0);
  return 1;
}


