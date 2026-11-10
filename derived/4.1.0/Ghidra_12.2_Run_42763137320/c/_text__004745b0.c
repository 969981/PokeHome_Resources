/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004745b0; name: FUN_.text__004745b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004745b0(long *param_1,int *param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 3;
  FUN__text__00478e4c(plVar1);
  *(int *)((long)param_1 + 0x32c) = *(int *)((long)param_1 + 0x32c) + 1;
  if (*param_2 != 0) {
    FUN__text__004748c0(param_1,0,0x4000000,*(undefined8 *)param_2);
    return;
  }
  if ((*(byte *)((long)param_1 + 0x312) & 0x78) == 0) {
    FUN__text__00478e4c(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00474670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))(param_1,0);
    return;
  }
  if (param_1[0x52] == 0) {
    FUN__text__00478e4c(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00474698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))(param_1,1);
    return;
  }
  FUN__text__0042f65c(0,*_DAT_008a4648,param_1[0x52],0x4000000,0,4,0);
  return;
}


