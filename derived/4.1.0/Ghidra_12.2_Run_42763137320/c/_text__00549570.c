/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00549570; name: FUN_.text__00549570
 */


void FUN__text__00549570(long *param_1)

{
  void *__s;
  ulong uVar1;
  ulong uVar2;
  
  if (((int)param_1[1] != 0) && (uVar1 = (ulong)*(uint *)(param_1 + 2), *(uint *)(param_1 + 2) != 0)
     ) {
    uVar2 = 0;
    do {
      __s = *(void **)(*param_1 + uVar2 * 8);
      if (__s != (void *)0x0) {
        memset(__s,0,(ulong)(uint)((int)param_1[1] << 2));
        uVar1 = (ulong)*(uint *)(param_1 + 2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}


