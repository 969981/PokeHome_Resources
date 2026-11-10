/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011ac24; name: FUN_.text__0011ac24
 */


void FUN__text__0011ac24(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = nn::hid::GetNpadStyleSet((uint *)(param_1 + 8));
  uVar1 = 4;
  if ((uVar3 & 8) == 0) {
    uVar1 = (int)(uVar3 << 0x1b) >> 0x1f & 5;
  }
  uVar2 = 2;
  if ((uVar3 & 2) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = 3;
  if ((uVar3 & 4) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (*(uint *)(param_1 + 0x3c) == uVar2) {
    return;
  }
  FUN__text__0011ad04(param_1);
  return;
}


