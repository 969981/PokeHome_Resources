/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462d18; name: FUN_.text__00462d18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00462d18(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_008a4708;
  lVar1 = _DAT_008a4708 + 0x298;
  param_1[-2] = _DAT_008a4708 + 0x10;
  param_1[3] = lVar2 + 0x2f0;
  param_1[-1] = lVar1;
  *param_1 = lVar2 + 0x2b0;
  if ((long *)param_1[0x1a] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    if ((long *)param_1[0x1a] != param_1 + 0x19) {
      FUN__text__00400fc0(0);
    }
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  }
  FUN__text__00463c74(param_1 + -2);
  return;
}


