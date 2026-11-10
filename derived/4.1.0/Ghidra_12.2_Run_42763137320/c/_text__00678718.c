/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678718; name: FUN_.text__00678718
 */


int FUN__text__00678718(long *param_1,int param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  long local_78;
  int local_6c;
  undefined8 local_68;
  
  if (param_3 == (undefined1 *)0x0) {
    return 4;
  }
  plVar1 = param_1 + (long)param_2 * 3 + 0x52;
  if ((int)*plVar1 == 2) {
    *param_3 = 1;
    return 0;
  }
  lVar17 = (long)param_2;
  puVar2 = (undefined4 *)((long)param_1 + (long)param_2 * 0x18 + 0x294);
  if (*(int *)((long)param_1 + (long)param_2 * 0x18 + 0x294) == 0) {
    local_78 = 0;
    lVar12 = param_1[(long)param_2 * 3 + 0x53];
    if (lVar12 == 0) goto LAB__text__00678960;
    lVar13 = *param_1;
    lVar14 = *(long *)(lVar13 + 0xa98);
    if (lVar14 == 0) {
      *(undefined1 *)(lVar12 + 0x108) = 0;
      *(long *)(lVar12 + 0x100) = lVar12 + 0x80;
      uVar8 = nnsslContextGetContextId(lVar12 + 0x80,&local_78);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) != 0) goto LAB__text__00678a30;
      plVar3 = (long *)(lVar12 + 0x100);
      if (local_78 != 0) {
        uVar8 = nnsslContextDestroy(*plVar3);
        uVar9 = nnResultIsFailure(uVar8);
        if ((uVar9 & 1) != 0) goto LAB__text__00678a30;
      }
      if ((*(code **)(lVar13 + 0xae0) == (code *)0x0) && (*(long *)(lVar13 + 0xa98) == 0)) {
        iVar6 = 0x5e;
        goto LAB__text__00678b08;
      }
      iVar6 = (**(code **)(lVar13 + 0xae0))(lVar13,*plVar3,*(undefined8 *)(lVar13 + 0xae8));
      if (iVar6 == 0) {
        lVar14 = *plVar3;
        goto LAB__text__0067883c;
      }
LAB__text__00678afc:
      iVar6 = 0x2a;
      goto LAB__text__00678b08;
    }
    *(long *)(lVar12 + 0x100) = lVar14;
    *(undefined1 *)(lVar12 + 0x108) = 1;
LAB__text__0067883c:
    puVar16 = (undefined8 *)(lVar12 + 0x100);
    uVar8 = nnsslContextGetContextId(lVar14,&local_78);
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) {
LAB__text__00678a30:
      iVar6 = 0x60;
      goto LAB__text__00678b08;
    }
    if (local_78 == 0) {
      iVar6 = 0x5f;
      goto LAB__text__00678b08;
    }
    uVar8 = nnsslConnectionCreate(lVar12,*(undefined8 *)(lVar12 + 0x100));
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) {
LAB__text__00678958:
      iVar6 = 0x23;
      goto LAB__text__00678b08;
    }
    nnsocketFcntl(*(undefined4 *)((long)param_1 + lVar17 * 4 + 600),4,0);
    uVar8 = nnsslConnectionSetOption(lVar12,0,1);
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    uVar8 = nnsslConnectionSetSocketDescriptor
                      (lVar12,*(undefined4 *)((long)param_1 + lVar17 * 4 + 600));
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    pcVar15 = (char *)param_1[0x1b];
    sVar11 = strlen(pcVar15);
    uVar8 = nnsslConnectionSetHostName(lVar12,pcVar15,sVar11);
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    uVar8 = nnsslConnectionSetOption(lVar12,2,*(undefined1 *)(*param_1 + 0xac0));
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    bVar4 = *(byte *)(*param_1 + 0xac1);
    bVar5 = bVar4 & 3;
    if (*(char *)(*param_1 + 0xa90) != '\0') {
      bVar5 = bVar4 & 3 | 4;
    }
    uVar8 = nnsslConnectionSetVerifyOption(lVar12,bVar5);
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    uVar8 = nnsslConnectionSetSessionCacheMode(lVar12,*(byte *)(*param_1 + 0xac1) >> 3 & 1);
    uVar9 = nnResultIsFailure(uVar8);
    if ((uVar9 & 1) != 0) goto LAB__text__00678958;
    pcVar15 = *(char **)(lVar13 + 0xc80);
    if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
      uVar8 = FUN__text__00679084(*puVar16,pcVar15,*(undefined8 *)(lVar13 + 0xcf8));
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) == 0) goto LAB__text__00678c60;
LAB__text__00678cb0:
      uVar9 = FUN__text__00678f88(uVar8);
      iVar7 = 0x4d;
