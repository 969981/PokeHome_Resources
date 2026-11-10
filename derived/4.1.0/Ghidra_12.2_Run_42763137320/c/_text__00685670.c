/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685670; name: FUN_.text__00685670
 */


undefined8 FUN__text__00685670(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  char *pcVar2;
  
  if ((*(ushort *)(param_1 + 0xe2) & param_3) == 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x18);
    if (lVar1 != 0) {
      pcVar2 = *(char **)(*(long *)(param_2 + 8) + 0x10);
      do {
        if (*pcVar2 != ' ' && *pcVar2 != '\t') {
          *(ushort *)(param_1 + 0xe2) = *(ushort *)(param_1 + 0xe2) | param_3;
          return 1;
        }
        lVar1 = lVar1 + -1;
        pcVar2 = pcVar2 + 1;
      } while (lVar1 != 0);
    }
  }
  return 0;
}


