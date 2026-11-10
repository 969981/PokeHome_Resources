/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b316c; name: FUN_.text__006b316c
 */


byte FUN__text__006b316c(long param_1)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar1 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    lVar2 = *(long *)(lVar2 + (ulong)(*(int *)(lVar2 + (ulong)uVar1 + 4 +
                                                       (ulong)*(byte *)(lVar2 + (ulong)(*(int *)(
                                                  lVar2 + (ulong)uVar1 + 4) + uVar1) + 0xc) * 4) +
                                     uVar1) + 8);
    bVar4 = 0;
    if (*(long *)(lVar2 + 0x58) != 0) {
      if ((*(byte *)(lVar2 + 0x228) >> 2 & 1) == 0) {
        bVar3 = *(byte *)(*(long *)(lVar2 + 0x58) + 8) >> 5 & 1;
      }
      else {
        bVar3 = 0;
      }
      bVar4 = 0;
      if (*(char *)(lVar2 + 0x98) == '\0') {
        bVar4 = bVar3;
      }
    }
    if (*(long *)(lVar2 + 8) != 0) {
      if ((*(byte *)(lVar2 + 0x228) >> 2 & 1) != 0) {
        return bVar4;
      }
      bVar3 = 0;
      if (*(char *)(lVar2 + 0x54) == '\0') {
        bVar3 = *(byte *)(*(long *)(lVar2 + 8) + 4) >> 1 & 1;
      }
      return bVar4 | bVar3;
    }
  }
  return bVar4;
}


