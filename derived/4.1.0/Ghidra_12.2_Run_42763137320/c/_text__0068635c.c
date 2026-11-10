/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068635c; name: FUN_.text__0068635c
 */


void FUN__text__0068635c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  lVar1 = *(long *)(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
    *(long *)(lVar1 + 0x78) = lVar2;
    if (lVar2 == 0) goto LAB__text__006863a0;
    lVar3 = 0;
    *(long *)(lVar2 + 0x70) = lVar1;
  }
  else {
    *(long *)(lVar3 + 0x88) = lVar2;
    if (lVar2 == 0) goto LAB__text__006863a0;
  }
  *(long *)(lVar2 + 0x80) = lVar3;
LAB__text__006863a0:
  *(int *)(lVar1 + 0xd8) = *(int *)(lVar1 + 0xd8) - *(int *)(param_1 + 0xd0);
  if (*(char *)(param_1 + 0xe6) != '\0') {
    FUN__text__00686194(param_1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(long *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


