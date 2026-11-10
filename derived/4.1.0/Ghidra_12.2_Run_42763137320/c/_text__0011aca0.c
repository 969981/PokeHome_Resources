/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011aca0; name: FUN_.text__0011aca0
 */


uint FUN__text__0011aca0(long param_1)

{
  uint uVar1;
  
  uVar1 = nn::hid::GetNpadStyleSet((uint *)(param_1 + 8));
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    return 3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    return 2;
  }
  if ((uVar1 >> 3 & 1) == 0) {
    return (int)(uVar1 << 0x1b) >> 0x1f & 5;
  }
  return 4;
}


