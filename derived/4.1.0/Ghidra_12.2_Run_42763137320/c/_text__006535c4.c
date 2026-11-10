/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006535c4; name: FUN_.text__006535c4
 */


char * FUN__text__006535c4(char *param_1,char param_2,long param_3)

{
  char *pcVar1;
  
  if ((param_3 != 0) && (-1 < param_3 + -1)) {
    pcVar1 = param_1 + param_3 + -1;
    do {
      if (*pcVar1 == param_2) {
        return pcVar1;
      }
      pcVar1 = pcVar1 + -1;
    } while (param_1 <= pcVar1);
  }
  return (char *)0x0;
}


