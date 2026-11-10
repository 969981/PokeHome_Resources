/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4e94; name: FUN_.text__002d4e94
 */


void FUN__text__002d4e94(long param_1,ushort param_2,void *param_3)

{
  if (param_2 < 0x4ba) {
    memcpy((void *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x84),param_3,0x82);
    return;
  }
  return;
}


