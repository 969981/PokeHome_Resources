/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045171c; name: FUN_.text__0045171c
 */


undefined8 FUN__text__0045171c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0xe0);
  if ((plVar4 == (long *)0x0) || (plVar4[3] != param_2)) {
    plVar4 = *(long **)(param_1 + 0xe8);
    if (plVar4 == (long *)0x0) {
      return 0x1f;
    }
    if (plVar4[3] != param_2) {
      return 0x1f;
    }
  }
  uVar2 = (**(code **)(*plVar4 + 200))(plVar4,param_3,param_4);
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4);
  if ((uVar3 & 1) != 0) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = param_2 + 0x18;
    }
    if ((*(long *)(param_1 + 8) == lVar1) && (*(long *)(param_1 + 0xf0) != 0)) {
      FUN__text__004dabf4(*(long *)(param_1 + 0xf0),param_3,param_4);
    }
  }
  uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4);
  if ((uVar3 & 1) != 0) {
    plVar4[2] = (param_3 - param_4) + plVar4[2];
  }
  return 1;
}


