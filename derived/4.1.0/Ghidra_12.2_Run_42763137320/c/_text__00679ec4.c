/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679ec4; name: FUN_.text__00679ec4
 */


void FUN__text__00679ec4(long param_1)

{
  undefined4 uVar1;
  
  if ((int)*(uint *)(param_1 + 4) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(uint *)(param_1 + 4) < 0x101) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


