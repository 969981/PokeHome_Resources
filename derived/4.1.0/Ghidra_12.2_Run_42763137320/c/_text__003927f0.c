/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003927f0; name: FUN_.text__003927f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003927f0(long param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint *local_70;
  long local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6,param_2);
  }
  FUN__text__00381898(&local_70,param_1,param_2,*param_4 + 5);
  if (local_70 != (uint *)0x0) {
    uVar7 = *(undefined8 *)(local_70 + 2);
    local_c8 = _DAT_008a3298 + 0x10;
    uStack_54 = *local_70;
    uVar8 = *(undefined8 *)(local_70 + 6);
    lVar2 = _DAT_008a3280 + 0x10;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar2;
    if (uStack_54 != 0) {
      uVar5 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
      uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
      uVar9 = (ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_68 + 0x10))(&local_68);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_80 = CONCAT44(uStack_54,uStack_54);
    lStack_b0 = _DAT_008a3288 + 0x10;
    local_98 = 0;
    local_b8 = 0;
    local_c0 = _DAT_008a3290 + 0x10;
    uStack_78 = 0;
    local_a8 = uVar7;
    uStack_a0 = uVar8;
    local_90 = lVar2;
    uStack_88 = local_60;
    local_58 = uStack_54;
    uVar9 = FUN__text__003816a8(&local_c8,*param_3,*param_4);
    if ((uVar9 & 1) != 0) {
      nn::os::LockMutex(pMVar1);
      lVar3 = *(long *)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      uVar7 = 1;
      lVar2 = 0;
      if (lVar4 != lVar3) {
        lVar2 = LZCOUNT(lVar4 - lVar3 >> 5) * -2 + 0x7e;
      }
      FUN__text__00381b80(lVar3,lVar4,&local_68,lVar2,1);
      nn::os::UnlockMutex(pMVar1);
      goto LAB__text__003929a4;
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(local_70 + 2),
               *(undefined8 *)(local_70 + 4));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  uVar7 = 0;
LAB__text__003929a4:
  nn::os::UnlockMutex(pMVar1);
  return uVar7;
}


