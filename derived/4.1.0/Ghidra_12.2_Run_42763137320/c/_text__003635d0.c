/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003635d0; name: FUN_.text__003635d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__003635d0(long param_1,uint *param_2,char *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  }
  if (*(long *)(param_2 + 4) == 0) {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),1)
    ;
    if (__dest == (void *)0x0) {
      uVar2 = 0;
      goto LAB__text__003637f0;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 1;
    param_2[5] = 0;
LAB__text__003636c8:
    lVar6 = 1;
    param_2[6] = 1;
    param_2[7] = 0;
  }
  else if (*(long *)(param_2 + 4) == 1) {
    lVar6 = *(long *)(param_2 + 6);
  }
  else {
    if (*(long *)(param_2 + 6) != 1) {
      plVar3 = *(long **)(param_1 + 0x58);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      goto LAB__text__003636c8;
    }
    lVar6 = 1;
  }
  lVar7 = _DAT_008a2f20 + 0x10;
  lVar8 = *(long *)(param_2 + 2);
  uStack_54 = *param_2;
  lVar1 = _DAT_008a2ed8 + 0x10;
  local_60 = 0;
  local_58 = 0;
  local_c0 = lVar7;
  local_68 = lVar1;
  if (uStack_54 == 0) {
    local_58 = 0;
  }
  else {
    uVar2 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar5 = (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    do {
      (**(code **)(local_68 + 0x10))(&local_68);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    local_58 = uStack_54;
  }
  uVar2 = 0;
  local_90 = 0;
  local_b8[2] = _DAT_008a2ec0 + 0x10;
  local_78 = CONCAT44(uStack_54,local_58);
  uStack_70 = 0;
  local_b8[0] = _DAT_008a2ef0 + 0x10;
  local_b8[1] = 0;
  uVar4 = 1;
  if (*param_3 != '\0') {
    uVar4 = 2;
  }
  local_68 = CONCAT71(local_68._1_7_,uVar4);
  lStack_a0 = lVar8;
  local_98 = lVar6;
  local_88 = lVar1;
  uStack_80 = local_60;
  if ((lVar8 != 0) && (0 < lVar6)) {
    uVar2 = FUN__text__003583a0(local_b8,&local_68,1,0);
    lVar7 = local_c0;
  }
  lVar6 = (**(code **)(lVar7 + 0x10))(&local_c0);
  *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
LAB__text__003637f0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar2 & 1;
}


