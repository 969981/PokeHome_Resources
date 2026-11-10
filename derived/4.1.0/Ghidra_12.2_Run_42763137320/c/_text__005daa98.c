/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005daa98; name: FUN_.text__005daa98
 */


void FUN__text__005daa98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_50 [8];
  char *local_48;
  long local_38;
  int local_14;
  
  local_14 = FUN__text__005dd600(param_2);
  if (local_14 != -1) {
    lVar1 = param_1 + (long)local_14 * 4;
    if (*(int *)(lVar1 + 0x13c) != 3) {
      FUN__text__005dd624(auStack_50,param_2);
      nn::fs::Unmount(local_48);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
    *(undefined4 *)(lVar1 + 0x13c) = 0;
    FUN__text__005da660(param_1 + 0x168,&local_14);
  }
  return;
}


