/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fce0; name: FUN_.text__0045fce0
 */


void FUN__text__0045fce0(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x148);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) goto LAB__text__0045fd60;
  } while (*(int *)(plVar1 + 1) != param_2);
  *(undefined1 *)((long)plVar1 + 0x2c) = 0;
  if (DAT_00ae9a60 != 0) {
    if (plVar1[4] == 0) {
      (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,0,1);
    }
    else {
      FUN__text__0042f65c(DAT_00ae9a60,plVar1[4],0,0,4,1);
    }
  }
LAB__text__0045fd60:
  plVar1 = (long *)(param_1 + 0x170);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  } while (*(int *)(plVar1 + 1) != param_2);
  *(undefined1 *)((long)plVar1 + 0x2c) = 0;
  if (DAT_00ae9a60 == 0) {
    return;
  }
  if (plVar1[4] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0045fddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,5,1);
    return;
  }
  FUN__text__0042f65c(DAT_00ae9a60,plVar1[4],5,0,4,1);
  return;
}


