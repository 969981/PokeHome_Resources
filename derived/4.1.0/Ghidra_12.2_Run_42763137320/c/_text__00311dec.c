/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311dec; name: FUN_.text__00311dec
 */


void FUN__text__00311dec(long *param_1)

{
  void *__s;
  size_t __n;
  
  __s = (void *)(**(code **)(*param_1 + 0x28))();
  __n = (**(code **)(*param_1 + 0x30))(param_1);
  memset(__s,0,__n);
  *(undefined1 *)(param_1 + 0x21f) = 0;
  return;
}


