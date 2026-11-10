/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d2080; name: FUN_.text__005d2080
 */


void FUN__text__005d2080(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)param_1[0x12];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
    if ((long *)param_1[0x13] != plVar2) {
      plVar1 = (long *)param_1[0x13];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar3 != plVar2);
      plVar1 = (long *)param_1[0x12];
    }
    param_1[0x13] = plVar2;
    (**(code **)(*(long *)param_1[0x15] + 0x18))
              ((long *)param_1[0x15],plVar1,param_1[0x14] - (long)plVar1,8);
  }
  plVar2 = (long *)param_1[0xc];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
    if ((long *)param_1[0xd] != plVar2) {
      plVar1 = (long *)param_1[0xd];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar3 != plVar2);
      plVar1 = (long *)param_1[0xc];
    }
    param_1[0xd] = plVar2;
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],plVar1,param_1[0xe] - (long)plVar1,8);
  }
  plVar2 = (long *)param_1[6];
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
    if ((long *)param_1[7] != plVar2) {
      plVar1 = (long *)param_1[7];
      do {
        plVar3 = plVar1 + -1;
        if (*plVar3 != 0) {
          (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar3;
      } while (plVar3 != plVar2);
      plVar1 = (long *)param_1[6];
    }
    param_1[7] = plVar2;
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],plVar1,param_1[8] - (long)plVar1,8)
    ;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar1 = plVar2;
  if ((long *)param_1[1] != plVar2) {
    plVar1 = (long *)param_1[1];
    do {
      plVar3 = plVar1 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        plVar1[-1] = 0;
      }
      plVar1 = plVar3;
    } while (plVar3 != plVar2);
    plVar1 = (long *)*param_1;
  }
  param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x005d2260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],plVar1,param_1[2] - (long)plVar1,8);
  return;
}


