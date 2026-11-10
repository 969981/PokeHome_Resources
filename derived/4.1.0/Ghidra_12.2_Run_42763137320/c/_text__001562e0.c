/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001562e0; name: FUN_.text__001562e0
 */


bool FUN__text__001562e0(long *param_1,uint *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == (uint *)0x0) {
    return true;
  }
  uVar4 = (long)param_2 - *param_1;
  if ((uVar4 & 3) != 0) {
    return false;
  }
  uVar3 = param_1[1];
  bVar2 = false;
  if ((4 < uVar3) && (uVar4 <= uVar3 - 4)) {
    if (0x1ffffffe < *param_2) {
      return false;
    }
    uVar1 = (ulong)*param_2 * 4 + 4;
    bVar2 = uVar1 < uVar3 && uVar4 <= uVar3 - uVar1;
  }
  return bVar2;
}


