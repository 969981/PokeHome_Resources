/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308cf8; name: FUN_.text__00308cf8
 */


void FUN__text__00308cf8(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  if (*(long *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x78),param_1 + 0x70);
    lVar1 = *(long *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x1c0) + 0x18))
              (*(long **)(param_1 + 0x1c0),lVar1,*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(param_1 + 0x1d0));
  }
  pcVar2 = *(code **)(param_1 + 0x228);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined2 *)(param_1 + 0x214) = 0;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    (*pcVar2)(param_1 + 0x240);
  }
  pcVar2 = *(code **)(param_1 + 0x2a8);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    (*pcVar2)(param_1 + 0x2c0);
  }
  nn::os::InitializeLightEvent(param_1 + 0x1d8,0,0);
  nn::os::InitializeLightEvent(param_1 + 0x1e4,0,0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}


