/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064db90; name: FUN_.text__0064db90
 */


void FUN__text__0064db90(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long local_38;
  long local_18;
  
  plVar4 = DAT_00c5f5c0;
  if ((int)param_1[0x22] == 0) {
    if (DAT_00c5f5c0 == (long *)0x0) {
LAB__text__0064dbf4:
      *(undefined4 *)(param_1 + 0x22) = 4;
                    /* WARNING: Could not recover jumptable at 0x0064dc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))(param_1);
      return;
    }
    if (*DAT_00c5f5c0 == DAT_00c5f5c0[1]) {
      if (param_1[0x1f] == 0) {
        *(undefined4 *)(param_1 + 0x22) = 2;
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      else if (*(long **)param_1[0x1e] != (long *)0x0) {
        (**(code **)(**(long **)param_1[0x1e] + 0x38))();
        *(undefined4 *)(param_1 + 0x22) = 2;
      }
      plVar4 = DAT_00c5f5c0;
    }
    else {
      if (0x3f < (ulong)(DAT_00c5f5c0[1] - *DAT_00c5f5c0)) goto LAB__text__0064dbf4;
      *(undefined4 *)(param_1 + 0x22) = 1;
    }
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    lVar2 = local_38;
    local_38 = 0;
    local_18 = lVar2;
    plVar1 = (long *)plVar4[1];
    if (plVar1 < (long *)plVar4[2]) {
      uVar3 = tpidr_el0;
      uVar3 = uVar3 & 0xffffffffffffe000;
      if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar4[3];
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      local_18 = 0;
      *plVar1 = lVar2;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      plVar4[1] = (long)(plVar1 + 1);
    }
    else {
      FUN__text__0064ddc0(plVar4,&local_18);
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
        local_18 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


