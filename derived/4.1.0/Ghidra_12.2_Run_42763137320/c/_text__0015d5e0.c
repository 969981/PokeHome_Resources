/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015d5e0; name: FUN_.text__0015d5e0
 */


void FUN__text__0015d5e0(long param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  long lVar11;
  short *psVar12;
  short sVar13;
  long lVar14;
  short *psVar15;
  undefined8 uVar16;
  undefined2 uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  
  uVar4 = FUN__text__005f3254(*(undefined8 *)(param_1 + 0x78));
  uVar5 = FUN__text__005f3254(*(undefined8 *)(param_1 + 0x1a0));
  if (uVar5 < uVar4) {
    return;
  }
  psVar8 = (short *)FUN__text__005f3244(*(undefined8 *)(param_1 + 0x78));
  psVar9 = (short *)FUN__text__005f3244(*(undefined8 *)(param_1 + 0x1a0));
  uVar4 = *(int *)(param_1 + 0x168) - 2;
  if (uVar4 < 9) {
    uVar17 = *(undefined2 *)((long)(int)uVar4 * 2 + 0x72521c);
  }
  else {
    uVar17 = 0x3000;
  }
LAB__text__0015d994:
  do {
    while( true ) {
      for (; sVar13 = *psVar8, sVar13 != 0x10; psVar8 = psVar8 + 1) {
        if (sVar13 == 0) {
          *psVar9 = 0;
          FUN__text__005f4050(param_1,*(undefined8 *)(param_1 + 0x1a0));
          return;
        }
        *psVar9 = sVar13;
        psVar9 = psVar9 + 1;
      }
      cVar2 = FUN__text__0015a510(psVar8);
      if ((cVar2 == -0x43) && (cVar2 = FUN__text__0015a010(psVar8), cVar2 == '\x06')) break;
      psVar12 = (short *)FUN__text__005f3780(psVar8);
      psVar10 = psVar9;
      if (psVar12 != psVar8) {
        do {
          psVar15 = psVar8 + 1;
          psVar9 = psVar10 + 1;
          *psVar10 = *psVar8;
          psVar10 = psVar9;
          psVar8 = psVar15;
        } while (psVar15 != psVar12);
        psVar8 = psVar12;
      }
    }
    psVar8 = (short *)FUN__text__005f3780(psVar8);
    sVar13 = *psVar8;
    psVar10 = psVar8;
    while( true ) {
      while (sVar13 == 0x10) {
        cVar2 = FUN__text__0015a510(psVar10);
        if ((cVar2 == -0x42) && (bVar3 = FUN__text__0015a010(psVar10), bVar3 < 2))
        goto LAB__text__0015d994;
        psVar10 = (short *)FUN__text__005f3780(psVar10);
        sVar13 = *psVar10;
      }
      if (sVar13 == 0) goto LAB__text__0015d994;
      if (sVar13 == 10) break;
      psVar10 = psVar10 + 1;
      sVar13 = *psVar10;
    }
    lVar11 = FUN__text__005f3244(*(undefined8 *)(param_1 + 0x1a8));
    uVar19 = 0;
    puVar18 = (undefined2 *)0x0;
    do {
      uVar4 = (uint)uVar19;
      sVar13 = *psVar8;
      if (sVar13 == 10) {
        if (puVar18 != (undefined2 *)0x0) goto LAB__text__0015d840;
        puVar18 = (undefined2 *)(lVar11 + uVar19 * 2);
        psVar8 = psVar8 + 1;
        *puVar18 = uVar17;
      }
      else {
        if (sVar13 == 0x10) {
          cVar2 = FUN__text__0015a510(psVar8);
          if ((cVar2 == -0x42) &&
             ((cVar2 = FUN__text__0015a010(psVar8), cVar2 == '\0' ||
              (cVar2 = FUN__text__0015a010(psVar8), cVar2 == '\x01')))) {
LAB__text__0015d840:
            bVar1 = puVar18 == (undefined2 *)0x0;
            *(undefined2 *)(lVar11 + uVar19 * 2) = 0;
            goto LAB__text__0015d868;
          }
          sVar13 = *psVar8;
          if (sVar13 == 0x10) {
            psVar12 = (short *)FUN__text__005f3780(psVar8);
            psVar10 = psVar8;
            do {
              if (psVar10 == psVar12) {
                psVar8 = psVar12;
                break;
              }
              psVar8 = psVar10 + 1;
              *(short *)(lVar11 + uVar19 * 2) = *psVar10;
              uVar19 = uVar19 + 1;
              psVar10 = psVar8;
            } while (uVar19 != 0x80);
            uVar4 = (int)uVar19 - 1;
            goto LAB__text__0015d78c;
          }
        }
        else if (sVar13 == 0) goto LAB__text__0015d840;
        *(short *)(lVar11 + uVar19 * 2) = sVar13;
        psVar8 = psVar8 + 1;
      }
LAB__text__0015d78c:
      uVar4 = uVar4 + 1;
      uVar19 = (ulong)uVar4;
    } while (uVar4 < 0x80);
    if (puVar18 == (undefined2 *)0x0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
      *puVar18 = 10;
    }
LAB__text__0015d868:
    uVar16 = *(undefined8 *)(param_1 + 0x1a8);
    uVar5 = FUN__text__005f324c(uVar16);
    uVar6 = FUN__text__006bd81c(**(undefined8 **)(param_1 + 0x58));
    if ((uVar6 & 0xffff) < uVar5) {
      if (!bVar1) {
LAB__text__0015d8dc:
        *puVar18 = 10;
      }
    }
    else {
      FUN__text__005f4050(param_1,uVar16);
      iVar7 = FUN__text__0015afe0(*(undefined4 *)(param_1 + 0x16c),*(undefined8 *)(param_1 + 0x78),
                                  *(undefined8 *)(param_1 + 0x160),0);
      if (*(float *)(**(long **)(param_1 + 0x58) + 0x50) < (float)iVar7 && !bVar1)
      goto LAB__text__0015d8dc;
    }
    if (0 < (int)uVar4) {
      if (uVar4 < 8) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        psVar10 = (short *)(lVar11 + 8);
        do {
          lVar14 = lVar14 + -8;
          *psVar9 = psVar10[-4];
          psVar9[1] = psVar10[-3];
          psVar9[2] = psVar10[-2];
          psVar9[3] = psVar10[-1];
          psVar9[4] = *psVar10;
          psVar9[5] = psVar10[1];
          psVar9[6] = psVar10[2];
          psVar12 = psVar10 + 3;
          psVar10 = psVar10 + 8;
          psVar9[7] = *psVar12;
          psVar9 = psVar9 + 8;
        } while (-lVar14 != ((ulong)uVar4 & 0xfffffff8));
        lVar14 = -lVar14;
      }
      if ((uVar4 & 7) != 0) {
        uVar19 = (ulong)uVar4 & 7;
        psVar10 = (short *)(lVar11 + lVar14 * 2);
        psVar12 = psVar9;
        do {
          uVar19 = uVar19 - 1;
          psVar9 = psVar12 + 1;
          *psVar12 = *psVar10;
          psVar10 = psVar10 + 1;
          psVar12 = psVar9;
        } while (uVar19 != 0);
      }
    }
  } while( true );
}


