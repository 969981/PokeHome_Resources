/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005de570; name: FUN_.text__005de570
 */


int FUN__text__005de570(ushort *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort *__src;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  iVar11 = -1;
  if ((param_1 != (ushort *)0x0) && (-1 < (int)param_4)) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        iVar11 = -(uint)((byte)*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      puVar1 = (ushort *)((long)param_1 + (long)param_3);
      puVar2 = (undefined8 *)((long)param_2 + (ulong)param_4);
      puVar12 = (ushort *)((long)puVar1 + -0xf);
      puVar13 = (undefined8 *)((long)puVar2 + -7);
      __src = param_1;
      puVar8 = param_2;
LAB__text__005de610:
      puVar14 = (ushort *)((long)__src + 1);
      bVar5 = (byte)*__src;
      uVar7 = (ulong)(bVar5 >> 4);
      if (bVar5 >> 4 == 0xf) {
        if (puVar14 < puVar12) {
          __src = __src + 1;
          if (__src <= puVar12) {
            uVar7 = (ulong)*(byte *)puVar14;
            if (uVar7 == 0xff) {
              lVar15 = 0;
              if (__src <= puVar12) {
                lVar15 = (long)puVar12 - (long)__src;
              }
              uVar7 = 0xff;
              puVar14 = __src;
              do {
                __src = (ushort *)((long)puVar14 + 1);
                if (lVar15 == 0) goto LAB__text__005deb60;
                uVar6 = *puVar14;
                lVar15 = lVar15 + -1;
                uVar7 = uVar7 + (byte)uVar6;
                puVar14 = __src;
              } while ((ulong)(byte)uVar6 == 0xff);
              if (uVar7 == 0xffffffffffffffff) goto LAB__text__005deb60;
            }
            uVar7 = uVar7 + 0xf;
            if ((!CARRY8((ulong)puVar8,uVar7)) && (!CARRY8((ulong)__src,uVar7))) {
              puVar3 = (ushort *)((long)__src + uVar7);
              goto joined_r0x005de97c;
            }
          }
        }
        else {
LAB__text__005deb54:
          __src = puVar14;
        }
        goto LAB__text__005deb60;
      }
      if ((puVar1 + -8 <= puVar14) || (puVar2 + -4 < puVar8)) goto LAB__text__005de96c;
      uVar24 = *(undefined8 *)puVar14;
      puVar20 = (undefined8 *)((long)puVar8 + uVar7);
      uVar23 = (ulong)bVar5 & 0xf;
      puVar8[1] = *(undefined8 *)((long)__src + 9);
      *puVar8 = uVar24;
      __src = (ushort *)((long)puVar14 + uVar7) + 1;
      uVar6 = *(ushort *)((long)puVar14 + uVar7);
      uVar7 = (ulong)uVar6;
      puVar8 = (undefined8 *)((long)puVar20 - uVar7);
      puVar3 = __src;
      if ((((int)uVar23 != 0xf) && (7 < uVar6)) && (param_2 <= puVar8)) {
        *puVar20 = *puVar8;
        puVar20[1] = puVar8[1];
        *(undefined2 *)(puVar20 + 2) = *(undefined2 *)(puVar8 + 2);
        puVar8 = (undefined8 *)((long)puVar20 + uVar23 + 4);
        goto LAB__text__005de610;
      }
      goto joined_r0x005de744;
    }
  }
  return iVar11;
LAB__text__005de96c:
  puVar3 = (ushort *)((long)puVar14 + uVar7);
  __src = puVar14;
