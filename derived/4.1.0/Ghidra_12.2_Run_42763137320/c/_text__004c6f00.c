/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c6f00; name: FUN_.text__004c6f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004c6f00(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar8 = *(byte **)(param_1 + 0x90);
  if (pbVar8 != (byte *)0x0) {
    bVar1 = *pbVar8;
    uVar7 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar7 = 1;
    }
    uVar6 = (ulong)uVar7;
    pbVar9 = pbVar8 + ((ulong)bVar1 & 0xfc);
    do {
      pbVar9 = pbVar9 + 4;
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 0x3a) {
        iVar3 = *(int *)pbVar9;
        pbVar8 = *(byte **)(param_1 + 0xd8);
        if (pbVar8 == (byte *)0x0) {
          return iVar3;
        }
        goto LAB__text__004c6f64;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar3 = 1;
  pbVar8 = *(byte **)(param_1 + 0xd8);
  if (pbVar8 != (byte *)0x0) {
LAB__text__004c6f64:
    bVar1 = *pbVar8;
    uVar7 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar7 = 1;
    }
    uVar6 = (ulong)uVar7;
    pbVar9 = pbVar8 + ((ulong)bVar1 & 0xfc) + 4;
    do {
      pbVar8 = pbVar8 + 1;
      if (*pbVar8 == 0x3a) {
        iVar4 = *(int *)(pbVar9 + 4);
        iVar2 = iVar4 - *(int *)pbVar9;
        iVar5 = 0;
        if (iVar2 != 0) {
          lVar10 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar10;
          iVar4 = *(int *)pbVar9;
          iVar5 = (int)((double)(uint)((ulong)lVar10 >> 0x21) *
                        (double)iVar2 * 4.656612875245797e-10 + 0.5);
        }
        return iVar4 + iVar3 + iVar5;
      }
      pbVar9 = pbVar9 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return iVar3;
}


