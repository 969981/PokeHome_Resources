/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00351640; name: FUN_.text__00351640
 */


void FUN__text__00351640(long param_1)

{
  ushort *__s;
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long *__src;
  ulong __n;
  undefined4 uVar23;
  undefined4 uVar24;
  char *pcVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong local_80;
  size_t local_78;
  char *local_70;
  undefined1 auStack_68 [8];
  
  __s = (ushort *)(param_1 + 0x13560a0);
  sVar6 = strlen((char *)__s);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00144380(&local_80);
  }
  if (sVar6 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar6 << 1));
    pcVar25 = (char *)((ulong)&local_80 | 1);
    if (sVar6 == 0) goto LAB__text__003516d0;
  }
  else {
    pcVar25 = operator_new((sVar6 | 0xf) + 1);
    local_80 = (sVar6 | 0xf) + 2;
    local_78 = sVar6;
    local_70 = pcVar25;
  }
  memcpy(pcVar25,__s,sVar6);
LAB__text__003516d0:
  pcVar25[sVar6] = '\0';
  sVar6 = local_80 >> 1 & 0x7f;
  pcVar25 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    sVar6 = local_78;
    pcVar25 = local_70;
  }
  if (sVar6 != 0) {
    sVar10 = 0;
    do {
      if (pcVar25[sVar10] == '\\') goto LAB__text__00351770;
      sVar10 = sVar10 + 1;
    } while (sVar6 != sVar10);
  }