LAB__text__00678cc0:
      iVar6 = 0x1b;
      if ((uVar9 & 1) == 0) {
        iVar6 = iVar7;
      }
      goto LAB__text__00678b08;
    }
LAB__text__00678c60:
    if ((*(char **)(lVar13 + 0xdc8) != (char *)0x0) && (**(char **)(lVar13 + 0xdc8) != '\0')) {
      uVar8 = FUN__text__00679224(*puVar16);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) != 0) goto LAB__text__00678cb0;
    }
    if ((*(char **)(lVar13 + 0xd50) != (char *)0x0) && (**(char **)(lVar13 + 0xd50) != '\0')) {
      uVar8 = FUN__text__006792b4(*puVar16);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) != 0) goto LAB__text__00678cb0;
    }
    if ((*(char **)(lVar13 + 0xdb8) != (char *)0x0) && (**(char **)(lVar13 + 0xdb8) != '\0')) {
      uVar8 = FUN__text__00679490(*puVar16);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) != 0) {
        uVar9 = FUN__text__00678f88(uVar8);
        iVar7 = 0x52;
        goto LAB__text__00678cc0;
      }
    }
    if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
      memset(&local_f8,0,0x80);
      uVar8 = nnsslConnectionSetOption(lVar12,3,1);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(lVar13 + 0xa40) < 3) {
          uVar9 = 0;
        }
        else {
          local_f8 = CONCAT53(local_f8._3_5_,0x326802);
          uVar9 = 3;
        }
        *(undefined1 *)(uVar9 | (ulong)&local_f8) = 8;
        *(undefined8 *)((undefined1 *)(uVar9 | (ulong)&local_f8) + 1) = 0x312e312f70747468;
        uVar8 = nnsslConnectionSetNextAlpnProto(lVar12,&local_f8,(int)uVar9 + 9);
        uVar9 = nnResultIsFailure(uVar8);
        if ((uVar9 & 1) == 0) goto LAB__text__00678da8;
      }
      goto LAB__text__00678958;
    }
