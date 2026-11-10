/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1bc0; name: FUN_.text__004a1bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a1bc0(undefined4 *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  piVar1 = param_1 + 0x18;
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (0 < iVar2 + -1) {
    nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
    return;
  }
  if (*(long *)(param_1 + 6) != 0) {
    FUN__text__00400fc0(((*(byte *)(param_1 + 0x1a) & 8) >> 3) << 0x1e | 0x20000003);
    *(undefined8 *)(param_1 + 6) = 0;
  }
  plVar6 = _DAT_008a4630;
  FUN__text__004a1d10(*_DAT_008a4630,param_1);
  iVar2 = param_1[0x19];
  nn::os::UnlockMutex(_DAT_008a46d0);
  if (iVar2 < 1) {
    if (((param_2 & 1) == 0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
      lVar10 = *plVar6;
      uVar3 = *param_1;
      uVar8 = *(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)(param_1 + 0x12);
      *(undefined4 *)(lVar10 + 0xf4) = 1;
      FUN__text__004adfa4(lVar10 + 0xf8,lVar7,uVar3,uVar8,1,uVar9);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN__text__004a1b7c(param_1);
    FUN__text__00400fc0(0,param_1);
    return;
  }
  if (((param_2 & 1) == 0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
    lVar10 = *plVar6;
    uVar3 = *param_1;
    uVar8 = *(undefined8 *)(param_1 + 2);
    uVar9 = *(undefined8 *)(param_1 + 0x12);
    *(undefined4 *)(lVar10 + 0xf4) = 1;
    FUN__text__004adfa4(lVar10 + 0xf8,lVar7,uVar3,uVar8,1,uVar9);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


