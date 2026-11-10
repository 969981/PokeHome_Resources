/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8980; name: FUN_.text__003c8980
 */


void FUN__text__003c8980(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_2 + 0x180);
  lVar2 = *(long *)(param_2 + 0x188);
  plVar3 = plVar1;
  if (lVar2 == 0) {
LAB__text__003c89b4:
    if (plVar3 != plVar1 + lVar2 * 2) {
      lVar2 = plVar3[1];
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003c89d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      return;
    }
  }
  else {
    lVar4 = lVar2 << 4;
    do {
      if (*plVar3 == *param_3) goto LAB__text__003c89b4;
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *param_1 = 0;
  return;
}


