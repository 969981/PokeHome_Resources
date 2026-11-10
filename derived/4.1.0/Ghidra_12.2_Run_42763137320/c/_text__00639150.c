/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00639150; name: FUN_.text__00639150
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00639150(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  short *psVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong local_48;
  ulong uStack_40;
  
  uVar10 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar10;
  uVar10 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[2] = uVar10;
  param_1[3] = uVar1;
  uVar1 = param_2[7];
  uVar10 = param_2[8];
  uVar2 = param_2[9];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  param_1[8] = uVar10;
  param_1[9] = uVar2;
  local_48 = 0xf4b17a579f18960;
  uStack_40 = 0x82a2b175229d6a5b;
  if (*(char *)(param_2 + 1) == '\0') {
    if (param_1[2] == -1) {
      uVar19 = FUN__text__006029a4();
      puVar18 = (ulong *)0x0;
      goto LAB__text__00639344;
    }
    uVar19 = param_1[4];
    if (uVar19 == 0xffffffffffffffff) goto LAB__text__0063938c;
    puVar18 = (ulong *)0x0;
    lVar13 = param_1[3];
    if (lVar13 != 0x1ffffffff) goto LAB__text__006391fc;
LAB__text__006393ac:
    if (puVar18 == (ulong *)0x0) {
      iVar6 = FUN__text__006029a4();
    }
    else {
      uVar14 = *puVar18;
      uVar15 = puVar18[1];
      do {
        uVar16 = uVar14 ^ uVar15;
        iVar6 = (int)uVar14 + (int)uVar15;
        uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
        uVar14 = (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10 ^ uVar16;
      } while (iVar6 == -1);
      *puVar18 = uVar14;
      puVar18[1] = uVar15;
    }
    uVar19 = thunk_FUN__text__0064980c(uVar19 & 0xffffffff,iVar6);
LAB__text__00639400:
    param_1[3] = uVar19 & 0xffffffff;
  }
  else {
    puVar18 = &local_48;
    FUN__text__00639ff0(&local_48,*param_2);
    if (param_1[2] == -1) {
      do {
        uVar14 = local_48 ^ uStack_40;
        uVar7 = (int)local_48 + (int)uStack_40;
        uVar19 = (ulong)uVar7;
        uStack_40 = uVar14 >> 0x1b | uVar14 << 0x25;
        local_48 = (local_48 >> 0x28 | local_48 << 0x18) ^ uVar14 << 0x10 ^ uVar14;
      } while (uVar7 == 0xffffffff);
      puVar18 = &local_48;
LAB__text__00639344:
      param_1[2] = uVar19 & 0xffffffff;
      uVar19 = param_1[4];
      if (uVar19 != 0xffffffffffffffff) goto LAB__text__006391ec;
LAB__text__0063935c:
      if (puVar18 == (ulong *)0x0) {
LAB__text__0063938c:
        uVar19 = FUN__text__006029a4();
        puVar18 = (ulong *)0x0;
      }
      else {
        uVar14 = *puVar18;
        uVar15 = puVar18[1];
        do {
          uVar16 = uVar14 ^ uVar15;
          uVar7 = (int)uVar14 + (int)uVar15;
          uVar19 = (ulong)uVar7;
          uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
          uVar14 = (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10 ^ uVar16;
        } while (uVar7 == 0xffffffff);
        *puVar18 = uVar14;
        puVar18[1] = uVar15;
      }
      uVar19 = uVar19 & 0xffffffff;
      param_1[4] = uVar19;
      lVar13 = param_1[3];
    }
    else {
      uVar19 = param_1[4];
      if (uVar19 == 0xffffffffffffffff) goto LAB__text__0063935c;
LAB__text__006391ec:
      lVar13 = param_1[3];
    }
    if (lVar13 == 0x1ffffffff) goto LAB__text__006393ac;
LAB__text__006391fc:
    if (lVar13 == 0x2ffffffff) {
      if (puVar18 == (ulong *)0x0) {
        iVar6 = FUN__text__006029a4();
      }
      else {
        uVar14 = *puVar18;
        uVar15 = puVar18[1];
        do {
          uVar16 = uVar14 ^ uVar15;
          iVar6 = (int)uVar14 + (int)uVar15;
          uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
          uVar14 = (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10 ^ uVar16;
        } while (iVar6 == -1);
        *puVar18 = uVar14;
        puVar18[1] = uVar15;
      }
      uVar19 = thunk_FUN__text__00649828(uVar19 & 0xffffffff,iVar6);
      goto LAB__text__00639400;
    }
    if ((lVar13 == 0x3ffffffff) && (*(char *)((long)param_1 + 0x35) != '\0')) {
      uVar7 = 0;
      do {
        if (puVar18 == (ulong *)0x0) {
          uVar19 = FUN__text__006029a4();
          param_1[3] = uVar19 & 0xffffffff;
          uVar19 = thunk_FUN__text__006497f4(*(undefined4 *)(param_1 + 4));
        }
        else {
          uVar19 = *puVar18;
          uVar14 = puVar18[1];
          do {
            uVar15 = uVar19 ^ uVar14;
            uVar8 = (int)uVar19 + (int)uVar14;
            uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
            uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
          } while (uVar8 == 0xffffffff);
          *puVar18 = uVar19;
          puVar18[1] = uVar14;
          param_1[3] = (ulong)uVar8;
          uVar19 = thunk_FUN__text__006497f4(*(undefined4 *)(param_1 + 4));
        }
      } while (((uVar19 & 1) == 0) && (uVar7 = uVar7 + 1, uVar7 < *(byte *)((long)param_1 + 0x35)));
    }
  }
  if (100 < *(ushort *)((long)param_1 + 0x2e)) {
    *(undefined2 *)((long)param_1 + 0x2e) = 100;
  }
  if (*(byte *)(param_1 + 9) != 0) {
    if (*(byte *)(param_1 + 9) < 6) {
      *(undefined8 *)((long)param_1 + 0x36) = 0xffffffffffffffff;
      *(undefined4 *)((long)param_1 + 0x3e) = 0xffffffff;
      if (puVar18 == (ulong *)0x0) {
        uVar7 = 0;
        do {
          do {
            uVar8 = FUN__text__006029bc(6);
            psVar17 = (short *)((long)param_1 + (ulong)(uVar8 & 0xff) * 2 + 0x36);
          } while (*psVar17 != -1);
          *psVar17 = 0x1f;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(byte *)(param_1 + 9));
      }
      else {
        uVar7 = 0;
        do {
          uVar19 = *puVar18;
          uVar14 = puVar18[1];
          do {
            do {
              uVar15 = uVar19 + uVar14;
              uVar14 = uVar19 ^ uVar14;
              uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar14 << 0x10 ^ uVar14;
              uVar14 = uVar14 >> 0x1b | uVar14 << 0x25;
            } while ((~(uint)uVar15 & 6) == 0);
            *puVar18 = uVar19;
            puVar18[1] = uVar14;
            psVar17 = (short *)((long)param_1 + (uVar15 & 7) * 2 + 0x36);
          } while (*psVar17 != -1);
          bVar4 = *(byte *)(param_1 + 9);
          uVar7 = uVar7 + 1;
          *psVar17 = 0x1f;
        } while (uVar7 < bVar4);
      }
    }
    else {
      *(undefined1 *)(param_1 + 9) = 0;
      *(undefined8 *)((long)param_1 + 0x36) = 0xffffffffffffffff;
      *(undefined4 *)((long)param_1 + 0x3e) = 0xffffffff;
    }
  }
  if (*(short *)((long)param_1 + 0x36) == -1) {
    if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x20);
      *(undefined2 *)((long)param_1 + 0x36) = uVar5;
      sVar3 = *(short *)(param_1 + 7);
      goto joined_r0x006395c4;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1];
    uVar15 = uVar14 ^ uVar19;
    *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
    puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    *(ushort *)((long)param_1 + 0x36) = (short)uVar14 + (short)uVar19 & 0x1f;
    if (*(short *)(param_1 + 7) == -1) goto LAB__text__006395c8;
LAB__text__00639508:
    sVar3 = *(short *)((long)param_1 + 0x3a);
joined_r0x00639618:
    if (sVar3 == -1) goto LAB__text__0063961c;
LAB__text__00639514:
    sVar3 = *(short *)((long)param_1 + 0x3c);
joined_r0x0063951c:
    if (sVar3 != -1) goto LAB__text__00639520;
LAB__text__00639670:
    if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x20);
      *(undefined2 *)((long)param_1 + 0x3c) = uVar5;
      sVar3 = *(short *)((long)param_1 + 0x3e);
      goto joined_r0x00639528;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1];
    uVar15 = uVar14 ^ uVar19;
    *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
    puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    *(ushort *)((long)param_1 + 0x3c) = (short)uVar14 + (short)uVar19 & 0x1f;
    if (*(short *)((long)param_1 + 0x3e) != -1) goto LAB__text__0063952c;
LAB__text__006396c4:
    if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x20);
      *(undefined2 *)((long)param_1 + 0x3e) = uVar5;
      sVar3 = *(short *)(param_1 + 8);
      goto joined_r0x00639534;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1];
    uVar15 = uVar14 ^ uVar19;
    *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
    puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    *(ushort *)((long)param_1 + 0x3e) = (short)uVar14 + (short)uVar19 & 0x1f;
    if (*(short *)(param_1 + 8) != -1) goto LAB__text__00639538;
