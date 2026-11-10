/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045fb20; name: FUN_.text__0045fb20
 */


void FUN__text__0045fb20(long param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *local_68;
  ulong uStack_60;
  float local_58;
  undefined4 local_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined1 local_42;
  
  plVar4 = (long *)(param_1 + 0x170);
  plVar5 = (long *)(param_1 + 0x148);
  plVar6 = plVar5;
  if (param_5 != 0) {
    plVar6 = plVar4;
  }
  do {
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while ((int)plVar6[1] != param_2);
  *(undefined1 *)((long)plVar6 + 0x2c) = 1;
  if (DAT_00ae9a60 != 0) {
    if (plVar6[4] == 0) {
      plVar1 = plVar6 + 2;
      if ((param_3 == 0) || (*(float *)(plVar6 + 5) == 0.0)) {
        puVar3 = (undefined8 *)*plVar1;
      }
      else {
        uStack_60 = (ulong)param_5;
        uStack_48 = 0x11;
        local_54 = 0;
        local_44 = 0x101;
        local_42 = 0;
        local_68 = plVar1;
        local_58 = *(float *)(plVar6 + 5);
        iStack_50 = param_3;
        local_4c = param_4;
        lVar2 = FUN__text__0042f18c(DAT_00ae9a60,&local_68,0);
        plVar6[4] = lVar2;
        if (lVar2 != 0) goto LAB__text__0045fc20;
        puVar3 = (undefined8 *)*plVar1;
      }
      (*(code *)*puVar3)(0,plVar1,param_5,1);
    }
    else {
      FUN__text__0042f65c(0,DAT_00ae9a60,plVar6[4],param_5,param_3,param_4,0);
    }
  }
LAB__text__0045fc20:
  do {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      do {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return;
        }
      } while (-0.01 <= *(float *)(plVar4 + 5));
      return;
    }
  } while (-0.01 <= *(float *)(plVar5 + 5));
  return;
}


