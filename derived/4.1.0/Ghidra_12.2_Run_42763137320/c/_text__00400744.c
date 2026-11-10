/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00400744; name: FUN_.text__00400744
 */


long FUN__text__00400744(long *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4,
                        uint param_5)

{
  MutexType *pMVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_54;
  
  pMVar1 = (MutexType *)(param_1 + 5);
  *param_2 = param_1[4];
  *param_3 = 0;
  *param_4 = 0;
  nn::os::LockMutex(pMVar1);
  lVar7 = 0;
  if ((char)param_1[0xd] == '\0') {
    nn::os::LockMutex(pMVar1);
    cVar3 = *(char *)((long)param_1 + 0x6c);
    nn::os::UnlockMutex(pMVar1);
    if ((cVar3 != '\0') && (param_1[0x19] == 0)) {
      uVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
      uVar8 = (ulong)*(uint *)((long)param_1 + 0x94);
      if (*(uint *)(param_1 + 0x12) <= uVar5 && (ulong)*(uint *)(param_1 + 0x12) != 0) {
        uVar5 = (ulong)*(uint *)((long)param_1 + 0x8c);
      }
      uVar2 = uVar5 + uVar8;
      uVar9 = *(ulong *)param_1[4];
      iVar6 = (int)uVar5;
      if (uVar9 < uVar2) {
        if (uVar5 < uVar9) {
          uVar8 = (ulong)(uint)((int)uVar9 - iVar6);
        }
        else {
          uVar8 = 0;
        }
      }
      local_54 = (uint)uVar8;
      if (*(char *)((long)param_1 + 0x6b) != '\0') {
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        local_54 = uVar4 - iVar6;
        if (uVar5 + uVar8 <= (ulong)uVar4) {
          local_54 = (uint)uVar8;
        }
      }
      if (local_54 != 0) {
        uVar4 = *(uint *)((long)param_1 + 0x9c);
        if (local_54 <= *(uint *)((long)param_1 + 0x9c)) {
          uVar4 = local_54;
        }
        lVar7 = FUN__text__0040007c(param_1[10],param_1,(int)param_1[0x10],uVar5,uVar4,
                                    (int)param_1[0x14],uVar9 < uVar2,param_5 & 1,&local_54,param_3);
        if (lVar7 != 0) {
          uVar4 = *(uint *)(param_1 + 0x12);
          param_1[0x19] = lVar7;
          if ((uVar5 < uVar4) && ((ulong)uVar4 < uVar5 + local_54)) {
            local_54 = uVar4 - iVar6;
          }
          *(uint *)(param_1 + 0x13) = (int)param_1[0x13] + local_54;
          FUN__text__003fc6a8(param_1);
          param_1[9] = *(long *)(param_1[10] + 0x270);
        }
        goto LAB__text__004007b8;
      }
    }
    lVar7 = 0;
  }
LAB__text__004007b8:
  nn::os::UnlockMutex(pMVar1);
  return lVar7;
}


