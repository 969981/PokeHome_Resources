/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae480; name: FUN_.text__004ae480
 */


undefined8 FUN__text__004ae480(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\0') {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 9) = 0x4483126f;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((long)param_1 + 0x4c) = 0x32;
    param_1[2] = 0;
    param_1[3] = 0;
    return 1;
  }
  return 3;
}


