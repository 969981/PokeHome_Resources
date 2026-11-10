/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043eda0; name: FUN_.text__0043eda0
 */


bool FUN__text__0043eda0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    return false;
  }
  pbVar3 = *(byte **)(param_1 + 0x80);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    uVar5 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar5 = 1;
    }
    uVar2 = (ulong)uVar5;
    pbVar4 = pbVar3 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar4 = pbVar4 + 4;
      pbVar3 = pbVar3 + 1;
      if (*pbVar3 == 1) {
        return *(int *)pbVar4 != 0;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return true;
}


