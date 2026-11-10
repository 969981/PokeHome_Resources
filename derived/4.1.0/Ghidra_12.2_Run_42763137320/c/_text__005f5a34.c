/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5a34; name: FUN_.text__005f5a34
 */


long FUN__text__005f5a34(ulong *param_1)

{
  long lVar1;
  
  lVar1 = *param_1 + 0x18;
  if (*param_1 < 0x11) {
    lVar1 = 0x28;
  }
  if ((*(byte *)((long)param_1 + 0xc) & 4) != 0) {
    lVar1 = 0;
  }
  return (long)param_1 + lVar1;
}


