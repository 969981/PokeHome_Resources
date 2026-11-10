/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006504b0; name: FUN_.text__006504b0
 */


undefined8 FUN__text__006504b0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  char *__s;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_4c0 [128];
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined6 uStack_418;
  undefined2 local_412;
  undefined6 uStack_410;
  undefined4 local_408;
  int local_404;
  int local_400;
  undefined4 local_3f8;
  undefined1 auStack_3f4 [256];
  undefined1 auStack_2f4 [128];
  undefined4 local_274;
  undefined1 auStack_270 [256];
  long *local_170;
  undefined4 local_168;
  undefined1 auStack_164 [260];
  
  memset(&local_404,0,0x110);
  lVar13 = *param_1;
  local_408 = 0;
  uStack_410 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_412 = 0;
  local_438 = 0;
  local_430 = 0;
  uStack_428 = 0;
  memset(auStack_4c0,0,0x80);
  *param_3 = 0xffffffff;
  iVar4 = FUN__text__00650c0c(param_1,param_2,&local_404,&local_408);
  if (iVar4 != 0) {
    return 0;
  }
  local_440 = 0;
  uVar8 = FUN__text__0064fda0(auStack_3f4,&local_438,&local_440);
  if ((uVar8 & 1) == 0) {
    piVar9 = __errno_location();
    iVar4 = *piVar9;
    uVar17 = FUN__text__0066c474(iVar4,auStack_4c0,0x80);
    FUN__text__0066713c(lVar13,0x713fa6,iVar4,uVar17);
    FUN__text__0065031c(param_1,local_408);
    return 0;
  }
  FUN__text__00666f74(lVar13,0x711f95,&local_438);
  uVar2 = local_408;
  if ((local_404 == 2) && (local_400 == 1)) {
    FUN__text__00650de8(param_1,local_408);
    if ((*(ulong *)(lVar13 + 0xf40) >> 0x2c & 1) != 0) {
      local_168 = (uint)(*(ulong *)(lVar13 + 0xf40) >> 0x2c) & 1;
      iVar4 = nnsocketSetSockOpt(uVar2,0xffff,8,&local_168,4);
      if (iVar4 < 0) {
        FUN__text__00666f74(lVar13,0x7197fd,uVar2);
      }
    }
  }
  else {
    FUN__text__00650de8(param_1,local_408);
  }
  if (*(long *)(lVar13 + 0x748) == 0) {
LAB__text__0065068c:
    bVar1 = false;
  }
  else {
    bVar1 = true;
    FUN__text__0065cab0(lVar13,1);
    iVar4 = (**(code **)(lVar13 + 0x748))(*(undefined8 *)(lVar13 + 0x750),uVar2,0);
    FUN__text__0065cab0(lVar13,0);
    if (iVar4 == 0) goto LAB__text__0065068c;
    if (iVar4 != 2) {
      FUN__text__0065031c(param_1,uVar2);
      return 0x2a;
    }
  }
  if (local_404 == 2) {
    uVar5 = FUN__text__00656938(auStack_3f4);
    lVar12 = *param_1;
    local_170 = (long *)0x0;
    uVar15 = (uint)*(ushort *)(lVar12 + 0x700);
    iVar4 = *(int *)(lVar12 + 0x704);
    __s = *(char **)(lVar12 + 0xcc0);
    uVar16 = (uint)*(ushort *)(lVar12 + 0x700);
    if ((__s != (char *)0x0) || (uVar16 != 0)) {
      memset(&local_168,0,0x100);
      if ((__s != (char *)0x0) && (sVar10 = strlen(__s), sVar10 < 0xff)) {
        memset(auStack_270,0,0x100);
        iVar6 = strncmp((char *)0x719822,__s,3);
        if (iVar6 != 0) {
          iVar7 = strncmp((char *)0x70b1ee,__s,5);
          if (iVar7 != 0) goto LAB__text__00650988;
          __s = __s + 5;
          goto LAB__text__00650a08;
        }
        __s = __s + 3;
LAB__text__00650988:
        iVar7 = FUN__text__00656940(2,uVar5,(int)param_1[0x17],__s,auStack_270,0x100);
        if (iVar7 == 2) {
          FUN__text__00666f74(lVar12,0x71c4fa,__s,auStack_270,2);
LAB__text__00650a94:
          iVar6 = FUN__text__006569e8(2,auStack_270,auStack_164);
          if (iVar6 < 1) {
            uVar17 = 0;
          }
          else {
            local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
            uVar3 = nnsocketInetHtons(uVar15);
            local_168 = CONCAT22(uVar3,(undefined2)local_168);
            uVar17 = 0x10;
          }
          goto LAB__text__00650754;
        }
        if (iVar7 == 1) goto LAB__text__006509cc;
        if (iVar7 == 0) {
          if (iVar6 != 0) {
LAB__text__00650a08:
            lVar14 = param_1[0x86];
            param_1[0x86] = 1;
            iVar6 = FUN__text__00654998(param_1,__s,0,&local_170);
            if (iVar6 == 1) {
              FUN__text__0064f420(param_1,&local_170);
            }
            param_1[0x86] = lVar14;
            if (local_170 != (long *)0x0) {
              FUN__text__006544e8(*local_170,auStack_270,0x100);
              FUN__text__00666f74(lVar12,0x712b42,__s,2,auStack_270,*(undefined4 *)(*local_170 + 4))
              ;
              FUN__text__00654bac(lVar12,local_170);
              goto LAB__text__00650a94;
            }
            goto LAB__text__00650acc;
          }
          uVar17 = 0x721182;
        }
        else {
          if (iVar6 != 0) goto LAB__text__00650a08;
LAB__text__00650acc:
          uVar17 = 0x7107d4;
          *(ushort *)(lVar12 + 0x15a4) = *(ushort *)(lVar12 + 0x15a4) & 0xfff7;
        }
        FUN__text__0066713c(lVar12,uVar17,__s);
LAB__text__00650970:
        FUN__text__0065031c(param_1,uVar2);
        return 0x2d;
      }
      local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
      uVar3 = nnsocketInetHtons(uVar15);
      uVar17 = 0x10;
      local_168 = CONCAT22(uVar3,(undefined2)local_168);
LAB__text__00650754:
      iVar6 = nnsocketBind(uVar2,&local_168,uVar17);
      if (iVar6 < 0) {
        iVar4 = iVar4 + 1;
        uVar16 = uVar15;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 < 2) {
            memset(auStack_270,0,0x80);
            uVar8 = nnsocketGetLastErrno();
            *(int *)(lVar12 + 0x11c0) = (int)uVar8;
            uVar17 = FUN__text__0066c474(uVar8,auStack_270,0x80);
            uVar11 = 0x70bc2f;
            goto LAB__text__00650964;
          }
          uVar15 = uVar16 & 0xffff;
          uVar16 = uVar16 + 1;
          FUN__text__00666f74(lVar12,0x7107ea,uVar15);
          if (local_168._1_1_ == '\x02') {
            uVar3 = nnsocketInetNtohs(uVar16);
            local_168 = CONCAT22(uVar3,(undefined2)local_168);
          }
          iVar6 = nnsocketBind(uVar2,&local_168,uVar17);
        } while (iVar6 < 0);
      }
      local_274 = 0x100;
      memset(auStack_270,0,0x100);
      iVar4 = nnsocketGetSockName(uVar2,auStack_270,&local_274);
      if (iVar4 < 0) {
        memset(auStack_2f4,0,0x80);
        uVar8 = nnsocketGetLastErrno();
        *(int *)(lVar12 + 0x11c0) = (int)uVar8;
        uVar17 = FUN__text__0066c474(uVar8,auStack_2f4,0x80);
        uVar11 = 0x70b1c7;
LAB__text__00650964:
        FUN__text__0066713c(lVar12,uVar11,uVar8 & 0xffffffff,uVar17);
        goto LAB__text__00650970;
      }
      FUN__text__00666f74(lVar12,0x71a3c2,uVar16 & 0xffff);
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x1000000;
    }
  }
  FUN__text__0066526c(uVar2,1);
  auVar18 = FUN__text__0066c6a8();
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar18;
  if (1 < (int)param_1[0x82]) {
    FUN__text__0065a050(lVar13,param_1[0x83],3);
  }
  if ((((bVar1) || (*(int *)((long)param_1 + 0xbc) != 1)) ||
      (((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) == 0 &&
       (iVar4 = nnsocketConnect(uVar2,auStack_3f4,local_3f8), iVar4 != -1)))) ||
     ((iVar4 = nnsocketGetLastErrno(), iVar4 == 0xb || (iVar4 == 0x73)))) {
    *param_3 = uVar2;
    return 0;
  }
  uVar17 = FUN__text__0066c474(iVar4,auStack_4c0,0x80);
  FUN__text__00666f74(lVar13,0x718d35,&local_438,uVar17);
  *(int *)(lVar13 + 0x11c0) = iVar4;
LAB__text__006509cc:
  FUN__text__0065031c(param_1,uVar2);
  return 7;
}


