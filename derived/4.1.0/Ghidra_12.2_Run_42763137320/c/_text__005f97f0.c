/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f97f0; name: FUN_.text__005f97f0
 */


void FUN__text__005f97f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0xf8);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[10] != 0) {
      (**(code **)(*(long *)(plVar1[10] + 0x48) + 0x18))();
      plVar1[10] = 0;
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))(*(long **)(param_1 + 0x100),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),lVar2,*(long *)(param_1 + 0xd8) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x98);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN__text__005f9600(plVar1 + 6);
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),plVar1,0x178,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar2,*(long *)(param_1 + 0x78) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[10] != 0) {
      (**(code **)(*(long *)(plVar1[10] + 0x48) + 0x18))();
      plVar1[10] = 0;
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar2,*(long *)(param_1 + 0x18) << 3,8);
  return;
}


