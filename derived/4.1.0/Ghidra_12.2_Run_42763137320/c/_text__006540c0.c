/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006540c0; name: FUN_.text__006540c0
 */


void FUN__text__006540c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN__text__00656c1c(*param_1 + lVar1,param_1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 < (int)param_1[4]);
  }
  FUN__text__006783e4(*param_1);
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