joined_r0x005de97c:
  puVar20 = (undefined8 *)((long)puVar8 + uVar7);
  if (((undefined8 *)((long)puVar2 + -0xc) < puVar20) || (puVar1 + -4 < puVar3)) {
    if ((puVar3 == puVar1) && (puVar20 <= puVar2)) {
      memmove(puVar8,__src,uVar7);
      return (int)puVar20 - (int)param_2;
    }
LAB__text__005deb60:
    return ~(uint)__src + (int)param_1;
  }
  puVar10 = (undefined8 *)(uVar7 + (long)puVar8);
  if ((undefined8 *)(uVar7 + (long)puVar8) <= puVar8 + 1) {
    puVar10 = puVar8 + 1;
  }
  if (((long)puVar10 + ~(ulong)puVar8 < 0x38) || ((ulong)((long)puVar8 - (long)__src) < 0x40)) {
LAB__text__005de760:
    do {
      puVar10 = puVar8 + 1;
      *puVar8 = *(undefined8 *)__src;
      __src = __src + 4;
      puVar8 = puVar10;
    } while (puVar10 < puVar20);
  }
  else {
    uVar7 = ((long)puVar10 + ~(ulong)puVar8 >> 3) + 1;
    uVar18 = uVar7 & 0x3ffffffffffffff8;
    puVar14 = __src + 0x10;
    puVar10 = puVar8 + 4;
    uVar23 = uVar18;
    do {
      uVar24 = *(undefined8 *)(puVar14 + -0x10);
      uVar26 = *(undefined8 *)(puVar14 + -4);
      uVar25 = *(undefined8 *)(puVar14 + -8);
      uVar23 = uVar23 - 8;
      uVar28 = *(undefined8 *)(puVar14 + 4);
      uVar27 = *(undefined8 *)puVar14;
      uVar30 = *(undefined8 *)(puVar14 + 0xc);
      uVar29 = *(undefined8 *)(puVar14 + 8);
      puVar10[-3] = *(undefined8 *)(puVar14 + -0xc);
      puVar10[-4] = uVar24;
      puVar10[-1] = uVar26;
      puVar10[-2] = uVar25;
      puVar10[1] = uVar28;
      *puVar10 = uVar27;
      puVar10[3] = uVar30;
      puVar10[2] = uVar29;
      puVar14 = puVar14 + 0x20;
      puVar10 = puVar10 + 8;
    } while (uVar23 != 0);
    __src = __src + uVar18 * 4;
    puVar8 = puVar8 + uVar18;
    if (uVar7 != uVar18) goto LAB__text__005de760;
  }
  uVar7 = (ulong)*puVar3;
  puVar8 = (undefined8 *)((long)puVar20 - uVar7);
  puVar3 = puVar3 + 1;
