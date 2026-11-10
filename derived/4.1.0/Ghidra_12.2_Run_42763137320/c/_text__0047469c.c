/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047469c; name: FUN_.text__0047469c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047469c(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  
  FUN__text__00478e4c(param_1 + 3);
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(int *)((long)param_1 + 0x32c) + -1,
     *(int *)((long)param_1 + 0x32c) != 0 && iVar1 != 0)) {
    *(int *)((long)param_1 + 0x32c) = iVar1;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x32c) = 0;
  (**(code **)(*param_1 + 0xb0))(param_1);
  if (*param_2 != 0) {
    FUN__text__004748c0(param_1,0,0x8000000,*(undefined8 *)param_2);
    return;
  }
  if (param_1[0x52] == 0) {
    FUN__text__00478e4c(param_1 + 3);
    *(undefined4 *)((long)param_1 + 0x2c4) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00474784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x70))(param_1);
    return;
  }
  FUN__text__0042f65c(0x3f800000,*_DAT_008a4648,param_1[0x52],0x8000000,0,4,0);
  return;
}


