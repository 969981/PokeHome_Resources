/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00494bb0; name: FUN_.text__00494bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00494bb0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  
  do {
    lVar4 = param_1;
    if (*(long *)(lVar4 + 0x78) == 0) break;
    param_1 = *(long *)(lVar4 + 0x78);
  } while (-1 < *(char *)(lVar4 + 0xd4));
  pbVar6 = *(byte **)(lVar4 + 0x90);
  iVar2 = _DAT_0073b240;
  if (pbVar6 != (byte *)0x0) {
    bVar1 = *pbVar6;
    uVar8 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar8 = 1;
    }
    uVar5 = (ulong)uVar8;
    pbVar7 = pbVar6 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar7 = pbVar7 + 4;
      pbVar6 = pbVar6 + 1;
      if (*pbVar6 == 0x2e) {
        iVar2 = *(int *)pbVar7;
        break;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (iVar2 == 2) {
    return 1;
  }
  uVar5 = FUN__text__0046a490();
  uVar3 = 2;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}


