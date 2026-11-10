/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2c60; name: FUN_.text__002a2c60
 */


char FUN__text__002a2c60(long param_1,uint param_2)

{
  char cVar1;
  
  param_1 = param_1 + (ulong)param_2 * 0xc;
  cVar1 = *(short *)(param_1 + 0x62a) != -1;
  if (*(short *)(param_1 + 0x628) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x62c) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x62e) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x630) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x632) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


