/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d4ec4; name: FUN_.text__002d4ec4
 */


void FUN__text__002d4ec4(void *param_1,long param_2,ushort param_3)

{
  undefined *__src;
  
  if (0x4b9 < param_3) {
    memcpy(param_1,&DAT_008e53b8,0x84);
    return;
  }
  __src = &DAT_008e53b8;
  if (*(long *)(param_2 + 0x60) != 0) {
    __src = (undefined *)(*(long *)(param_2 + 0x60) + (ulong)param_3 * 0x84);
  }
  memcpy(param_1,__src,0x84);
  return;
}


