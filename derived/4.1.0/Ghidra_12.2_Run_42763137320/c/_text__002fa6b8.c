/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fa6b8; name: FUN_.text__002fa6b8
 */


void FUN__text__002fa6b8(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN__text__002ff0ec();
    lVar2 = *(long *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    if (lVar2 != 0) {
      pcVar1 = *(code **)(lVar2 + 0xb8);
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0xc0) = 0;
        *(undefined8 *)(lVar2 + 200) = 0;
        *(undefined8 *)(lVar2 + 0xb0) = 0;
        *(undefined8 *)(lVar2 + 0xb8) = 0;
        (*pcVar1)(lVar2 + 0xd0);
      }
      pcVar1 = *(code **)(lVar2 + 0x38);
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x40) = 0;
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        (*pcVar1)(lVar2 + 0x50);
      }
      if (*(long *)(lVar2 + 0x20) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar2 + 0x20) + 0x48) + 0x18))();
        *(undefined8 *)(lVar2 + 0x20) = 0;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar2 + 0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18))
                (*(long **)(param_1 + 0x1b0),lVar2,*(undefined8 *)(param_1 + 0x1b8),
                 *(undefined8 *)(param_1 + 0x1c0));
    }
  }
  if (*(char *)(param_1 + 0x520) != '\0') {
    nn::oe::LeaveExitRequestHandlingSection();
    pcVar1 = *(code **)(param_1 + 0x5d8);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x5e8) = 0;
      *(undefined8 *)(param_1 + 0x5e0) = 0;
      *(undefined8 *)(param_1 + 0x5d8) = 0;
      *(undefined8 *)(param_1 + 0x5d0) = 0;
      (*pcVar1)(param_1 + 0x5f0);
    }
    *(undefined1 *)(param_1 + 0x520) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
  return;
}


