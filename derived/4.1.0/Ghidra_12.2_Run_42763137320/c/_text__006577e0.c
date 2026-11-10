/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006577e0; name: FUN_.text__006577e0
 */


undefined8 FUN__text__006577e0(long *param_1,long *param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 == (long *)0x0) {
    return 0x2b;
  }
  if (((int)param_1[3] != 4) || ((long *)param_1[8] != param_2)) {
    if ((code *)param_1[7] != (code *)0x0) {
      (*(code *)param_1[7])(param_1[8]);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xf] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = (long)param_1;
    param_1[9] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    if (param_2 != (long *)0x0) {
      lVar2 = *param_1;
      if ((((lVar2 != 0) && (*param_2 != 0)) && (lVar2 != *param_2)) || (param_2[1] != 0)) {
        return 0x2b;
      }
      plVar5 = (long *)param_1[1];
      if ((long *)param_1[1] != (long *)0x0) {
        do {
          plVar3 = plVar5;
          lVar4 = plVar3[1];
          if (lVar4 == 0) break;
          plVar5 = *(long **)(lVar4 + 8);
        } while (plVar5 != (long *)0x0);
        if (plVar3 == param_2) {
          if (lVar2 == 0) {
            return 0x2b;
          }
          FUN__text__0066713c(lVar2,0x711282);
          return 0x2b;
        }
      }
      param_2[1] = (long)param_1;
      param_1[5] = (long)&LAB__text__00657910;
      param_1[6] = (long)FUN__text__00657b14;
      pcVar1 = FUN__text__00656e2c;
      if (param_3 != 0) {
        pcVar1 = FUN__text__00657b8c;
      }
      param_1[7] = (long)pcVar1;
      param_1[8] = (long)param_2;
      param_1[0xf] = -1;
      *(undefined4 *)(param_1 + 3) = 4;
      return 0;
    }
  }
  return 0;
}


