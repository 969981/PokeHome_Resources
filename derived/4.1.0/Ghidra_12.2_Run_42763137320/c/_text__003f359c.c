/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f359c; name: FUN_.text__003f359c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003f359c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  
  local_68 = 0;
  local_3c = 0xffffffff;
  local_60 = 0;
  local_34 = 0;
  local_58 = 0xb00000000;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x20))
                    ((long *)*_DAT_008a43d8,param_2,&local_58,0,&local_68,1);
  if (iVar1 == 1) {
    iVar1 = FUN__text__003f3a6c(param_1,param_2,&local_68,0x32,&local_58);
    if ((iVar1 == 0x16) || (iVar1 == 1)) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x38));
      if (*(long *)(param_1 + 0x30) == 0) {
        *(long *)(param_1 + 0x28) = local_58;
        *(long *)(param_1 + 0x30) = local_58;
        *(undefined8 *)(local_58 + 8) = 0;
      }
      else {
        *(long *)(local_58 + 8) = *(long *)(param_1 + 0x30);
        *(long *)(param_1 + 0x30) = local_58;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *param_3 = *(undefined4 *)(local_58 + 0x40);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
    }
  }
  return iVar1;
}


