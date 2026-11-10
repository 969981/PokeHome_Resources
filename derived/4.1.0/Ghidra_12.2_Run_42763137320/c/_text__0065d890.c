/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065d890; name: FUN_.text__0065d890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0065d890(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  size_t sVar15;
  long lVar16;
  long *plVar17;
  byte bVar18;
  ushort uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  char *pcVar28;
  undefined8 *puVar29;
  char *pcVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  long local_90;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar22 = *param_1;
  lVar23 = param_1[0x1a];
  local_68 = 0;
  pcVar30 = *(char **)(lVar22 + 0x1580);
  pcVar28 = *(char **)(lVar22 + 0x1588);
  iVar7 = *(int *)(lVar22 + 0xa38);
  *param_2 = 1;
  local_78 = 0;
  local_70 = 0;
  if ((int)param_1[0x46] < 0x14) {
    if (((int)param_1[0xcd] != 2) &&
       (((int)param_1[0xcd] == 3 || (*(long *)(*param_1 + 0xa40) == 5)))) {
      *(undefined4 *)(param_1 + 0x46) = 0x14;
      uVar5 = FUN__text__00661ff0(param_1,0,0);
      goto LAB__text__0065d92c;
    }
  }
  else {
    uVar5 = FUN__text__00661e0c(param_1);
LAB__text__0065d92c:
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
  }
  plVar25 = *(long **)(lVar22 + 0x1e8);
  if ((*(ushort *)(lVar22 + 0x15a4) >> 1 & 1) == 0) {
    FUN__text__006783e4(*(undefined8 *)(lVar22 + 0x1148));
    lVar8 = FUN__text__00678404(param_1[0x1a]);
    *(long *)(lVar22 + 0x1148) = lVar8;
    if (lVar8 == 0) {
      return 0x1b;
    }
    *(int *)(lVar22 + 0x1150) = (int)param_1[0x33];
  }
  if (((*(byte *)(param_1[0x84] + 0x80) & 7) != 0) && ((*(byte *)(lVar22 + 0xf43) & 2) != 0)) {
    iVar7 = 5;
  }
  lVar8 = *(long *)(lVar22 + 0xcb0);
  if (lVar8 == 0) {
    if ((*(byte *)(lVar22 + 0xf43) & 1) == 0) {
      if (iVar7 - 2U < 6) {
        lVar8 = (long)*(int *)((long)(int)(iVar7 - 2U) * 4 + 0x760284) + 0x760284;
      }
      else {
        lVar8 = 0x71f88d;
      }
    }
    else {
      lVar8 = 0x71628e;
    }
  }
  lVar9 = FUN__text__0066c764(param_1,0x71bc0a);
  if (lVar9 != 0) {
    FUN__text__006783e4(param_1[0x8c]);
    param_1[0x8c] = 0;
  }
  if ((pcVar28 == (char *)0x0) || (*pcVar28 == '\0')) {
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar10 = (char *)FUN__text__00659a28(0x70c9ae,pcVar30,pcVar28);
    if (pcVar10 == (char *)0x0) {
      return 0x1b;
    }
  }
  pcVar12 = pcVar30;
  if (pcVar10 != (char *)0x0) {
    pcVar12 = pcVar10;
  }
  uVar5 = FUN__text__0065f778(param_1,lVar8,pcVar12,0);
  FUN__text__006783e4(pcVar10);
  if (uVar5 != 0) {
    return (ulong)uVar5;
  }
  if (((((*(byte *)(lVar22 + 0x1260) & 3) == 2) || ((*(byte *)(lVar22 + 0x1280) & 3) == 2)) &&
      (iVar7 != 1)) && (iVar7 != 6)) {
    uVar5 = *(uint *)((long)param_1 + 0x3fc) | 0x8000;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0x3fc) & 0xffff7fff;
  }
  *(uint *)((long)param_1 + 0x3fc) = uVar5;
  FUN__text__006783e4(param_1[0x90]);
  param_1[0x90] = 0;
  if ((*(long *)(lVar22 + 0xf50) == 0) ||
     (lVar9 = FUN__text__0066c764(param_1,0x716293), lVar9 != 0)) {
    param_1[0x90] = 0;
  }
  else {
    lVar9 = FUN__text__00659a28(0x71bc2d,*(undefined8 *)(lVar22 + 0xf50));
    param_1[0x90] = lVar9;
    if (lVar9 == 0) {
      return 0x1b;
    }
  }
  if ((*(long *)(lVar22 + 0xca0) == 0) ||
     (lVar9 = FUN__text__0066c764(param_1,0x71c5f2), lVar9 != 0)) {
    local_90 = 0;
  }
  else {
    local_90 = *(long *)(lVar22 + 0xca0);
  }
  lVar9 = FUN__text__0066c764(param_1,0x70e92c);
  if ((lVar9 == 0) && (*(long *)(lVar22 + 0xcc8) != 0)) {
    FUN__text__006783e4(param_1[0x8d]);
    param_1[0x8d] = 0;
    lVar9 = FUN__text__00659a28(0x71df6b,*(undefined8 *)(lVar22 + 0xcc8));
    param_1[0x8d] = lVar9;
    if (lVar9 == 0) {
      return 0x1b;
    }
  }
  else {
    FUN__text__006783e4(param_1[0x8d]);
    param_1[0x8d] = 0;
  }
  lVar9 = FUN__text__0066c764(param_1,0x71df81);
  if ((lVar9 == 0) && ((*(byte *)(lVar22 + 0xf42) >> 3 & 1) != 0)) {
    lVar9 = FUN__text__0066c764(param_1,0x715501);
    FUN__text__006783e4(param_1[0x94]);
    pcVar10 = (char *)0x70f683;
    param_1[0x94] = 0;
    if (lVar9 == 0) {
      uVar26 = 0x70f683;
      pcVar12 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)FUN__text__0065f2d8(lVar9);
      if (pcVar10 == (char *)0x0) {
        return 0x1b;
      }
      uVar26 = 0x70f683;
      if (*pcVar10 != '\0') {
        uVar26 = 0x70e553;
      }
      pcVar12 = pcVar10;
    }
    lVar9 = FUN__text__00659a28(0x70e93c,pcVar10,uVar26);
    param_1[0x94] = lVar9;
    FUN__text__006783e4(pcVar12);
    if (param_1[0x94] == 0) {
      return 0x1b;
    }
  }
  if (iVar7 == 3) {
    plVar17 = plVar25 + 5;
    FUN__text__00656d18(plVar17);
    uVar5 = FUN__text__00663f58(lVar22,plVar17,*(undefined8 *)(lVar22 + 0x818),
                                *(undefined8 *)(lVar22 + 0x1528));
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
LAB__text__0065dc6c:
    *plVar25 = (long)plVar17;
    lVar9 = FUN__text__0066c764(param_1,0x7180e8);
    *(uint *)(*plVar25 + 0x80) = *(uint *)(*plVar25 + 0x80) | 2;
    if (lVar9 == 0) {
      lVar9 = *plVar25;
      pcVar10 = (char *)0x712b9d;
      if (*(int *)(lVar9 + 0x18) != 4) {
        pcVar10 = (char *)0x0;
      }
    }
    else {
      pcVar10 = (char *)(lVar9 + 0xc);
      do {
        pcVar10 = pcVar10 + 1;
      } while (*pcVar10 == ' ');
      lVar9 = *plVar25;
    }
    FUN__text__00657470(lVar9,*(undefined8 *)(lVar22 + 0x808),0);
    uVar5 = FUN__text__006582c0(*plVar25,pcVar10,0,1);
    FUN__text__00657470(*plVar25,0,0);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    uVar5 = FUN__text__00657f9c(*plVar25);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    lVar9 = FUN__text__00658044(*plVar25);
    plVar25[1] = lVar9;
  }
  else {
    if (iVar7 == 4) {
      plVar17 = (long *)(lVar22 + 0x820);
      goto LAB__text__0065dc6c;
    }
    *plVar25 = 0;
  }
  lVar9 = FUN__text__0066c764(param_1,0x71629b);
  if (lVar9 == 0) {
    if (((*(byte *)(param_1[0x84] + 0x80) & 3) == 0) ||
       (((1 < iVar7 - 3U || (-1 < plVar25[1])) &&
        (((*(byte *)(lVar22 + 0xf43) >> 1 & 1) == 0 || (*(long *)(lVar22 + 0x1518) != -1)))))) {
      uVar19 = *(ushort *)(lVar22 + 0x660) & 0xffbf;
LAB__text__0065ddb8:
      *(ushort *)(lVar22 + 0x660) = uVar19;
    }
    else {
      if (-1 < *(char *)((long)param_1 + 0x3fd)) {
        if (((*(int *)(lVar22 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) ||
           (((lVar9 = *(long *)(lVar22 + 0xa40), (int)param_1[0x46] < 0xb && (lVar9 == 1)) ||
            ((lVar9 != 0 && (lVar9 < 2)))))) {
          FUN__text__0066713c(lVar22,0x711fe5);
          return 0x19;
        }
        uVar19 = *(ushort *)(lVar22 + 0x660) | 0x40;
        goto LAB__text__0065ddb8;
      }
      uVar19 = *(ushort *)(lVar22 + 0x660);
    }
    uVar26 = 0x70f683;
    if ((uVar19 & 0x40) != 0) {
      uVar26 = 0x7149ea;
    }
  }
  else {
    uVar11 = FUN__text__00660220(lVar9,0x70e8f1,0x7108fc);
    uVar19 = 0x40;
    if ((uVar11 & 1) == 0) {
      uVar19 = 0;
    }
    uVar26 = 0x70f683;
    *(ushort *)(lVar22 + 0x660) = *(ushort *)(lVar22 + 0x660) & 0xffbf | uVar19;
  }
  FUN__text__006783e4(param_1[0x91]);
  param_1[0x91] = 0;
  pcVar10 = (char *)FUN__text__0066c764(param_1,0x710887);
  if ((pcVar10 == (char *)0x0) ||
     (((*(ushort *)(lVar22 + 0x15a4) >> 1 & 1) != 0 &&
      (iVar6 = FUN__text__0066c234(*(undefined8 *)(lVar22 + 0x1148),param_1[0x1a]), iVar6 == 0)))) {
    if ((((*(uint *)(param_1[0x85] + 0x80) >> 1 & 1) == 0) || ((int)param_1[0x33] != 0x1bb)) &&
       (((*(uint *)(param_1[0x85] + 0x80) & 1) == 0 || ((int)param_1[0x33] != 0x50)))) {
      bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) != 0;
      uVar27 = 0x70f683;
      if (bVar4) {
        uVar27 = 0x711fca;
      }
      uVar33 = 0x70f683;
      if (bVar4) {
        uVar33 = 0x71813d;
      }
      lVar9 = FUN__text__00659a28(0x71c5f9,uVar27,lVar23,uVar33);
    }
    else {
      bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x200) != 0;
      uVar27 = 0x70f683;
      if (bVar4) {
        uVar27 = 0x711fca;
      }
      uVar33 = 0x70f683;
      if (bVar4) {
        uVar33 = 0x71813d;
      }
      lVar9 = FUN__text__00659a28(0x71550c,uVar27,lVar23,uVar33);
    }
LAB__text__0065df3c:
    param_1[0x91] = lVar9;
    if (lVar9 == 0) {
      return 0x1b;
    }
  }
  else {
    pcVar12 = (char *)FUN__text__0065f2d8(pcVar10);
    if (pcVar12 == (char *)0x0) {
      return 0x1b;
    }
    if (*pcVar12 == '[') {
      sVar15 = strlen(pcVar12);
      memmove(pcVar12,pcVar12 + 1,sVar15 - 1);
      iVar6 = 0x5d;
LAB__text__0065defc:
      pcVar13 = strchr(pcVar12,iVar6);
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      FUN__text__006783e4(param_1[0x92]);
      param_1[0x92] = (long)pcVar12;
    }
    else {
      if (*pcVar12 != '\0') {
        iVar6 = 0x3a;
        goto LAB__text__0065defc;
      }
      FUN__text__006783e4(pcVar12);
    }
    iVar6 = strcmp((char *)0x716288,pcVar10);
    if (iVar6 != 0) {
      lVar9 = FUN__text__00659a28(0x7112c2,pcVar10 + 5);
      goto LAB__text__0065df3c;
    }
    param_1[0x91] = 0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    local_80 = 0;
    lVar9 = FUN__text__0066e478(*(undefined8 *)(lVar22 + 0x1548));
    if (lVar9 == 0) {
      return 0x1b;
    }
    if (((((param_1[0x1b] != param_1[0x1a]) &&
          (iVar6 = FUN__text__0066e9e4(lVar9,5,param_1[0x1a],0), iVar6 != 0)) ||
         (iVar6 = FUN__text__0066e9e4(lVar9,9,0,0), iVar6 != 0)) ||
        ((iVar6 = FUN__text__0066c234(0x712c2a,*(undefined8 *)(lVar22 + 0x1550)), iVar6 != 0 &&
         ((iVar6 = FUN__text__0066e9e4(lVar9,2,0,0), iVar6 != 0 ||
          (iVar6 = FUN__text__0066e9e4(lVar9,3,0,0), iVar6 != 0)))))) ||
       (iVar6 = FUN__text__0066e580(lVar9,0,&local_80,0), iVar6 != 0)) {
      FUN__text__0066e3e4(lVar9);
      return 0x1b;
    }
    bVar18 = *(byte *)(lVar22 + 0xf68);
    if ((bVar18 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(lVar22 + 0xf48));
      bVar18 = *(byte *)(lVar22 + 0xf68);
    }
    *(byte *)(lVar22 + 0xf68) = bVar18 | 1;
    *(undefined8 *)(lVar22 + 0xf48) = local_80;
    FUN__text__0066e3e4(lVar9);
    iVar6 = FUN__text__0066c234(0x70de83,*(undefined8 *)(lVar22 + 0x1550));
    if (iVar6 == 0) goto LAB__text__0065dfbc;
    if ((*(byte *)(lVar22 + 0xf45) >> 1 & 1) != 0) {
      pcVar10 = strstr(pcVar30,(char *)0x71988b);
      if (pcVar10 == (char *)0x0) {
LAB__text__0065e2dc:
        if (**(char **)(lVar22 + 0x1580) == '\0') {
          sVar15 = strlen(pcVar30);
          puVar29 = &local_70;
          if (pcVar30[sVar15 - 1] != '/') {
            puVar29 = (undefined8 *)((ulong)puVar29 | 1);
            local_70 = CONCAT71(local_70._1_7_,0x2f);
          }
        }
        else {
          puVar29 = &local_70;
        }
        uVar20 = 0x69;
        if ((*(ulong *)(lVar22 + 0xf40) & 0x800) != 0) {
          uVar20 = 0x61;
        }
        FUN__text__006599c0(puVar29,8,0x7211c2,uVar20);
      }
      else if ((pcVar10[6] != '\0') && (pcVar10[7] == '\0')) {
        uVar5 = FUN__text__0066c21c();
        uVar5 = (uVar5 & 0xff) - 0x41;
        if ((8 < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x109U) == 0)) goto LAB__text__0065e2dc;
      }
    }
    bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x200080) == 0x80;
  }
  else {
LAB__text__0065dfbc:
    bVar4 = false;
  }
  lVar14 = FUN__text__0066c764(param_1,0x71f891);
  lVar9 = 0x718151;
  if (lVar14 != 0) {
    lVar9 = 0;
  }
  plVar25[4] = lVar9;
  if (((iVar7 == 5) || (iVar7 == 2)) && (*(long *)(lVar22 + 0x14f8) != 0)) {
    if (*(long *)(lVar22 + 0x14f8) < 0) {
      *(undefined8 *)(lVar22 + 0x14f8) = 0;
    }
    else if ((*(ushort *)(lVar22 + 0x15a4) >> 1 & 1) == 0) {
      if (param_1[0xa0] == 0) {
LAB__text__0065e058:
        lVar14 = *(long *)(lVar22 + 0x14f8);
        lVar9 = 0;
        do {
          uVar11 = *(ulong *)(lVar22 + 0xc10);
          if (lVar14 - lVar9 <= (long)uVar11) {
            uVar11 = FUN__text__0067827c();
          }
          lVar14 = (**(code **)(lVar22 + 0x1528))
                             (*(undefined8 *)(lVar22 + 0x1130),1,uVar11,
                              *(undefined8 *)(lVar22 + 0x1530));
          lVar9 = lVar14 + lVar9;
          if (uVar11 <= lVar14 - 1U) {
            FUN__text__0066713c(lVar22,0x7112cc,lVar9);
            return 0x1a;
          }
          lVar14 = *(long *)(lVar22 + 0x14f8);
        } while (lVar9 < lVar14);
      }
      else {
        FUN__text__0065cab0(lVar22,1);
        iVar6 = (*(code *)param_1[0xa0])(param_1[0xa1],*(undefined8 *)(lVar22 + 0x14f8),0);
        FUN__text__0065cab0(lVar22,0);
        if (iVar6 != 0) {
          if (iVar6 != 2) {
            FUN__text__0066713c(lVar22,0x70b246);
            return 0x1a;
          }
          goto LAB__text__0065e058;
        }
      }
      lVar9 = *(long *)(lVar22 + 0x1518);
      if ((0 < lVar9) &&
         (lVar14 = lVar9 - *(long *)(lVar22 + 0x14f8), *(long *)(lVar22 + 0x1518) = lVar14,
         lVar14 == 0 || lVar9 < *(long *)(lVar22 + 0x14f8))) {
        FUN__text__0066713c(lVar22,0x717609);
        return 0x12;
      }
    }
  }
  if (((*(ushort *)(lVar22 + 0x15a4) >> 9 & 1) != 0) && (iVar7 - 1U < 6)) {
                    /* WARNING: Could not emulate address calculation at 0x0065e160 */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*(code *)(&UNK__text__0065e16c + (ulong)*(byte *)((ulong)(iVar7 - 1U) + 0x76027d) * 4)
             )();
    return uVar11;
  }
  if (param_1[0xaa] == 0) {
    if ((*(int *)(lVar22 + 0x14e0) == 10) || ((int)param_1[0x46] == 10)) {
      uVar27 = 0x70d501;
    }
    else {
      lVar9 = *(long *)(lVar22 + 0xa40);
      uVar27 = 0x70d501;
      if (((10 < (int)param_1[0x46]) || (lVar9 != 1)) &&
         (uVar27 = 0x7112a1, lVar9 != 0 && lVar9 < 2)) {
        uVar27 = 0x70d501;
      }
    }
  }
  else {
    uVar27 = 0x70e97e;
  }
  local_78 = FUN__text__00678414(1,0x18);
  if (local_78 == 0) {
    return 0x1b;
  }
  uVar5 = FUN__text__00660068(&local_78,0x70fcef,lVar8);
  if (uVar5 != 0) {
    return (ulong)uVar5;
  }
  pcVar10 = *(char **)(lVar22 + 0xe50);
  if (pcVar10 != (char *)0x0) {
    pcVar30 = pcVar10;
  }
  if (pcVar10 != (char *)0x0) {
    pcVar28 = (char *)0x0;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    pcVar30 = *(char **)(lVar22 + 0xf48);
    sVar15 = strlen(pcVar30);
    uVar5 = FUN__text__00660138(&local_78,pcVar30,sVar15);
LAB__text__0065e43c:
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
  }
  else {
    if (bVar4) {
      uVar5 = FUN__text__00660068(&local_78,0x712010,param_1[0x42],param_1[0x43],pcVar30 + 6);
      goto LAB__text__0065e43c;
    }
    sVar15 = strlen(pcVar30);
    uVar5 = FUN__text__00660138(&local_78,pcVar30,sVar15);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    if (pcVar28 != (char *)0x0) {
      uVar5 = FUN__text__00660068(&local_78,0x7162ad,pcVar28);
      goto LAB__text__0065e43c;
    }
  }
  lVar9 = 0x70f683;
  lVar8 = 0x70f683;
  if (param_1[0x91] != 0) {
    lVar8 = param_1[0x91];
  }
  lVar14 = 0x70f683;
  if (param_1[0x8b] != 0) {
    lVar14 = param_1[0x8b];
  }
  lVar1 = 0x70f683;
  if (param_1[0x8e] != 0) {
    lVar1 = param_1[0x8e];
  }
  if ((*(ushort *)(lVar22 + 0x15a4) >> 9 & 1) != 0) {
    lVar9 = 0x70f683;
    if (param_1[0x8f] != 0) {
      lVar9 = param_1[0x8f];
    }
  }
  lVar31 = 0x70f683;
  if (*(char **)(lVar22 + 0xdb0) == (char *)0x0) {
    lVar21 = 0x70f683;
  }
  else {
    lVar21 = 0x70f683;
    if (**(char **)(lVar22 + 0xdb0) != '\0') {
      lVar21 = 0x70f683;
      if (param_1[0x8c] != 0) {
        lVar21 = param_1[0x8c];
      }
    }
  }
  lVar2 = 0x70f683;
  if (plVar25[4] != 0) {
    lVar2 = plVar25[4];
  }
  lVar3 = 0x70f683;
  if (param_1[0x94] != 0) {
    lVar3 = param_1[0x94];
  }
  if ((*(char **)(lVar22 + 0xcc8) != (char *)0x0) && (**(char **)(lVar22 + 0xcc8) != '\0')) {
    lVar31 = 0x70f683;
    if (param_1[0x8d] != 0) {
      lVar31 = param_1[0x8d];
    }
  }
  lVar32 = 0x70f683;
  if (*(long *)(lVar22 + 0xf50) != 0) {
    lVar32 = 0x70f683;
    if (param_1[0x90] != 0) {
      lVar32 = param_1[0x90];
    }
  }
  uVar33 = 0x70f683;
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) {
    lVar16 = FUN__text__0065f248(param_1,0x716277);
    uVar33 = 0x712bb1;
    if (lVar16 != 0) {
      uVar33 = 0x70f683;
    }
  }
  uVar5 = FUN__text__00660068(&local_78,0x710930,&local_70,uVar27,lVar8,lVar14,lVar1,lVar9,lVar21,
                              lVar2,lVar3,lVar31,lVar32,uVar33,uVar26);
  FUN__text__006783e4(param_1[0x8e]);
  param_1[0x8e] = 0;
  FUN__text__006783e4(param_1[0x8b]);
  param_1[0x8b] = 0;
  if (uVar5 != 0) {
    return (ulong)uVar5;
  }
  if ((((*(byte *)(param_1[0x84] + 0x84) & 1) == 0) && ((int)param_1[0x46] != 0x14)) &&
     (*(long *)(lVar22 + 0xa40) == 3)) {
    uVar5 = FUN__text__00661b7c(local_78,param_1);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
  }
  if (*(long *)(lVar22 + 0xf70) != 0 || local_90 != 0) {
    if (*(long *)(lVar22 + 0xf70) == 0) {
LAB__text__0065e74c:
      uVar11 = 0;
      iVar6 = 0;
    }
    else {
      FUN__text__00667a44(lVar22,2,2);
      if (param_1[0x92] != 0) {
        lVar23 = param_1[0x92];
      }
      plVar17 = (long *)FUN__text__00652c5c(*(undefined8 *)(lVar22 + 0xf70),lVar23,
                                            *(undefined8 *)(lVar22 + 0x1580),
                                            *(uint *)(param_1[0x84] + 0x80) >> 1 & 1);
      FUN__text__00667a8c(lVar22,2);
      if (plVar17 == (long *)0x0) goto LAB__text__0065e74c;
      iVar6 = 0;
      plVar24 = plVar17;
      do {
        lVar23 = plVar24[2];
        if (lVar23 != 0) {
          if (iVar6 == 0) {
            uVar5 = FUN__text__00660068(&local_78,0x70de95);
            if (uVar5 != 0) {
              uVar11 = (ulong)uVar5;
              iVar6 = 0;
              goto LAB__text__0065e7cc;
            }
            lVar23 = plVar24[2];
            uVar26 = 0x70f683;
          }
          else {
            uVar26 = 0x71551b;
          }
          uVar5 = FUN__text__00660068(&local_78,0x70e95b,uVar26,plVar24[1],lVar23);
          if (uVar5 != 0) {
            uVar11 = (ulong)uVar5;
            goto LAB__text__0065e7cc;
          }
          iVar6 = iVar6 + 1;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      uVar11 = 0;
LAB__text__0065e7cc:
      FUN__text__006530b8(plVar17);
    }
    if ((local_90 != 0) && ((int)uVar11 == 0)) {
      if (iVar6 == 0) {
        uVar5 = FUN__text__00660068(&local_78,0x70de95);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
        uVar26 = 0x70f683;
      }
      else {
        uVar26 = 0x71551b;
      }
      uVar11 = FUN__text__00660068(&local_78,0x70d014,uVar26,local_90);
      uVar11 = uVar11 & 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    if ((iVar6 != 0) && ((int)uVar11 == 0)) {
      uVar11 = FUN__text__00660138(&local_78,0x7149a6,2);
      uVar11 = uVar11 & 0xffffffff;
    }
    if ((int)uVar11 != 0) {
      return uVar11;
    }
  }
  lVar23 = local_78;
  uVar5 = FUN__text__0066071c(lVar22,local_78);
  if (uVar5 != 0) {
    return (ulong)uVar5;
  }
  uVar5 = FUN__text__00660400(param_1,0,lVar23);
  if (uVar5 != 0) {
    return (ulong)uVar5;
  }
  plVar25[2] = 0;
  FUN__text__006663b8(lVar22,0xffffffffffffffff);
  if (iVar7 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      uVar5 = FUN__text__00660068(&local_78,0x710953);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      uVar5 = FUN__text__0065fd9c(&local_78,param_1,lVar22 + 0x1618,0,0);
      if (uVar5 == 0) {
        iVar7 = -1;
        goto LAB__text__0065ec28;
      }
    }
    else {
      uVar11 = plVar25[1];
      *(ulong *)(lVar22 + 0x1518) = uVar11;
      if (((uVar11 != 0xffffffffffffffff) && ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0)) &&
         ((*(char *)((long)param_1 + 0x3fd) < '\0' ||
          (lVar23 = FUN__text__0066c764(param_1,0x71dfab), lVar23 == 0)))) {
        uVar5 = FUN__text__00660068(&local_78,0x719892,uVar11);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
      }
      for (puVar29 = *(undefined8 **)(*plVar25 + 0x50); puVar29 != (undefined8 *)0x0;
          puVar29 = (undefined8 *)puVar29[1]) {
        uVar5 = FUN__text__00660068(&local_78,0x71d304,*puVar29);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
      }
      lVar23 = FUN__text__0066c764(param_1,0x70f200);
      if (lVar23 == 0) {
        if (uVar11 < 0x401) {
          uVar19 = *(ushort *)(lVar22 + 0x15a4) & 0xfeff;
          goto LAB__text__0065ed9c;
        }
        uVar5 = FUN__text__00660844(lVar22,param_1,local_78);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
      }
      else {
        uVar34 = FUN__text__00660220(lVar23,0x71bc3b,0x70e963);
        uVar19 = 0x100;
        if ((uVar34 & 1) == 0) {
          uVar19 = 0;
        }
        uVar19 = *(ushort *)(lVar22 + 0x15a4) & 0xfeff | uVar19;
LAB__text__0065ed9c:
        *(ushort *)(lVar22 + 0x15a4) = uVar19;
      }
      uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      FUN__text__006663b8(lVar22,uVar11);
      *(undefined8 *)(lVar22 + 0x1528) = _DAT_008a65c8;
      *(long *)(lVar22 + 0x1530) = *plVar25;
      *(undefined4 *)(plVar25 + 0x41) = 2;
      uVar5 = FUN__text__0065fd9c(&local_78,param_1,lVar22 + 0x1618,0,0);
      uVar34 = uVar11;
      if (uVar5 == 0) goto LAB__text__0065ee4c;
    }
    uVar11 = (ulong)uVar5;
    uVar26 = 0x713fdb;
LAB__text__0065ee14:
    FUN__text__0066713c(lVar22,uVar26);
    return uVar11;
  }
  if (iVar7 == 2) {
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      uVar11 = 0;
      if ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0) goto LAB__text__0065ead8;
    }
    else {
      uVar11 = *(ulong *)(lVar22 + 0x1518);
      if (((uVar11 != 0xffffffffffffffff) && ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0)) &&
         (lVar23 = FUN__text__0066c764(param_1,0x71dfab), lVar23 == 0)) {
LAB__text__0065ead8:
        uVar5 = FUN__text__00660068(&local_78,0x719892,uVar11);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
      }
    }
    lVar23 = FUN__text__0066c764(param_1,0x7180e8);
    if (lVar23 == 0) {
      uVar5 = FUN__text__00660068(&local_78,0x71d309);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
    }
    lVar23 = FUN__text__0066c764(param_1,0x70f200);
    if (lVar23 == 0) {
      if (uVar11 < 0x401) {
        uVar19 = *(ushort *)(lVar22 + 0x15a4) & 0xfeff;
        goto LAB__text__0065ec48;
      }
      uVar5 = FUN__text__00660844(lVar22,param_1,local_78);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
    }
    else {
      uVar34 = FUN__text__00660220(lVar23,0x71bc3b,0x70e963);
      uVar19 = 0x100;
      if ((uVar34 & 1) == 0) {
        uVar19 = 0;
      }
      uVar19 = *(ushort *)(lVar22 + 0x15a4) & 0xfeff | uVar19;
LAB__text__0065ec48:
      *(ushort *)(lVar22 + 0x15a4) = uVar19;
    }
    if (*(long *)(lVar22 + 0x6e8) == 0) {
      uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      if (((*(ushort *)(lVar22 + 0x660) >> 6 & 1) != 0) && (*(char *)((long)param_1 + 0x3fd) < '\0')
         ) {
        uVar26 = 0x71762a;
        uVar27 = 5;
        goto LAB__text__0065ecf4;
      }
      if (*(long *)(lVar22 + 0x1518) != 0) {
        uVar34 = uVar11;
        if (uVar11 == 0) {
          uVar34 = 0xffffffffffffffff;
        }
        FUN__text__006663b8(lVar22,uVar34);
        if (-1 < *(char *)((long)param_1 + 0x3fd)) {
          uVar34 = 0;
          plVar25[1] = uVar11;
          plVar25[2] = (long)(plVar25 + 2);
          goto LAB__text__0065ed04;
        }
      }
LAB__text__0065ed00:
      uVar34 = 0;
    }
    else {
      if ((((int)param_1[0x46] == 0x14) || (0xffff < (long)uVar11)) ||
         ((*(ushort *)(lVar22 + 0x15a4) >> 8 & 1) != 0)) {
        plVar25[1] = uVar11;
        plVar25[2] = *(long *)(lVar22 + 0x6e8);
        *(undefined4 *)(plVar25 + 0x41) = 2;
        *(long **)(lVar22 + 0x1530) = param_1;
        *(code **)(lVar22 + 0x1528) = FUN__text__0065ff98;
        FUN__text__006663b8(lVar22,plVar25[1]);
        uVar26 = 0x7149a6;
        uVar27 = 2;
LAB__text__0065ecf4:
        uVar5 = FUN__text__00660138(&local_78,uVar26,uVar27);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
        goto LAB__text__0065ed00;
      }
      uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      if ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0) {
        uVar5 = FUN__text__00660138(&local_78,*(undefined8 *)(lVar22 + 0x6e8),uVar11);
        uVar34 = uVar11;
      }
      else {
        if (uVar11 == 0) {
          uVar34 = 5;
        }
        else {
          uVar5 = FUN__text__00660068(&local_78,0x71c60b,uVar11 & 0xffffffff);
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          uVar5 = FUN__text__00660138(&local_78,*(undefined8 *)(lVar22 + 0x6e8),uVar11);
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
          if (uVar5 != 0) {
            return (ulong)uVar5;
          }
          uVar34 = uVar11 + 7;
        }
        uVar5 = FUN__text__00660138(&local_78,0x71762a,5);
      }
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      FUN__text__006663b8(lVar22,uVar11);
    }
