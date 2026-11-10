/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ede1c; name: FUN_.text__004ede1c
 */


void FUN__text__004ede1c(long param_1)

{
  undefined4 *in_x4;
  
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = *in_x4;
  FUN__text__004edb70();
  FUN__text__004ecea0(*(undefined8 *)(param_1 + 0x48),param_1);
  return;
}


