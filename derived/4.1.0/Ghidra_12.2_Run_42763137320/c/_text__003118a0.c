/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003118a0; name: FUN_.text__003118a0
 */


void FUN__text__003118a0(long param_1)

{
  void *__src;
  long lVar1;
  
  __src = (void *)(param_1 + 0x54);
  memcpy((void *)(param_1 + 0x3f7f4),__src,260000);
  lVar1 = 0;
  do {
    FUN__text__005fc188(*(undefined8 *)(param_1 + 0x7efa0 + lVar1 * 8),__src,0);
    lVar1 = lVar1 + 1;
    __src = (void *)((long)__src + 0x104);
  } while (lVar1 != 1000);
  return;
}


