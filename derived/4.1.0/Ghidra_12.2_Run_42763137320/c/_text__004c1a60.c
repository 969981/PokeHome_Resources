/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1a60; name: FUN_.text__004c1a60
 */


void FUN__text__004c1a60(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_00aeab68 != 0) {
    local_40 = 0;
    uStack_38 = 0;
    plVar3 = *(long **)(param_1 + 8);
    while (plVar1 = plVar3, plVar1 != (long *)0x0) {
      plVar3 = (long *)plVar1[1];
      FUN__text__004c3960(plVar1,&local_40,param_2);
      uVar2 = FUN__text__004c3a4c(plVar1);
      if ((uVar2 & 1) != 0) {
        FUN__text__004c2840(param_1,plVar1);
        FUN__text__004c1fc0(param_1,plVar1);
        FUN__text__004c31a0(param_1,plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
        FUN__text__00447104(plVar1);
      }
    }
    FUN__text__004c2010(param_1,&local_40,param_2);
  }
  return;
}


