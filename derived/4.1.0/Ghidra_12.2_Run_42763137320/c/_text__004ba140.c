/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ba140; name: FUN_.text__004ba140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004ba140(long param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar8 = *(byte **)(param_1 + 0x20);
  iVar1 = *(int *)(_DAT_008a4ac0 + 0x3c);
  if (pbVar8 != (byte *)0x0) {
    bVar2 = *pbVar8;
    uVar7 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar7 = 1;
    }
    uVar6 = (ulong)uVar7;
    pbVar9 = pbVar8 + ((ulong)bVar2 & 0xfc);
    do {
      pbVar9 = pbVar9 + 4;
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 0xf) {
        iVar1 = *(int *)pbVar9;
        pbVar8 = *(byte **)(param_1 + 0x28);
        goto joined_r0x004ba1a0;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  pbVar8 = *(byte **)(param_1 + 0x28);
joined_r0x004ba1a0:
  if (pbVar8 != (byte *)0x0) {
    bVar2 = *pbVar8;
    uVar7 = (uint)bVar2;
    if (bVar2 < 2) {
      uVar7 = 1;
    }
    uVar6 = (ulong)uVar7;
    pbVar9 = pbVar8 + ((ulong)bVar2 & 0xfc) + 4;
    do {
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 0xf) {
        iVar4 = *(int *)(pbVar9 + 4);
        iVar3 = iVar4 - *(int *)pbVar9;
        iVar5 = 0;
        if (iVar3 != 0) {
          lVar10 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar10;
          iVar4 = *(int *)pbVar9;
          iVar5 = (int)((double)(uint)((ulong)lVar10 >> 0x21) *
                        (double)iVar3 * 4.656612875245797e-10 + 0.5);
        }
        return iVar4 + iVar1 + iVar5;
      }
      pbVar9 = pbVar9 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return iVar1;
}


