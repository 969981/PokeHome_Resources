/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0b50; name: FUN_.text__004d0b50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004d0b50(long *param_1,long param_2,long *param_3,byte param_4,undefined4 param_5,
                       long param_6,uint param_7)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  int local_8c;
  uint local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined4 local_7c;
  char local_78;
  undefined4 local_77;
  undefined2 local_73;
  long *local_70;
  undefined2 local_68;
  
  if ((char)param_1[5] != '\0') {
    return 2;
  }
  if (*(char *)((long)param_1 + 0x24) != '\0') {
    lVar11 = 0;
    if (*(char *)((long)param_1 + 0x27) != '\0') {
      lVar11 = param_2;
    }
    *param_3 = lVar11;
    return 1;
  }
  *param_3 = param_2;
  *(byte *)((long)param_1 + 0x25) = param_4 & 1;
  local_70 = (long *)0x0;
  FUN__text__0045ced0(param_6 + 0x68,param_5,&local_70);
  if (local_70 == (long *)0x0) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)local_70[6];
  *(undefined2 *)((long)param_1 + 0x2c) = local_68;
  if (local_70[7] == 0) {
    iVar8 = 1;
    goto LAB__text__004d0e8c;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)uVar2;
  uVar15 = *(uint *)((long)param_1 + 0xc);
  lVar11 = *param_1;
  if (uVar15 <= uVar2) {
    iVar8 = uVar15 + (uVar15 >> 1);
    if (uVar15 == 0) {
      iVar8 = 1;
    }
    uVar15 = iVar8 + uVar15;
    if (lVar11 == 0) {
      lVar11 = FUN__text__00400f80(0,(ulong)uVar15 << 3);
      if (lVar11 != 0) {
        lVar12 = *param_1;
        if ((lVar12 != 0) && (lVar12 != lVar11)) {
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                lVar12 = uVar13 * 8;
                uVar13 = uVar13 + 2;
                *(undefined8 *)(lVar11 + lVar12) = *(undefined8 *)(*param_1 + lVar12);
                ((undefined8 *)(lVar11 + lVar12))[1] = *(undefined8 *)(*param_1 + lVar12 + 8);
              } while ((uVar3 & 0xfffffffe) != uVar13);
            }
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(lVar11 + uVar13 * 8) = *(undefined8 *)(*param_1 + uVar13 * 8);
            }
            lVar12 = *param_1;
          }
          FUN__text__00400fc0(0,lVar12);
        }
        goto LAB__text__004d0d18;
      }
    }
    else {
      lVar11 = FUN__text__00400fa0();
      if (lVar11 != 0) {
LAB__text__004d0d18:
        *param_1 = lVar11;
        *(uint *)((long)param_1 + 0xc) = uVar15;
        if (uVar2 < uVar15) {
          puVar16 = (undefined8 *)(lVar11 + (ulong)*(uint *)(param_1 + 1) * 8);
          *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
          goto LAB__text__004d0d3c;
        }
      }
    }
LAB__text__004d0e68:
    iVar8 = 0x34;
    goto LAB__text__004d0e8c;
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (lVar11 == 0) goto LAB__text__004d0e68;
  puVar16 = (undefined8 *)(lVar11 + uVar3 * 8);
