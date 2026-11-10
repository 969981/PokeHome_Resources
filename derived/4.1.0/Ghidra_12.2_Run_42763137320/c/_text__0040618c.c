/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040618c; name: FUN_.text__0040618c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0040618c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = _DAT_008a4900;
  if (param_1 == (void *)0x0) {
    FUN__text__00405c18(&DAT_00ae96d0);
    return;
  }
  memcpy(_DAT_008a4900,param_1,0xe8);
  if (*(short *)((long)pvVar1 + 0xc4) == 0) {
    *(undefined2 *)((long)pvVar1 + 0xc4) = 4;
  }
  memcpy(param_1,_DAT_008a4900,0xe8);
  return;
}


