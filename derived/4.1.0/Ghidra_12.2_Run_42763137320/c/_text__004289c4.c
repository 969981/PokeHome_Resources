/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004289c4; name: FUN_.text__004289c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004289c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  
  lVar1 = _DAT_008a4eb8 + 0x240;
  lVar2 = _DAT_008a4eb8 + 0x300;
  lVar3 = _DAT_008a4eb8 + 0x370;
  *param_1 = _DAT_008a4eb8 + 0x10;
  param_1[5] = lVar1;
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  if (param_1[0x1f] != 0) {
    FUN__text__00400fc0(5);
    param_1[0x1f] = 0;
  }
  plVar4 = (long *)param_1[0x1e];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,_DAT_008a47f0);
    param_1[0x1e] = 0;
  }
  FUN__text__0042c560(param_1 + 0xc);
  lVar1 = _DAT_008a4820;
  param_1[0xd] = _DAT_008a4820 + 0x58;
  pcVar5 = *(code **)(lVar1 + 0x38);
  param_1[0xc] = lVar1 + 0x10;
  (*pcVar5)(param_1 + 0xc);
  if (param_1[0x1b] != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN__text__00400fc0(0);
    param_1[0x1b] = 0;
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
  }
  FUN__text__004335d0(param_1 + 0xd);
  FUN__text__004d8c50(param_1 + 10);
  return;
}


