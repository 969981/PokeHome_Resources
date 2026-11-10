/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00609148; name: FUN_.text__00609148
 */


ulong FUN__text__00609148(ulong param_1,uint param_2)

{
  if (((param_1 & 0xffff) != 0) && ((param_2 & 0xfe) != 0x2a)) {
    if (60000 < ((uint)param_1 & 0xffff)) {
      return 0xfffe;
    }
    param_2 = param_2 - 0x2f;
    if ((10 < (param_2 & 0xff)) || ((0x61fU >> (ulong)(param_2 & 0x1f) & 1) == 0)) {
      return 60000;
    }
    param_1 = (ulong)*(ushort *)(*(long *)((long)(char)param_2 * 8 + 0x75a4a8) * 4 + 0x75a446);
  }
  return param_1;
}


