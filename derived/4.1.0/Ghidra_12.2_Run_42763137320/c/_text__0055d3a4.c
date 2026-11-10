/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d3a4; name: FUN_.text__0055d3a4
 */


undefined8 FUN__text__0055d3a4(long *param_1,long *param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
  }
  uVar3 = ((param_3 & 2) * 2 + param_3) * 0x10 & 0xffffffc0 | (param_3 & 1) << 4;
  *(uint *)(param_1 + 1) = uVar3;
  *(uint *)((long)param_1 + 0xc) = param_3;
  pvVar1 = (void *)(**(code **)(*param_2 + 0x20))(param_2,uVar3,0x10,0x720496,0x39e);
  uVar4 = 2;
  *param_1 = (long)pvVar1;
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,(ulong)*(uint *)(param_1 + 1));
    uVar3 = 0;
    if ((param_3 & 2) != 0 && (param_4 & 1) == 0) {
      uVar3 = 2;
    }
    uVar2 = 0;
    if (3 < param_3 && (param_4 & 1) == 0) {
      uVar2 = 4;
    }
    uVar3 = uVar2 | (param_3 | param_4) & 1 | uVar3 | *(uint *)((long)param_1 + 0x1c) & 0xfffffff8;
    *(uint *)((long)param_1 + 0x1c) = uVar3;
    if (param_1[2] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar3 = *(uint *)((long)param_1 + 0x1c);
      param_1[2] = 0;
    }
    uVar3 = -(uVar3 >> 1 & 1) & 0x60 | (uVar3 & 1) << 7 | (int)(uVar3 << 0x1d) >> 0x1f & 0x14U;
    *(uint *)(param_1 + 3) = uVar3;
    pvVar1 = (void *)(**(code **)(*param_2 + 0x20))(param_2,uVar3,0x10,0x720496,0x32c);
    param_1[2] = (long)pvVar1;
    if (pvVar1 != (void *)0x0) {
      memset(pvVar1,0,(ulong)*(uint *)(param_1 + 3));
      return 1;
    }
    if (*param_1 == 0) {
      uVar4 = 0x34;
      if (param_1[2] == 0) {
        return 0x34;
      }
      goto LAB__text__0055d53c;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar4 = 0x34;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_1[2] == 0) {
    return uVar4;
  }
LAB__text__0055d53c:
  (**(code **)(*param_2 + 0x18))(param_2);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return uVar4;
}


