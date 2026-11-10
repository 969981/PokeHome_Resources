/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a46b0; name: FUN_.text__006a46b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006a46b0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = (*(code *)*_DAT_008a6960)(0x1d0,0x10,*_DAT_008a6970);
  if (lVar2 != 0) {
    FUN__text__006d3e94(lVar2,param_2);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar5 = *(long *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x18) = iVar1 + 1;
  *(long *)(lVar5 + (long)iVar1 * 0x18) = lVar2;
  plVar6 = (long *)(param_1 + 0x50);
  plVar4 = (long *)(lVar5 + (long)iVar1 * 0x18 + 8);
  lVar3 = *plVar4;
  *plVar4 = *plVar6;
  *(long **)(lVar3 + 8) = plVar6;
  *(long **)(*plVar6 + 8) = plVar4;
  *plVar6 = lVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return lVar2;
}