LAB__text__00639718:
    if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x20);
      *(undefined2 *)(param_1 + 8) = uVar5;
      cVar12 = *(char *)((long)param_1 + 0x34);
      goto joined_r0x00639540;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1];
    uVar15 = uVar14 ^ uVar19;
    *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
    puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    *(ushort *)(param_1 + 8) = (short)uVar14 + (short)uVar19 & 0x1f;
    cVar12 = *(char *)((long)param_1 + 0x34);
    if (cVar12 != -2) goto LAB__text__00639544;
LAB__text__0063976c:
    if (puVar18 != (ulong *)0x0) {
      uVar19 = *puVar18;
      uVar14 = puVar18[1];
      do {
        uVar15 = uVar19 ^ uVar14;
        uVar7 = (int)uVar19 + (int)uVar14 & 3;
        bVar4 = (byte)uVar7;
        uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
        uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
      } while (uVar7 == 3);
      goto LAB__text__00639798;
    }
    uVar10 = 3;
LAB__text__006397ac:
    bVar4 = FUN__text__006029bc(uVar10);
  }
  else {
    sVar3 = *(short *)(param_1 + 7);
joined_r0x006395c4:
    if (sVar3 != -1) goto LAB__text__00639508;
LAB__text__006395c8:
    if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x20);
      *(undefined2 *)(param_1 + 7) = uVar5;
      sVar3 = *(short *)((long)param_1 + 0x3a);
      goto joined_r0x00639618;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1];
    uVar15 = uVar14 ^ uVar19;
    *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
    puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
    *(ushort *)(param_1 + 7) = (short)uVar14 + (short)uVar19 & 0x1f;
    if (*(short *)((long)param_1 + 0x3a) != -1) goto LAB__text__00639514;
