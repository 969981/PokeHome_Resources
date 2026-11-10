/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004975c0; name: FUN_.text__004975c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004975c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[6];
  lVar1 = _DAT_008a4920 + 0x10;
  param_1[3] = _DAT_008a4920 + 0x50;
  *param_1 = lVar1;
  lVar1 = lVar2;
  if ((int)param_1[7] != 0) {
    do {
      FUN__text__00497678(*(undefined8 *)(lVar2 + 8),param_1);
      if (*(long *)(lVar2 + 8) != 0) {
        FUN__text__00400fc0(0x10);
      }
      lVar2 = lVar2 + 0x10;
      lVar1 = param_1[6];
    } while (lVar2 != param_1[6] + (ulong)*(uint *)(param_1 + 7) * 0x10);
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(0,lVar1);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
  }
  FUN__text__004323e0(param_1 + 4);
  FUN__text__00432310(param_1 + 4);
  FUN__text__0042ce74(param_1);
  return;
}


