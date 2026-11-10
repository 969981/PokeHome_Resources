/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004953c0; name: FUN_.text__004953c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__004953c0(long param_1,long param_2)

{
  bool bVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  long *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 auStack_48 [4];
  undefined2 local_44 [2];
  
  if ((*(long *)(param_2 + 0x88) == 0) || (*(long *)(*(long *)(param_2 + 0x88) + 0x18) == 0)) {
    uVar6 = 2;
  }
  else {
    uVar11 = (ulong)*(uint *)(param_2 + 0x38);
    if (*(uint *)(param_2 + 0x38) != 0) {
      do {
        if ((uVar11 < 0x21) &&
           ((1L << ((ulong)((int)uVar11 - 1) & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) != 0))
        break;
        uVar11 = uVar11 - 1;
        *(int *)(param_2 + 0x38) = (int)uVar11;
      } while ((int)uVar11 != 0);
    }
    local_44[0] = 0;
    plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
    uVar6 = *(uint *)(plVar7 + 1);
    if (uVar6 != 0) {
      while (lVar16 = *plVar7 + (ulong)uVar6 * 0x28, *(long *)(lVar16 + -0x10) != 0) {
        local_80 = plVar7;
        FUN__text__0049dbd4();
        FUN__text__0049cd50(*(undefined8 *)(lVar16 + -0x10),*(undefined8 *)(lVar16 + -8),&local_80);
        plVar15 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        FUN__text__0049d9d0(*plVar15 + (ulong)*(uint *)(plVar15 + 1) * 0x28 + -0x28);
        plVar7 = local_80;
        *(int *)(plVar15 + 1) = (int)plVar15[1] + -1;
        lVar16 = *(long *)(param_2 + 0x88);
        if (local_80 != (long *)0x0) {
          FUN__text__0049dbd4(local_80);
        }
        lVar8 = *(long *)(lVar16 + 0x18);
        *(long **)(lVar16 + 0x18) = plVar7;
        if (lVar8 != 0) {
          FUN__text__0049dbf0();
        }
        lVar16 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
        if (local_80 != (long *)0x0) {
          FUN__text__0049dbf0();
        }
        if (lVar16 == 0) goto LAB__text__004956e4;
        plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        uVar6 = *(uint *)(plVar7 + 1);
joined_r0x00495588:
        if (uVar6 == 0) goto LAB__text__004956c0;
      }
      lVar8 = FUN__text__0049f650(*(undefined8 *)(lVar16 + -0x28),*(undefined8 *)(param_2 + 0x10),
                                  local_44,auStack_48,lVar16 + -0x20,lVar16 + -0x18);
      if (lVar8 == 0) {
        iVar9 = *(int *)(param_2 + 0x38);
        uVar11 = (ulong)(iVar9 - 1);
        do {
          if (uVar11 == 0) {
            iVar9 = 0;
            break;
          }
          uVar12 = uVar11 - 1;
          iVar9 = iVar9 + -1;
          bVar1 = 0x20 < uVar11;
          uVar11 = uVar12;
        } while ((bVar1) || ((1L << (uVar12 & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) == 0));
        *(int *)(param_2 + 0x38) = iVar9;
        plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        FUN__text__0049d9d0(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x28 + -0x28);
        *(int *)(plVar7 + 1) = (int)plVar7[1] + -1;
        plVar7 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        uVar6 = *(uint *)(plVar7 + 1);
        goto joined_r0x00495588;
      }
      *(undefined2 *)(param_2 + 0x38 + (ulong)(*(int *)(param_2 + 0x38) - 1) * 2 + 4) = local_44[0];
      piVar2 = (int *)(lVar8 + 0x24);
      iVar9 = *(int *)(lVar8 + 0x20);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar1) {
          *piVar2 = iVar5 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(*(long *)(lVar8 + 0x10) + 0x20))();
      }
      iVar5 = FUN__text__0049fdb0(*(undefined8 *)(lVar16 + -0x28));
      local_68 = 0xff;
      local_80 = *(long **)(param_2 + 0x10);
      local_60 = 0xff;
      local_78 = *(undefined4 *)(param_2 + 0x34);
      local_58 = 0;
      local_70 = 0;
      fVar17 = (float)FUN__text__0049fdc0(*(undefined8 *)(lVar16 + -0x28),&local_80);
      if ((iVar9 == 0) ||
         (plVar7 = (long *)FUN__text__00494af0(*(undefined8 *)(param_2 + 0x88),param_2,iVar9),
         plVar7 == (long *)0x0)) goto LAB__text__004956c0;
      lVar16 = param_1;
      do {
        lVar8 = lVar16;
        if (*(long *)(lVar8 + 0x78) == 0) break;
        lVar16 = *(long *)(lVar8 + 0x78);
      } while (-1 < *(char *)(lVar8 + 0xd4));
      pbVar13 = *(byte **)(lVar8 + 0x90);
      iVar9 = _DAT_0073b240;
      if (pbVar13 != (byte *)0x0) {
        bVar3 = *pbVar13;
        uVar6 = (uint)bVar3;
        if (bVar3 < 2) {
          uVar6 = 1;
        }
        uVar11 = (ulong)uVar6;
        pbVar14 = pbVar13 + ((ulong)bVar3 & 0xfc);
        do {
          pbVar14 = pbVar14 + 4;
          pbVar13 = pbVar13 + 1;
          if (*pbVar13 == 0x2e) {
            iVar9 = *(int *)pbVar14;
            break;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (iVar9 == 2) {
        uVar10 = 1;
      }
      else {
        uVar11 = FUN__text__0046a490(param_1);
        uVar10 = 2;
        if ((uVar11 & 1) == 0) {
          uVar10 = 0;
        }
      }
      FUN__text__004b926c(plVar7,uVar10,*(undefined8 *)(param_2 + 0xa8),param_2 + 0x98);
      FUN__text__004b933c(plVar7,*(long *)(param_2 + 0x88) + 0x28);
      iVar9 = (uint)*_DAT_008a4b70 * 10;
      if ((iVar5 == 5) || (iVar5 == 3)) {
        dVar18 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
        dVar18 = (double)fVar17 * 0.001 * dVar18;
        dVar19 = 0.5;
        if (dVar18 <= 0.0) {
          dVar19 = -0.5;
        }
        iVar5 = (int)(dVar19 + dVar18);
        if (iVar9 <= iVar5) {
          iVar9 = iVar5;
        }
      }
      uVar6 = FUN__text__00494c60(*(undefined8 *)(param_2 + 0x88),param_2,iVar9,plVar7);
      piVar2 = (int *)((long)plVar7 + 0x14);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar1) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      goto LAB__text__004956c4;
    }
LAB__text__004956c0:
    uVar6 = 2;
LAB__text__004956c4:
    if (*(long *)(*(long *)(param_2 + 0x88) + 0x18) == 0 || (uVar6 & 0xfffffffd) == 1) {
      if (uVar6 == 3) {
LAB__text__004956e4:
        uVar6 = 1;
      }
    }
    else {
      *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
      FUN__text__0049dbf0();
    }
  }
  return uVar6;
}