LAB__text__0063961c:
    if (puVar18 != (ulong *)0x0) {
      uVar19 = *puVar18;
      uVar14 = puVar18[1];
      uVar15 = uVar14 ^ uVar19;
      *puVar18 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
      puVar18[1] = uVar15 >> 0x1b | uVar15 << 0x25;
      *(ushort *)((long)param_1 + 0x3a) = (short)uVar14 + (short)uVar19 & 0x1f;
      sVar3 = *(short *)((long)param_1 + 0x3c);
      goto joined_r0x0063951c;
    }
    uVar5 = FUN__text__006029bc(0x20);
    *(undefined2 *)((long)param_1 + 0x3a) = uVar5;
    if (*(short *)((long)param_1 + 0x3c) == -1) goto LAB__text__00639670;
LAB__text__00639520:
    sVar3 = *(short *)((long)param_1 + 0x3e);
joined_r0x00639528:
    if (sVar3 == -1) goto LAB__text__006396c4;
LAB__text__0063952c:
    sVar3 = *(short *)(param_1 + 8);
joined_r0x00639534:
    if (sVar3 == -1) goto LAB__text__00639718;
LAB__text__00639538:
    cVar12 = *(char *)((long)param_1 + 0x34);
joined_r0x00639540:
    if (cVar12 == -2) goto LAB__text__0063976c;
