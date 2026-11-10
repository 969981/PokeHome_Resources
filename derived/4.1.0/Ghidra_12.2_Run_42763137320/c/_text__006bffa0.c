/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bffa0; name: FUN_.text__006bffa0
 */


void FUN__text__006bffa0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[1];
  while (plVar2 != param_1) {
    if ((char)plVar2[0x13] != '\0') {
      (**(code **)(*(long *)plVar2[0x12] + 0x18))((long *)plVar2[0x12],param_2);
    }
    plVar3 = (long *)plVar2[0x12];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN__text__006a0f24(plVar3);
    }
    plVar3 = (long *)plVar2[1];
    lVar1 = *plVar3;
    *(long **)(*plVar2 + 8) = plVar3;
    *plVar3 = *plVar2;
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    FUN__text__006bff94(plVar2);
    FUN__text__006a0f24(plVar2);
    plVar2 = (long *)param_1[1];
  }
  return;
}


