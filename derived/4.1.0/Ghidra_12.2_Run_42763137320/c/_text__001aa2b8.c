/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa2b8; name: FUN_.text__001aa2b8
 */


undefined1 FUN__text__001aa2b8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar2 = FUN__text__00195844(uVar5,*(undefined4 *)(param_1 + 0x24));
  lVar3 = FUN__text__00195844(uVar5,*(undefined4 *)(param_1 + 0x38));
  uVar1 = *(int *)(lVar3 + 0xc) != 1;
  uVar4 = 2;
  if ((bool)uVar1) {
    uVar4 = 3;
  }
  if (*(int *)(lVar2 + 0xc) != 1) {
    uVar1 = uVar4;
  }
  return uVar1;
}


