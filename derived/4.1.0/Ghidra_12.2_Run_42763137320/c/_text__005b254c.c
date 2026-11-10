/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b254c; name: FUN_.text__005b254c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b254c(long param_1,undefined8 param_2)

{
  FUN__text__006f2c6c(param_2,param_1 + 0xe0);
  if (*(char *)(param_1 + 0x899) == '\0') {
    *(undefined1 *)(param_1 + 0x899) = 1;
    return;
  }
  FUN__text__006f5690(param_1 + (long)*_DAT_008a0300 * 0x58 + 0x7c8,1000000000);
  return;
}


