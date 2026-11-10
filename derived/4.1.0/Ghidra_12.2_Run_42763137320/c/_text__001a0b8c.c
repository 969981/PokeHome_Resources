/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0b8c; name: FUN_.text__001a0b8c
 */


void FUN__text__001a0b8c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(char *)(*(long *)(param_1 + 0x68) + 0x5b81) != '\0') ||
     (*(char *)(*(long *)(param_1 + 0x88) + 0x5b81) != '\0')) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  iVar1 = FUN__text__001c1fa4(uVar2);
  lVar3 = *(long *)(lVar3 + 8);
  *(int *)(lVar3 + 0x2a8) = *(int *)(lVar3 + 0x2a8) + iVar1;
  FUN__text__001c2650(uVar2);
  if (*(int *)(param_1 + 0x1bc) == 4) {
    iVar1 = *(int *)(param_1 + 0x1c0);
  }
  else {
    FUN__text__001be1a8(*(undefined8 *)(param_1 + 0x68));
    iVar1 = *(int *)(param_1 + 0x1c0);
  }
  if (iVar1 == 4) {
    FUN__text__001a0a70(param_1);
    return;
  }
  FUN__text__001be1a8(*(undefined8 *)(param_1 + 0x88));
  FUN__text__001a0a70(param_1);
  return;
}


