/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebfd0; name: FUN_.text__006ebfd0
 */


undefined4 FUN__text__006ebfd0(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 - 0x1a < 0x22) {
    return *(undefined4 *)((long)(int)(param_1 - 0x1a) * 4 + 0x77eb38);
  }
  if ((int)param_1 < 3) {
    return 1;
  }
  if (param_1 < 0xb) {
    return 2;
  }
  if (param_1 < 0x15) {
    return 4;
  }
  if (param_1 < 0x18) {
    return 8;
  }
  uVar1 = 0xc;
  if (param_1 != 0x18) {
    uVar1 = 0x10;
  }
  return uVar1;
}


