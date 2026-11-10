/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4b20; name: FUN_.text__005e4b20
 */


void FUN__text__005e4b20(long param_1,long param_2)

{
  MultiWaitHolderType *pMVar1;
  long lVar2;
  long lVar3;
  MultiWaitHolderType *pMVar4;
  MultiWaitHolderType *pMVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  MultiWaitHolderType local_48;
  
  pMVar1 = *(MultiWaitHolderType **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  pMVar4 = pMVar1 + lVar2 * 0x50;
  pMVar5 = pMVar1;
  if (lVar2 == 0) {
LAB__text__005e4b7c:
    if (pMVar5 != pMVar4) {
      local_50 = param_2;
      if (param_2 != 0) {
        (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
      }
      local_48 = (MultiWaitHolderType)0x0;
      nn::os::InitializeMultiWaitHolder
                ((MultiWaitHolderType *)&local_90,(EventType *)(param_2 + 0x60));
      nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90,(ulong)&local_90);
      *(undefined8 *)(pMVar5 + 0x10) = local_80;
      *(undefined8 *)(pMVar5 + 0x18) = uStack_78;
      *(undefined8 *)pMVar5 = local_90;
      *(undefined8 *)(pMVar5 + 8) = uStack_88;
      *(undefined8 *)(pMVar5 + 0x30) = local_60;
      *(undefined8 *)(pMVar5 + 0x38) = uStack_58;
      *(undefined8 *)(pMVar5 + 0x20) = local_70;
      *(undefined8 *)(pMVar5 + 0x28) = uStack_68;
      if (*(long *)(pMVar5 + 0x40) != 0) {
        (**(code **)(*(long *)(*(long *)(pMVar5 + 0x40) + 0x48) + 0x18))();
        *(undefined8 *)(pMVar5 + 0x40) = 0;
      }
      lVar2 = local_50;
      local_50 = 0;
      *(long *)(pMVar5 + 0x40) = lVar2;
      pMVar5[0x48] = local_48;
      lVar2 = nn::os::GetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90);
      if (lVar2 != 0) {
        nn::os::SetMultiWaitHolderUserData((MultiWaitHolderType *)&local_90,0);
        nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)&local_90);
        lVar2 = local_50;
        local_50 = 0;
        if (lVar2 == 0) {
          return;
        }
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      return;
    }
  }
  else {
    lVar3 = lVar2 * 0x50;
    do {
      if (*(long *)(pMVar5 + 0x40) == 0) goto LAB__text__005e4b7c;
      pMVar5 = pMVar5 + 0x50;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  *(long *)(pMVar1 + lVar2 * 0x50 + 0x40) = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  pMVar1[lVar2 * 0x50 + 0x48] = (MultiWaitHolderType)0x0;
  nn::os::InitializeMultiWaitHolder(pMVar4,(EventType *)(param_2 + 0x60));
  nn::os::SetMultiWaitHolderUserData(pMVar4,(ulong)pMVar4);
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
  return;
}


