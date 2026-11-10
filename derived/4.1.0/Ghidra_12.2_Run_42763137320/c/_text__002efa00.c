/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002efa00; name: FUN_.text__002efa00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002efa00(long param_1,uint *param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  void *__dest;
  ulong uVar6;
  long local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
  }
  uVar1 = *param_4 + 5;
  if (*(ulong *)(param_2 + 4) < uVar1) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    }
    __dest = (void *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                               (*(long **)(param_1 + 0x38),uVar1);
    uVar4 = 0;
    if (__dest == (void *)0x0) goto LAB__text__002efbc0;
    memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 6));
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
              (*(long **)(param_1 + 0x38),*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4))
    ;
    *(void **)(param_2 + 2) = __dest;
    *(ulong *)(param_2 + 4) = uVar1;
LAB__text__002efae0:
    *(ulong *)(param_2 + 6) = uVar1;
  }
  else if (*(ulong *)(param_2 + 6) != uVar1) {
    plVar5 = *(long **)(param_1 + 0x58);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
    }
    goto LAB__text__002efae0;
  }
  uStack_80 = *(undefined8 *)(param_2 + 2);
  local_a0 = _DAT_008a25d0 + 0x10;
  uVar4 = *param_2;
  if (uVar4 == 0) {
    uStack_60 = 0;
  }
  else {
    uVar3 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar3 != 1) {
      uVar6 = (ulong)uVar3 & 0x3e;
      do {
        uVar4 = uVar4 ^ uVar4 << 2;
        uVar6 = uVar6 - 2;
        uVar4 = uVar4 ^ uVar4 >> 0xf;
        uVar4 = uVar4 ^ uVar4 << 0xd;
        uVar4 = uVar4 ^ uVar4 << 2;
        uVar4 = uVar4 ^ uVar4 >> 0xf;
        uVar4 = uVar4 ^ uVar4 << 0xd;
      } while (uVar6 != 0);
    }
    uVar2 = uVar4 ^ uVar4 << 2;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar2 ^ uVar2 << 0xd;
    }
    uStack_60 = CONCAT44(uVar4,uVar4);
  }
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_88 = _DAT_008a25c0 + 0x10;
  local_98 = _DAT_008a25c8 + 0x10;
  uStack_90 = 0;
  local_78 = uVar1;
  uVar4 = FUN__text__002c8dd0(&local_a0,*param_3,*param_4);
LAB__text__002efbc0:
  return uVar4 & 1;
}


