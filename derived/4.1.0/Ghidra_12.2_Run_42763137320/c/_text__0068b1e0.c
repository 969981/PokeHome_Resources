/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068b1e0; name: FUN_.text__0068b1e0
 */


/* WARNING: Removing unreachable block (ram,0x0068b420) */

void FUN__text__0068b1e0(long param_1,long *param_2,uint param_3,byte param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  byte *pbVar10;
  ulong *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined4 uVar24;
  uint in_stack_ffffffffffffff38;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90 [8];
  
  iVar12 = 0x40;
  if (*(char *)(param_1 + 0xba) != '\0') {
    iVar12 = 0x60;
  }
  if (*param_2 == 0) {
    pbVar10 = *(byte **)(param_1 + 0xb0);
    uVar13 = (*(long *)(pbVar10 + 0x20) + (long)iVar12 * (long)*(int *)(param_1 + 0x9c)) - 1U &
             -*(long *)(pbVar10 + 0x20);
    if ((*pbVar10 & 1) == 0) {
      uVar16 = *(ulong *)(pbVar10 + 0x40);
      *(ulong *)(pbVar10 + 0x40) = uVar16 + uVar13;
    }
    else {
      puVar11 = *(ulong **)(pbVar10 + 0x40);
      do {
        uVar16 = *puVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar8) {
          *puVar11 = uVar16 + uVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  else {
    pbVar10 = *(byte **)(param_1 + 0xb0);
    uVar13 = (*(long *)(pbVar10 + 0x20) + (long)*(int *)(param_1 + 0x9c) * (long)iVar12 * 2) - 1U &
             -*(long *)(pbVar10 + 0x20);
    if ((*pbVar10 & 1) == 0) {
      uVar16 = *(ulong *)(pbVar10 + 0x40);
      *(ulong *)(pbVar10 + 0x40) = uVar16 + uVar13;
    }
    else {
      puVar11 = *(ulong **)(pbVar10 + 0x40);
      do {
        uVar16 = *puVar11;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar8) {
          *puVar11 = uVar16 + uVar13;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  *(int *)(param_1 + 4) = (int)uVar16;
  uVar24 = *(undefined4 *)((long)param_2 + 0x14);
  uVar4 = (undefined4)param_2[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  if ((param_5 & 1) != 0) {
    uVar23 = *(uint *)(param_1 + 0x9c);
    if (uVar23 == 0) {
      uVar14 = 0;
    }
    else {
      uVar13 = 0;
      uVar16 = 0;
      lVar22 = param_1 + 0x10;
      do {
        uVar20 = *(ulong *)(*(long *)(param_1 + 0xa0) + uVar13 * 0x38 + 0x28);
        uVar21 = uVar20 & 0xfffffffffffffffe;
        uVar1 = (uint)uVar20 & 1;
        bVar19 = 0;
        uVar14 = (uint)uVar16;
        if (uVar14 != 0) {
          do {
            if ((*(ulong *)(lVar22 + (ulong)bVar19 * 0x10) == uVar21) &&
               (lVar15 = lVar22 + (ulong)bVar19 * 0x10, (*(uint *)(lVar15 + 0xc) >> 1 & 1) == uVar1)
               ) {
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              *(byte *)(*(long *)(param_1 + 0xa8) + uVar13) = bVar19;
              goto joined_r0x0068b380;
            }
            bVar19 = bVar19 + 1;
          } while (bVar19 < uVar14);
        }
        puVar11 = (ulong *)(lVar22 + uVar16 * 0x10);
        uVar14 = uVar14 + 1;
        uVar16 = (ulong)uVar14;
        *puVar11 = uVar21;
        puVar11[1] = 1;
        *(uint *)((long)puVar11 + 0xc) = (uint)*(byte *)(uVar21 + 0x18) | uVar1 << 1;
        if (7 < uVar14) break;
        *(byte *)(*(long *)(param_1 + 0xa8) + uVar13) = bVar19;
joined_r0x0068b380:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar23);
      uVar16 = (ulong)*(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 0x90) = uVar14;
  }
  uVar16 = uVar16 & 0xffffffff;
  lVar22 = *(long *)(*(long *)(param_1 + 0xb0) + 0x38);
  uVar23 = *(uint *)(param_1 + 0x90);
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  if (0 < (int)uVar23) {
    if (uVar23 == 1) {
      lVar15 = 0;
      iVar12 = 0;
    }
    else {
      lVar15 = 0;
      iVar12 = 0;
      piVar18 = (int *)((ulong)local_90 | 4);
      piVar17 = (int *)(param_1 + 0x28);
      do {
        iVar5 = piVar17[-4];
        lVar15 = lVar15 + -2;
        iVar6 = *piVar17;
        piVar18[-1] = iVar12;
        *piVar18 = iVar5 + iVar12;
        iVar12 = iVar6 + iVar5 + iVar12;
        piVar18 = piVar18 + 2;
        piVar17 = piVar17 + 8;
      } while (-lVar15 != ((ulong)uVar23 & 0xfffffffe));
      lVar15 = -lVar15;
      if ((uVar23 & 1) == 0) goto LAB__text__0068b474;
    }
    local_90[lVar15] = iVar12;
  }
LAB__text__0068b474:
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (lVar22 == 0) {
    return;
  }
  uVar23 = *(uint *)(param_1 + 0x9c);
  uVar9 = 1;
  if (lVar2 != 0) {
    uVar9 = 2;
    if ((param_3 & 1) == 0) {
      if ((int)uVar23 < 1) {
        return;
      }
      uVar14 = 0;
      do {
        in_stack_ffffffffffffff38 = uVar14;
        FUN__text__0068b628(uVar24,param_1,uVar16,lVar3,uVar4,lVar2,local_90,lVar22,2,&local_b0,
                            uVar14,param_4 & 1);
        uVar14 = uVar14 + 1;
      } while (uVar23 != uVar14);
    }
    else {
      if ((int)uVar23 < 1) {
        return;
      }
      uVar14 = uVar23 + 1;
      do {
        in_stack_ffffffffffffff38 = uVar14 - 2;
        FUN__text__0068b628(uVar24,param_1,uVar16,lVar3,uVar4,lVar2,local_90,lVar22,2,&local_b0,
                            in_stack_ffffffffffffff38,param_4 & 1);
        uVar14 = uVar14 - 1;
      } while (1 < uVar14);
    }
  }
  if ((param_3 & 1) == 0) {
    if (0 < (int)uVar23) {
      uVar14 = 0;
      do {
        in_stack_ffffffffffffff38 =
             CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
        FUN__text__0068b8a8(uVar24,param_1,uVar16,lVar3,uVar4,local_90,lVar22,uVar9,&local_b0,uVar14
                            ,in_stack_ffffffffffffff38);
        uVar14 = uVar14 + 1;
      } while (uVar23 != uVar14);
    }
  }
  else if (0 < (int)uVar23) {
    uVar23 = uVar23 + 1;
    do {
      in_stack_ffffffffffffff38 =
           CONCAT31((int3)(in_stack_ffffffffffffff38 >> 8),param_4) & 0xffffff01;
      FUN__text__0068b8a8(uVar24,param_1,uVar16,lVar3,uVar4,local_90,lVar22,uVar9,&local_b0,
                          uVar23 - 2,in_stack_ffffffffffffff38);
      uVar23 = uVar23 - 1;
    } while (1 < uVar23);
  }
  return;
}


