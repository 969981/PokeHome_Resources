/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068c768; name: FUN_.text__0068c768
 */


bool FUN__text__0068c768(long param_1)

{
  short sVar1;
  
  sVar1 = FUN__text__0068c7d0();
  if (sVar1 != -1) {
    if (*(char *)(param_1 + 0x104) == '\0') {
      *(short *)(*(long *)(param_1 + 0x20) + 6) = sVar1;
      return sVar1 != -1;
    }
    *(short *)(*(long *)(param_1 + 0x20) + 0x1c) = sVar1;
  }
  return sVar1 != -1;
}


