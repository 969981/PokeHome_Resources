/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036c470; name: FUN_.text__0036c470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__0036c470(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  long lStack_88;
  undefined1 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
  }
  if (*(ulong *)(param_2 + 4) < 2) {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),2)
    ;
    if (__dest == (void *)0x0) {
      uVar2 = 0;
      goto LAB__text__0036c634;
    }
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 2;
    param_2[5] = 0;
LAB__text__0036c558:
    lVar6 = 2;
    param_2[6] = 2;
    param_2[7] = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 6);
    if ((*(ulong *)(param_2 + 4) != 2) && (lVar6 != 2)) {
      plVar3 = *(long **)(param_1 + 0x58);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      goto LAB__text__0036c558;
    }
  }
  local_b0 = _DAT_008a2f20 + 0x10;
  uVar5 = *(undefined8 *)(param_2 + 2);
  lVar1 = _DAT_008a2ed8 + 0x10;
  uStack_44 = *param_2;
  local_50 = 0;
  local_48 = 0;
  local_58 = lVar1;
  if (uStack_44 == 0) {
    local_48 = 0;
  }
  else {
    uVar2 = uStack_44 - (uStack_44 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar4 = (ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
    do {
      (**(code **)(local_58 + 0x10))(&local_58);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    local_48 = uStack_44;
  }
  local_68 = CONCAT44(uStack_44,local_48);
  local_98 = _DAT_008a2ec0 + 0x10;
  local_80 = 0;
  uStack_60 = 0;
  local_a8 = _DAT_008a2ef0 + 0x10;
  uStack_a0 = 0;
  local_90 = uVar5;
  lStack_88 = lVar6;
  local_78 = lVar1;
  uStack_70 = local_50;
  uVar2 = FUN__text__0035f2e4(&local_b0,param_3);
LAB__text__0036c634:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  return uVar2 & 1;
}