joined_r0x005de744:
  uVar23 = (ulong)bVar5 & 0xf;
  __src = puVar3;
  if (uVar23 == 0xf) {
    __src = (ushort *)((long)puVar3 + 1);
    puVar14 = __src;
    if ((ushort *)((long)puVar1 + -5) < puVar3) goto LAB__text__005deb54;
    uVar18 = (ulong)(byte)*puVar3;
    if (uVar18 == 0xff) {
      lVar15 = 0;
      if (__src <= puVar1 + -2) {
        lVar15 = (long)(puVar1 + -2) - (long)__src;
      }
      uVar18 = 0xff;
      do {
        __src = (ushort *)((long)puVar14 + 1);
        if (lVar15 == 0) goto LAB__text__005deb60;
        uVar6 = *puVar14;
        lVar15 = lVar15 + -1;
        uVar18 = uVar18 + (byte)uVar6;
        puVar14 = __src;
      } while ((ulong)(byte)uVar6 == 0xff);
    }
    uVar23 = uVar18 + 0xf;
    if ((uVar18 == 0xffffffffffffffff) || (CARRY8((ulong)puVar20,uVar23))) goto LAB__text__005deb60;
  }
  if (puVar8 < param_2) goto LAB__text__005deb60;
  if (uVar7 < 8) {
    *(undefined4 *)puVar20 = 0;
    *(undefined1 *)puVar20 = *(undefined1 *)puVar8;
    *(undefined1 *)((long)puVar20 + 1) = *(undefined1 *)((long)puVar8 + 1);
    *(undefined1 *)((long)puVar20 + 2) = *(undefined1 *)((long)puVar8 + 2);
    *(undefined1 *)((long)puVar20 + 3) = *(undefined1 *)((long)puVar8 + 3);
    puVar4 = (undefined4 *)((long)puVar8 + (ulong)*(uint *)(uVar7 * 4 + 0x725050));
    *(undefined4 *)((long)puVar20 + 4) = *puVar4;
    puVar10 = (undefined8 *)((long)puVar4 - (long)*(int *)(uVar7 * 4 + 0x724ef0));
  }
  else {
    puVar10 = puVar8 + 1;
    *puVar20 = *puVar8;
  }
  puVar8 = (undefined8 *)((long)puVar20 + uVar23 + 4);
  if ((undefined8 *)((long)puVar2 + -0xc) < puVar8) {
    puVar16 = puVar20 + 1;
    if ((undefined8 *)((long)puVar2 + -5) < puVar8) goto LAB__text__005deb60;
    if (puVar16 < puVar13) {
      puVar9 = puVar13;
      if (puVar13 <= puVar20 + 2) {
        puVar9 = puVar20 + 2;
      }
      uVar7 = (long)puVar9 + (-9 - (long)puVar20);
      puVar9 = puVar10;
      if (uVar7 < 0x38) {
        puVar17 = puVar16;
LAB__text__005dea14:
        do {
          puVar19 = puVar17 + 1;
          *puVar17 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar17 = puVar19;
        } while (puVar19 < puVar13);
      }
      else {
        puVar17 = puVar16;
        if ((ulong)((long)puVar20 + (8 - (long)puVar10)) < 0x40) goto LAB__text__005dea14;
        uVar7 = (uVar7 >> 3) + 1;
        uVar21 = uVar7 & 0x3ffffffffffffff8;
        puVar9 = puVar10 + uVar21;
        puVar17 = puVar16 + uVar21;
        puVar19 = puVar10 + 4;
        puVar22 = puVar20 + 5;
        uVar18 = uVar21;
        do {
          uVar24 = puVar19[-4];
          uVar26 = puVar19[-1];
          uVar25 = puVar19[-2];
          uVar18 = uVar18 - 8;
          uVar28 = puVar19[1];
          uVar27 = *puVar19;
          uVar30 = puVar19[3];
          uVar29 = puVar19[2];
          puVar22[-3] = puVar19[-3];
          puVar22[-4] = uVar24;
          puVar22[-1] = uVar26;
          puVar22[-2] = uVar25;
          puVar22[1] = uVar28;
          *puVar22 = uVar27;
          puVar22[3] = uVar30;
          puVar22[2] = uVar29;
          puVar19 = puVar19 + 8;
          puVar22 = puVar22 + 8;
        } while (uVar18 != 0);
        if (uVar7 != uVar21) goto LAB__text__005dea14;
      }
      lVar15 = (long)puVar13 - (long)puVar16;
      puVar16 = puVar13;
      puVar9 = (undefined8 *)((long)puVar10 + lVar15);
    }
    else {
      puVar9 = puVar10;
    }
    if (puVar16 < puVar8) {
      puVar17 = puVar13;
      if (puVar13 <= puVar20 + 1) {
        puVar17 = puVar20 + 1;
      }
      uVar7 = (long)puVar20 + (uVar23 - (long)puVar17) + 4;
      if (uVar7 < 8) {
        puVar19 = puVar16;
      }
      else if ((ulong)((long)puVar20 + (8 - (long)puVar10)) < 0x40) {
        puVar19 = puVar16;
      }
      else {
        if (uVar7 < 0x40) {
          uVar18 = 0;
        }
        else {
          uVar18 = uVar7 & 0xffffffffffffffc0;
          puVar19 = puVar16 + 4;
          puVar22 = (undefined8 *)((long)puVar10 + (long)puVar17 + (0x18 - (long)puVar20));
          uVar23 = uVar18;
          do {
            uVar24 = puVar22[-4];
            uVar26 = puVar22[-1];
            uVar25 = puVar22[-2];
            uVar23 = uVar23 - 0x40;
            uVar28 = puVar22[1];
            uVar27 = *puVar22;
            uVar30 = puVar22[3];
            uVar29 = puVar22[2];
            puVar19[-3] = puVar22[-3];
            puVar19[-4] = uVar24;
            puVar19[-1] = uVar26;
            puVar19[-2] = uVar25;
            puVar19[1] = uVar28;
            *puVar19 = uVar27;
            puVar19[3] = uVar30;
            puVar19[2] = uVar29;
            puVar19 = puVar19 + 8;
            puVar22 = puVar22 + 8;
          } while (uVar23 != 0);
          if (uVar7 == uVar18) goto LAB__text__005de610;
          if ((uVar7 & 0x38) == 0) {
            puVar9 = (undefined8 *)((long)puVar9 + uVar18);
            puVar19 = (undefined8 *)((long)puVar16 + uVar18);
            goto LAB__text__005deb20;
          }
        }
        uVar23 = uVar7 & 0xfffffffffffffff8;
        puVar19 = (undefined8 *)((long)puVar16 + uVar23);
        puVar9 = (undefined8 *)((long)puVar9 + uVar23);
        lVar15 = uVar18 - uVar23;
        puVar20 = (undefined8 *)((long)puVar10 + (long)puVar17 + (uVar18 - (long)puVar20) + -8);
        puVar10 = (undefined8 *)((long)puVar16 + uVar18);
        do {
          lVar15 = lVar15 + 8;
          *puVar10 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
        if (uVar7 == uVar23) goto LAB__text__005de610;
      }
LAB__text__005deb20:
      do {
        puVar20 = (undefined8 *)((long)puVar19 + 1);
        *(undefined1 *)puVar19 = *(undefined1 *)puVar9;
        puVar9 = (undefined8 *)((long)puVar9 + 1);
        puVar19 = puVar20;
      } while (puVar20 < puVar8);
    }
    goto LAB__text__005de610;
  }
  puVar20[1] = *puVar10;
  if (0x10 < uVar23 + 4) {
    puVar16 = puVar20 + 2;
    puVar9 = (undefined8 *)((long)puVar20 + uVar23 + 4);
    if (puVar9 <= puVar20 + 3) {
      puVar9 = puVar20 + 3;
    }
    uVar7 = (long)puVar9 + (-0x11 - (long)puVar20);
    if ((0x37 < uVar7) && (0x3f < (ulong)((long)puVar20 + (8 - (long)puVar10)))) {
      puVar20 = puVar20 + 4;
      uVar7 = (uVar7 >> 3) + 1;
      uVar18 = uVar7 & 0x3ffffffffffffff8;
      puVar16 = puVar16 + uVar18;
      puVar9 = puVar10 + 5;
      uVar23 = uVar18;
      do {
        uVar24 = puVar9[-4];
        uVar26 = puVar9[-1];
        uVar25 = puVar9[-2];
        uVar23 = uVar23 - 8;
        uVar28 = puVar9[1];
        uVar27 = *puVar9;
        uVar30 = puVar9[3];
        uVar29 = puVar9[2];
        puVar20[-1] = puVar9[-3];
        puVar20[-2] = uVar24;
        puVar20[1] = uVar26;
        *puVar20 = uVar25;
        puVar20[3] = uVar28;
        puVar20[2] = uVar27;
        puVar20[5] = uVar30;
        puVar20[4] = uVar29;
        puVar20 = puVar20 + 8;
        puVar9 = puVar9 + 8;
      } while (uVar23 != 0);
      puVar10 = puVar10 + uVar18;
      if (uVar7 == uVar18) goto LAB__text__005de610;
    }
    do {
      puVar20 = puVar16 + 1;
      *puVar16 = puVar10[1];
      puVar16 = puVar20;
      puVar10 = puVar10 + 1;
    } while (puVar20 < puVar8);
  }
  goto LAB__text__005de610;
}


