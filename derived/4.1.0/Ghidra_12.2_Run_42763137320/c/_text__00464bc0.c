/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464bc0; name: FUN_.text__00464bc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00464bc0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long local_48;
  long lStack_40;
  undefined4 local_38;
  
  local_38 = 0;
  lStack_40 = param_1 + 8;
  local_48 = param_1;
  FUN__text__0046cff0(*_DAT_008a4640,&local_48,param_1 + 0x48,param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x78);
  if (((param_4 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x80), plVar2 == (long *)0x0)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,param_4 & 1);
      return;
    }
  }
  else {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,0);
      plVar2 = *(long **)(param_1 + 0x80);
    }
    (**(code **)(*plVar2 + 0x148))(plVar2,param_2,param_3,0);
  }
  return;
}


