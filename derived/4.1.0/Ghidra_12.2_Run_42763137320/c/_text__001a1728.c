/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a1728; name: FUN_.text__001a1728
 */


void FUN__text__001a1728(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(char *)(*(long *)(param_1 + 0x68) + 0x5b80) == '\0') &&
     (*(char *)(*(long *)(param_1 + 0x88) + 0x5b80) == '\0')) {
    if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(int *)(lVar2 + 0x2a8) = *(int *)(lVar2 + 0x2a8) + 1;
    FUN__text__001aaa0c(uVar1);
    if (*(int *)(param_1 + 0x1bc) != 4) {
      FUN__text__001bc4a0(*(undefined8 *)(param_1 + 0x68),0,0,0);
    }
    if (*(int *)(param_1 + 0x1c0) != 4) {
      FUN__text__001bc4a0(*(undefined8 *)(param_1 + 0x88),0,0,0);
      return;
    }
  }
  return;
}


