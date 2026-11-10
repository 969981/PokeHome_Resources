/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004691f0; name: FUN_.text__004691f0
 */


void FUN__text__004691f0(long *param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong local_68;
  
  plVar4 = (long *)0x0;
  if ((*(uint *)((long)param_1 + 0xd2) & 0x20000) != 0) {
    plVar4 = param_1;
  }
  if ((*(uint *)((long)param_1 + 0xd2) >> 0x11 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      uVar5 = 0;
      do {
        if ((*param_3 & (uVar5 ^ 0xffffffffffffffff)) == 0) {
          uVar2 = 0;
          goto joined_r0x004692f4;
        }
        uVar6 = param_1[0x13] << 0x11 | 0x7ffc7e3fffe0000;
        if (param_1[0xf] != 0) {
          uVar6 = param_1[0x13] << 0x11;
        }
        local_68 = (uVar6 | 0x120df) & ~uVar5 & *param_3;
        (**(code **)(*param_1 + 0x228))(param_1,param_2,&local_68);
        param_1 = (long *)param_1[0xf];
        uVar5 = uVar6 | uVar5;
      } while (param_1 != (long *)0x0);
      uVar2 = 0;
    }
    else {
      plVar4 = (long *)0x0;
      uVar2 = 0;
      uVar5 = 0;
      do {
        if ((*param_3 & (uVar5 ^ 0xffffffffffffffff | 0x120df)) == 0) break;
        uVar6 = param_1[0x13] << 0x11 | 0x7ffc7e3fffe0000;
        if (param_1[0xf] != 0) {
          uVar6 = param_1[0x13] << 0x11;
        }
        local_68 = (uVar6 | 0x120df) & ~uVar5 & *param_3;
        (**(code **)(*param_1 + 0x228))(param_1,param_2,&local_68);
        uVar6 = uVar6 | uVar5;
        uVar5 = uVar6;
        if ((plVar4 == (long *)0x0) && (plVar4 = (long *)param_1[0x10], plVar4 != (long *)0x0)) {
          uVar1 = FUN__text__0045df80(plVar4);
          uVar2 = uVar1 | uVar2;
          uVar5 = uVar6 | 0x380000000020;
          if ((uVar1 & 1) == 0) {
            uVar5 = uVar6;
          }
        }
        param_1 = (long *)param_1[0xf];
      } while (param_1 != (long *)0x0);
    }
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    plVar4 = param_1;
  }
joined_r0x004692f4:
  if (plVar4 != (long *)0x0) {
    do {
      if ((*param_3 & (uVar5 ^ 0xffffffffffffffff | 0x3800000100bf)) == 0) {
        return;
      }
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar5 & 0xffffc7ffffffffdf;
      }
      lVar3 = 0;
      if (plVar4[0x10] != 0) {
        lVar3 = plVar4[0x13];
      }
      local_68 = (lVar3 << 0x11 | 0x4ffff9ffffd00bfU) & (uVar5 ^ 0xffffffffffffffff) & *param_3;
      (**(code **)(*plVar4 + 0x228))(plVar4,param_2,&local_68);
      plVar4 = (long *)plVar4[0x10];
      uVar6 = lVar3 << 0x11 | uVar5;
      iVar7 = 5;
      if (plVar4 != (long *)0x0) {
        iVar7 = 0;
      }
      uVar5 = uVar6;
      if (plVar4 != (long *)0x0 && (uVar2 & 1) == 0) {
        uVar2 = FUN__text__0045df80(plVar4);
        iVar7 = 0;
        uVar5 = uVar6 | 0x380000000020;
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar6;
        }
      }
    } while (iVar7 == 0);
  }
  return;
}