LAB__text__004d0d3c:
  *puVar16 = 0;
  local_80[0] = 0;
  local_7c = 0;
  local_78 = '\x01';
  local_77 = 0;
  local_73 = 1;
  plVar10 = (long *)FUN__text__00400f80(5,0xa0);
  if (plVar10 == (long *)0x0) {
LAB__text__004d0e74:
    iVar8 = 2;
  }
  else {
    plVar10[2] = 0;
    *(undefined4 *)(plVar10 + 3) = 0;
    *(undefined4 *)(plVar10 + 4) = 0;
    *(undefined1 *)(plVar10 + 5) = 0xff;
    *(undefined1 *)(plVar10 + 6) = 0xff;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    lVar11 = _DAT_008a4f08 + 0x10;
    lVar12 = _DAT_008a4f08 + 0x58;
    plVar14 = plVar10 + 0x11;
    *plVar14 = 0;
    *plVar10 = lVar11;
    plVar10[1] = lVar12;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    *puVar16 = plVar10;
    lVar11 = FUN__text__0042b69c(plVar10,local_70,*(long *)(param_6 + 8) + 8,
                                 *(long *)(param_6 + 8) + 0x78,1);
    if (lVar11 == 0) goto LAB__text__004d0e74;
    lVar11 = FUN__text__00400f80(5,0x30);
    if (lVar11 == 0) {
      plVar10[0x13] = 0;
      goto LAB__text__004d0e74;
    }
    FUN__text__004d94d4(lVar11,param_6,param_5,param_6 + 0x68);
    plVar10[0x13] = lVar11;
    iVar8 = FUN__text__00425bc0((int)param_1[4],plVar10 + 0x12,local_80);
    if (iVar8 != 1) goto LAB__text__004d0e74;
    iVar9 = FUN__text__00425f3c((int)local_70[6],3,local_80);
    iVar8 = 2;
    if (((iVar9 == 0) && (local_77._3_1_ == '\0')) &&
       (((char)local_73 != '\0' || ((param_4 & 1) == 0)))) {
      if ((local_78 == '\0') && ((param_7 & 1) == 0)) {
        iVar8 = 4;
      }
      else {
        uVar2 = *(uint *)(param_2 + 8);
        iVar9 = *_DAT_008a4b68;
        uVar7 = (uVar2 & 0xff) << 8;
        uVar15 = uVar2;
        if (local_77._2_1_ != '\0') {
          *(undefined2 *)((long)param_1 + 0x24) = 0x101;
          *(undefined1 *)((long)param_1 + 0x26) = local_73._1_1_;
          uVar15 = 0x300;
          if ((param_4 & 1) == 0) {
            uVar15 = uVar2;
          }
        }
        *(char *)((long)param_1 + 0x27) = local_78;
        local_84[2] = 5;
        local_84._0_2_ = (ushort)uVar7 | 0x20;
        local_8c = iVar9;
        local_88 = uVar15;
        iVar8 = (**(code **)(*(long *)plVar10[0x12] + 0x38))
                          ((long *)plVar10[0x12],_DAT_008a47f0,plVar10[0x13],plVar10[10],&local_8c);
        if (iVar8 != 1) goto LAB__text__004d0e74;
        if (local_78 == '\0') {
          if (local_77._2_1_ == '\0') {
            *plVar14 = **(long **)(param_2 + 0x18);
            uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x18) + 0x70);
          }
          else {
            if (((local_88 & 0xf00) == 0x300) || ((int)param_1[3] != 0)) {
              *param_3 = 0;
              goto LAB__text__004d1048;
            }
            *(undefined1 *)((long)param_1 + 0x25) = 0;
            uVar4 = *(undefined4 *)(*(long *)(param_6 + 8) + 500);
          }
          lVar11 = FUN__text__004d0480(param_1,local_88,uVar4);
          if (lVar11 != 0) {
            *param_3 = lVar11;
            goto LAB__text__004d1048;
          }
          iVar8 = 0x34;
        }
        else {
          iVar8 = 2;
          if (((iVar9 == local_8c) && (uVar15 == local_88)) &&
             (((uint3)local_84._0_3_ & 0x7ffff) == (uVar7 | 0x50020))) {
            if (local_77._2_1_ == '\0') {
              *plVar14 = **(long **)(param_2 + 0x18);
            }
            else if (((uVar15 & 0xf00) != 0x300) && ((int)param_1[3] == 0)) {
              *(undefined1 *)((long)param_1 + 0x25) = 0;
            }
LAB__text__004d1048:
            iVar8 = (**(code **)(*(long *)plVar10[0x12] + 0x18))();
            if (iVar8 == 1) goto LAB__text__004d0e8c;
          }
        }
      }
    }
  }
  FUN__text__004d0394(param_1,uVar3);
  *(undefined1 *)(param_1 + 5) = 1;
LAB__text__004d0e8c:
  if (local_70 != (long *)0x0) {
    piVar1 = (int *)((long)local_70 + 0x14);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return iVar8;
}


