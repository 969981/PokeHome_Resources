/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f860; name: FUN_.text__0019f860
 */


bool FUN__text__0019f860(long param_1)

{
  return ((*(char *)(*(long *)(param_1 + 0x88) + 0x5b88) != '\0' ||
          *(char *)(*(long *)(param_1 + 0x68) + 0x5b88) != '\0') ||
         ((*(char *)(*(long *)(param_1 + 0xa8) + 0x587c) != '\0' ||
          *(char *)(*(long *)(param_1 + 200) + 0x587c) != '\0') ||
         *(char *)(*(long *)(param_1 + 0x68) + 0x5b89) != '\0')) ||
         *(char *)(*(long *)(param_1 + 0x88) + 0x5b89) != '\0';
}


