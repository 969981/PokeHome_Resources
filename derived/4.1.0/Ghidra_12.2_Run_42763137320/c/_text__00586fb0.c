/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00586fb0; name: FUN_.text__00586fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN__text__00586fb0(long *param_1,long *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  uint local_64;
  
  bVar6 = *(byte *)(param_1 + 1);
  uVar10 = *(uint *)*param_1;
  lVar18 = *(long *)(param_1[3] + 0x40);
  iVar5 = *(int *)((long)(int)param_2[7] * 4 + 0x7247ec);
  uVar15 = (ulong)bVar6 + 1;
  uVar16 = uVar15 >> 5;
  puVar3 = (ulong *)((uint *)*param_1 + uVar16);
  uVar11 = (uint)uVar15;
  uVar9 = uVar11 & 0x1f;
  iVar14 = *(int *)((long)param_1 + 0xc) - (int)uVar16;
  *(char *)(param_1 + 1) = (char)uVar9;
  *(int *)((long)param_1 + 0xc) = iVar14;
  *param_1 = (long)puVar3;
  lVar13 = _DAT_008a3f58;
  if ((uVar10 >> (ulong)(bVar6 & 0x1f) & 1) == 0) {
    param_3 = (uint *)0x0;
  }
  else {
    uVar10 = iVar5 - 1;
    uVar15 = 0;
    if (uVar10 != 0) {
      do {
        uVar15 = (ulong)((int)uVar15 + 1);
        bVar1 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar1);
    }
    uVar16 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
    uVar17 = *puVar3;
    iVar2 = (int)uVar15 + (uVar11 & 0x1f);
    uVar10 = *(uint *)(_DAT_008a3f58 + uVar16);
    iVar4 = iVar2 >> 5;
    *(byte *)(param_1 + 1) = (byte)iVar2 & 0x1f;
    *(int *)((long)param_1 + 0xc) = iVar14 - iVar4;
    *param_1 = (long)((long)puVar3 + (long)iVar4 * 4);
    *param_3 = uVar10 & (uint)(uVar17 >> uVar9);
    bVar6 = *(byte *)(param_1 + 1);
    uVar9 = *(uint *)(lVar13 + uVar16);
    uVar16 = *(ulong *)*param_1;
    iVar14 = (int)uVar15 + (uint)bVar6;
    iVar2 = iVar14 >> 5;
    *(byte *)(param_1 + 1) = (byte)iVar14 & 0x1f;
    *param_1 = *param_1 + (long)iVar2 * 4;
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) - iVar2;
    param_3[1] = uVar9 & (uint)(uVar16 >> ((ulong)bVar6 & 0x3f));
    if (0 < (int)param_2[6]) {
      lVar13 = 0;
      local_64 = 2;
      do {
        uVar16 = (ulong)*(byte *)(param_2[1] + lVar13);
        pbVar12 = (byte *)(*param_2 + uVar16 * 0xb);
        bVar6 = *pbVar12;
        uVar15 = (ulong)bVar6;
        bVar7 = pbVar12[1];
        if (bVar7 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN__text__00588c90(lVar18 + (ulong)*(byte *)(*param_2 + uVar16 * 0xb + 2) * 0x20,
                                      param_1);
        }
        if (bVar6 != 0) {
          puVar19 = param_3 + local_64;
          do {
            while( true ) {
              uVar17 = (ulong)*(byte *)(*param_2 + uVar16 * 0xb +
                                        (ulong)(uVar9 & ~(-1 << (ulong)(bVar7 & 0x1f))) + 3);
              if (uVar17 != 0xff) break;
              uVar9 = (int)uVar9 >> (bVar7 & 0x1f);
              uVar15 = uVar15 - 1;
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
              if (uVar15 == 0) goto LAB__text__00587100;
            }
            uVar10 = FUN__text__00588c90(lVar18 + uVar17 * 0x20,param_1);
            uVar9 = (int)uVar9 >> (bVar7 & 0x1f);
            uVar15 = uVar15 - 1;
            *puVar19 = uVar10;
            puVar19 = puVar19 + 1;
          } while (uVar15 != 0);
        }
LAB__text__00587100:
        local_64 = local_64 + bVar6;
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)param_2[6]);
    }
    if (2 < *(int *)((long)param_2 + 0x34)) {
      lVar13 = 0;
      do {
        while( true ) {
          lVar18 = param_2[2];
          uVar9 = param_3[*(byte *)(param_2[5] + lVar13)] & 0x7fff;
          iVar4 = (param_3[*(byte *)(param_2[4] + lVar13)] & 0x7fff) - uVar9;
          uVar10 = (uint)*(ushort *)(lVar18 + (ulong)*(byte *)(param_2[5] + lVar13) * 2);
          iVar2 = *(ushort *)(lVar18 + (ulong)*(byte *)(param_2[4] + lVar13) * 2) - uVar10;
          iVar14 = -iVar4;
          if (-1 < iVar4) {
            iVar14 = iVar4;
          }
          iVar4 = 0;
          if (iVar2 != 0) {
            iVar4 = (int)(iVar14 * (*(ushort *)(lVar18 + lVar13 * 2 + 4) - uVar10)) / iVar2;
          }
          iVar14 = -iVar4;
          if (uVar9 <= (param_3[*(byte *)(param_2[4] + lVar13)] & 0x7fff)) {
            iVar14 = iVar4;
          }
          uVar9 = iVar14 + uVar9;
          uVar10 = param_3[lVar13 + 2];
          if (uVar10 == 0) break;
          uVar8 = iVar5 - uVar9;
          uVar11 = uVar8;
          if ((int)uVar9 <= (int)uVar8) {
            uVar11 = uVar9;
          }
          if ((int)uVar10 < (int)(uVar11 * 2)) {
            if ((uVar10 & 1) == 0) {
              iVar14 = (int)uVar10 >> 1;
            }
            else {
              iVar14 = -((int)(uVar10 + 1) >> 1);
            }
          }
          else {
            iVar14 = uVar8 + ~uVar10;
            if ((int)uVar9 < (int)uVar8) {
              iVar14 = uVar10 - uVar9;
            }
          }
          param_3[lVar13 + 2] = iVar14 + uVar9;
          param_3[*(byte *)(param_2[5] + lVar13)] = param_3[*(byte *)(param_2[5] + lVar13)] & 0x7fff
          ;
          param_3[*(byte *)(param_2[4] + lVar13)] = param_3[*(byte *)(param_2[4] + lVar13)] & 0x7fff
          ;
          lVar18 = lVar13 + 3;
          lVar13 = lVar13 + 1;
          if (*(int *)((long)param_2 + 0x34) <= lVar18) {
            return param_3;
          }
        }
        param_3[lVar13 + 2] = uVar9 | 0x8000;
        lVar18 = lVar13 + 3;
        lVar13 = lVar13 + 1;
      } while (lVar18 < *(int *)((long)param_2 + 0x34));
    }
  }
  return param_3;
}


