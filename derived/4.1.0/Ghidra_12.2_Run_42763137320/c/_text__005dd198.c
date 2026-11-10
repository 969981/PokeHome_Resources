/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd198; name: FUN_.text__005dd198
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005dd198(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    lVar3 = -0x340d631b7bddd9bb;
    lVar2 = _DAT_008aa0f8;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar5 = *param_1;
    plVar1 = _DAT_0089f5c8;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x58);
    }
    lVar3 = *plVar1;
    plVar1 = _DAT_0089f5d0;
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x60);
    }
    lVar2 = *plVar1;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar5 + 0x68);
      param_1[1] = lVar3;
      param_1[2] = lVar2;
      param_1[3] = lVar4;
      param_1[4] = 0;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      lVar2 = param_1[4];
      param_1[4] = lVar5;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 5) = param_3;
      FUN__text__0010d290(param_1);
      return;
    }
  }
  param_1[1] = lVar3;
  param_1[2] = lVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN__text__0010d290(param_1);
  return;
}


