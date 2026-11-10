/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004905b0; name: FUN_.text__004905b0
 */


float FUN__text__004905b0(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 200) == '\0') {
    fVar2 = *(float *)(param_1 + 0xb4);
    goto LAB__text__00490624;
  }
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    fVar2 = 0.0;
    if (0.0 < *(float *)(param_1 + 0xb4)) goto LAB__text__00490600;
  }
  else {
    do {
      fVar2 = (float)FUN__text__0048f764(lVar1);
      lVar1 = *(long *)(lVar1 + 0x10);
    } while (lVar1 != 0);
    if (fVar2 < *(float *)(param_1 + 0xb4)) {
LAB__text__00490600:
      *(undefined4 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    }
  }
  *(float *)(param_1 + 0xb4) = fVar2;
  *(undefined1 *)(param_1 + 200) = 0;
LAB__text__00490624:
  return *(float *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x78) * fVar2;
}


