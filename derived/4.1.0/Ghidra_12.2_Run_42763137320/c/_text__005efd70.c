/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005efd70; name: FUN_.text__005efd70
 */


void FUN__text__005efd70(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)param_1[0x54];
  while (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    if (plVar3[5] != 0) {
      (**(code **)(*(long *)(plVar3[5] + 0x48) + 0x18))();
      plVar3[5] = 0;
    }
    (**(code **)(*(long *)param_1[0x55] + 0x18))((long *)param_1[0x55],plVar3,0x38,8);
    plVar3 = (long *)lVar1;
  }
  lVar1 = param_1[0x4f];
  param_1[0x4f] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[0x51] + 0x18))((long *)param_1[0x51],lVar1,param_1[0x50] << 3,8);
  }
  if (param_1[0x4e] != 0) {
    (**(code **)(*(long *)(param_1[0x4e] + 0x48) + 0x18))();
    param_1[0x4e] = 0;
  }
  *param_1 = 0x8952d0;
  param_1[9] = 0x895370;
  param_1[10] = 0x8953b0;
  if (param_1[0x4a] != 0) {
    (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))();
    param_1[0x4a] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x48));
  plVar3 = (long *)param_1[0x42];
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    if ((long *)param_1[0x43] != plVar3) {
      plVar2 = (long *)param_1[0x43];
      do {
        plVar4 = plVar2 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar4;
      } while (plVar4 != plVar3);
      plVar2 = (long *)param_1[0x42];
    }
    param_1[0x43] = plVar3;
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],plVar2,param_1[0x44] - (long)plVar2,8);
  }
  FUN__text__0014eae0(param_1);
  return;
}


