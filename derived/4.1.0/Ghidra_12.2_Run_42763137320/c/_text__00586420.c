/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00586420; name: FUN_.text__00586420
 */


void FUN__text__00586420(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x3c) * 4);
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar3 * 8),
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar3 * 8) + (long)((int)uVar1 >> 2) * 4),
           (ulong)(uVar1 & 0xfffffffc));
    lVar3 = lVar3 + 1;
  } while (lVar3 < *(int *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}


