/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd4a0; name: FUN_.text__004bd4a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004bd4a0(long param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  void *pvVar7;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    iVar4 = 0;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    puVar1 = _DAT_008a45d8;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x20);
      while (iVar4 != 0) {
        piVar6 = *(int **)(param_1 + 0x18);
        *param_3 = *(undefined8 *)(piVar6 + 2);
        iVar4 = *piVar6;
        if (iVar4 != 0) {
          if (*(long *)(param_1 + 0xa0) != 0) {
            FUN__text__0040c060();
            iVar4 = *piVar6;
          }
          *(int *)(param_1 + 0x90) = iVar4;
          *(int *)(param_1 + 0x94) = piVar6[1];
          *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(piVar6 + 2);
          piVar5 = *(int **)(piVar6 + 4);
          *(int **)(param_1 + 0xa0) = piVar5;
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + 1;
          }
          *param_2 = piVar6[1];
          pvVar7 = *(void **)(param_1 + 0x18);
          FUN__text__004be9b0(pvVar7);
          uVar3 = *(uint *)(param_1 + 0x20);
          if (1 < uVar3) {
            memmove(pvVar7,(void *)((long)pvVar7 + 0x18),(ulong)(uVar3 * 0x18 - 0x18));
            uVar3 = *(uint *)(param_1 + 0x20);
          }
          *(uint *)(param_1 + 0x20) = uVar3 - 1;
          break;
        }
        pvVar7 = *(void **)(param_1 + 0x18);
        FUN__text__004be9b0(pvVar7);
        uVar3 = *(uint *)(param_1 + 0x20);
        if (1 < uVar3) {
          memmove(pvVar7,(void *)((long)pvVar7 + 0x18),(ulong)(uVar3 * 0x18 - 0x18));
          uVar3 = *(uint *)(param_1 + 0x20);
        }
        uVar2 = *puVar1;
        *(uint *)(param_1 + 0x20) = uVar3 - 1;
        FUN__text__0048d2a0(uVar2,*(undefined4 *)(param_1 + 0x6c),0,*param_3);
        iVar4 = *(int *)(param_1 + 0x20);
      }
      iVar4 = *(int *)(param_1 + 0x90);
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 2;
      }
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return iVar4;
}


