/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001431ec; name: FUN_.text__001431ec
 */


void FUN__text__001431ec(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x678) == 0) {
    lVar1 = *(long *)(param_1 + 0x650);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x15a) = 1;
      FUN__text__003a14e8(lVar1,1);
      lVar1 = *(long *)(param_1 + 0x648);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x15a) = 0;
        FUN__text__003a14e8(lVar1,0);
        return;
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x650);
    if (*(int *)(param_1 + 0x678) == *(int *)(param_1 + 0x67c) + -1) {
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x15a) = 0;
        FUN__text__003a14e8(lVar1,0);
        lVar1 = *(long *)(param_1 + 0x648);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x15a) = 1;
          FUN__text__003a14e8(lVar1,1);
          return;
        }
      }
    }
    else if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x15a) = 1;
      FUN__text__003a14e8(lVar1,1);
      lVar1 = *(long *)(param_1 + 0x648);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x15a) = 1;
        FUN__text__003a14e8(lVar1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


