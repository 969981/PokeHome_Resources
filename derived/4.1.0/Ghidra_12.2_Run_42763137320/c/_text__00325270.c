/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00325270; name: FUN_.text__00325270
 */


void FUN__text__00325270(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long local_50;
  long lStack_48;
  long local_28;
  
  iVar3 = FUN__text__0064d950();
  if (iVar3 != 0) {
    *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x003252bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
    return;
  }
  lVar4 = *(long *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  if (lVar4 != 0) {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_50 = lVar4;
  lStack_48 = param_2;
  lVar4 = FUN__text__0032a7ec(&local_28,uVar1,&local_50);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  local_28 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = local_28;
  plVar6 = (long *)(*(long *)(param_2 + 0xf0) + *(long *)(param_2 + 0xf8) * 8);
  if (*(long *)(param_2 + 0xf8) == *(long *)(param_2 + 0x100)) {
    FUN__text__0021b5a0(&local_50,param_2 + 0xb0,plVar6,1,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  else {
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0xb0);
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    local_28 = 0;
    *plVar6 = lVar2;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    *(long *)(param_2 + 0xf8) = *(long *)(param_2 + 0xf8) + 1;
  }
  *param_1 = param_2;
  (**(code **)(*(long *)(param_2 + 0x48) + 0x10))((long *)(param_2 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


