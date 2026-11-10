/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004008e4; name: FUN_.text__004008e4
 */


bool FUN__text__004008e4(long param_1,long param_2,int param_3,uint param_4)

{
  bool bVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (param_2 != 0) {
    bVar1 = false;
    if ((param_3 == 1) && (*(long *)(param_1 + 200) != 0)) {
      bVar1 = (*(byte *)(param_2 + 0x14) & 7) != 2;
      if ((bVar1) && ((param_4 & 1) == 0)) {
        *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf8 | 3;
      }
    }
    FUN__text__003fd804(param_1,param_2,bVar1);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  FUN__text__003fc8a4(param_1,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return param_2 != 0;
}


