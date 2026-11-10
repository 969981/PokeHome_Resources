/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00385d90; name: FUN_.text__00385d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00385d90(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
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
  uVar4 = *param_4 + 5;
  if (*(ulong *)(param_2 + 4) < uVar4) {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                               (*(long **)(param_1 + 0x38),uVar4);
    if (__dest == (void *)0x0) {
      uVar2 = 0;
      goto LAB__text__00385f68;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    *(ulong *)(param_2 + 4) = uVar4;
LAB__text__00385e84:
    *(ulong *)(param_2 + 6) = uVar4;
LAB__text__00385e88:
    uVar6 = uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 6);
    if (uVar4 < *(ulong *)(param_2 + 4)) {
      if (uVar6 != uVar4) {
        plVar3 = *(long **)(param_1 + 0x58);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
        }
        goto LAB__text__00385e84;
      }
      goto LAB__text__00385e88;
    }
  }
  local_c0 = _DAT_008a3298 + 0x10;
  uVar5 = *(undefined8 *)(param_2 + 2);
  lVar1 = _DAT_008a3280 + 0x10;
  uStack_54 = *param_2;
  local_60 = 0;
  local_58 = 0;
  local_68 = lVar1;
  if (uStack_54 == 0) {
    local_58 = 0;
  }
  else {
    uVar2 = uStack_54 - (uStack_54 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar4 = (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    do {
      (**(code **)(local_68 + 0x10))(&local_68);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    local_58 = uStack_54;
  }
  local_78 = CONCAT44(uStack_54,local_58);
  lStack_a8 = _DAT_008a3288 + 0x10;
  local_90 = 0;
  local_b0 = 0;
  local_b8 = _DAT_008a3290 + 0x10;
  uStack_70 = 0;
  local_a0 = uVar5;
  uStack_98 = uVar6;
  local_88 = lVar1;
  uStack_80 = local_60;
  uVar2 = FUN__text__003816a8(&local_c0,*param_3,*param_4);
LAB__text__00385f68:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar2 & 1;
}


