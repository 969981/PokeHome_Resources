/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5480; name: FUN_.text__005d5480
 */


void FUN__text__005d5480(long param_1)

{
  undefined8 local_8;
  
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    thunk_FUN__text__005cf1b0(&local_8,param_1 + 0x180);
    if (*(long *)(param_1 + 0x178) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x178) = local_8;
  }
  return;
}


