/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc198; name: FUN_.text__005dc198
 */


void FUN__text__005dc198(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined4 local_24;
  
  local_24 = 0;
  iVar2 = nn::fs::WriteFile(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xa0),param_2,
                            param_3,&local_24);
  if (iVar2 == 0) {
    param_3 = *(long *)(param_1 + 0xa0) + param_3;
    if (*(char *)(param_1 + 0xa8) == '\0') {
      lVar1 = *(long *)(param_1 + 0x98);
      if (param_3 <= *(long *)(param_1 + 0x98)) {
        lVar1 = param_3;
      }
      *(long *)(param_1 + 0xa0) = lVar1;
      return;
    }
    *(long *)(param_1 + 0xa0) = param_3;
    if (*(long *)(param_1 + 0x98) < param_3) {
      *(long *)(param_1 + 0x98) = param_3;
      return;
    }
  }
  return;
}


