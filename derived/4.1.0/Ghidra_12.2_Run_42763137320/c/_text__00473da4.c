/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473da4; name: FUN_.text__00473da4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00473da4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_008a4a60 + 0x10;
  lVar2 = _DAT_008a4a60 + 0xf8;
  lVar3 = _DAT_008a4a60 + 0x1e0;
  param_1[3] = _DAT_008a4a60 + 0x110;
  *param_1 = lVar1;
  param_1[2] = lVar2;
  param_1[0x10] = lVar3;
  if ((long *)param_1[0x6e] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x6f) = 0;
    if ((long *)param_1[0x6e] != param_1 + 0x6d) {
      FUN__text__00400fc0(0);
    }
    param_1[0x6e] = 0;
    *(undefined4 *)((long)param_1 + 0x37c) = 0;
  }
  if (*(long *)((long)param_1 + 0x26c) != 0) {
    FUN__text__0040c060();
  }
  if (param_1[0x46] != 0) {
    *(undefined4 *)(param_1 + 0x47) = 0;
    FUN__text__00400fc0(0);
    param_1[0x46] = 0;
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  }
  FUN__text__00477740(param_1 + 3);
  return;
}


