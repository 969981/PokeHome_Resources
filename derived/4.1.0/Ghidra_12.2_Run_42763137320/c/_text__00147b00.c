/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00147b00; name: FUN_.text__00147b00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00147b00(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  lVar1 = _DAT_008a02e8 + 0xa0;
  lVar2 = _DAT_008a02e8 + 0xe0;
  *param_1 = _DAT_008a02e8 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x22));
  plVar4 = (long *)param_1[0x1c];
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4;
    if ((long *)param_1[0x1d] != plVar4) {
      plVar3 = (long *)param_1[0x1d];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar5 != plVar4);
      plVar3 = (long *)param_1[0x1c];
    }
    param_1[0x1d] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],plVar3,param_1[0x1e] - (long)plVar3,8);
  }
  plVar4 = (long *)param_1[0x16];
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4;
    if ((long *)param_1[0x17] != plVar4) {
      plVar3 = (long *)param_1[0x17];
      do {
        plVar5 = plVar3 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar5;
      } while (plVar5 != plVar4);
      plVar3 = (long *)param_1[0x16];
    }
    param_1[0x17] = (long)plVar4;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],plVar3,param_1[0x18] - (long)plVar3,8);
  }
  FUN__text__005a7e90(param_1);
  return;
}


