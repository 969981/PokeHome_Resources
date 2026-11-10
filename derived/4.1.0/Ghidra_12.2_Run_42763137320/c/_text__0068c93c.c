/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068c93c; name: FUN_.text__0068c93c
 */


ulong FUN__text__0068c93c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)((long)param_1 + 0x104) == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x88))();
    return (ulong)(uVar1 >> 0x10 & 0xff);
  }
  uVar2 = (**(code **)(*param_1 + 0x90))();
  return uVar2 >> 0x20 & 0xffff;
}


