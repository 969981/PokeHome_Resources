/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602a78; name: FUN_.text__00602a78
 */


uint FUN__text__00602a78(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 0xffff;
  if (0xfb < param_1) {
    if (0x86 < param_1 - 0x115) {
      return 0;
    }
    param_1 = *(uint *)(&DAT_00759044 + (ulong)(param_1 - 0x115) * 4);
  }
  if (param_1 != 0x182) {
    if (param_1 == 0xc9) {
      return (param_2 & 3 | (param_2 >> 0x10 & 3) << 4 | param_2 >> 0x12 & 0xc0 | param_2 >> 6 & 0xc
             ) % 0x1c;
    }
    return 0;
  }
  uVar1 = (uint)(param_3 == 1) << 1;
  if (param_3 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


