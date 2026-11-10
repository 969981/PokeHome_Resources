/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127b10; name: FUN_.text__00127b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00127b10(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = _DAT_0089fa28 + 0x48;
  *param_1 = _DAT_0089fa28 + 0x10;
  param_1[9] = lVar1;
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  plVar3 = (long *)param_1[0xf];
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    if ((long *)param_1[0x10] != plVar3) {
      plVar2 = (long *)param_1[0x10];
      do {
        plVar4 = plVar2 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar4;
      } while (plVar4 != plVar3);
      plVar2 = (long *)param_1[0xf];
    }
    param_1[0x10] = (long)plVar3;
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],plVar2,param_1[0x11] - (long)plVar2,8);
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


