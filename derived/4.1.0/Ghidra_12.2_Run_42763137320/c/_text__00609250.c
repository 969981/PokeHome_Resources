/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00609250; name: FUN_.text__00609250
 */


ulong FUN__text__00609250(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 0x2d) {
    param_2 = param_2 & 0xffff;
    if (param_2 == 0xea5a) {
      lVar2 = 6;
    }
    else if (param_2 == 0xea5c) {
      lVar2 = 4;
    }
    else {
      if (param_2 != 0xea5e) {
        return param_1;
      }
      lVar2 = 2;
    }
  }
  else {
    if (uVar1 != 0x2c) {
      return param_1;
    }
    param_2 = param_2 + 0x15a5;
    if ((5 < (param_2 & 0xffff)) || ((0x35U >> (ulong)(param_2 & 0x1f) & 1) == 0)) {
      return 0x2c;
    }
    lVar2 = *(long *)((long)(short)param_2 * 8 + 0x75a500);
  }
  return (ulong)*(byte *)(lVar2 * 4 + 0x75a444);
}


