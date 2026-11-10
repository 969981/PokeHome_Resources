/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8330; name: FUN_.text__003d8330
 */


undefined8 FUN__text__003d8330(long *param_1,char param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    pcVar1 = *(char **)(lVar2 + 0x208);
    if (pcVar1 == *(char **)(lVar2 + 0x210)) {
      (**(code **)(*param_1 + 0x10))();
      pcVar1 = *(char **)(lVar2 + 0x208);
      if (pcVar1 == *(char **)(lVar2 + 0x210)) {
        return 0;
      }
    }
    if (*pcVar1 == param_2) {
      *(char **)(lVar2 + 0x208) = pcVar1 + 1;
      return 1;
    }
  }
  return 0;
}


