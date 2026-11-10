/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c4e8; name: FUN_.text__0052c4e8
 */


void FUN__text__0052c4e8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (1 < uVar1) {
    memmove(*(void **)(param_1 + 0x30),(void *)((long)*(void **)(param_1 + 0x30) + 0x1e8),
            (ulong)(uVar1 * 0x1e8 - 0x1e8));
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x38) = uVar1 - 1;
  return;
}


