/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a0b38; name: FUN_.text__003a0b38
 */


void FUN__text__003a0b38(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x418);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
    (*pcVar1)(param_1 + 0x430);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 1000));
  if (*(long *)(param_1 + 0x3c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3c0) = 0;
  }
  if (*(long *)(param_1 + 0x388) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x388) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  FUN__text__005e8798(param_1);
  return;
}


