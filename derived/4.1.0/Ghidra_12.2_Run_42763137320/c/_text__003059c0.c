/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003059c0; name: FUN_.text__003059c0
 */


void FUN__text__003059c0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar4 = 0;
    do {
      lVar1 = param_2 + (ulong)(uVar4 >> 3);
      uVar2 = 1 << (ulong)(uVar4 & 7);
      if (((uVar2 & *(byte *)(lVar1 + 8)) != 0) || ((uVar2 & *(byte *)(lVar1 + 0x46e)) != 0)) {
        (&DAT_0094c1c2)[param_1] = 1;
        uVar2 = (uVar4 >> 4 & 0xfff) / 0x7d;
        uVar4 = uVar2 * 2000 + 1999;
        (&DAT_0094c1c2)[param_1 + (ulong)(uVar2 + 1)] = 1;
      }
      bVar3 = uVar4 < 8999;
      uVar4 = uVar4 + 1;
    } while (bVar3);
  }
  return;
}


