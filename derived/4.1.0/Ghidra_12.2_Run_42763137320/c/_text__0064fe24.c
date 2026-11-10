/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064fe24; name: FUN_.text__0064fe24
 */


int FUN__text__0064fe24(long *param_1,int param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_130 [128];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  undefined1 local_80 [16];
  int local_6c [3];
  
  lVar12 = *param_1;
  *param_3 = 0;
  local_6c[0] = 0;
  if (*(char *)((long)param_1 + (long)param_2 + 0x3fa) == '\0') {
    local_80 = FUN__text__0066c6a8();
    uVar5 = FUN__text__0064fa18(lVar12,local_80,1);
    if ((int)uVar5 < 0) {
      FUN__text__0066713c(lVar12,0x70dddb);
      iVar8 = 0x1c;
    }
    else {
      lVar13 = 0;
      iVar8 = 0;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        iVar7 = *(int *)((long)param_1 + lVar13 * 4 + 0x260);
        if (iVar7 != -1) {
          uVar2 = (uint)lVar13 ^ 1;
          puVar1 = (undefined4 *)((long)param_1 + lVar13 * 4 + 0x260);
          uVar6 = FUN__text__00666b6c(0xffffffff,0xffffffff,iVar7,0);
          if (uVar6 == 2) {
LAB__text__0064ffa0:
            uVar9 = FUN__text__006502b8(*puVar1,local_6c);
            if ((uVar9 & 1) != 0) {
              *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600) = *puVar1;
              *puVar1 = 0xffffffff;
              param_1[0xe] = param_1[lVar13 + 0xf];
              if (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) != -1) {
                FUN__text__0065031c(param_1);
                *(undefined4 *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) = 0xffffffff;
              }
              iVar8 = FUN__text__00670824(param_1,param_2);
              if (iVar8 != 0) {
                return iVar8;
              }
              *(undefined1 *)((long)param_1 + (long)param_2 + 0x3fa) = 1;
              *param_3 = 1;
              if (param_2 == 0) {
                FUN__text__006663e0(lVar12,4);
              }
              FUN__text__0064fb7c(param_1,*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600));
              FUN__text__0067091c(param_1);
              return 0;
            }
            FUN__text__00666f74(lVar12,0x713f93);
          }
          else if (uVar6 == 0) {
            local_6c[0] = 0;
            iVar7 = FUN__text__0066c6d8(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81]);
            if (param_1[0x83] <= (long)iVar7) {
              FUN__text__00666f74(lVar12,0x71490f);
              local_6c[0] = 0x6e;
            }
            if ((bVar3) && (param_1[0x10] == 0)) {
              iVar7 = FUN__text__0066c6d8(local_80._0_8_,local_80._8_8_,param_1[0x80],param_1[0x81])
              ;
              if (*(long *)(lVar12 + 0x7c0) <= (long)iVar7) {
                FUN__text__006501d8(param_1,param_2,1);
              }
            }
          }
          else {
            if ((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) != 0) goto LAB__text__0064ffa0;
            if ((uVar6 >> 2 & 1) != 0) {
              FUN__text__006502b8(*puVar1,local_6c);
            }
          }
          if (local_6c[0] != 0) {
            *(int *)(lVar12 + 0x11c0) = local_6c[0];
            nnsocketSetLastErrno();
            lVar14 = param_1[lVar13 + 0xf];
            if (lVar14 != 0) {
              uStack_88 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_8a = 0;
              local_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              memset(auStack_130,0,0x80);
              FUN__text__006544e8(lVar14,&local_b0,0x2e);
              lVar14 = param_1[0x32];
              uVar10 = FUN__text__0066c474(local_6c[0],auStack_130,0x80);
              FUN__text__00666f74(lVar12,0x71debd,&local_b0,lVar14,uVar10);
              param_1[0x83] = (ulong)(uVar5 >> (*(long *)(param_1[lVar13 + 0xf] + 0x28) != 0));
              iVar7 = FUN__text__006501d8(param_1,param_2,lVar13);
              if ((iVar7 != 7) || (*(int *)((long)param_1 + (ulong)uVar2 * 4 + 0x260) == -1)) {
                iVar8 = iVar7;
              }
            }
          }
        }
        lVar13 = 1;
        bVar4 = false;
      } while (bVar3);
      if (iVar8 != 0) {
        memset(auStack_130,0,0x80);
        if (param_1[0x10] == 0) {
          iVar8 = FUN__text__006501d8(param_1,param_2,1);
          if (iVar8 == 0) {
            return 0;
          }
        }
        uVar5 = *(uint *)((long)param_1 + 0x3fc);
        if ((uVar5 >> 6 & 1) == 0) {
          if ((uVar5 >> 5 & 1) == 0) {
            if ((uVar5 >> 2 & 1) == 0) {
              plVar11 = param_1 + 0x1a;
            }
            else {
              plVar11 = param_1 + 0x20;
            }
          }
          else {
            plVar11 = param_1 + 0x2c;
          }
        }
        else {
          plVar11 = param_1 + 0x24;
        }
        lVar14 = *plVar11;
        lVar13 = param_1[0x32];
        uVar10 = FUN__text__0066c474(local_6c[0],auStack_130,0x80);
        FUN__text__0066713c(lVar12,0x720606,lVar14,lVar13,uVar10);
      }
    }
  }
  else {
    iVar8 = 0;
    *param_3 = 1;
  }
  return iVar8;
}


