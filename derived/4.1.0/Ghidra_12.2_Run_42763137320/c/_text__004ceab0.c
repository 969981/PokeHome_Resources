/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ceab0; name: FUN_.text__004ceab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__004ceab0(long *param_1,long param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  ulong local_80;
  undefined4 local_78;
  undefined4 local_70;
  ulong local_6c;
  long *local_28;
  
  if (param_2 == 0) {
    if (param_3 == (long *)0x0) {
      if ((long *)param_1[1] != (long *)0x0) {
        return (long *)param_1[1];
      }
    }
    else {
      FUN__text__00449730(*_DAT_008a45e0,param_3);
      plVar9 = param_1 + 1;
      if ((long *)*plVar9 != (long *)0x0) {
        return (long *)*plVar9;
      }
      iVar8 = (**(code **)(*param_3 + 0x80))(param_3);
      if ((iVar8 == 0) || (iVar8 = (**(code **)(*param_3 + 0x80))(param_3), iVar8 == 10)) {
        sVar4 = FUN__text__004cf4b0(param_1,0,0,param_3);
        plVar10 = (long *)param_1[2];
        if (plVar10 == (long *)0x0) {
LAB__text__004cefd0:
          if (*plVar9 != 0) {
            puVar12 = (undefined4 *)(*plVar9 + 0x24);
            goto LAB__text__004ceff0;
          }
          if (*(long *)(*param_1 + 8) != 0) {
            puVar12 = (undefined4 *)(*(long *)(*param_1 + 8) + 4);
            goto LAB__text__004ceff0;
          }
          local_6c = 0;
          local_70 = 0;
        }
        else {
          plVar11 = (long *)*plVar10;
          uVar13 = *(uint *)(plVar10 + 1);
          plVar10 = plVar11;
          if (uVar13 != 0) {
            lVar15 = (ulong)uVar13 << 4;
            do {
              if (*plVar10 == 0) goto LAB__text__004cefb8;
              plVar10 = plVar10 + 2;
              lVar15 = lVar15 + -0x10;
            } while (lVar15 != 0);
            goto LAB__text__004cefd0;
          }
LAB__text__004cefb8:
          if (plVar10 == plVar11 + (ulong)uVar13 * 2) goto LAB__text__004cefd0;
          puVar12 = (undefined4 *)(plVar10[1] + 0x24);
LAB__text__004ceff0:
          local_70 = *puVar12;
          local_6c = (ulong)CONCAT14(*(undefined1 *)((long)puVar12 + 5),(uint)*(byte *)(puVar12 + 1)
                                    );
        }
        sVar5 = FUN__text__004cf4b0(param_1,1,0,param_3);
        plVar10 = (long *)param_1[2];
        if (plVar10 == (long *)0x0) {
LAB__text__004cf074:
          if (*plVar9 != 0) {
            puVar12 = (undefined4 *)(*plVar9 + 0x2c);
            goto LAB__text__004cf0a0;
          }
          if (*(long *)(*param_1 + 8) != 0) {
            puVar12 = (undefined4 *)(*(long *)(*param_1 + 8) + 0xc);
            goto LAB__text__004cf0a0;
          }
          local_80 = 0;
          local_78 = 0;
        }
        else {
          plVar11 = (long *)*plVar10;
          uVar13 = *(uint *)(plVar10 + 1);
          plVar10 = plVar11;
          if (uVar13 != 0) {
            lVar15 = (ulong)uVar13 << 4;
            do {
              if (*plVar10 == 0) goto LAB__text__004cf05c;
              plVar10 = plVar10 + 2;
              lVar15 = lVar15 + -0x10;
            } while (lVar15 != 0);
            goto LAB__text__004cf074;
          }
LAB__text__004cf05c:
          if (plVar10 == plVar11 + (ulong)uVar13 * 2) goto LAB__text__004cf074;
          puVar12 = (undefined4 *)(plVar10[1] + 0x2c);
LAB__text__004cf0a0:
          local_78 = *puVar12;
          local_80 = (ulong)CONCAT14(*(undefined1 *)(puVar12 + 1),(uint)*(byte *)((long)puVar12 + 5)
                                    );
        }
        sVar6 = FUN__text__004cf4b0(param_1,2,0,param_3);
        plVar10 = (long *)param_1[2];
        if (plVar10 == (long *)0x0) {
LAB__text__004cf124:
          if (*plVar9 != 0) {
            puVar12 = (undefined4 *)(*plVar9 + 0x34);
            goto LAB__text__004cf150;
          }
          if (*(long *)(*param_1 + 8) != 0) {
            puVar12 = (undefined4 *)(*(long *)(*param_1 + 8) + 0x14);
            goto LAB__text__004cf150;
          }
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
        }
        else {
          plVar11 = (long *)*plVar10;
          uVar13 = *(uint *)(plVar10 + 1);
          plVar10 = plVar11;
          if (uVar13 != 0) {
            lVar15 = (ulong)uVar13 << 4;
            do {
              if (*plVar10 == 0) goto LAB__text__004cf10c;
              plVar10 = plVar10 + 2;
              lVar15 = lVar15 + -0x10;
            } while (lVar15 != 0);
            goto LAB__text__004cf124;
          }
LAB__text__004cf10c:
          if (plVar10 == plVar11 + (ulong)uVar13 * 2) goto LAB__text__004cf124;
          puVar12 = (undefined4 *)(plVar10[1] + 0x34);
LAB__text__004cf150:
          uVar20 = *puVar12;
          uVar19 = *(undefined1 *)(puVar12 + 1);
          uVar18 = *(undefined1 *)((long)puVar12 + 5);
        }
        sVar7 = FUN__text__004cf4b0(param_1,3,0,param_3);
        plVar10 = (long *)param_1[2];
        if (plVar10 == (long *)0x0) {
LAB__text__004cf1c8:
          if (*plVar9 != 0) {
            puVar12 = (undefined4 *)(*plVar9 + 0x3c);
            goto LAB__text__004cf1f4;
          }
          if (*(long *)(*param_1 + 8) != 0) {
            puVar12 = (undefined4 *)(*(long *)(*param_1 + 8) + 0x1c);
            goto LAB__text__004cf1f4;
          }
          uVar16 = 0;
          uVar1 = 0;
          uVar2 = 0;
          plVar9 = (long *)FUN__text__00400f80(4,0x48);
        }
        else {
          plVar11 = (long *)*plVar10;
          uVar13 = *(uint *)(plVar10 + 1);
          plVar10 = plVar11;
          if (uVar13 != 0) {
            lVar15 = (ulong)uVar13 << 4;
            do {
              if (*plVar10 == 0) goto LAB__text__004cf1b0;
              plVar10 = plVar10 + 2;
              lVar15 = lVar15 + -0x10;
            } while (lVar15 != 0);
            goto LAB__text__004cf1c8;
          }
LAB__text__004cf1b0:
          if (plVar10 == plVar11 + (ulong)uVar13 * 2) goto LAB__text__004cf1c8;
          puVar12 = (undefined4 *)(plVar10[1] + 0x3c);
LAB__text__004cf1f4:
          uVar16 = *puVar12;
          uVar1 = *(undefined1 *)(puVar12 + 1);
          uVar2 = *(undefined1 *)((long)puVar12 + 5);
          plVar9 = (long *)FUN__text__00400f80(4,0x48);
        }
        if (plVar9 != (long *)0x0) {
          plVar9[2] = 0;
          plVar9[3] = 0;
          *(undefined4 *)((long)plVar9 + 0x34) = uVar20;
          *(undefined1 *)(plVar9 + 7) = uVar19;
          *(undefined1 *)((long)plVar9 + 0x39) = uVar18;
          *(undefined4 *)((long)plVar9 + 0x3c) = uVar16;
          *(undefined1 *)(plVar9 + 8) = uVar1;
          *plVar9 = 0x88da50;
          plVar9[1] = (long)param_3;
          *(undefined4 *)((long)plVar9 + 0x24) = local_70;
          *(undefined1 *)((long)plVar9 + 0x41) = uVar2;
          *(char *)((long)plVar9 + 0x29) = (char)(local_6c >> 0x20);
          *(char *)(plVar9 + 4) =
               sVar4 != 0 | (sVar5 != 0) << 1 | (sVar6 != 0) << 2 | (sVar7 != 0) << 3;
          *(char *)(plVar9 + 5) = (char)local_6c;
          *(undefined4 *)((long)plVar9 + 0x2c) = local_78;
          *(char *)(plVar9 + 6) = (char)(local_80 >> 0x20);
          *(char *)((long)plVar9 + 0x31) = (char)local_80;
        }
        goto LAB__text__004cf280;
      }
    }
    lVar15 = *(long *)(*param_1 + 8);
    if (lVar15 == 0) {
      uVar18 = 0;
      plVar9 = (long *)FUN__text__00400f80(4,0x48);
      lVar3 = _DAT_008a4b60;
    }
    else {
      uVar18 = *(undefined1 *)(lVar15 + 0x24);
      plVar9 = (long *)FUN__text__00400f80(4,0x48);
      lVar3 = _DAT_008a4b60;
    }
    _DAT_008a4b60 = lVar3;
    if (plVar9 != (long *)0x0) {
      *(undefined1 *)(plVar9 + 4) = uVar18;
      *(undefined4 *)((long)plVar9 + 0x24) = 0;
      *(undefined4 *)((long)plVar9 + 0x2c) = 0;
      *(undefined4 *)((long)plVar9 + 0x34) = 0;
      plVar9[2] = 0;
      plVar9[3] = 0;
      *plVar9 = lVar3 + 0x10;
      plVar9[1] = (long)param_3;
      *(undefined4 *)((long)plVar9 + 0x3c) = 0;
      *(undefined2 *)(plVar9 + 5) = 0;
      *(undefined2 *)(plVar9 + 6) = 0;
      *(undefined2 *)(plVar9 + 7) = 0;
      *(undefined2 *)(plVar9 + 8) = 0;
      if (lVar15 == 0) {
        *(undefined1 *)((long)plVar9 + 0x29) = 0;
        *(undefined4 *)((long)plVar9 + 0x2c) = 0;
        *(undefined2 *)(plVar9 + 6) = 0;
        *(undefined4 *)((long)plVar9 + 0x34) = 0;
        *(undefined2 *)(plVar9 + 7) = 0;
        *(undefined4 *)((long)plVar9 + 0x3c) = 0;
        *(undefined2 *)(plVar9 + 8) = 0;
      }
      else {
        uVar20 = *(undefined4 *)(lVar15 + 4);
        *(undefined2 *)(plVar9 + 5) = *(undefined2 *)(lVar15 + 8);
        *(undefined4 *)((long)plVar9 + 0x24) = uVar20;
        uVar20 = *(undefined4 *)(lVar15 + 0xc);
        *(undefined2 *)(plVar9 + 6) = *(undefined2 *)(lVar15 + 0x10);
        *(undefined4 *)((long)plVar9 + 0x2c) = uVar20;
        uVar20 = *(undefined4 *)(lVar15 + 0x14);
        *(undefined2 *)(plVar9 + 7) = *(undefined2 *)(lVar15 + 0x18);
        *(undefined4 *)((long)plVar9 + 0x34) = uVar20;
        uVar20 = *(undefined4 *)(lVar15 + 0x1c);
        *(undefined2 *)(plVar9 + 8) = *(undefined2 *)(lVar15 + 0x20);
        *(undefined4 *)((long)plVar9 + 0x3c) = uVar20;
      }
    }
LAB__text__004cf280:
    param_1[1] = (long)plVar9;
    return plVar9;
  }
  plVar9 = (long *)param_1[2];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)FUN__text__00400f80(4,0x10);
    if (plVar9 == (long *)0x0) {
      param_1[2] = 0;
      return (long *)0x0;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    param_1[2] = (long)plVar9;
    plVar10 = (long *)*plVar9;
    uVar14 = (ulong)*(uint *)(plVar9 + 1);
    if (*(uint *)(plVar9 + 1) != 0) goto LAB__text__004ceae8;
LAB__text__004ceb4c:
    plVar9 = plVar10;
LAB__text__004ceb50:
    if (plVar9 != plVar10 + uVar14 * 2) {
      return (long *)plVar9[1];
    }
  }
  else {
    plVar10 = (long *)*plVar9;
    uVar14 = (ulong)*(uint *)(plVar9 + 1);
    if (*(uint *)(plVar9 + 1) == 0) goto LAB__text__004ceb4c;
LAB__text__004ceae8:
    lVar15 = uVar14 << 4;
    plVar9 = plVar10;
    do {
      if (*plVar9 == param_2) goto LAB__text__004ceb50;
      plVar9 = plVar9 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  lVar15 = *(long *)(*param_1 + 8);
  if (lVar15 == 0) {
    uVar18 = 0;
    local_28 = (long *)FUN__text__00400f80(4,0x48);
  }
  else {
    uVar18 = *(undefined1 *)(lVar15 + 0x24);
    local_28 = (long *)FUN__text__00400f80(4,0x48);
  }
  if (local_28 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined4 *)((long)local_28 + 0x24) = 0;
  *(undefined4 *)((long)local_28 + 0x2c) = 0;
  *(undefined4 *)((long)local_28 + 0x34) = 0;
  local_28[2] = param_2;
  local_28[3] = 0;
  *(undefined1 *)(local_28 + 4) = uVar18;
  *(undefined2 *)(local_28 + 5) = 0;
  *(undefined2 *)(local_28 + 6) = 0;
  *(undefined2 *)(local_28 + 7) = 0;
  *(undefined2 *)(local_28 + 8) = 0;
  *local_28 = 0x88da50;
  local_28[1] = (long)param_3;
  *(undefined4 *)((long)local_28 + 0x3c) = 0;
  if (lVar15 == 0) {
    *(undefined1 *)((long)local_28 + 0x29) = 0;
    *(undefined4 *)((long)local_28 + 0x2c) = 0;
    *(undefined2 *)(local_28 + 6) = 0;
    *(undefined4 *)((long)local_28 + 0x34) = 0;
    *(undefined2 *)(local_28 + 7) = 0;
    *(undefined4 *)((long)local_28 + 0x3c) = 0;
    *(undefined2 *)(local_28 + 8) = 0;
    lVar15 = FUN__text__004cf2f0(param_1[2],param_2,&local_28);
  }
  else {
    uVar20 = *(undefined4 *)(lVar15 + 4);
    *(undefined2 *)(local_28 + 5) = *(undefined2 *)(lVar15 + 8);
    *(undefined4 *)((long)local_28 + 0x24) = uVar20;
    uVar20 = *(undefined4 *)(lVar15 + 0xc);
    *(undefined2 *)(local_28 + 6) = *(undefined2 *)(lVar15 + 0x10);
    *(undefined4 *)((long)local_28 + 0x2c) = uVar20;
    uVar20 = *(undefined4 *)(lVar15 + 0x14);
    *(undefined2 *)(local_28 + 7) = *(undefined2 *)(lVar15 + 0x18);
    *(undefined4 *)((long)local_28 + 0x34) = uVar20;
    uVar20 = *(undefined4 *)(lVar15 + 0x1c);
    *(undefined2 *)(local_28 + 8) = *(undefined2 *)(lVar15 + 0x20);
    *(undefined4 *)((long)local_28 + 0x3c) = uVar20;
    lVar15 = FUN__text__004cf2f0(param_1[2],param_2,&local_28);
  }
  if (lVar15 == 0) goto LAB__text__004cedb8;
  if (param_3 == (long *)0x0) {
    return local_28;
  }
  plVar9 = *(long **)(param_2 + 0x28);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)FUN__text__00400f80(4,0x48);
    if (plVar9 != (long *)0x0) {
      FUN__text__0044a854();
      *(long **)(param_2 + 0x28) = plVar9;
      plVar9[1] = param_2;
      iVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_2 + 0x58));
      if (iVar8 == 1) goto LAB__text__004cecb8;
      (**(code **)*plVar9)(plVar9);
      FUN__text__00400fc0(4,plVar9);
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
  }
  else {
LAB__text__004cecb8:
    iVar8 = FUN__text__0044ac30(plVar9,param_3);
    if (iVar8 == 1) {
      return local_28;
    }
  }
  puVar17 = (undefined8 *)param_1[2];
  plVar10 = (long *)*puVar17;
  uVar13 = *(uint *)(puVar17 + 1);
  plVar9 = plVar10;
  if (uVar13 == 0) {
LAB__text__004ced80:
    if (plVar9 != plVar10 + (ulong)uVar13 * 2) {
      uVar13 = uVar13 - 1;
      if (plVar9 < plVar10 + (ulong)uVar13 * 2) {
        memmove(plVar9,plVar9 + 2,
                (ulong)(uint)((int)(plVar10 + (ulong)uVar13 * 2) - (int)plVar9) & 0xfffffff0);
        uVar13 = *(int *)(puVar17 + 1) - 1;
      }
      *(uint *)(puVar17 + 1) = uVar13;
    }
  }
  else {
    lVar15 = (ulong)uVar13 << 4;
    do {
      if (*plVar9 == param_2) goto LAB__text__004ced80;
      plVar9 = plVar9 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
LAB__text__004cedb8:
  plVar9 = local_28;
  if (local_28 != (long *)0x0) {
    FUN__text__004cfac0(local_28);
    FUN__text__00400fc0(4,plVar9);
  }
  return (long *)0x0;
}


