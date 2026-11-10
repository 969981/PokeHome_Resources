/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006029e4; name: FUN_.text__006029e4
 */


ulong FUN__text__006029e4(ulong param_1)

{
  uint uVar1;
  
  if (0xfb < (uint)param_1) {
    uVar1 = (uint)param_1 - 0x115;
    if (0x86 < uVar1) {
      return 0;
    }
    param_1 = (ulong)*(uint *)(&DAT_00759044 + (ulong)uVar1 * 4);
  }
  return param_1;
}


