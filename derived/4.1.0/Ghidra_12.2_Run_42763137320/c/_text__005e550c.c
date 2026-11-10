/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e550c; name: FUN_.text__005e550c
 */


void FUN__text__005e550c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN__text__005e8538();
  *param_1 = 0x8977d8;
  param_1[9] = 0x897850;
  param_1[0xb] = 0x897880;
  uVar1 = tpidr_el0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if ((uVar1 != 0) && (*(long *)(uVar1 + 0x98) != 0)) {
    lVar2 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    if (lVar2 != 0) goto LAB__text__005e557c;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005e557c:
  param_1[0x71] = lVar2;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x74),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x78));
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = param_2;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined4 *)((long)param_1 + 0x3ec) = 0;
  param_1[0x7e] = 0;
  FUN__text__005e8c7c(uVar1,0);
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_3;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x90,8);
  if (lVar2 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN__text__005e1ef4(lVar2,0,0);
  *(long **)(lVar2 + 8) = param_3;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x90;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  lVar3 = param_1[0x79];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  param_1[0x79] = lVar2;
  return;
}


