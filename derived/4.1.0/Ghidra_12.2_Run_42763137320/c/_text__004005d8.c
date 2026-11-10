/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004005d8; name: FUN_.text__004005d8
 */


bool FUN__text__004005d8(long param_1,long param_2,int param_3)

{
  bool bVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (param_2 != 0) {
    if (param_3 == 1) {
      bVar1 = (*(byte *)(param_2 + 0x14) & 7) != 2;
    }
    else {
      bVar1 = false;
    }
    FUN__text__003fb934(param_1,param_2,bVar1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN__text__003fba44(param_1,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return param_2 != 0;
}


