/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469530; name: FUN_.text__00469530
 */


void FUN__text__00469530(long *param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)0x0;
  if ((*(uint *)((long)param_1 + 0xd2) & 0x20000) != 0) {
    plVar1 = param_1;
  }
  if ((*(uint *)((long)param_1 + 0xd2) >> 0x11 & 1) == 0) {
    if ((param_4 & 1) == 0) {
      uVar2 = 0;
      do {
        if ((*param_3 & (uVar2 ^ 0xffffffffffffffff)) == 0) break;
        (**(code **)(*param_1 + 0x230))(param_1,param_2);
        uVar2 = uVar2 | param_1[0x13] << 0x11;
        param_1 = (long *)param_1[0xf];
      } while (param_1 != (long *)0x0);
    }
    else {
      plVar1 = (long *)0x0;
      uVar2 = 0;
      do {
        if ((*param_3 & (uVar2 ^ 0xffffffffffffffff)) == 0) break;
        (**(code **)(*param_1 + 0x230))(param_1,param_2);
        if (plVar1 == (long *)0x0) {
          plVar1 = (long *)param_1[0x10];
        }
        uVar2 = uVar2 | param_1[0x13] << 0x11;
        param_1 = (long *)param_1[0xf];
      } while (param_1 != (long *)0x0);
    }
  }
  else {
    uVar2 = 0;
    plVar1 = param_1;
  }
  while ((plVar1 != (long *)0x0 && ((*param_3 & (uVar2 ^ 0xffffffffffffffff | 0x3800000100bf)) != 0)
         )) {
    (**(code **)(*plVar1 + 0x230))(plVar1,param_2);
    uVar2 = uVar2 | plVar1[0x13] << 0x11;
    plVar1 = (long *)plVar1[0x10];
  }
  return;
}


