/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e85a0; name: FUN_.text__004e85a0
 */


void FUN__text__004e85a0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (DAT_00aeb9e8 != (long *)0x0) {
    if (param_2 == 0) {
      plVar3 = DAT_00aeb9e8;
      if (param_4 == 0) {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (lVar1 == param_1) {
            FUN__text__004ec010(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar1 == param_1) && (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN__text__004ec010(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    else {
      plVar3 = DAT_00aeb9e8;
      if (param_4 == 0) {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if ((lVar1 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) {
            FUN__text__004ec010(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          plVar2 = (long *)plVar3[0xe];
          lVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
          if (((lVar1 == param_1) && (*(long *)(plVar3[0xc] + 0x30) == param_2)) &&
             (*(int *)(plVar3[0xc] + 0x2c) == param_4)) {
            FUN__text__004ec010(plVar3,param_3,0xffffffff);
          }
          plVar3 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return;
}


