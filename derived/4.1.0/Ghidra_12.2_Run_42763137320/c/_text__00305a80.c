/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305a80; name: FUN_.text__00305a80
 */


uint FUN__text__00305a80(long param_1,uint param_2)

{
  char *pcVar1;
  
  if (param_2 >> 3 < 0x465) {
    pcVar1 = (char *)(param_1 + (ulong)param_2 * 0x3a0 + 0x30);
    do {
      if (*pcVar1 == '\0') {
        return param_2;
      }
      param_2 = param_2 + 1;
      pcVar1 = pcVar1 + 0x3a0;
    } while (param_2 != 9000);
  }
  return 9000;
}


