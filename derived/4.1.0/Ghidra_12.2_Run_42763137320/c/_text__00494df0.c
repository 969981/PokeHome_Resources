/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494df0; name: FUN_.text__00494df0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00494df0(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  do {
    lVar2 = param_1;
    if (*(long *)(lVar2 + 0x78) == 0) break;
    param_1 = *(long *)(lVar2 + 0x78);
  } while (-1 < *(char *)(lVar2 + 0xd4));
  pbVar4 = *(byte **)(lVar2 + 0x90);
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    uVar6 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar6 = 1;
    }
    uVar3 = (ulong)uVar6;
    pbVar5 = pbVar4 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar5 = pbVar5 + 4;
      pbVar4 = pbVar4 + 1;
      if (*pbVar4 == 0x2e) {
        return *(int *)pbVar5 == 1;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return _DAT_0073b240 == 1;
}


