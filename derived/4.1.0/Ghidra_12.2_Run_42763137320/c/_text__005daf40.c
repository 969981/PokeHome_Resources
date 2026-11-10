/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005daf40; name: FUN_.text__005daf40
 */


void FUN__text__005daf40(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[9] != 0) {
      (**(code **)(*(long *)(plVar1[9] + 0x48) + 0x18))();
      plVar1[9] = 0;
    }
    if ((plVar1[5] != 0) && (plVar1[2] != 0)) {
      (**(code **)(*(long *)(plVar1[2] + 0x48) + 0x18))();
    }
    plVar1[2] = 0;
    plVar1[3] = 0xcbf29ce484222645;
    plVar1[4] = 0x70f683;
    plVar1[5] = 0;
    if (plVar1[6] != 0) {
      (**(code **)(*(long *)(plVar1[6] + 0x48) + 0x18))();
    }
    plVar1[6] = 0;
    *(undefined4 *)(plVar1 + 7) = 0;
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar1,0x50,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005db034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[1] << 3,8);
  return;
}


