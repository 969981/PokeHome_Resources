/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f6870; name: FUN_.text__004f6870
 */


undefined8 FUN__text__004f6870(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x118) - 1;
  if (uVar1 == *(uint *)(param_1 + 0x100)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + (ulong)uVar1 * 8);
}


