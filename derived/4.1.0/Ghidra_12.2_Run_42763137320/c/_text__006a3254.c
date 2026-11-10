/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3254; name: FUN_.text__006a3254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__006a3254(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                          uint param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_4 + 8);
  if (lVar5 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = (long *)(*(code *)*_DAT_008a6960)(0x50,4,*_DAT_008a6970);
    if (plVar1 != (long *)0x0) {
      FUN__text__006a8030(plVar1);
      lVar3 = _DAT_008a6818;
      plVar1[9] = 0;
      *plVar1 = lVar3 + 0x10;
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      plVar4 = (long *)(param_1 + 8);
      *plVar2 = *plVar4;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(*plVar4 + 8) = plVar2;
      *plVar4 = lVar3;
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,*(undefined8 *)(param_1 + 0x40),lVar5);
    }
  }
  FUN__text__006a83e8(plVar1,param_4,*(undefined8 *)(param_1 + 0x20),0,param_5 & 1);
  return plVar1;
}


