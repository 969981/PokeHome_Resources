/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b0f4; name: FUN_.text__0042b0f4
 */


void FUN__text__0042b0f4(long *param_1,uint param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  if (param_1[0x17] != 0) {
    plVar1 = param_1 + 0x16;
    if (param_1[0x15] == 0) {
      iVar4 = 0;
      bVar2 = false;
      lVar3 = FUN__text__004ceab0(plVar1,0,0);
    }
    else {
      lVar3 = param_1[0x15] + (ulong)param_2 * 8;
      iVar4 = *(int *)(lVar3 + 4);
      bVar2 = *(char *)(lVar3 + 9) != '\0';
      lVar3 = FUN__text__004ceab0(plVar1,0,0);
    }
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + (ulong)param_2 * 8 + 0x24) != iVar4 ||
        ((bool)*(char *)(lVar3 + (ulong)param_2 * 8 + 0x29) != bVar2)))) {
      FUN__text__004cf770(plVar1,param_2,iVar4,bVar2);
      (**(code **)(param_1[0x13] + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0042b1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,param_2);
      return;
    }
  }
  return;
}


