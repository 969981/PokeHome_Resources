/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001993d8; name: FUN_.text__001993d8
 */


void FUN__text__001993d8(long *param_1,undefined8 *param_2,undefined1 param_3,ulong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 *local_a0;
  undefined1 *puStack_98;
  long local_38;
  undefined1 local_14 [4];
  
  local_14[0] = param_3;
  if ((param_4 & 1) != 0) {
    local_38 = *param_1;
    if (local_38 == 0) {
      FUN__text__00197040(&local_38,param_2);
    }
    else {
      plVar4 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN__text__00197040(&local_38,param_2);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  puStack_98 = local_14;
  local_c0 = FUN__text__0019af94;
  local_b8 = FUN__text__0019b0ac;
  local_b0 = &LAB__text__0019b0b0;
  puStack_a8 = &LAB__text__0019b0bc;
  local_a0 = param_2;
  if (*param_1 == 0) {
    uVar3 = FUN__text__0019b770(*param_2);
    FUN__text__0019a2f0(uVar3,param_2,&local_c0,0,(int)uVar3 + -1);
    pcVar1 = local_b8;
  }
  else {
    plVar4 = (long *)(*param_1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar2 = FUN__text__0019b770(*param_2);
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__0019a2f0(uVar3,param_2,&local_c0,0,iVar2 + -1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    pcVar1 = local_b8;
  }
  if (pcVar1 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  return;
}


