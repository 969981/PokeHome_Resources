/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001561cc; name: FUN_.text__001561cc
 */


bool FUN__text__001561cc(int *param_1,long *param_2,ushort param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(ushort *)((long)param_1 - (long)*param_1) <= param_3) ||
     (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)param_3), uVar2 == 0)) {
    return true;
  }
  uVar2 = (long)param_1 + (uVar2 - *param_2);
  if ((uVar2 & 3) == 0) {
    uVar3 = param_2[1];
    if (uVar3 < 5) {
      return false;
    }
    if (uVar3 - 4 < uVar2) {
      return false;
    }
    uVar1 = *(uint *)(*param_2 + uVar2);
    if (-1 < (int)uVar1) {
      return uVar1 != 0 && uVar2 + uVar1 <= uVar3 - 1;
    }
  }
  return false;
}


