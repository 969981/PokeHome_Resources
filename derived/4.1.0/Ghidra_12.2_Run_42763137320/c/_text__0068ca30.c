/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068ca30; name: FUN_.text__0068ca30
 */


ulong FUN__text__0068ca30(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = FUN__text__0068c7d0();
  if (uVar3 == 0xffff) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x104) == '\0') {
      uVar3 = *(ushort *)(lVar4 + 6);
      uVar2 = *(uint *)(lVar4 + 0x14);
    }
    else {
      uVar3 = *(ushort *)(lVar4 + 0x1c);
      uVar2 = *(uint *)(lVar4 + 0x14);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar2 = *(uint *)(lVar4 + 0x14);
  }
  if (uVar2 != 0) {
    do {
      puVar1 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar2);
      if ((*puVar1 <= uVar3) && (uVar3 <= puVar1[1])) {
        return (ulong)*(uint6 *)(puVar1 + (long)(int)((uint)uVar3 - (uint)*puVar1) * 3 + 4);
      }
      uVar2 = *(uint *)(puVar1 + 2);
    } while (uVar2 != 0);
  }
  return (ulong)*(uint6 *)(lVar4 + 10);
}


