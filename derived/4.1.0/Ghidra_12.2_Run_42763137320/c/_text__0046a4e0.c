/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a4e0; name: FUN_.text__0046a4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046a4e0(long param_1,undefined8 param_2,float *param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  float *pfVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  
  uVar9 = 0;
  if (*(ulong **)(param_1 + 0x58) != (ulong *)0x0) {
    uVar9 = **(ulong **)(param_1 + 0x58);
  }
  pbVar12 = *(byte **)(param_1 + 0x90);
  if (pbVar12 != (byte *)0x0) {
    bVar3 = *pbVar12;
    uVar14 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar14 = 1;
    }
    uVar11 = (ulong)uVar14;
    pfVar13 = (float *)(pbVar12 + ((ulong)bVar3 & 0xfc));
    do {
      pfVar13 = pfVar13 + 1;
      pbVar12 = pbVar12 + 1;
      if (*pbVar12 == 0xc) {
        *param_3 = *pfVar13;
        pbVar12 = *(byte **)(param_1 + 0x90);
        if (pbVar12 != (byte *)0x0) goto LAB__text__0046a570;
        goto LAB__text__0046a5a8;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *param_3 = 0.0;
  pbVar12 = *(byte **)(param_1 + 0x90);
  if (pbVar12 != (byte *)0x0) {
LAB__text__0046a570:
    bVar3 = *pbVar12;
    uVar14 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar14 = 1;
    }
    uVar11 = (ulong)uVar14;
    pfVar13 = (float *)(pbVar12 + ((ulong)bVar3 & 0xfc));
    do {
      pfVar13 = pfVar13 + 1;
      pbVar12 = pbVar12 + 1;
      if (*pbVar12 == 0xd) {
        param_3[1] = *pfVar13;
        pbVar12 = *(byte **)(param_1 + 0x90);
        if (pbVar12 != (byte *)0x0) goto LAB__text__0046a5cc;
        goto LAB__text__0046a608;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB__text__0046a5a8:
  param_3[1] = 0.0;
  pbVar12 = *(byte **)(param_1 + 0x90);
  if (pbVar12 != (byte *)0x0) {
LAB__text__0046a5cc:
    bVar3 = *pbVar12;
    uVar14 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar14 = 1;
    }
    uVar11 = (ulong)uVar14;
    pfVar13 = (float *)(pbVar12 + ((ulong)bVar3 & 0xfc));
    do {
      pfVar13 = pfVar13 + 1;
      pbVar12 = pbVar12 + 1;
      if (*pbVar12 == 0x49) {
        param_3[2] = *pfVar13;
        goto joined_r0x0046a67c;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB__text__0046a608:
  param_3[2] = 0.0;
joined_r0x0046a67c:
  if (((uint)uVar9 >> 0x18 & 1) == 0) {
    pbVar12 = *(byte **)(param_1 + 0x90);
    if (pbVar12 != (byte *)0x0) {
      bVar3 = *pbVar12;
      uVar14 = (uint)bVar3;
      if (bVar3 < 2) {
        uVar14 = 1;
      }
      uVar11 = (ulong)uVar14;
      pfVar13 = (float *)(pbVar12 + ((ulong)bVar3 & 0xfc));
      do {
        pfVar13 = pfVar13 + 1;
        pbVar12 = pbVar12 + 1;
        if (*pbVar12 == 0xe) {
          param_3[3] = *pfVar13;
          if ((uVar9 & 0x4000000010c0000) != 0) goto LAB__text__0046a6b0;
          goto LAB__text__0046a8d0;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    param_3[3] = 0.0;
  }
  else {
    param_3[3] = 0.0;
  }
  if ((uVar9 & 0x4000000010c0000) != 0) {
LAB__text__0046a6b0:
    plVar15 = (long *)(param_1 + 0x48);
    plVar6 = (long *)FUN__text__00432a30(plVar15,0x12,*plVar15,
                                         *plVar15 + (ulong)*(uint *)(param_1 + 0x50) * 8);
    puVar5 = _DAT_008a45f0;
    lVar10 = *plVar15;
    uVar9 = (ulong)*(uint *)(param_1 + 0x50);
    if (((long *)(lVar10 + uVar9 * 8) != plVar6) && (lVar8 = *plVar6, *(int *)(lVar8 + 8) == 0x12))
    {
      do {
        plVar6 = plVar6 + 1;
        fVar17 = (float)FUN__text__00435a30(*puVar5,lVar8,param_2);
        *param_3 = *param_3 + fVar17;
        lVar10 = *(long *)(param_1 + 0x48);
        uVar9 = (ulong)*(uint *)(param_1 + 0x50);
        if (plVar6 == (long *)(lVar10 + uVar9 * 8)) break;
        lVar8 = *plVar6;
      } while (*(int *)(lVar8 + 8) == 0x12);
    }
    puVar5 = _DAT_008a45f0;
    plVar7 = (long *)(lVar10 + uVar9 * 8);
    if (plVar6 == plVar7) {
LAB__text__0046a7b8:
      plVar16 = plVar6;
    }
    else {
      lVar10 = *plVar6;
      iVar2 = *(int *)(lVar10 + 8);
      plVar16 = plVar6;
      while( true ) {
        plVar6 = plVar7;
        if (iVar2 != 0x13) break;
        plVar6 = plVar16 + 1;
        fVar17 = (float)FUN__text__00435a30(*puVar5,lVar10,param_2);
        param_3[1] = param_3[1] + fVar17;
        plVar7 = (long *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8);
        if (plVar6 == plVar7) goto LAB__text__0046a7b8;
        lVar10 = *plVar6;
        iVar2 = *(int *)(lVar10 + 8);
        plVar16 = plVar6;
      }
    }
    plVar7 = (long *)FUN__text__00432a30(plVar15,0x18,plVar16,plVar6);
    puVar5 = _DAT_008a45f0;
    plVar6 = (long *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8);
    if (plVar6 == plVar7) {
      plVar6 = plVar7;
    }
    else {
      lVar10 = *plVar7;
      if (*(int *)(lVar10 + 8) == 0x18) {
        plVar16 = plVar7 + 1;
        plVar6 = plVar7 + 1;
        do {
          plVar7 = plVar16;
          fVar17 = (float)FUN__text__00435a30(*puVar5,lVar10,param_2);
          param_3[3] = param_3[3] + fVar17;
          plVar1 = (long *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8);
          if (plVar6 == plVar1) goto LAB__text__0046a854;
          lVar10 = *plVar6;
          plVar16 = plVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (*(int *)(lVar10 + 8) == 0x18);
        plVar6 = plVar1;
      }
    }
LAB__text__0046a854:
    plVar6 = (long *)FUN__text__00432a30(plVar15,0x3a,plVar7,plVar6);
    puVar5 = _DAT_008a45f0;
    if ((long *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8) != plVar6) {
      do {
        if (*(int *)(*plVar6 + 8) != 0x3a) break;
        fVar17 = (float)FUN__text__00435a30(*puVar5,*plVar6,param_2);
        plVar6 = plVar6 + 1;
        param_3[2] = param_3[2] + fVar17;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x50) * 8))
      ;
    }
  }
LAB__text__0046a8d0:
  bVar3 = *(byte *)(param_3 + 4);
  bVar4 = (byte)(*(uint *)(param_1 + 0xd2) >> 0x14) & 7;
  *(byte *)(param_3 + 4) = bVar3 & 0xf8 | bVar4;
  *(byte *)(param_3 + 4) = *(byte *)(param_1 + 0xd4) & 8 | bVar3 & 0xf0 | bVar4;
  return;
}


