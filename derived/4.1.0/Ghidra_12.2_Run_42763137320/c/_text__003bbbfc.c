/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003bbbfc; name: FUN_.text__003bbbfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003bbbfc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN__text__003a1c8c();
  lVar1 = _DAT_008a34c8 + 0x140;
  lVar2 = _DAT_008a34c8 + 0x180;
  *param_1 = _DAT_008a34c8 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  memset(param_1 + 0x50,0,0x281);
  return;
}


