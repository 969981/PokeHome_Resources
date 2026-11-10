/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a126c; name: FUN_.text__004a126c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a126c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = _DAT_008a4578 + 0x10;
  lVar2 = _DAT_008a4578 + 0x2b0;
  lVar3 = _DAT_008a4578 + 0x308;
  param_1[2] = _DAT_008a4578 + 0x2c8;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[5] = lVar3;
  if ((long *)param_1[0x1f] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((long *)param_1[0x1f] != param_1 + 0x1e) {
      FUN__text__00400fc0(0);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  FUN__text__0049392c(param_1);
  return;
}


