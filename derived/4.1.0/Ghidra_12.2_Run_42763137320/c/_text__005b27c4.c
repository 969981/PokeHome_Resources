/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b27c4; name: FUN_.text__005b27c4
 */


void FUN__text__005b27c4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long local_28;
  long local_8;
  
  *(long *)(param_1 + 200) = param_2;
  plVar3 = *(long **)(param_1 + 0x88);
  local_28 = param_2;
  local_8 = param_3;
  if (plVar3 == (long *)0x0 || plVar3 == (long *)(param_1 + 0x88)) {
    FUN__text__005b3ba0(param_1 + 8,&local_8,&local_28);
    uVar1 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
    plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + (uVar1 / 0x38) * 8) +
                     (uVar1 % 0x38) * 0x48);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x90);
    plVar2[6] = param_3;
    plVar2[7] = param_2;
    plVar6 = *(long **)(param_1 + 0x90);
    lVar5 = *plVar6;
    plVar3 = (long *)plVar6[1];
    *plVar3 = lVar5;
    *(long **)(lVar5 + 8) = plVar3;
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  plVar3 = plVar2 + 2;
  *plVar2 = param_1 + 0x70;
  plVar2[1] = (long)puVar4;
  *(long **)(param_1 + 0x78) = plVar2;
  *puVar4 = plVar2;
  plVar6 = (long *)(param_1 + 0xb0);
  lVar5 = *plVar6;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 1;
  if (lVar5 == param_1 + 0xa0) {
    *(long **)(param_1 + 0xa0) = plVar3;
    plVar6 = (long *)(param_1 + 0xa8);
    *(long **)(param_1 + 0xb0) = plVar3;
  }
  else {
    *(long **)(lVar5 + 0x10) = plVar3;
    if (lVar5 != *plVar6) goto LAB__text__005b28d8;
  }
  *plVar6 = (long)plVar3;
LAB__text__005b28d8:
  plVar2[2] = lVar5;
  plVar2[3] = 0;
  plVar2[4] = 0;
  FUN__text__005b4940();
  return;
}


