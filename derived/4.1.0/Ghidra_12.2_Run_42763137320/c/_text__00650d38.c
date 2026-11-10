/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00650d38; name: FUN_.text__00650d38
 */


void FUN__text__00650d38(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x420) + 0x84);
      if ((uVar1 >> 9 & 1) != 0) {
        return;
      }
      uVar1 = (uVar1 >> 9 ^ 0xffffffff) & 1;
    }
    else {
      uVar1 = 0;
    }
  }
  if (uVar1 != (*(uint *)(param_1 + 0x3fc) & 1)) {
    *(uint *)(param_1 + 0x3fc) = *(uint *)(param_1 + 0x3fc) & 0xfffffffe | uVar1;
  }
  return;
}


