/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b1ec; name: FUN_.text__0042b1ec
 */


void FUN__text__0042b1ec(long *param_1,uint param_2,int param_3,byte param_4)

{
  long lVar1;
  
  lVar1 = FUN__text__004ceab0(param_1 + 0x16,0,0);
  if ((lVar1 == 0) ||
     ((*(int *)(lVar1 + (ulong)param_2 * 8 + 0x24) == param_3 &&
      (*(byte *)(lVar1 + (ulong)param_2 * 8 + 0x29) == (param_4 & 1))))) {
    return;
  }
  FUN__text__004cf770(param_1 + 0x16,param_2,param_3,param_4 & 1);
  (**(code **)(param_1[0x13] + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0042b2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
  return;
}


