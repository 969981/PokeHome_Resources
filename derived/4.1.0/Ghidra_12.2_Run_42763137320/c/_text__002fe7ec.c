/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fe7ec; name: FUN_.text__002fe7ec
 */


void FUN__text__002fe7ec(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  FUN__text__005e8634(param_1,0x20000);
  param_1[0x6e] = param_2;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *param_1 = 0x87c638;
  param_1[0xb] = 0x87c6e0;
  param_1[9] = 0x87c6b0;
  param_1[0x70] = 0xcbf29ce484222645;
  param_1[0x71] = 0x70f683;
  param_1[0x70] = param_3[1];
  param_1[0x71] = param_3[2];
  param_1[0x72] = param_3[3];
  lVar3 = param_3[4];
  if (lVar3 == 0) {
    param_1[0x73] = 0;
    *(int *)(param_1 + 0x74) = (int)param_3[5];
    lVar3 = param_3[3];
  }
  else {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = param_1[0x73];
    param_1[0x73] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0x74) = (int)param_3[5];
    lVar3 = param_3[3];
  }
  if (lVar3 == 0) {
    param_1[0x6f] = *param_3;
  }
  else {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar1 = param_1[0x6f];
    param_1[0x6f] = lVar3;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x75) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x76),false,0);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = (long *)param_1[1];
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x90,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__005e1ef4(lVar3,0,0);
  param_1[0x7a] = lVar3;
  *(long **)(lVar3 + 8) = plVar2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x90;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x002fe9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
  return;
}


