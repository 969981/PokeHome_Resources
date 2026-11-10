/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00297150; name: FUN_.text__00297150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00297150(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = _DAT_008a2048 + 0x10;
  lVar2 = _DAT_008a2048 + 0xb8;
  param_1[9] = _DAT_008a2048 + 0x78;
  param_1[10] = lVar2;
  pcVar3 = (code *)param_1[0x11];
  *param_1 = lVar1;
  if (pcVar3 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar3)(param_1 + 0x14);
  }
  FUN__text__001256f4(param_1);
  return;
}


