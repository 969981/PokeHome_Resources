/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0720; name: FUN_.text__004e0720
 */


void FUN__text__004e0720(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar1 = 0;
    lVar2 = 8;
    do {
      FUN__text__00400fc0(0,*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar2));
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


