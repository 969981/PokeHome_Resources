/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f8a0; name: FUN_.text__0048f8a0
 */


undefined8 FUN__text__0048f8a0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  plVar2 = *(long **)(lVar3 + 0x38);
  if (plVar2 != (long *)0x0) {
LAB__text__0048f8c4:
    *(long *)(param_1 + 8) = param_2;
    FUN__text__00490268(plVar2,param_1);
    return 1;
  }
  plVar2 = (long *)FUN__text__00400f80(4,0xe0);
  if (plVar2 != (long *)0x0) {
    FUN__text__0048fa0c();
    *(long **)(lVar3 + 0x38) = plVar2;
    plVar2[1] = lVar3;
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(lVar3 + 0x58));
    if (iVar1 == 1) goto LAB__text__0048f8c4;
    (**(code **)*plVar2)(plVar2);
    FUN__text__00400fc0(4,plVar2);
    *(undefined8 *)(lVar3 + 0x38) = 0;
  }
  return 2;
}


