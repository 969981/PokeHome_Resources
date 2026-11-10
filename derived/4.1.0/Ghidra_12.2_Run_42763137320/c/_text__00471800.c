/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471800; name: FUN_.text__00471800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00471800(long *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  char local_98 [4];
  undefined4 local_94 [5];
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  short local_58;
  undefined4 local_38;
  int local_34;
  
  lVar11 = *(long *)(param_3 + 2);
  iVar4 = FUN__text__00495c50(param_1,&local_80);
  if (iVar4 == 3) {
    if ((lVar11 == 0) || (iVar4 = (**(code **)(param_1[2] + 0x10))(), iVar4 == 9)) {
      iVar4 = 2;
    }
    else {
      uVar7 = (**(code **)(*param_1 + 600))(param_1,lVar11);
      iVar4 = 1;
      if ((uVar7 & 1) != 0) {
        iVar4 = 2;
      }
    }
  }
  FUN__text__00471290(local_94,param_1,*(undefined8 *)(param_3 + 4),&local_38);
  local_34 = 0x21;
  iVar5 = FUN__text__00472170(local_94[0]);
  if (iVar5 != 2) {
    sVar2 = *(short *)((long)param_2 + 0x1a);
    if (sVar2 == 8) {
      lVar11 = *(long *)(param_3 + 8);
      if (lVar11 != 0) {
        param_2 = (uint *)FUN__text__004c5ba8(param_2);
        if (param_2 == (uint *)0x0) {
          iVar6 = 0x34;
          bVar3 = false;
          plVar8 = (long *)0x0;
          goto LAB__text__00471ba0;
        }
        iVar6 = *(int *)(lVar11 + 4);
        if (iVar6 != 0) {
          plVar8 = (long *)(lVar11 + 0x18);
          do {
            if (param_2[1] == *(uint *)(plVar8 + -2)) {
              iVar10 = *(int *)((long)plVar8 + 0xc);
              if (iVar10 == 0) {
                lVar11 = plVar8[-1];
                if (lVar11 == 0) {
                  if ((*(uint *)(plVar8 + 1) == 0) || (*plVar8 == 0)) goto LAB__text__004718f0;
                  FUN__text__004c59c8(param_2,*(int *)((long)plVar8 + -0xc) << 0x10 | 1,*plVar8,
                                      (ulong)*param_2 | 0xffffffff00000000,
                                      (ulong)*(uint *)(plVar8 + 1) | 0x18c00000000);
                  goto LAB__text__004719d0;
                }
                iVar6 = *(int *)((long)plVar8 + -0xc);
                iVar10 = -1;
                uVar1 = *param_2;
                uVar9 = 1;
              }
              else {
                iVar6 = *(int *)((long)plVar8 + -0xc);
                uVar1 = *param_2;
                uVar9 = 0;
                lVar11 = plVar8[-1];
              }
              FUN__text__004c5848(param_2,uVar1,iVar6 << 0x10 | 1,lVar11,iVar10,uVar9,1);
              goto LAB__text__004719d0;
            }
LAB__text__004718f0:
            iVar6 = iVar6 + -1;
            plVar8 = plVar8 + 4;
          } while (iVar6 != 0);
        }
        FUN__text__004c57f0(param_2);
        FUN__text__00400fc0(0,param_2);
      }
      iVar6 = 2;
      bVar3 = false;
      plVar8 = (long *)0x0;
LAB__text__00471ba0:
      if (plVar8 != (long *)0x0) {
        if (!bVar3) {
LAB__text__00471ba8:
          *(uint *)((long)plVar8 + 0x313) = *(uint *)((long)plVar8 + 0x313) | 0x100000;
        }
        goto LAB__text__00471bb8;
      }
      if (bVar3) {
        local_80 = *(undefined8 *)(param_3 + 4);
        local_60 = 0x100000000;
        local_58 = 0x100;
        local_70 = 0;
        plStack_68 = (long *)0x0;
        plStack_78 = (long *)0x0;
        (**(code **)(*param_1 + 0x120))(param_1,&local_80);
      }
    }
    else {
LAB__text__004719d0:
      local_98[0] = '\0';
      plVar8 = (long *)(**(code **)(**(long **)(param_3 + 2) + 0x28))
                                 (*(long **)(param_3 + 2),param_1,param_2,param_3,local_94);
      if (plVar8 == (long *)0x0) {
        if (sVar2 == 8) {
          FUN__text__004c57f0(param_2);
          FUN__text__00400fc0(0,param_2);
        }
        bVar3 = false;
        plVar8 = (long *)0x0;
        iVar6 = 2;
        goto LAB__text__00471ba0;
      }
      if (*param_3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x22) + 0x10);
      }
      iVar6 = FUN__text__00477cb0(local_38,plVar8 + 3,uVar9,iVar4 != 1,&local_34,param_3 + 0x2c,
                                  local_98);
      if (iVar6 != 1) {
        bVar3 = false;
joined_r0x00471b04:
        if ((plVar8 == (long *)0x0) || (param_3[0xd] == 0)) goto LAB__text__00471ba0;
        FUN__text__0048de00(*_DAT_008a45d8,param_3[0xd],plVar8,plVar8[4],&local_80);
        if (bVar3) goto LAB__text__00471bb8;
        goto LAB__text__00471ba8;
      }
      local_80 = *(undefined8 *)(param_3 + 4);
      local_60 = CONCAT44(1,local_94[0]);
      local_70 = 0;
      local_58 = (ushort)((*(uint *)((long)plVar8 + 0x313) & 0x2000000) == 0 &&
                         (iVar4 == 0 || local_98[0] == '\0')) << 8;
      plStack_78 = plVar8 + 0x6d;
      if ((*(ushort *)(plVar8 + 0x44) & 0x40) != 0) {
        plStack_78 = (long *)0x0;
      }
      plStack_68 = plVar8;
      iVar6 = (**(code **)(*param_1 + 0x118))(param_1,&local_80,1,0);
      if ((iVar6 == 2) ||
         (((iVar5 == 0x50 || (iVar6 == 0x50)) &&
          (*(ushort *)(plVar8 + 0x44) = *(ushort *)(plVar8 + 0x44) | 0x100, iVar4 == 1)))) {
        iVar6 = 3;
        local_34 = 0x20;
joined_r0x00471af4:
        bVar3 = true;
        goto joined_r0x00471b04;
      }
      iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8);
      if (iVar6 != 1) goto joined_r0x00471af4;
      plVar12 = plVar8 + 3;
      if ((*(ushort *)(plVar8 + 0x44) & 1) == 0) {
        (**(code **)(*plVar12 + 0x70))(plVar12,param_3 + 0x2c);
      }
      else {
        (**(code **)(*plVar12 + 0x78))(plVar12);
        if ((*(ushort *)(plVar8 + 0x44) >> 4 & 1) != 0) {
          (**(code **)(*plVar12 + 0x80))(plVar12);
        }
      }
      FUN__text__00475c10(plVar8,param_3 + 0x68,1);
      lVar11 = *(long *)(param_3 + 0x22);
      if (lVar11 != 0) {
        if (plVar8[0x12] != 0) {
          FUN__text__00458c10(plVar8[0x12],1,lVar11 + 0x28);
          lVar11 = *(long *)(param_3 + 0x22);
        }
        *(long **)(lVar11 + 0x10) = plVar8 + 0x2d;
      }
      uVar9 = *(undefined8 *)(param_3 + 6);
      iVar4 = param_3[0x20];
      FUN__text__004743b0(plVar8);
      iVar6 = FUN__text__00474788(plVar8,uVar9,iVar4 == 1,0);
      if (iVar6 == 1) {
        plVar8[0x48] = 0;
        DAT_00aea718 = DAT_00aea718 + 1;
        plVar12 = &DAT_00aea728;
        if (DAT_00aea728 != 0) {
          plVar12 = DAT_00aea720 + 0x48;
        }
        DAT_00aea720 = plVar8;
        *plVar12 = (long)plVar8;
      }
      if (*(long *)(param_3 + 0x22) != 0) {
        uVar9 = FUN__text__00475a30(plVar8);
        *(undefined8 *)(*(long *)(param_3 + 0x22) + 8) = uVar9;
        uVar9 = FUN__text__00475a28(plVar8);
        **(undefined8 **)(param_3 + 0x22) = uVar9;
      }
      if (iVar6 == 1) {
        return 1;
      }
LAB__text__00471bb8:
      (**(code **)(*plVar8 + 0x20))(plVar8,1);
      (**(code **)(*plVar8 + 8))(plVar8);
      FUN__text__00400fc0(0,plVar8);
    }
    if (iVar6 != 3) {
      local_34 = 0x1e;
      if ((*(byte *)(param_3 + 0xc4) & 2) == 0) {
        local_34 = 0x1f;
      }
      goto LAB__text__00471c48;
    }
  }
  if ((*(byte *)(param_3 + 0xc4) >> 1 & 1) == 0) {
    if (local_34 == 0x20) {
      local_34 = 0x23;
    }
    else if (local_34 == 0x21) {
      local_34 = 0x24;
    }
    else if (local_34 == 0x22) {
      local_34 = 0x25;
    }
  }
  iVar6 = 3;
LAB__text__00471c48:
  FUN__text__004c7008(param_1,local_34,*(undefined8 *)(*(long *)(param_3 + 4) + 0x58),param_3 + 8,
                      param_3 + 0xe);
  return iVar6;
}


