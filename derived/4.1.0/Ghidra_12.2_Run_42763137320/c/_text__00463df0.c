/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463df0; name: FUN_.text__00463df0
 */


void FUN__text__00463df0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    if ((((*(long *)(param_1 + 0x78) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x78) + 0x70), lVar1 != 0)) &&
        (*(short *)(lVar1 + 0xc0) < 1 && *(short *)(lVar1 + 0xc4) < 1)) &&
       (((*(short *)(lVar1 + 0xa8) == 0 && *(short *)(lVar1 + 0xaa) == 0) &&
         *(long *)(lVar1 + 0x10) == 0 && (*(int *)(lVar1 + 8) == 0)))) {
      FUN__text__00463eb0();
    }
    if ((((*(long *)(param_1 + 0x80) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x70), lVar1 != 0)) &&
        ((*(short *)(lVar1 + 0xc0) < 1 && *(short *)(lVar1 + 0xc4) < 1 &&
         (((*(short *)(lVar1 + 0xa8) == 0 && (*(short *)(lVar1 + 0xaa) == 0)) &&
          (*(long *)(lVar1 + 0x10) == 0)))))) && (*(int *)(lVar1 + 8) == 0)) {
      FUN__text__00463eb0();
      return;
    }
  }
  return;
}


