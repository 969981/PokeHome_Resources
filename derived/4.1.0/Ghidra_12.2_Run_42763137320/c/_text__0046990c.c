/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046990c; name: FUN_.text__0046990c
 */


void FUN__text__0046990c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != 0) {
    *(short *)(lVar1 + 0xc4) = *(short *)(lVar1 + 0xc4) + -1;
    if ((param_2 & 1) != 0) {
      *(short *)(lVar1 + 0xc6) = *(short *)(lVar1 + 0xc6) + -1;
    }
    lVar1 = *(long *)(param_1 + 0x70);
    if ((((*(short *)(lVar1 + 0xc0) < 1 && *(short *)(lVar1 + 0xc4) < 1) &&
         (*(short *)(lVar1 + 0xa8) == 0)) && (*(short *)(lVar1 + 0xaa) == 0)) &&
       ((*(long *)(lVar1 + 0x10) == 0 && (*(int *)(lVar1 + 8) == 0)))) {
      FUN__text__00463eb0();
      return;
    }
  }
  return;
}