LAB__text__0065ed04:
    uVar5 = FUN__text__0065fd9c(&local_78,param_1,lVar22 + 0x1618,uVar34,0);
    if (uVar5 != 0) {
      uVar11 = (ulong)uVar5;
      uVar26 = 0x7162b1;
      goto LAB__text__0065ee14;
    }
    uVar34 = plVar25[2];
LAB__text__0065ee4c:
    iVar7 = -(uint)(uVar34 == 0);
  }
  else {
    if (iVar7 != 5) {
      uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      uVar5 = FUN__text__0065fd9c(&local_78,param_1,lVar22 + 0x1618,0,0);
      if (uVar5 != 0) {
        uVar11 = (ulong)uVar5;
        uVar26 = 0x716ddf;
        goto LAB__text__0065ee14;
      }
      iVar7 = -(uint)(plVar25[2] == 0);
LAB__text__0065ec28:
      FUN__text__0066e154(lVar22,0,0xffffffffffffffff,1,iVar7);
      uVar11 = 0;
      goto LAB__text__0065ee64;
    }
    if (*(char *)((long)param_1 + 0x3fd) < '\0') {
      uVar11 = 0;
      if ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0) {
LAB__text__0065ea88:
        uVar5 = FUN__text__00660068(&local_78,0x719892,uVar11);
        if (uVar5 != 0) {
          return (ulong)uVar5;
        }
        goto LAB__text__0065eaa4;
      }
LAB__text__0065eb4c:
      iVar7 = -1;
    }
    else {
      uVar11 = *(ulong *)(lVar22 + 0x1518);
      if (uVar11 != 0xffffffffffffffff) {
        if (((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0) &&
           (lVar23 = FUN__text__0066c764(param_1,0x71dfab), lVar23 == 0)) goto LAB__text__0065ea88;
LAB__text__0065eaa4:
        if (uVar11 == 0) goto LAB__text__0065eb4c;
        lVar23 = local_78;
      }
      uVar5 = FUN__text__00660844(lVar22,param_1,lVar23);
      if (uVar5 != 0) {
        return (ulong)uVar5;
      }
      iVar7 = 0;
    }
    uVar5 = FUN__text__00660138(&local_78,0x7149a6,2);
    if (uVar5 != 0) {
      return (ulong)uVar5;
    }
    FUN__text__006663b8(lVar22,uVar11);
    uVar5 = FUN__text__0065fd9c(&local_78,param_1,lVar22 + 0x1618,0,0);
    if (uVar5 != 0) {
      uVar11 = (ulong)uVar5;
      uVar26 = 0x720679;
      goto LAB__text__0065ee14;
    }
  }
  FUN__text__0066e154(lVar22,0,0xffffffffffffffff,1,iVar7);
