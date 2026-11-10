/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f02e0; name: FUN_.text__003f02e0
 */


void FUN__text__003f02e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  nn::os::FinalizeMutex((MutexType *)(param_2 + 0xb));
  plVar1 = (long *)param_2[5];
  while (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    pcVar2 = (code *)plVar1[0x19];
    if (pcVar2 != (code *)0x0) {
      plVar1[0x1a] = 0;
      plVar1[0x1b] = 0;
      plVar1[0x18] = 0;
      plVar1[0x19] = 0;
      (*pcVar2)(plVar1 + 0x1c);
    }
    pcVar2 = (code *)plVar1[9];
    if (pcVar2 != (code *)0x0) {
      plVar1[10] = 0;
      plVar1[0xb] = 0;
      plVar1[8] = 0;
      plVar1[9] = 0;
      (*pcVar2)(plVar1 + 0xc);
    }
    if (plVar1[4] != 0) {
      (**(code **)(*(long *)(plVar1[4] + 0x48) + 0x18))();
      plVar1[4] = 0;
    }
    (**(code **)(*(long *)param_2[6] + 0x18))((long *)param_2[6],plVar1,0x150,0x10);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_2[2] + 0x18))((long *)param_2[2],lVar3,param_2[1] << 3,0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x003f03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


