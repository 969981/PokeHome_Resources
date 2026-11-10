/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312374; name: FUN_.text__00312374
 */


void FUN__text__00312374(long param_1,int *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  
  if (((*(char *)((long)param_2 + 0xd) == '\0') && (iVar4 = *param_2, iVar4 != 0)) &&
     (iVar4 < 0x32a)) {
    lVar1 = param_1 + 0xdc;
    iVar5 = param_2[4];
    iVar10 = param_2[1];
    iVar6 = param_2[2];
    cVar8 = (char)param_2[3];
    uVar3 = 1 << (ulong)(iVar4 + 0xffffU & 7) &
            (uint)*(byte *)(lVar1 + ((ulong)(iVar4 + 0xffffU >> 3) & 0x1fff));
    uVar11 = FUN__text__00312550(param_1,iVar4);
    if (uVar3 == 0) {
      FUN__text__00311f80(param_1,iVar4,iVar6,cVar8 != '\0',(short)iVar10);
    }
    if (iVar4 == 0x147) {
      uVar12 = 3;
      if (cVar8 == '\0') {
        uVar12 = 1;
      }
      if (iVar6 != 1) {
        uVar12 = (uint)(cVar8 != '\0') << 1;
      }
      uVar7 = *(uint *)(param_1 + 0xd8);
      uVar9 = 1 << (ulong)(uVar12 | 4);
      if ((uVar7 & uVar9) == 0) {
        *(int *)(param_1 + (ulong)uVar12 * 4 + 0x93c) = iVar5;
        *(uint *)(param_1 + 0xd8) = uVar7 | 1 << (ulong)uVar12 | uVar9;
      }
    }
    FUN__text__00312880(param_1,iVar4,iVar6,cVar8 != '\0',(short)iVar10);
    if ((param_3 != 6) && (0xfffffff5 < param_3 - 0xb)) {
      uVar12 = ((param_3 - (6 < param_3)) + iVar4 * 9) - 10;
      if ((uVar12 >> 6 & 0x3ff) < 0x73) {
        lVar2 = param_1 + (((ulong)uVar12 & 0xfff8) >> 3);
        *(byte *)(lVar2 + 0x5a4) = *(byte *)(lVar2 + 0x5a4) | (byte)(1 << ((ulong)uVar12 & 7));
      }
    }
    uVar12 = iVar4 - 1;
    if ((uVar12 & 0xffff) < 0x340) {
      uVar13 = (ulong)(uVar12 >> 3) & 0x1fff;
      *(byte *)(lVar1 + uVar13) = *(byte *)(lVar1 + uVar13) | (byte)(1 << ((ulong)uVar12 & 7));
    }
    if (uVar3 == 0) {
      FUN__text__00312b30(param_1,iVar4,uVar11 & 1);
      return;
    }
  }
  return;
}


