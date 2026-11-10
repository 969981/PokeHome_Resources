/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035d3c4; name: FUN_.text__0035d3c4
 */


char FUN__text__0035d3c4(long param_1,uint param_2)

{
  char cVar1;
  
  param_1 = param_1 + (ulong)param_2 * 0xc;
  cVar1 = *(short *)(param_1 + 0x526) != -1;
  if (*(short *)(param_1 + 0x524) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x528) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52a) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52c) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  if (*(short *)(param_1 + 0x52e) != -1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


