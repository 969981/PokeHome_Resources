/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048d040; name: FUN_.text__0048d040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0048d040(long *param_1,uint param_2,long *param_3)

{
  long *plVar1;
  MutexType *pMVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  long local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  long local_58;
  long lStack_50;
  uint local_48;
  undefined4 uStack_44;
  
  if (((int)param_3[3] != 0) || ((int)param_3[4] != 0)) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    return;
  }
  if (param_3[2] != 0) {
    *(undefined4 *)(param_3 + 3) = 0;
    FUN__text__00400fc0(0);
    param_3[2] = 0;
    *(undefined4 *)((long)param_3 + 0x1c) = 0;
  }
  uVar11 = *(uint *)(param_3 + 0xc);
  if ((uVar11 >> 0x16 & 1) != 0) {
    FUN__text__0048eb20(*_DAT_008a4638,param_2);
    uVar11 = *(uint *)(param_3 + 0xc);
  }
  lStack_50 = param_3[5];
  pcVar3 = (code *)param_3[10];
  local_58 = param_3[0xb];
  uStack_44 = *(undefined4 *)((long)param_3 + 0x24);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = param_2 / uVar4;
    }
    plVar1 = (long *)(*param_1 + (ulong)(param_2 - uVar7 * uVar4) * 8);
    lVar8 = *plVar1;
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x4c) == param_2) {
        lVar9 = 0;
      }
      else {
        do {
          lVar9 = lVar8;
          lVar8 = *(long *)(lVar9 + 0x68);
          if (lVar8 == 0) goto LAB__text__0048d14c;
        } while (*(uint *)(lVar8 + 0x4c) != param_2);
      }
      if (lVar9 != 0) {
        plVar1 = (long *)(lVar9 + 0x68);
      }
      *plVar1 = *(long *)(lVar8 + 0x68);
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
  }
LAB__text__0048d14c:
  local_60 = 0;
  local_70 = 0xff;
  local_68 = 0xff;
  local_80 = *(undefined4 *)((long)param_3 + 0x4c);
  local_78 = 0;
  local_88 = param_3[6];
  local_48 = param_2;
  FUN__text__0043d9f0(param_3,&local_88);
  puVar10 = (undefined8 *)param_3[6];
  if (puVar10 != (undefined8 *)0x0) {
    iVar5 = *(int *)(puVar10 + 0xc);
    iVar6 = iVar5 + -1;
    *(int *)(puVar10 + 0xc) = iVar6;
    if (((iVar6 == 0) ||
        (((iVar6 == 1 && (iVar5 != 0 || *(char *)((long)puVar10 + 100) == '\0')) &&
         (*(char *)((long)puVar10 + 100) != '\0')))) &&
       (FUN__text__004473f0(puVar10), *(int *)(puVar10 + 0xc) == 0)) {
      (**(code **)*puVar10)(puVar10);
      FUN__text__00400fc0(4,puVar10);
    }
  }
  if (param_3[7] != 0) {
    FUN__text__0040c060();
  }
  if (*param_3 != 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_3 = 0;
    *(undefined4 *)((long)param_3 + 0xc) = 0;
  }
  FUN__text__00400fc0(0,param_3);
  if ((uVar11 & 1) == 0) {
    nn::os::UnlockMutex((MutexType *)(param_1 + 3));
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  param_1[0xc] = lVar8;
  nn::os::ClearEvent((EventType *)(param_1 + 7));
  pMVar2 = (MutexType *)(param_1 + 3);
  nn::os::UnlockMutex(pMVar2);
  (*pcVar3)(1,&local_58);
  nn::os::LockMutex(pMVar2);
  param_1[0xc] = 0;
  nn::os::UnlockMutex(pMVar2);
  nn::os::SignalEvent((EventType *)(param_1 + 7));
  return;
}


