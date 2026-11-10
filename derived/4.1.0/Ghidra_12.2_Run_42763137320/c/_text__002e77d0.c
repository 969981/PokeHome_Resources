/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e77d0; name: FUN_.text__002e77d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002e77d0(long param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  ulong uVar5;
  long local_90;
  long local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar4 = *(long **)(param_1 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
  }
  if (*(ulong *)(param_2 + 4) < 3) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),3)
    ;
    uVar3 = 0;
    if (__dest == (void *)0x0) goto LAB__text__002e7984;
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    param_2[4] = 3;
    param_2[5] = 0;
LAB__text__002e78a4:
    param_2[6] = 3;
    param_2[7] = 0;
  }
  else if (*(long *)(param_2 + 6) != 3) {
    plVar4 = *(long **)(param_1 + 0x58);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
    }
    goto LAB__text__002e78a4;
  }
  local_70 = *(undefined8 *)(param_2 + 2);
  local_90 = _DAT_008a25d0 + 0x10;
  uVar3 = *param_2;
  if (uVar3 == 0) {
    uStack_50 = 0;
  }
  else {
    uVar2 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 != 1) {
      uVar5 = (ulong)uVar2 & 0x3e;
      do {
        uVar3 = uVar3 ^ uVar3 << 2;
        uVar5 = uVar5 - 2;
        uVar3 = uVar3 ^ uVar3 >> 0xf;
        uVar3 = uVar3 ^ uVar3 << 0xd;
        uVar3 = uVar3 ^ uVar3 << 2;
        uVar3 = uVar3 ^ uVar3 >> 0xf;
        uVar3 = uVar3 ^ uVar3 << 0xd;
      } while (uVar5 != 0);
    }
    uVar1 = uVar3 ^ uVar3 << 2;
    uVar1 = uVar1 ^ uVar1 >> 0xf;
    if ((uVar2 & 1) != 0) {
      uVar3 = uVar1 ^ uVar1 << 0xd;
    }
    uStack_50 = CONCAT44(uVar3,uVar3);
  }
  local_58 = 0;
  uStack_68 = 3;
  lStack_78 = _DAT_008a25c0 + 0x10;
  local_88 = _DAT_008a25c8 + 0x10;
  local_60 = 0;
  local_48 = 0;
  local_80 = 0;
  uVar3 = FUN__text__002e7b94(&local_90,param_3);
LAB__text__002e7984:
  return uVar3 & 1;
}


