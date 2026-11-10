/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019fde8; name: FUN_.text__0019fde8
 */


void FUN__text__0019fde8(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    FUN__text__001ca5b8(*(undefined8 *)(param_1 + 0x68),0);
    FUN__text__001ca5b8(*(undefined8 *)(param_1 + 0x88),0);
    FUN__text__001ca5b8(*(undefined8 *)(param_1 + 0xa8),0);
    FUN__text__001ca5b8(*(undefined8 *)(param_1 + 200),0);
    return;
  }
  lVar1 = param_1 + (long)*(int *)(param_1 + 0x1c4) * 0x20;
  if (*(int *)(param_1 + (long)*(int *)(param_1 + 0x1c4) * 4 + 0x1bc) == 4) {
    FUN__text__001ca5b8(*(undefined8 *)(lVar1 + 0xa8),1);
    return;
  }
  lVar1 = *(long *)(lVar1 + 0x68);
  if (*(int *)(lVar1 + 0x4cc) == 1) {
    FUN__text__001ca5b8(lVar1,1);
    return;
  }
  return;
}


