/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4600; name: FUN_.text__005e4600
 */


void FUN__text__005e4600(long *param_1,ulong param_2)

{
  MutexType *pMVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    auVar9 = FUN__text__005e4ff4(param_1);
    local_58 = auVar9._8_8_;
    lVar2 = auVar9._0_8_;
    uStack_48 = 0x5e474c;
    pMVar1 = (MutexType *)(lVar2 + 0x28);
    local_50 = (undefined1 *)((long)register0x00000008 + -0x30);
    local_40 = param_2;
    uStack_38 = param_1;
    uVar7 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
    if ((uVar7 & 1) == 0) {
      nn::os::LockMutex(pMVar1);
      puVar4 = *(undefined8 **)(lVar2 + 0xf0);
      if (puVar4 == *(undefined8 **)(lVar2 + 0xf8)) {
        FUN__text__005e5380(lVar2 + 0xe8,&local_58);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x100)
        ;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar4 = local_58;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        *(undefined8 **)(lVar2 + 0xf0) = puVar4 + 1;
        nn::os::UnlockMutex(pMVar1);
        return;
      }
    }
    else {
      puVar4 = *(undefined8 **)(lVar2 + 0x120);
      if (puVar4 == *(undefined8 **)(lVar2 + 0x128)) {
        FUN__text__005e5380(lVar2 + 0x118,&local_58);
        return;
      }
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar2 + 0x130)
        ;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        *puVar4 = local_58;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        *(undefined8 **)(lVar2 + 0x120) = puVar4 + 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar8 = param_1[1] - *param_1 >> 3;
  lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)(lVar8 * 8);
    if (puVar3 != puVar5) goto LAB__text__005e4670;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)(lVar2 + lVar8 * 8);
    if (puVar3 != puVar5) {
LAB__text__005e4670:
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      lVar8 = *(long *)(uVar7 + 0x98);
      puVar6 = puVar4;
      do {
        if (lVar8 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(long *)((uVar7 | 0x18) + lVar8 * 8) = param_1[3];
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        puVar3 = puVar3 + -1;
        puVar6 = puVar6 + -1;
        *puVar6 = *puVar3;
        lVar8 = *(long *)(uVar7 + 0x98) + -1;
        *(long *)(uVar7 + 0x98) = lVar8;
      } while (puVar3 != puVar5);
      puVar3 = (undefined8 *)*param_1;
      *param_1 = (long)puVar6;
      param_1[1] = (long)puVar4;
      lVar8 = param_1[2];
      param_1[2] = lVar2 + param_2 * 8;
      goto joined_r0x005e472c;
    }
  }
  *param_1 = (long)puVar4;
  param_1[1] = (long)puVar4;
  lVar8 = param_1[2];
  param_1[2] = lVar2 + param_2 * 8;
joined_r0x005e472c:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005e46f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar3,lVar8 - (long)puVar3,8);
  return;
}


