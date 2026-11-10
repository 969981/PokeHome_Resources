/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e3fcc; name: FUN_.text__004e3fcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e3fcc(long *param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0x2d63f10c2d63f10c;
  lVar1 = _DAT_008a4bd8;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined2 *)((long)param_1 + 0x16) = 0x20;
  return;
}


