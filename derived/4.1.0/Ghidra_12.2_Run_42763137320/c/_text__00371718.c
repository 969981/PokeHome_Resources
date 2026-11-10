/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00371718; name: FUN_.text__00371718
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00371718(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158));
  if ((*(long *)(param_1 + 0x138) != 0) && (iVar1 = FUN__text__0037a128(), iVar1 == param_2)) {
    FUN__text__0037a1ac(*(undefined8 *)(param_1 + 0x138));
    lVar2 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
                (*(long **)(param_1 + 0x140),lVar2,*(undefined8 *)(param_1 + 0x148),
                 *(undefined8 *)(param_1 + 0x150));
    }
  }
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  return;
}


