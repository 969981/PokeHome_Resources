/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3594; name: FUN_.text__001c3594
 */


void FUN__text__001c3594(long param_1)

{
  long lVar1;
  
  if (((*(long **)(param_1 + 0x640) == (long *)0x0) || (**(long **)(param_1 + 0x640) == 0)) ||
     (*(long *)(param_1 + 0x6b8) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e68);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  if (*(int *)**(undefined8 **)(param_1 + 0x640) == 2) {
    if (*(long *)(param_1 + 0x6b8) != 0) {
      FUN__text__001c6e54(*(long *)(param_1 + 0x6b8),0);
      FUN__text__001c6ea8(*(undefined8 *)(param_1 + 0x6b8),0);
      FUN__text__001a0d44(*(undefined8 *)(param_1 + 0x6f8));
    }
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e70);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    }
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x725e68);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    }
  }
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x678),1);
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x698),1);
  FUN__text__001c5cac(*(undefined8 *)(param_1 + 0x698),**(undefined8 **)(param_1 + 0x640));
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6b8),1);
  FUN__text__0019e41c(*(undefined8 *)(param_1 + 0x6f8));
  if (*(int *)(*(long *)(param_1 + 0x6f8) + 0x1c0) == 0) {
    FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x6d8),1);
    FUN__text__001c798c(*(undefined8 *)(param_1 + 0x6d8),
                        *(int *)**(undefined8 **)(param_1 + 0x640) == 1);
    return;
  }
  return;
}