LAB__text__00351780:
  sVar6 = strlen(pcVar25);
  FUN__text__003d5a80(auStack_68,&DAT_009cca20 + param_1,&DAT_00989680,pcVar25,sVar6,0);
  memset(__s,0,10000000);
  nn::util::DecompressGzip
            (__s,10000000,&DAT_009cca20 + param_1,10000000,(void *)(param_1 + 0x9896e8),0x1bf8);
  uVar3 = *__s;
  uVar12 = (uint)uVar3;
  if (99 < uVar3) {
    uVar12 = 100;
  }
  memset((void *)(param_1 + 0x2ff24e8),0,0x100000);
  lVar7 = FUN__text__0030d5f0();
  if ((0 < *(int *)(lVar7 + 0x13b8)) &&
     (lVar7 = FUN__text__0030d5f0(), 0 < *(int *)(lVar7 + 0x13b8))) {
    lVar7 = 0;
    lVar27 = 0xaeda;
    lVar33 = 0x142a;
    lVar31 = 0x47ba;
    lVar32 = 0x7b4a;
    do {
      lVar8 = FUN__text__0030d5f0();
      iVar21 = *(int *)(lVar8 + lVar7 * 0xcea8 + 0x1410);
      if (iVar21 == 3) {
        lVar8 = FUN__text__0030d5f0();
        uVar13 = (uint)*(ushort *)(lVar8 + lVar7 * 0xcea8 + 0x1426);
        if (299 < uVar13) {
          uVar13 = 300;
        }
        uVar26 = (ulong)uVar13;
        if (uVar13 != 0) {
          lVar8 = lVar27;
          do {
            lVar9 = FUN__text__0030d5f0();
            uVar5 = *(ushort *)(lVar9 + lVar8 + -2);
            lVar9 = FUN__text__0030d5f0();
            if (((uVar5 != 0) && (uVar5 < 0x800)) && (*(ushort *)(lVar9 + lVar8) < 0x80)) {
              lVar9 = param_1 + (ulong)uVar5 * 0x200 + (ulong)*(ushort *)(lVar9 + lVar8) * 4;
              *(int *)(lVar9 + 0x2ff24e8) = *(int *)(lVar9 + 0x2ff24e8) + 1;
            }
            uVar26 = uVar26 - 1;
            lVar8 = lVar8 + 0x2c;
          } while (uVar26 != 0);
        }
      }
      else if (iVar21 == 2) {
        lVar8 = FUN__text__0030d5f0();
        uVar13 = (uint)*(ushort *)(lVar8 + lVar7 * 0xcea8 + 0x1420);
        if (299 < uVar13) {
          uVar13 = 300;
        }
        uVar26 = (ulong)uVar13;
        if (uVar13 != 0) {
          lVar8 = lVar33;
          do {
            lVar9 = FUN__text__0030d5f0();
            uVar5 = *(ushort *)(lVar9 + lVar8 + -2);
            lVar9 = FUN__text__0030d5f0();
            if (((uVar5 != 0) && (uVar5 < 0x800)) && (*(ushort *)(lVar9 + lVar8) < 0x80)) {
              lVar9 = param_1 + (ulong)uVar5 * 0x200 + (ulong)*(ushort *)(lVar9 + lVar8) * 4;
              *(int *)(lVar9 + 0x2ff24e8) = *(int *)(lVar9 + 0x2ff24e8) + 1;
            }
            uVar26 = uVar26 - 1;
            lVar8 = lVar8 + 0x2c;
          } while (uVar26 != 0);
        }
        lVar8 = FUN__text__0030d5f0();
        uVar13 = (uint)*(ushort *)(lVar8 + lVar7 * 0xcea8 + 0x1422);
        if (299 < uVar13) {
          uVar13 = 300;
        }
        uVar26 = (ulong)uVar13;
        if (uVar13 != 0) {
          lVar8 = lVar31;
          do {
            lVar9 = FUN__text__0030d5f0();
            uVar5 = *(ushort *)(lVar9 + lVar8 + -2);
            lVar9 = FUN__text__0030d5f0();
            if (((uVar5 != 0) && (uVar5 < 0x800)) && (*(ushort *)(lVar9 + lVar8) < 0x80)) {
              lVar9 = param_1 + (ulong)uVar5 * 0x200 + (ulong)*(ushort *)(lVar9 + lVar8) * 4;
              *(int *)(lVar9 + 0x2ff24e8) = *(int *)(lVar9 + 0x2ff24e8) + 1;
            }
            uVar26 = uVar26 - 1;
            lVar8 = lVar8 + 0x2c;
          } while (uVar26 != 0);
        }
        lVar8 = FUN__text__0030d5f0();
        uVar13 = (uint)*(ushort *)(lVar8 + lVar7 * 0xcea8 + 0x1424);
        if (299 < uVar13) {
          uVar13 = 300;
        }
        uVar26 = (ulong)uVar13;
        if (uVar13 != 0) {
          lVar8 = lVar32;
          do {
            lVar9 = FUN__text__0030d5f0();
            uVar5 = *(ushort *)(lVar9 + lVar8 + -2);
            lVar9 = FUN__text__0030d5f0();
            if (((uVar5 != 0) && (uVar5 < 0x800)) && (*(ushort *)(lVar9 + lVar8) < 0x80)) {
              lVar9 = param_1 + (ulong)uVar5 * 0x200 + (ulong)*(ushort *)(lVar9 + lVar8) * 4;
              *(int *)(lVar9 + 0x2ff24e8) = *(int *)(lVar9 + 0x2ff24e8) + 1;
            }
            uVar26 = uVar26 - 1;
            lVar8 = lVar8 + 0x2c;
          } while (uVar26 != 0);
        }
      }
      lVar7 = lVar7 + 1;
      lVar8 = FUN__text__0030d5f0();
      lVar27 = lVar27 + 0xcea8;
      lVar33 = lVar33 + 0xcea8;
      lVar31 = lVar31 + 0xcea8;
      lVar32 = lVar32 + 0xcea8;
    } while (lVar7 < *(int *)(lVar8 + 0x13b8));
  }
  if (uVar12 == 0) {
    uVar13 = 0;
  }
  else {
    if (uVar3 < 100) {
      lVar7 = 0x4fff08;
      uVar13 = 100 - uVar12;
      if ((int)uVar13 < 2) {
        uVar13 = 1;
      }
      uVar26 = (ulong)uVar13;
      do {
        lVar27 = FUN__text__0030d5f0();
        lVar33 = FUN__text__0030d5f0();
        memcpy((void *)(lVar27 + lVar7),(void *)(lVar33 + (long)(int)-uVar12 * 0xcea8 + lVar7),
               0xcea8);
        lVar7 = lVar7 + -0xcea8;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
    lVar7 = 0;
    uVar13 = uVar12;
    if (uVar12 < 2) {
      uVar13 = 1;
    }
    do {
      lVar27 = FUN__text__0030d5f0();
      memset((void *)(lVar27 + lVar7 + 0x1410),0,0xcea8);
      lVar7 = lVar7 + 0xcea8;
    } while ((ulong)uVar13 * 0xcea8 != lVar7);
    uVar13 = uVar12;
  }
  lVar7 = FUN__text__0030d5f0();
  *(uint *)(lVar7 + 0x13b8) = *(int *)(lVar7 + 0x13b8) + uVar13;
  lVar7 = FUN__text__0030d5f0();
  if (100 < *(int *)(lVar7 + 0x13b8)) {
    lVar7 = FUN__text__0030d5f0();
    *(undefined4 *)(lVar7 + 0x13b8) = 100;
  }
  puVar11 = (uint *)(param_1 + 0x2ff24ec);
  if (uVar12 != 0) {
    param_1 = param_1 + 0x13560a2;
    uVar26 = 0;
    do {
      bVar2 = *(byte *)(param_1 + 8);
      __n = (ulong)bVar2;
      __src = (long *)(param_1 + 9);
      if (uVar26 == 0) {
        lVar7 = FUN__text__0030d5f0();
        if (bVar2 != 0) {
          memcpy((void *)(lVar7 + 0x13bc),__src,__n);
          __src = (long *)((long)__src + __n);
        }
      }
      else if (bVar2 != 0) {
        __src = (long *)((long)__src + __n);
      }
      lVar27 = *__src;
      bVar2 = *(byte *)((long)__src + 0xc);
      uVar4 = *(undefined2 *)((long)__src + 0xe);
      lVar33 = __src[2];
      lVar7 = FUN__text__0030d5f0();
      lVar31 = uVar26 * 0xcea8;
      *(uint *)(lVar7 + lVar31 + 0x1410) = (uint)bVar2;
      lVar7 = FUN__text__0030d5f0();
      *(undefined2 *)(lVar7 + lVar31 + 0x1414) = uVar4;
      lVar7 = FUN__text__0030d5f0();
      *(long *)(lVar7 + lVar31 + 0x1418) = lVar33;
      uVar12 = bVar2 - 1;
      if (uVar12 < 0x3f) {
                    /* WARNING: Could not emulate address calculation at 0x00351c90 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__00351bd0 + (ulong)*(ushort *)((ulong)uVar12 * 2 + 0x734d12) * 4))();
        return;
      }
      param_1 = (long)__src + lVar27 + 8;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar13);
  }
  lVar7 = 0;
  iVar21 = 0;
  iVar22 = 0;
  iVar29 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar19 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar16 = 0;
  do {
    lVar27 = 0;
    puVar17 = puVar11;
    do {
      uVar18 = puVar17[-1];
      uVar14 = (undefined4)lVar7;
      iVar20 = (int)lVar27;
      if (uVar16 < uVar18) {
        uVar12 = uVar13;
        uVar23 = uVar24;
        iVar21 = iVar22;
        uVar15 = uVar16;
        uVar30 = uVar19;
        iVar28 = iVar29;
        uVar19 = uVar14;
        iVar29 = iVar20;
      }
      else if (uVar13 < uVar18) {
        uVar12 = uVar13;
        uVar23 = uVar24;
        iVar21 = iVar22;
        uVar15 = uVar18;
        uVar30 = uVar14;
        iVar28 = iVar20;
        uVar18 = uVar16;
      }
      else {
        if (uVar12 < uVar18) {
          iVar21 = iVar20;
          uVar23 = uVar14;
          uVar12 = uVar18;
        }
        uVar15 = uVar13;
        uVar30 = uVar24;
        iVar28 = iVar22;
        uVar18 = uVar16;
      }
      uVar1 = *puVar17;
      iVar20 = iVar20 + 1;
      lVar27 = lVar27 + 2;
      if (uVar12 < uVar1) {
        iVar21 = iVar20;
        uVar23 = uVar14;
        uVar12 = uVar1;
      }
      iVar22 = iVar28;
      uVar24 = uVar30;
      uVar13 = uVar15;
      if (uVar15 < uVar1) {
        iVar21 = iVar28;
        iVar22 = iVar20;
        uVar23 = uVar30;
        uVar24 = uVar14;
        uVar12 = uVar15;
        uVar13 = uVar1;
      }
      uVar16 = uVar18;
      if (uVar18 < uVar1) {
        iVar22 = iVar29;
        iVar29 = iVar20;
        iVar21 = iVar28;
        uVar24 = uVar19;
        uVar19 = uVar14;
        uVar23 = uVar30;
        uVar13 = uVar18;
        uVar16 = uVar1;
        uVar12 = uVar15;
      }
      puVar17 = puVar17 + 2;
    } while (lVar27 != 0x80);
    lVar7 = lVar7 + 1;
    puVar11 = puVar11 + 0x80;
  } while (lVar7 != 0x800);
  lVar7 = FUN__text__00321ac0();
  *(undefined2 *)(lVar7 + 0x79fee) = 1;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x79fe8) = (short)uVar19;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x79fea) = (short)iVar29;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x79ff1) = 1;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x79fec) = 100;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x79ff0) = 0;
  lVar7 = FUN__text__00321ac0();
  *(undefined2 *)(lVar7 + 0x7a01a) = 1;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x7a014) = (short)uVar24;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x7a016) = (short)iVar22;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a01d) = 1;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a018) = 100;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a01c) = 0;
  lVar7 = FUN__text__00321ac0();
  *(undefined2 *)(lVar7 + 0x7a046) = 1;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x7a040) = (short)uVar23;
  lVar7 = FUN__text__00321ac0();
  *(short *)(lVar7 + 0x7a042) = (short)iVar21;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a049) = 1;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a044) = 100;
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x7a048) = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  return;
LAB__text__00351770:
  if ((sVar6 == sVar10) || (sVar10 == 0xffffffffffffffff)) goto LAB__text__00351780;
  std::string::erase((ulong)&local_80,sVar10);
  sVar6 = local_80 >> 1 & 0x7f;
  pcVar25 = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    sVar6 = local_78;
    pcVar25 = local_70;
  }
  if (sVar6 == 0) goto LAB__text__00351780;
  sVar10 = 0;
  while (pcVar25[sVar10] != '\\') {
    sVar10 = sVar10 + 1;
    if (sVar6 == sVar10) goto LAB__text__00351780;
  }
  goto LAB__text__00351770;
}


