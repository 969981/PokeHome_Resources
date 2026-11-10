/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371b14; name: FUN_.text__00371b14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00371b14(long param_1)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x198));
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN__text__0037ae98();
    lVar1 = *(long *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x180) + 0x18))
                (*(long **)(param_1 + 0x180),lVar1,*(undefined8 *)(param_1 + 0x188),
                 *(undefined8 *)(param_1 + 400));
    }
  }
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x198));
  return;
}


