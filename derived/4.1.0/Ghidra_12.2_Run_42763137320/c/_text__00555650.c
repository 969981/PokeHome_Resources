/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00555650; name: FUN_.text__00555650
 */


void FUN__text__00555650(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,*(long *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


