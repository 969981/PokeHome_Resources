/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e88b0; name: FUN_.text__004e88b0
 */


void FUN__text__004e88b0(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (DAT_00aeb9e8 != (long *)0x0) {
    if (param_2 == 0) {
      plVar3 = DAT_00aeb9e8;
      if (param_5 == 0) {
        do {
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (lVar2 == param_1) {
            FUN__text__004ec234(plVar3,param_3,param_4 & 1);
          }
          plVar1 = plVar3 + 0xe;
          plVar3 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
      else {
        do {
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar2 == param_1) && (*(int *)(plVar3[0xc] + 0x2c) == param_5)) {
            FUN__text__004ec234(plVar3,param_3,param_4 & 1);
          }
          plVar3 = (long *)plVar3[0xe];
        } while (plVar3 != (long *)0x0);
      }
    }
    else {
      plVar3 = DAT_00aeb9e8;
      if (param_5 == 0) {
        do {
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar2 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
            FUN__text__004ec234(plVar3,param_3,param_4 & 1);
          }
          plVar1 = plVar3 + 0xe;
          plVar3 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
      else {
        do {
          lVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (((lVar2 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) &&
             (*(int *)(plVar3[0xc] + 0x2c) == param_5)) {
            FUN__text__004ec234(plVar3,param_3,param_4 & 1);
          }
          plVar3 = (long *)plVar3[0xe];
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  return;
}


