/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003628e8; name: FUN_.text__003628e8
 */


bool FUN__text__003628e8(long param_1)

{
  if (((((*(long *)(param_1 + 0x68) == 0) || (*(char *)(*(long *)(param_1 + 0x68) + 0x170) == '\0'))
       || (*(long *)(param_1 + 0x178) == 0)) ||
      (((*(char *)(*(long *)(param_1 + 0x178) + 0x170) == '\0' || (*(long *)(param_1 + 0x288) == 0))
       || ((*(char *)(*(long *)(param_1 + 0x288) + 0x170) == '\0' ||
           ((*(long *)(param_1 + 0x398) == 0 ||
            (*(char *)(*(long *)(param_1 + 0x398) + 0x170) == '\0')))))))) ||
     ((*(long *)(param_1 + 0x4a8) == 0 ||
      (((((*(char *)(*(long *)(param_1 + 0x4a8) + 0x170) == '\0' ||
          (*(long *)(param_1 + 0x5b8) == 0)) ||
         (*(char *)(*(long *)(param_1 + 0x5b8) + 0x170) == '\0')) ||
        ((*(long *)(param_1 + 0x6c8) == 0 || (*(char *)(*(long *)(param_1 + 0x6c8) + 0x170) == '\0')
         ))) || (*(long *)(param_1 + 0x7d8) == 0)))))) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x7d8) + 0x170) != '\0';
}


