/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c324; name: FUN_.text__0039c324
 */


void FUN__text__0039c324(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170));
  if (*(long *)(param_1 + 0x150) != 0) {
    plVar1 = (long *)FUN__text__0039fa84();
    if (*plVar1 == *param_2) {
      FUN__text__0039fb04(*(undefined8 *)(param_1 + 0x150));
      lVar3 = *(long *)(param_1 + 0x150);
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (lVar3 != 0) {
        pcVar2 = *(code **)(lVar3 + 0x38);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar3 + 0x40) = 0;
          *(undefined8 *)(lVar3 + 0x48) = 0;
          *(undefined8 *)(lVar3 + 0x30) = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          (*pcVar2)(lVar3 + 0x50);
        }
        if (*(long *)(lVar3 + 0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + 0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + 0x20) = 0;
        }
        if (*(long *)(lVar3 + 0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + 0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + 0x18) = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
                  (*(long **)(param_1 + 0x158),lVar3,*(undefined8 *)(param_1 + 0x160),
                   *(undefined8 *)(param_1 + 0x168));
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170));
  return;
}


