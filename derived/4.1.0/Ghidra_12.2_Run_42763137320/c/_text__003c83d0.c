/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c83d0; name: FUN_.text__003c83d0
 */


void FUN__text__003c83d0(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  plVar2 = *(long **)(param_1 + 0x220);
  lVar3 = *(long *)(param_1 + 0x228);
  plVar5 = plVar2;
  if (lVar3 == 0) {
LAB__text__003c8420:
    if (plVar5 != plVar2 + lVar3 * 2) {
      plVar5 = (long *)plVar5[1];
      lVar3 = *(long *)(param_1 + 0xe8);
      goto joined_r0x003c8434;
    }
  }
  else {
    lVar4 = lVar3 << 4;
    do {
      if (*plVar5 == *param_2) goto LAB__text__003c8420;
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  plVar5 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0xe8);
joined_r0x003c8434:
  if (lVar3 != 0) {
    lVar3 = lVar3 * 0x18;
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0xe0) + 8);
    do {
      plVar2 = (long *)FUN__text__003e7418(*puVar6,param_3);
      uVar1 = (**(code **)(*plVar2 + 0x30))();
      if ((uVar1 & 1) != 0) {
        lVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,0);
        *(long **)(*(long *)(lVar3 + 0x18) + 8) = plVar2;
        return;
      }
      puVar6 = puVar6 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return;
}


