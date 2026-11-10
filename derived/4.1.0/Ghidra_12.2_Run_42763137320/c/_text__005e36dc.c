/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e36dc; name: FUN_.text__005e36dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e36dc(long *param_1,long *param_2)

{
  MultiWaitType *pMVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ThreadType *pTVar5;
  long *plVar6;
  long *local_58;
  undefined1 uStack_31;
  
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  pMVar1 = (MultiWaitType *)(param_1 + 10);
  *(undefined1 *)((long)param_1 + 0x4a) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (((uVar2 == 0) || (*(long *)(uVar2 + 0x98) == 0)) ||
     (plVar3 = *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10), plVar3 == (long *)0x0)) {
    plVar3 = (long *)FUN__text__005f52b0();
  }
  param_1[0x10] = (long)plVar3;
  param_1[0x11] = 0;
  param_1[0x13] = 3;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0xf0,8);
  if (lVar4 == 0) {
    (**(code **)(*(long *)param_1[0x10] + 0xb8))();
    param_1[0x15] = 0;
    nn::os::InitializeMultiWait(pMVar1);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x17] = 0;
    if (uVar2 != 0) goto LAB__text__005e37dc;
LAB__text__005e3808:
    lVar4 = FUN__text__005f52b0();
    param_1[0x1d] = 0;
    param_1[0x1a] = lVar4;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    if (uVar2 != 0) goto LAB__text__005e3824;
LAB__text__005e3850:
    lVar4 = FUN__text__005f52b0();
    param_1[0x20] = lVar4;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    if (uVar2 != 0) goto LAB__text__005e386c;
LAB__text__005e3880:
    lVar4 = FUN__text__005f52b0();
  }
  else {
    param_1[0x15] = lVar4;
    nn::os::InitializeMultiWait(pMVar1);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x17] = 0;
    if (uVar2 == 0) goto LAB__text__005e3808;
LAB__text__005e37dc:
    if ((*(long *)(uVar2 + 0x98) == 0) ||
       (lVar4 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10), lVar4 == 0))
    goto LAB__text__005e3808;
    param_1[0x1d] = 0;
    param_1[0x1a] = lVar4;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
LAB__text__005e3824:
    if ((*(long *)(uVar2 + 0x98) == 0) ||
       (lVar4 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10), lVar4 == 0))
    goto LAB__text__005e3850;
    param_1[0x20] = lVar4;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
LAB__text__005e386c:
    if ((*(long *)(uVar2 + 0x98) == 0) ||
       (lVar4 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10), lVar4 == 0))
    goto LAB__text__005e3880;
  }
  param_1[0x26] = lVar4;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar4 = *param_2;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = lVar4;
  param_1[0x2a] = 3;
  lVar4 = param_2[1];
  *(char *)((long)param_1 + 0x159) = (char)lVar4;
  plVar3 = _DAT_0089f7d0;
  if ((char)lVar4 == '\0') {
    if (*(long *)(uVar2 + 0x98) == 0x10) goto LAB__text__005e3c78;
    plVar6 = *(long **)(*_DAT_0089f7d0 + 0x28);
    *(long **)(uVar2 + 0x18 + *(long *)(uVar2 + 0x98) * 8) = plVar6;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x400,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN__text__005e568c(lVar4,0,param_1,param_1[0x29],plVar6);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x400;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    }
    param_1[2] = lVar4;
    FUN__text__005e896c(lVar4,0x7175d1,0,0x10);
    FUN__text__005e4b20(pMVar1,*(undefined8 *)(param_1[2] + 0x3c8));
    lVar4 = *(long *)(uVar2 + 0x98);
  }
  else {
    pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
    nn::os::SetThreadCoreMask(pTVar5,0,1);
    if (*(long *)(uVar2 + 0x98) == 0x10) goto LAB__text__005e3c78;
    plVar6 = *(long **)(*plVar3 + 0x28);
    *(long **)(uVar2 + 0x18 + *(long *)(uVar2 + 0x98) * 8) = plVar6;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x400,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN__text__005e550c(lVar4,param_1,plVar6);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x400;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    }
    param_1[2] = lVar4;
    lVar4 = *(long *)(uVar2 + 0x98);
  }
  if (lVar4 != 0x10) {
    plVar6 = *(long **)(*plVar3 + 0x28);
    *(long **)(uVar2 + 0x18 + lVar4 * 8) = plVar6;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x400,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN__text__005e568c(lVar4,1,param_1,param_1[0x29],plVar6);
    *(long **)(lVar4 + 8) = plVar6;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x400;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    }
    param_1[3] = lVar4;
    FUN__text__005e896c(lVar4,0x70ddc2,1,0x10);
    FUN__text__005e4b20(pMVar1,*(undefined8 *)(param_1[3] + 0x3c8));
    if (*(long *)(uVar2 + 0x98) != 0x10) {
      plVar6 = *(long **)(*plVar3 + 0x28);
      *(long **)(uVar2 + 0x18 + *(long *)(uVar2 + 0x98) * 8) = plVar6;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
      lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x400,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN__text__005e568c(lVar4,2,param_1,param_1[0x29],plVar6);
      *(long **)(lVar4 + 8) = plVar6;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x400;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      if (param_1[4] != 0) {
        (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
      }
      param_1[4] = lVar4;
      FUN__text__005e896c(lVar4,0x711f5d,2,0x10);
      FUN__text__005e4b20(pMVar1,*(undefined8 *)(param_1[4] + 0x3c8));
      local_58 = param_1;
      lVar4 = FUN__text__005e4e1c(&uStack_31,*(undefined8 *)(*plVar3 + 0x28),&local_58);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*param_1 != 0) {
        (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      }
      *param_1 = lVar4;
      *(ulong *)(lVar4 + 0x130) = *(ulong *)(lVar4 + 0x130) | 0x20;
      return;
    }
  }
LAB__text__005e3c78:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


