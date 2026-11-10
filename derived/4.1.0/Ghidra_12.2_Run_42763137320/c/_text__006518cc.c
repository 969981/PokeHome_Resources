/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006518cc; name: FUN_.text__006518cc
 */


undefined8
FUN__text__006518cc(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN__text__006783d4(0x38);
  if (plVar2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN__text__00678404(param_3);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_1 == 2) {
        uVar1 = *param_2;
        *plVar2 = lVar3;
        plVar2[1] = 0;
        plVar2[6] = 0;
        *(undefined4 *)(plVar2 + 4) = uVar1;
        plVar2[5] = (long)(plVar2 + 4);
        plVar2[2] = 0x400000002;
        plVar2[3] = (long)(plVar2 + 5);
        uVar4 = FUN__text__006517b4(plVar2,param_4);
      }
      else {
        uVar4 = 0;
      }
      FUN__text__006783e4(lVar3);
    }
    FUN__text__006783e4(plVar2);
  }
  return uVar4;
}


