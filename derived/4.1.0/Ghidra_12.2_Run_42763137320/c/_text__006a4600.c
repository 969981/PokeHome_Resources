/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4600; name: FUN_.text__006a4600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a4600(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (*(code *)*_DAT_008a6960)(0x70,0x10,*_DAT_008a6970);
  if (lVar1 != 0) {
    FUN__text__006a0114(lVar1,param_2);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  plVar4 = (long *)(*plVar2 + (long)(int)plVar2[1] * 0x30);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  *plVar4 = lVar1;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4 = plVar4 + 4;
  lVar3 = *plVar4;
  plVar2 = (long *)(param_1 + 0x38);
  *plVar4 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar4;
  *plVar2 = lVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return lVar1;
}


