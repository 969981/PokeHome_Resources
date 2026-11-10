/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004adb30; name: FUN_.text__004adb30
 */


void FUN__text__004adb30(long *param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  nn::os::LockMutex((MutexType *)&DAT_00aea968);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    iVar6 = (int)((ulong)param_2 >> 0x20);
    uVar3 = (int)param_3 + (int)param_2 + iVar6;
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = uVar3 / uVar4;
    }
    piVar2 = (int *)(*param_1 + (ulong)(uVar3 - uVar5 * uVar4) * 8);
    piVar8 = *(int **)piVar2;
    if (piVar8 != (int *)0x0) {
      piVar7 = (int *)0x0;
      do {
        if (((*piVar8 == (int)param_2) && (piVar8[1] == iVar6)) &&
           (*(long *)(piVar8 + 2) == param_3)) {
          if (piVar7 != (int *)0x0) {
            piVar2 = piVar7 + 4;
          }
          *(undefined8 *)piVar2 = *(undefined8 *)(piVar8 + 4);
          *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          break;
        }
        piVar1 = piVar8 + 4;
        piVar7 = piVar8;
        piVar8 = *(int **)piVar1;
      } while (*(int **)piVar1 != (int *)0x0);
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aea968);
  return;
}


