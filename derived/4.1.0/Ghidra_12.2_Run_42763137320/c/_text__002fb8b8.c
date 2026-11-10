/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fb8b8; name: FUN_.text__002fb8b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002fb8b8(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0 [3];
  long local_b8;
  long local_b0 [5];
  undefined4 local_88;
  undefined4 local_80 [6];
  long local_68;
  
  uVar2 = _DAT_008a2688;
  lVar3 = *param_2;
  lVar4 = *param_1;
  if (lVar3 == 0x2e170ad4f3bbde01 || lVar3 == -0x48330932290ee09d) {
    FUN__text__005e927c(local_80,_DAT_008a2688);
    uVar1 = FUN__text__002f95a0(lVar4,local_80);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    FUN__text__005e927c(local_d0,uVar2);
    if (local_d0[0] == -0x1b2f856691a10a18) {
      FUN__text__002c3bb4(local_b0,0x715101,lVar4 + 0xc0);
    }
    else {
      FUN__text__002fa7e0(local_b0,local_d0,lVar4 + 0xc0);
    }
    FUN__text__002f3ef8(uVar1,uVar5,lVar4 + 0xa8,local_b0);
    if ((local_b0[3] != 0) && (local_b0[0] != 0)) {
      (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
    }
    local_b0[0] = 0;
    local_b0[1] = 0xcbf29ce484222645;
    local_b0[2] = 0x70f683;
    local_b0[3] = 0;
    if (local_b0[4] != 0) {
      (**(code **)(*(long *)(local_b0[4] + 0x48) + 0x18))();
    }
    local_b0[4] = 0;
    local_88 = 0;
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    FUN__text__005e927c(local_b0,_DAT_008a2688);
    FUN__text__002f95a0(lVar4,local_b0);
    FUN__text__002f401c();
    if (local_b0[3] != 0) {
      (**(code **)(*(long *)(local_b0[3] + 0x48) + 0x18))();
    }
    FUN__text__005e927c(local_b0,_DAT_008a2688);
    FUN__text__002f95a0(lVar4,local_b0);
    local_80[0] = FUN__text__002f402c();
    nn::os::LockMutex((MutexType *)(lVar4 + 0x1c8));
    if (*(long *)(lVar4 + 0x1a8) != 0) {
      FUN__text__002ff2a4(*(long *)(lVar4 + 0x1a8),local_80);
    }
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x1c8));
    if (local_b0[3] != 0) {
      (**(code **)(*(long *)(local_b0[3] + 0x48) + 0x18))();
    }
    lVar3 = *param_2;
  }
  if ((lVar3 == 0x2e170ad4f3bbde01) || (lVar3 == -0x5e3f6a55a2fdd144)) {
    local_e8 = 0xe4d07a996e5ef5e8;
    uStack_e0 = 0x715101;
    local_d8 = 4;
    FUN__text__005e927c(local_80,&local_e8);
    uVar2 = FUN__text__002f95a0(lVar4,local_80);
    uVar1 = *(undefined8 *)(lVar4 + 8);
    FUN__text__005e927c(local_d0,&local_e8);
    if (local_d0[0] == -0x1b2f856691a10a18) {
      FUN__text__002c3a0c(local_b0,0x715f77,lVar4 + 0xc0);
    }
    else {
      FUN__text__002fa7e0(local_b0,local_d0,lVar4 + 0xc0);
    }
    FUN__text__002f3ef8(uVar2,uVar1,lVar4 + 0xa8,local_b0);
    if ((local_b0[3] != 0) && (local_b0[0] != 0)) {
      (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
    }
    local_b0[0] = 0;
    local_b0[1] = 0xcbf29ce484222645;
    local_b0[2] = 0x70f683;
    local_b0[3] = 0;
    if (local_b0[4] != 0) {
      (**(code **)(*(long *)(local_b0[4] + 0x48) + 0x18))();
    }
    local_b0[4] = 0;
    local_88 = 0;
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
    FUN__text__005e927c(local_b0,&local_e8);
    FUN__text__002f95a0(lVar4,local_b0);
    FUN__text__002f401c();
    if (local_b0[3] != 0) {
      (**(code **)(*(long *)(local_b0[3] + 0x48) + 0x18))();
    }
    FUN__text__005e927c(local_b0,&local_e8);
    FUN__text__002f95a0(lVar4,local_b0);
    local_80[0] = FUN__text__002f402c();
    nn::os::LockMutex((MutexType *)(lVar4 + 0x1c8));
    if (*(long *)(lVar4 + 0x1a8) != 0) {
      FUN__text__002ff2a4(*(long *)(lVar4 + 0x1a8),local_80);
    }
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x1c8));
    if (local_b0[3] != 0) {
      (**(code **)(*(long *)(local_b0[3] + 0x48) + 0x18))();
    }
  }
  return;
}


