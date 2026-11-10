/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00150340; name: FUN_.text__00150340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00150340(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a0240 + 0x50;
  *param_1 = _DAT_008a0240 + 0x10;
  param_1[9] = lVar1;
  FUN__text__005b4f34(param_1 + 0x19);
  FUN__text__005b4f34(param_1 + 0xb);
  FUN__text__005b5108(param_1);
  return;
}


