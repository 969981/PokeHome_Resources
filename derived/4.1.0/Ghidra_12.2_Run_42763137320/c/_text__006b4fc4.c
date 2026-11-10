/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4fc4; name: FUN_.text__006b4fc4
 */


undefined8 FUN__text__006b4fc4(long param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
    if (((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 6), -1 < (char)bVar4)) &&
       ((*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4) + uVar3) +
                  4) >> 2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}