LAB__text__0065ee64:
  if (*(long *)(lVar22 + 0x108) == 0) {
    uVar34 = 0;
  }
  else {
    FUN__text__0066667c(lVar22);
    iVar7 = FUN__text__00665e14(param_1);
    uVar5 = 0;
    if (iVar7 != 0) {
      uVar5 = 0x2a;
    }
    uVar34 = (ulong)uVar5;
    if ((long)uVar11 <= *(long *)(lVar22 + 0x108)) {
      FUN__text__00666f74(lVar22,0x7112f5,*(long *)(lVar22 + 0x108),uVar11);
      *(undefined4 *)(lVar22 + 0x198) = 0;
      *(ushort *)(lVar22 + 0x660) = *(ushort *)(lVar22 + 0x660) | 4;
      *(uint *)(lVar22 + 0x1c0) = *(uint *)(lVar22 + 0x1c0) & 0xfffffffd;
      thunk_FUN__text__0065ca34(lVar22,0);
    }
  }
  if ((int)param_1[0x46] != 0x14) {
    return uVar34;
  }
  if ((*(ushort *)(lVar22 + 0x660) >> 6 & 1) == 0) {
    return uVar34;
  }
  *(ushort *)(lVar22 + 0x660) = *(ushort *)(lVar22 + 0x660) & 0xffbf;
  return uVar34;
}


