/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471740; name: FUN_.text__00471740
 */


void FUN__text__00471740(long *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined2 local_28;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    if ((param_3 & 1) != 0) {
      local_30 = 0x100000000;
      local_40 = 0;
      uStack_38 = 0;
      local_28 = 0x100;
      uStack_48 = 0;
      local_50 = param_4;
      (**(code **)(*param_1 + 0x120))(param_1,&local_50);
      return;
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      *(uint *)((long)plVar1 + 0x313) = *(uint *)((long)plVar1 + 0x313) | 0x100000;
      plVar1 = (long *)*param_2;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
    plVar1 = (long *)*param_2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN__text__00400fc0(0,plVar1);
    }
    *param_2 = 0;
  }
  return;
}


