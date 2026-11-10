/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011911c; name: FUN_.text__0011911c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011911c(long param_1,int param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_3 == 0x20) {
    if (param_2 != 0) {
      plVar2 = (long *)FUN__text__00119a94(param_1 + 0x70,0);
      iVar1 = (**(code **)(*plVar2 + 0x40))();
      if (iVar1 == 0) goto LAB__text__001191c0;
    }
  }
  else {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00119184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x3b0) + 0x80))(*(long **)(param_1 + 0x3b0),param_3);
      return;
    }
    plVar2 = (long *)FUN__text__00119a94(param_1 + 0x70);
    uVar3 = (**(code **)(*plVar2 + 0x58))();
    if (((uVar3 & 1) != 0) &&
       (lVar4 = FUN__text__00119a94(param_1 + 0x70,0), *(int *)(lVar4 + 0x28) == *param_3)) {
LAB__text__001191c0:
                    /* WARNING: Could not recover jumptable at 0x001191e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x3b0) + 0x80))(*(long **)(param_1 + 0x3b0),_DAT_0089fec8);
      return;
    }
  }
  return;
}


