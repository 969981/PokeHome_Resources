/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00389e10; name: FUN_.text__00389e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00389e10(long param_1,undefined8 param_2,char *param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_c0;
  long local_b8 [3];
  long lStack_a0;
  long local_98;
  undefined1 local_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint *local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
  }
  FUN__text__00381898(&local_38,param_1,param_2,1);
  if (local_38 != (uint *)0x0) {
    lVar7 = *(long *)(local_38 + 2);
    local_c0 = _DAT_008a3298 + 0x10;
    uStack_54 = *local_38;
    lVar8 = *(long *)(local_38 + 6);
    lVar4 = _DAT_008a3280 + 0x10;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar4;
    if (uStack_54 != 0) {
      uVar2 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
      uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
      uVar9 = (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
      do {
        (**(code **)(local_68 + 0x10))(&local_68);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_b8[2] = _DAT_008a3288 + 0x10;
    local_90 = 0;
    local_78 = CONCAT44(uStack_54,uStack_54);
    uStack_70 = 0;
    local_b8[0] = _DAT_008a3290 + 0x10;
    local_b8[1] = 0;
    uVar5 = 1;
    if (*param_3 != '\0') {
      uVar5 = 2;
    }
    local_68 = CONCAT71(local_68._1_7_,uVar5);
    lStack_a0 = lVar7;
    local_98 = lVar8;
    local_88 = lVar4;
    uStack_80 = local_60;
    local_58 = uStack_54;
    if ((lVar7 == 0) || (lVar8 < 1)) {
      lVar4 = FUN__text__00381698(&local_c0);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
    }
    else {
      uVar9 = FUN__text__003808b0(local_b8,&local_68,1,0);
      lVar4 = (**(code **)(local_c0 + 0x10))(&local_c0);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      if ((uVar9 & 1) != 0) {
        nn::os::LockMutex(pMVar1);
        lVar7 = *(long *)(param_1 + 8);
        lVar8 = *(long *)(param_1 + 0x10);
        uVar6 = 1;
        lVar4 = 0;
        if (lVar8 != lVar7) {
          lVar4 = LZCOUNT(lVar8 - lVar7 >> 5) * -2 + 0x7e;
        }
        FUN__text__00381b80(lVar7,lVar8,&local_68,lVar4,1);
        nn::os::UnlockMutex(pMVar1);
        goto LAB__text__0038a01c;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(local_38 + 2),
               *(undefined8 *)(local_38 + 4));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  uVar6 = 0;
LAB__text__0038a01c:
  nn::os::UnlockMutex(pMVar1);
  return uVar6;
}