LAB__text__00639544:
    if (cVar12 != -1) goto LAB__text__006397b4;
    if (puVar18 == (ulong *)0x0) {
      uVar10 = 2;
      goto LAB__text__006397ac;
    }
    uVar19 = *puVar18;
    uVar14 = puVar18[1] ^ uVar19;
    bVar4 = (char)puVar18[1] + (char)uVar19 & 1;
    uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar14 << 0x10 ^ uVar14;
    uVar14 = uVar14 >> 0x1b | uVar14 << 0x25;
LAB__text__00639798:
    *puVar18 = uVar19;
    puVar18[1] = uVar14;
  }
  *(byte *)((long)param_1 + 0x34) = bVar4;
LAB__text__006397b4:
  uVar11 = *(ushort *)(param_1 + 6);
  if (uVar11 == 0xff) {
    uVar7 = FUN__text__005ff0fc(*(undefined4 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2c),0
                               );
    if (uVar7 == 0) {
      uVar11 = 0;
    }
    else if (uVar7 == 0xff) {
      uVar11 = 2;
    }
    else if (uVar7 == 0xfe) {
      uVar11 = 1;
    }
    else {
      if (puVar18 == (ulong *)0x0) {
        uVar8 = FUN__text__006029bc(0xfd);
      }
      else {
        uVar19 = *puVar18;
        uVar14 = puVar18[1];
        do {
          uVar15 = uVar19 ^ uVar14;
          uVar8 = (int)uVar19 + (int)uVar14 & 0xff;
          uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
          uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
        } while (0xfc < uVar8);
        *puVar18 = uVar19;
        puVar18[1] = uVar14;
      }
      uVar11 = (ushort)(uVar8 + 1 < uVar7);
    }
    *(ushort *)(param_1 + 6) = uVar11;
  }
  uVar5 = FUN__text__00638bb8(*(undefined4 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2c),
                              uVar11,0);
  *(undefined2 *)(param_1 + 6) = uVar5;
  if (*(short *)((long)param_1 + 0x32) == -1) {
    if ((*(int *)(param_1 + 5) == 0x351) && (*(short *)((long)param_1 + 0x2c) == 0)) {
      uVar5 = FUN__text__00639dd0(puVar18);
      *(undefined2 *)((long)param_1 + 0x32) = uVar5;
      iVar6 = *(int *)((long)param_1 + 0x44);
    }
    else if ((*(int *)(param_1 + 5) == 0x351) && (*(short *)((long)param_1 + 0x2c) == 1)) {
      uVar5 = FUN__text__00639ee0(puVar18);
      *(undefined2 *)((long)param_1 + 0x32) = uVar5;
      iVar6 = *(int *)((long)param_1 + 0x44);
    }
    else if (puVar18 == (ulong *)0x0) {
      uVar5 = FUN__text__006029bc(0x19);
      *(undefined2 *)((long)param_1 + 0x32) = uVar5;
      iVar6 = *(int *)((long)param_1 + 0x44);
    }
    else {
      uVar19 = *puVar18;
      uVar14 = puVar18[1];
      do {
        uVar15 = uVar19 ^ uVar14;
        uVar7 = (int)uVar19 + (int)uVar14 & 0x1f;
        uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
        uVar19 = (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar15 << 0x10 ^ uVar15;
      } while (0x18 < uVar7);
      *puVar18 = uVar19;
      puVar18[1] = uVar14;
      *(short *)((long)param_1 + 0x32) = (short)uVar7;
      iVar6 = *(int *)((long)param_1 + 0x44);
    }
  }
  else {
    iVar6 = *(int *)((long)param_1 + 0x44);
  }
  if (iVar6 == 0xffff) {
    uVar9 = FUN__text__005ffacc(*(undefined4 *)(param_1 + 5),*(undefined2 *)((long)param_1 + 0x2c),0
                               );
    *(undefined4 *)((long)param_1 + 0x44) = uVar9;
  }
  uVar5 = FUN__text__00639b90(*(undefined2 *)((long)param_1 + 0x4c),puVar18);
  *(undefined2 *)((long)param_1 + 0x4c) = uVar5;
  uVar5 = FUN__text__00639b90(*(undefined2 *)((long)param_1 + 0x4a),puVar18);
  *(undefined2 *)((long)param_1 + 0x4a) = uVar5;
  return;
}


