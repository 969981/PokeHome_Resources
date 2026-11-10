/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00609210; name: FUN_.text__00609210
 */


ulong FUN__text__00609210(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 - 0x2f;
  if (((uVar1 & 0xff) < 0xb) && ((0x61fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    param_1 = (ulong)*(byte *)(*(long *)((long)(char)uVar1 * 8 + 0x75a4a8) * 4 + 0x75a445);
  }
  return param_1;
}


