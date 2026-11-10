/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ada80; name: FUN_.text__004ada80
 */


int * FUN__text__004ada80(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    iVar4 = (int)((ulong)param_2 >> 0x20);
    uVar1 = (int)param_3 + (int)param_2 + iVar4;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (piVar5 = *(int **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        (piVar5 != (int *)0x0 &&
        (((*piVar5 != (int)param_2 || (piVar5[1] != iVar4)) || (*(long *)(piVar5 + 2) != param_3))))
        ; piVar5 = *(int **)(piVar5 + 4)) {
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
  return piVar5;
}


