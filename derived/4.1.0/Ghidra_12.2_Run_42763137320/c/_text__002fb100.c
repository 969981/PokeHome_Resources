/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fb100; name: FUN_.text__002fb100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fb100(long *param_1,long *param_2)

{
  long lVar1;
  MutexType *pMVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long local_d0 [3];
  long local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  int local_80 [6];
  long local_68;
  
  uVar7 = _DAT_008a2688;
  lVar8 = *param_1;
  FUN__text__005e927c(local_80,_DAT_008a2688);
  uVar4 = FUN__text__002f95a0(lVar8,local_80);
  uVar9 = *(undefined8 *)(lVar8 + 8);
  lVar1 = lVar8 + 0xc0;
  FUN__text__005e927c(local_d0,uVar7);
  if (local_d0[0] == -0x1b2f856691a10a18) {
    if (*param_2 == -0x5e3f6a55a2fdd144) {
      FUN__text__002c3a0c(&local_b0,0x715f77,lVar1);
      FUN__text__002f3adc(uVar4,uVar9,&local_b0);
    }
    else {
      FUN__text__002c3bb4(&local_b0,0x715101,lVar1);
      FUN__text__002f3adc(uVar4,uVar9,&local_b0);
    }
  }
  else {
    FUN__text__002fa7e0(&local_b0,local_d0,lVar1);
    FUN__text__002f3adc(uVar4,uVar9,&local_b0);
  }
  if ((local_98 != 0) && (local_b0 != 0)) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  uStack_a8 = 0xcbf29ce484222645;
  local_a0 = 0x70f683;
  local_98 = 0;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  local_90 = 0;
  local_88 = 0;
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  FUN__text__005e927c(&local_b0,_DAT_008a2688);
  FUN__text__002f95a0(lVar8,&local_b0);
  FUN__text__002f3bf8();
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  FUN__text__005e927c(&local_b0,_DAT_008a2688);
  FUN__text__002f95a0(lVar8,&local_b0);
  local_80[0] = FUN__text__002f3c08();
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  if (local_80[0] == 2) {
    uVar5 = FUN__text__002fd830();
    uVar6 = FUN__text__002fd810();
    if (uVar5 < uVar6) {
      FUN__text__005e927c(&local_b0,0x87c478);
      uVar7 = FUN__text__002f95a0(lVar8,&local_b0);
      FUN__text__002f44f0(uVar7,uVar5,uVar6);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
      local_80[0] = 3;
    }
  }
  pMVar2 = (MutexType *)(lVar8 + 0x188);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(lVar8 + 0x168) != 0) {
    FUN__text__002fe3a8(*(long *)(lVar8 + 0x168),local_80);
  }
  nn::os::UnlockMutex(pMVar2);
  for (plVar10 = *(long **)(lVar8 + 0x138); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    plVar11 = plVar10 + 2;
    if (*plVar11 != -0x1b2f856691a10a18) {
      uVar7 = FUN__text__002f95a0(lVar8,plVar11);
      uVar4 = *(undefined8 *)(lVar8 + 8);
      if (*plVar11 == -0x1b2f856691a10a18) {
        FUN__text__002c3bb4(&local_b0,0x715101,lVar1);
        FUN__text__002f3adc(uVar7,uVar4,&local_b0);
      }
      else {
        FUN__text__002fa7e0(&local_b0,plVar11,lVar1);
        FUN__text__002f3adc(uVar7,uVar4,&local_b0);
      }
      if ((local_98 != 0) && (local_b0 != 0)) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      }
      local_b0 = 0;
      uStack_a8 = 0xcbf29ce484222645;
      local_a0 = 0x70f683;
      local_98 = 0;
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      }
      FUN__text__002f95a0(lVar8,plVar11);
      FUN__text__002f3bf8();
      FUN__text__002f95a0(lVar8,plVar11);
      iVar3 = FUN__text__002f3c08();
      if (iVar3 == 4) {
        FUN__text__002f95a0(lVar8,plVar11);
        FUN__text__002f4070();
        iVar3 = 2;
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar3);
      nn::os::LockMutex(pMVar2);
      if (*(long *)(lVar8 + 0x168) != 0) {
        FUN__text__002fe3a8(*(long *)(lVar8 + 0x168),&local_b0);
      }
      nn::os::UnlockMutex(pMVar2);
    }
  }
  return;
}


