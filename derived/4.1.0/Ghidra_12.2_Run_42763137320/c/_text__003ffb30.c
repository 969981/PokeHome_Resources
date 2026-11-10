/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ffb30; name: FUN_.text__003ffb30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ffb30(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x50);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x1e8));
  lVar4 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar2 = *(long *)(lVar4 + 8);
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  puVar3[8] = 0;
  *puVar3 = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x640);
  if (*(long *)(lVar6 + 0x640) != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 0x638);
  }
  *puVar1 = puVar3;
  *(undefined8 **)(lVar6 + 0x638) = puVar3;
  *(int *)(lVar6 + 0x630) = *(int *)(lVar6 + 0x630) + 1;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if ((param_2 != 1) && (*(int *)(lVar2 + 0x20) != -1)) {
    FUN__text__003febd0(lVar6 + 0x2a8);
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e8));
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar4 + 0x18);
    (**(code **)(**(long **)(lVar4 + 0x20) + 0x30))(*(long **)(lVar4 + 0x20),lVar4,param_2,1);
    if (lVar2 != 0) {
      lVar4 = lVar2;
      do {
        lVar5 = *(long *)(lVar4 + 0x18);
        lVar6 = lVar5;
        if (lVar2 != lVar4) {
          lVar6 = lVar2;
          _DAT_00000018 = lVar5;
        }
        lVar2 = lVar6;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x30))(*(long **)(lVar4 + 0x20),lVar4,param_2,0);
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
  }
  return;
}


