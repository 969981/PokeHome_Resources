/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00429c68; name: FUN_.text__00429c68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00429c68(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = _DAT_008a4800 + 0x58;
  *param_1 = _DAT_008a4800 + 0x10;
  param_1[3] = lVar1;
  FUN__text__004323e0(param_1 + 10);
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN__text__00400fc0(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN__text__00400fc0(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  plVar2 = (long *)param_1[7];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,_DAT_008a47e8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe));
  FUN__text__00432310(param_1 + 10);
  FUN__text__0042d040(param_1 + 3);
  FUN__text__0042ce74(param_1);
  return;
}


