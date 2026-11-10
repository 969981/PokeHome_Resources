/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fccb0; name: FUN_.text__003fccb0
 */


undefined8 FUN__text__003fccb0(long *param_1,ulong param_2,int param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    if (param_3 == 2) {
      param_2 = *(long *)param_1[4] + param_2;
    }
    else {
      if (param_3 != 1) {
        return 0x1f;
      }
      lVar4 = (**(code **)(*param_1 + 200))(param_1,0);
      param_2 = lVar4 + param_2;
    }
  }
  if ((long)param_2 < 0) {
    return 0x1f;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0xc);
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = param_2 / uVar6;
  }
  lVar4 = uVar3 * uVar6;
  if (param_4 != (long *)0x0) {
    lVar5 = lVar4;
    if (param_3 != 0) {
      if (param_3 == 2) {
        lVar5 = lVar4 - *(long *)param_1[4];
      }
      else {
        if (param_3 != 1) goto LAB__text__003fcd80;
        lVar5 = (**(code **)(*param_1 + 200))(param_1,0);
        lVar5 = lVar4 - lVar5;
      }
    }
    *param_4 = lVar5;
  }
LAB__text__003fcd80:
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  bVar2 = *(byte *)(param_1 + 0x18);
  param_1[0xf] = lVar4;
  if ((uint)bVar2 < *(uint *)(param_1 + 0x15)) {
    uVar8 = bVar2 + 1;
    plVar7 = param_1 + 0x17;
    uVar1 = uVar8 & 3;
    if (2 < bVar2) {
      uVar8 = uVar8 & 0x1fc;
      do {
        uVar8 = uVar8 - 4;
        plVar7 = *(long **)**(undefined8 **)*plVar7;
      } while (uVar8 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar7 = (long *)*plVar7;
    }
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) != lVar4) {
      FUN__text__003fc040(param_1);
      goto LAB__text__003fce2c;
    }
  }
  else {
    (**(code **)(*param_1 + 0x100))(param_1,lVar4);
  }
  FUN__text__003fc6a8(param_1);
LAB__text__003fce2c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return 1;
}