LAB__text__00678da8:
    lVar14 = *param_1;
    if ((*(code **)(lVar14 + 0xaa8) != (code *)0x0) &&
       (iVar6 = (**(code **)(lVar14 + 0xaa8))(lVar14,lVar12,*(undefined8 *)(lVar14 + 0xab8)),
       iVar6 != 0)) goto LAB__text__00678afc;
    if (param_1[(long)param_2 * 3 + 0x53] != 0) {
      uVar8 = nnsslConnectionSetIoMode(param_1[(long)param_2 * 3 + 0x53],2);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) != 0) {
        iVar6 = 0x23;
        goto LAB__text__00678df0;
      }
      *puVar2 = 1;
      goto LAB__text__0067878c;
    }
  }
  else {
LAB__text__0067878c:
    lVar12 = param_1[(long)param_2 * 3 + 0x53];
    local_78 = CONCAT44(local_78._4_4_,4);
    if (lVar12 != 0) {
      lVar14 = *param_1;
      iVar6 = FUN__text__0064fa18(lVar14,0,1);
      if (iVar6 < 0) {
        iVar6 = 0x1c;
      }
      else {
        *(undefined8 *)(lVar14 + 0xaa0) = 0;
        *(undefined8 *)(lVar14 + 0xac8) = 0;
        local_68 = 0;
        uVar9 = nnsslConnectionDoHandshakeWithCertBuffer(lVar12,(long)&local_68 + 4,&local_68);
        uVar9 = uVar9 & 0xffffffff;
        bVar5 = nnResultIsFailure(uVar9);
        if ((bVar5 & 1) == 0) {
          if ((*(byte *)((long)param_1 + 0x3ff) >> 5 & 1) != 0) {
            local_c8 = 0;
            local_6c = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            local_f0 = 0;
            uVar8 = nnsslConnectionGetNextAlpnProto(lVar12,&local_78,&local_f8,&local_6c,0x32);
            uVar9 = nnResultIsSuccess(uVar8);
            if (((uVar9 & 1) != 0) && (((uint)local_78 | 2) == 3)) {
              if ((*(long *)(lVar14 + 0xa40) < 3) || (local_6c != 2)) {
                if ((local_6c == 8) && (local_f8 == 0x312e312f70747468)) {
                  uVar8 = 2;
                  goto LAB__text__00678ab8;
                }
              }
              else if ((short)local_f8 == 0x3268) {
                uVar8 = 3;
LAB__text__00678ab8:
                *(undefined4 *)(param_1 + 0xcd) = uVar8;
              }
            }
          }
          iVar6 = 0;
        }
        else {
          uVar10 = FUN__text__006786ac(uVar9,0x1987b);
          if ((uVar10 & 1) != 0) {
            iVar6 = 0x51;
            goto LAB__text__00678b08;
          }
          *(ulong *)(lVar14 + 0xaa0) = uVar9;
          uVar9 = FUN__text__006786ac(uVar9,0x19e7b);
          iVar6 = 0x3c;
          if ((uVar9 & 1) == 0) {
            iVar6 = 0x23;
          }
        }
        if (*(code **)(lVar14 + 0xab0) != (code *)0x0) {
          local_e8 = local_68 & 0xffffffff;
          local_f0 = local_68 >> 0x20;
          local_f8 = (ulong)((bVar5 ^ 0xff) & 1);
          iVar7 = (**(code **)(lVar14 + 0xab0))
                            (*param_1,lVar12,*(undefined8 *)(*param_1 + 0xab8),&local_f8);
          if (iVar7 != 0) goto LAB__text__00678afc;
        }
        if (iVar6 == 0) {
          *param_3 = 1;
          param_1[lVar17 + 0x4e] = (long)&LAB__text__00678e48;
          param_1[lVar17 + 0x50] = (long)FUN__text__00678ee8;
          *puVar2 = 0;
          *(int *)plVar1 = 2;
          return 0;
        }
      }
      goto LAB__text__00678b08;
    }
LAB__text__00678960:
    iVar6 = 0x62;
LAB__text__00678b08:
    if (iVar6 == 0x51) {
      return 0;
    }
    if (iVar6 != 0x3c) goto LAB__text__00678df0;
    if (param_1[(long)param_2 * 3 + 0x53] != 0) {
      local_f8 = local_f8 & 0xffffffff00000000;
      uVar8 = nnsslConnectionGetVerifyCertError(param_1[(long)param_2 * 3 + 0x53],&local_f8);
      uVar9 = nnResultIsFailure(uVar8);
      if ((uVar9 & 1) == 0) {
        *(ulong *)(*param_1 + 0xac8) = local_f8 & 0xffffffff;
        uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0x25a7b);
        if (((((uVar9 & 1) == 0) &&
             (uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0x2607b), (uVar9 & 1) == 0)) &&
            (uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0x25e7b), (uVar9 & 1) == 0)) &&
           ((uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0x2867b), (uVar9 & 1) != 0 ||
            ((uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0x2687b), (uVar9 & 1) == 0 &&
             (((uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0xbca7b), (uVar9 & 1) != 0 ||
               (uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0xbd07b), (uVar9 & 1) != 0)) ||
              (uVar9 = FUN__text__006786ac(local_f8 & 0xffffffff,0xbce7b), (uVar9 & 1) != 0))))))))
        {
          iVar6 = 0x3a;
          goto LAB__text__00678df0;
        }
      }
      iVar6 = 0x3c;
      goto LAB__text__00678df0;
    }
  }
  iVar6 = 0x62;
LAB__text__00678df0:
  lVar17 = param_1[(long)param_2 * 3 + 0x53];
  if ((lVar17 != 0) && (FUN__text__00678fd0(plVar1), *(char *)(lVar17 + 0x108) == '\0')) {
    FUN__text__00679028(plVar1);
  }
  return iVar6;
}


