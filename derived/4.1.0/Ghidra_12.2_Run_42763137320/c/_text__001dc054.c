/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc054; name: FUN_.text__001dc054
 */


void FUN__text__001dc054(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (*(char *)(param_1 + 0x8ba0) != '\0') {
    **(undefined1 **)(lVar3 + 0x58) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x8ba8) == 0) {
    **(undefined1 **)(lVar3 + 0x58) = 0;
    return;
  }
  **(undefined1 **)(lVar3 + 0x58) = 1;
  puVar4 = *(undefined8 **)(lVar3 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x8bac);
  uVar2 = *(undefined8 *)(param_1 + 0x8bb4);
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x8bbc);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  return;
}


