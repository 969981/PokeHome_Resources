/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c8280; name: FUN_.text__003c8280
 */


void FUN__text__003c8280(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x220);
  lVar5 = *(long *)(param_1 + 0x228);
  plVar1 = plVar3 + lVar5 * 2;
  lVar4 = lVar5 << 4;
  plVar6 = plVar3;
  if (lVar5 == 0) {
LAB__text__003c82c0:
    if (plVar6 != plVar1) {
      lVar2 = plVar6[1];
      goto joined_r0x003c82cc;
    }
  }
  else {
    lVar2 = lVar4;
    do {
      if (*plVar6 == *param_2) goto LAB__text__003c82c0;
      plVar6 = plVar6 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  lVar2 = 0;
joined_r0x003c82cc:
  if (lVar5 == 0) {
LAB__text__003c82fc:
    if (plVar3 != plVar1) {
      FUN__text__006b2e04(lVar2,plVar3[1]);
      return;
    }
  }
  else {
    do {
      if (*plVar3 == *param_3) goto LAB__text__003c82fc;
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  FUN__text__006b2e04(lVar2,0);
  return;
}


