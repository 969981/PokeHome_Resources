/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015cfa0; name: FUN_.text__0015cfa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015cfa0(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  short *psVar13;
  ulong uVar14;
  short sVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float local_78;
  undefined4 uStack_74;
  
  uVar4 = FUN__text__0015ab30();
  FUN__text__00163fb4(*(undefined8 *)(param_3 + 0x1b0),*(undefined8 *)(param_3 + 0x1b8),param_4);
  *(undefined8 *)(param_3 + 0x150) = 0;
  *(undefined1 *)(param_3 + 0x140) = 0;
  *(undefined4 *)(param_3 + 0x168) = uVar4;
  uVar17 = **(undefined8 **)(param_3 + 0x58);
  lVar9 = FUN__text__006b46d0(uVar17,0x71f0dd);
  if (lVar9 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = FUN__text__00161218(DAT_008e1550,*(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar9 + 4)));
  }
  uVar10 = DAT_008e1550;
  uVar6 = FUN__text__00160afc(*(undefined4 *)(param_3 + 0x168));
  uVar10 = FUN__text__00160ae8(uVar10,uVar5,uVar6);
  lVar9 = FUN__text__006bf32c(uVar17);
  if (lVar9 == 0) {
    FUN__text__006bf334(uVar17,uVar10);
  }
  uVar17 = DAT_008e1550;
  *(undefined8 *)(param_3 + 0x160) = uVar10;
  *(undefined4 *)(param_3 + 0x144) = uVar5;
  uVar17 = FUN__text__0016085c(uVar17,uVar5,*(undefined4 *)(param_3 + 0x168));
  FUN__text__006bf334(**(undefined8 **)(param_3 + 0x58),uVar17);
  if (1 < *(int *)(param_3 + 0x174)) {
    lVar9 = 1;
    lVar16 = 0xa0;
    do {
      FUN__text__006bf334(*(undefined8 *)(*(long *)(param_3 + 0x58) + lVar16),uVar17);
      uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x58) + lVar16);
      lVar11 = FUN__text__006b46d0(uVar10,0x71f0dd);
      if (lVar11 == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = FUN__text__00161218(DAT_008e1550,
                                    *(undefined4 *)(lVar11 + (ulong)*(uint *)(lVar11 + 4)));
      }
      uVar12 = DAT_008e1550;
      uVar7 = FUN__text__00160afc(*(undefined4 *)(param_3 + 0x168));
      uVar12 = FUN__text__00160ae8(uVar12,uVar6,uVar7);
      lVar11 = FUN__text__006bf32c(uVar10);
      if (lVar11 == 0) {
        FUN__text__006bf334(uVar10,uVar12);
      }
      lVar9 = lVar9 + 1;
      lVar16 = lVar16 + 0xa0;
      *(undefined8 *)(param_3 + 0x160) = uVar12;
    } while (lVar9 < *(int *)(param_3 + 0x174));
  }
  uVar17 = DAT_008e1550;
  uVar10 = FUN__text__005f3244(*(undefined8 *)(param_3 + 0x1b8));
  uVar12 = **(undefined8 **)(param_3 + 0x58);
  uVar6 = FUN__text__005f324c(*(undefined8 *)(param_3 + 0x1b8));
  FUN__text__00160b20(uVar17,uVar10,uVar12,uVar6,uVar4,uVar5,*(undefined4 *)(param_3 + 0x184));
  FUN__text__005f4050(param_3,*(undefined8 *)(param_3 + 0x1b8));
  psVar13 = (short *)FUN__text__005f3244(*(undefined8 *)(param_3 + 0x78));
  sVar15 = *psVar13;
  while( true ) {
    while (sVar15 == 0x10) {
      cVar1 = FUN__text__0015a510(psVar13);
      if ((cVar1 == -0x43) && (cVar1 = FUN__text__0015a010(psVar13), cVar1 == '\a')) {
        fVar18 = *(float *)(param_3 + 0x16c);
        uVar3 = thunk_FUN__text__005f37f0(psVar13,0);
        fVar19 = (float)((uint)(int)(fVar18 * (float)uVar3) >> 8);
        uVar17 = FUN__text__005f3780(psVar13);
        fVar18 = (float)FUN__text__0015d480(*(undefined4 *)(param_3 + 0x16c),param_3 + 0x120,uVar17,
                                            *(undefined8 *)(param_3 + 0x160));
        sVar15 = 1000;
        if (fVar19 < fVar18) {
          param_2 = 0x447a0000;
          sVar15 = (short)(int)((fVar19 / fVar18) * 1000.0);
        }
        sVar2 = FUN__text__0015a530(0xbd,8);
        psVar13[2] = sVar2;
        psVar13[3] = sVar15;
      }
      psVar13 = (short *)FUN__text__005f3780(psVar13);
      sVar15 = *psVar13;
    }
    if (sVar15 == 0) break;
    psVar13 = psVar13 + 1;
    sVar15 = *psVar13;
  }
  FUN__text__0015d5e0(param_3);
  uVar14 = FUN__text__0015ac20(**(undefined8 **)(param_3 + 0x58),uVar4);
  if ((uVar14 & 1) == 0) {
    FUN__text__001613d8(uVar5,0xb);
    local_78 = *(float *)(param_3 + 0x170);
    *(float *)(param_3 + 0x16c) = local_78;
    uStack_74 = param_2;
    if (0 < *(int *)(param_3 + 0x174)) {
      lVar16 = 0;
      lVar9 = 0;
      do {
        FUN__text__006bf4c8(*(undefined8 *)(*(long *)(param_3 + 0x58) + lVar16),&local_78);
        lVar9 = lVar9 + 1;
        lVar16 = lVar16 + 0xa0;
      } while (lVar9 < *(int *)(param_3 + 0x174));
    }
  }
  else {
    FUN__text__001613d8(uVar5,0xb);
    local_78 = *(float *)(param_3 + 0x170) * _DAT_0072518c;
    *(float *)(param_3 + 0x16c) = local_78;
    uStack_74 = param_2;
    if (0 < *(int *)(param_3 + 0x174)) {
      lVar16 = 0;
      lVar9 = 0;
      do {
        FUN__text__006bf4c8(*(undefined8 *)(*(long *)(param_3 + 0x58) + lVar16),&local_78);
        lVar9 = lVar9 + 1;
        lVar16 = lVar16 + 0xa0;
      } while (lVar9 < *(int *)(param_3 + 0x174));
    }
  }
  iVar8 = FUN__text__0015afe0(*(undefined4 *)(param_3 + 0x16c),*(undefined8 *)(param_3 + 0x78),
                              *(undefined8 *)(param_3 + 0x160),0);
  fVar18 = *(float *)(**(long **)(param_3 + 0x58) + 0x50);
  if (fVar18 < (float)iVar8) {
    FUN__text__001613d8(uVar5,0xb);
    local_78 = (fVar18 / (float)iVar8) * *(float *)(param_3 + 0x16c);
    *(float *)(param_3 + 0x16c) = local_78;
    local_78 = local_78 + -0.05;
    if (0 < *(int *)(param_3 + 0x174)) {
      lVar16 = 0;
      lVar9 = 0;
      uStack_74 = param_2;
      do {
        FUN__text__006bf4c8(*(undefined8 *)(*(long *)(param_3 + 0x58) + lVar16),&local_78);
        lVar9 = lVar9 + 1;
        lVar16 = lVar16 + 0xa0;
      } while (lVar9 < *(int *)(param_3 + 0x174));
    }
  }
  return;
}


