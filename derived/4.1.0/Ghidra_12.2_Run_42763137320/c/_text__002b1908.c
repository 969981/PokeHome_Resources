/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1908; name: FUN_.text__002b1908
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b1908(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  if ((*(long *)(param_1 + 0x118) != 0) && (iVar1 = FUN__text__002c3534(), iVar1 == param_2)) {
    FUN__text__002c35b8(*(undefined8 *)(param_1 + 0x118));
    lVar2 = *(long *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (lVar2 != 0) {
      if (*(long *)(lVar2 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar2 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
                (*(long **)(param_1 + 0x120),lVar2,*(undefined8 *)(param_1 + 0x128),
                 *(undefined8 *)(param_1 + 0x130));
    }
  }
  FUN__text__005daa98(*_DAT_0089f550,param_1 + 0xa8);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return;
}


