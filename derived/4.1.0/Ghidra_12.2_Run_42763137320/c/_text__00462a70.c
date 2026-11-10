/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462a70; name: FUN_.text__00462a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00462a70(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_008a4708 + 0x10;
  lVar2 = _DAT_008a4708 + 0x298;
  lVar3 = _DAT_008a4708 + 0x2f0;
  param_1[2] = _DAT_008a4708 + 0x2b0;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[5] = lVar3;
  if ((long *)param_1[0x1c] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if ((long *)param_1[0x1c] != param_1 + 0x1b) {
      FUN__text__00400fc0(0);
    }
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  FUN__text__00463c74(param_1);
  return;
}


