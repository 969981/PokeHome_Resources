/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002feb74; name: FUN_.text__002feb74
 */


void FUN__text__002feb74(long param_1)

{
  if (*(long *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3b0));
  if ((*(long *)(param_1 + 0x390) != 0) && (*(long *)(param_1 + 0x378) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x378) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x388) = 0x70f683;
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (*(long *)(param_1 + 0x398) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  FUN__text__005e8798(param_1);
  return;
}


