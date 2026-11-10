/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069dfe0; name: FUN_.text__0069dfe0
 */


void FUN__text__0069dfe0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    if (((char)plVar3[0x13] != '\0') && (plVar1 = (long *)plVar3[0x12], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      plVar1 = (long *)plVar3[0x12];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN__text__006a0f24(plVar1);
      }
      plVar3[0x12] = 0;
    }
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    FUN__text__0069dfd8(plVar3);
    FUN__text__006a0f24(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}


