/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685764; name: FUN_.text__00685764
 */


undefined8 FUN__text__00685764(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  lVar1 = *param_1;
  if ((ulong)param_1[3] <= uVar3) {
    uVar2 = param_1[3] * 2;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    lVar1 = FUN__text__00680a20(param_1[1],lVar1,uVar2 << 3);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar3 = param_1[2];
    param_1[3] = uVar2;
    *param_1 = lVar1;
  }
  *(long **)(lVar1 + uVar3 * 8) = param_2;
  *param_2 = param_1[2];
  param_1[2] = param_1[2] + 1;
  FUN__text__006857f8(param_1);
  return 0;
}


