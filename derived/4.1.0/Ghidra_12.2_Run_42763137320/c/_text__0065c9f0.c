/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c9f0; name: FUN_.text__0065c9f0
 */


undefined8 FUN__text__0065c9f0(long *param_1)

{
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((char)param_1[0x3c] == '\0') {
    FUN__text__0065afa0();
    return 0;
  }
  return 8;
}


