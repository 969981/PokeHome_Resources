/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463c74; name: FUN_.text__00463c74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00463c74(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = _DAT_008a4ab8 + 0x10;
  lVar1 = _DAT_008a4ab8 + 0x288;
  lVar2 = _DAT_008a4ab8 + 0x2a0;
  plVar4 = param_1 + 5;
  *plVar4 = _DAT_008a4ab8 + 0x2e0;
  *param_1 = lVar5;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  FUN__text__0042eae0(plVar4);
  FUN__text__00463df0(param_1);
  plVar3 = (long *)param_1[0xf];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
    param_1[0xf] = 0;
  }
  plVar3 = (long *)param_1[0x10];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
    param_1[0x10] = 0;
  }
  if (param_1[0x11] != 0) {
    FUN__text__00400fc0(2);
  }
  if (param_1[0xd] != 0) {
    FUN__text__0047b6a8();
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      FUN__text__0047b5f8(lVar5);
      FUN__text__00400fc0(2,lVar5);
    }
    param_1[0xd] = 0;
  }
  FUN__text__004ce540(param_1 + 0x15);
  lVar5 = param_1[0xc];
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) != 0) {
      FUN__text__00400fc0(2,*(undefined8 *)(lVar5 + 8));
      lVar5 = param_1[0xc];
      if (lVar5 == 0) goto LAB__text__00463d80;
    }
    FUN__text__00463bbc(lVar5);
    FUN__text__00400fc0(2,lVar5);
  }
LAB__text__00463d80:
  if (param_1[0xe] != 0) {
    FUN__text__00463eb0(param_1);
  }
  FUN__text__004323e0(param_1 + 9);
  FUN__text__0046c880(param_1);
  FUN__text__004ce9e0(param_1 + 0x17);
  FUN__text__004ce540(param_1 + 0x15);
  if (param_1[0x12] != 0) {
    FUN__text__00400fc0(0);
  }
  param_1[0x12] = 0;
  FUN__text__00432310(param_1 + 9);
  FUN__text__004a148c(plVar4);
  thunk_FUN__text__0042ce74(param_1 + 2);
  return;
}


