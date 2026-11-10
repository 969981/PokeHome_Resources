/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d718; name: FUN_.text__0068d718
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068d718(long *param_1)

{
  long lVar1;
  
  FUN__text__0068d4f0();
  *(undefined1 *)(param_1 + 6) = 0;
  lVar1 = _DAT_008a6700;
  *(undefined2 *)((long)param_1 + 0x32) = 0;
  param_1[2] = 0;
  param_1[3] = 0x3200000028;
  *param_1 = lVar1 + 0x10;
  param_1[4] = 0x2800000028;
  param_1[5] = 0x228280000000032;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f;
  return;
}


