/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e3628; name: FUN_.text__002e3628
 */


char FUN__text__002e3628(long param_1,uint param_2)

{
  char cVar1;
  
  param_1 = param_1 + (ulong)param_2 * 0xc;
  cVar1 = *(short *)(param_1 + 0x56e) != -1;
  if (*(short *)(param_1 + 0x56c) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x570) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x572) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x574) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x576) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


