/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3b10; name: FUN_.text__004c3b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c3b10(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_98;
  uint local_94;
  ulong local_90;
  long *local_88;
  ulong local_80;
  long *local_78;
  ulong local_70;
  undefined1 uStack_61;
  
  plVar14 = (long *)(param_1 + 0x50);
  puVar12 = (undefined4 *)*plVar14;
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar3 = *(uint *)(param_1 + 0x58);
  *plVar14 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar15 = (long *)(param_1 + 0x60);
  puVar13 = (undefined4 *)*plVar15;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *plVar15 = 0;
  local_78 = (long *)0x0;
  local_70 = 0;
  local_88 = (long *)0x0;
  local_80 = 0;
  FUN__text__004c51c0(*(undefined8 *)(param_1 + 0x38),&local_78,&local_88,param_4,
                      *(undefined8 *)(param_1 + 8),param_2,param_3);
  puVar6 = _DAT_008a43d8;
  uVar8 = local_70 & 0xffffffff;
  if ((int)local_70 != 0) {
    plVar9 = local_78;
    plVar17 = local_78;
    do {
      lVar10 = *plVar17;
      uVar11 = *(uint *)(param_1 + 0x58);
      uVar4 = *(uint *)(lVar10 + 4);
      if (uVar11 != 0) {
        iVar7 = 0;
        do {
          iVar1 = iVar7 + (uVar11 >> 1);
          uVar5 = *(uint *)(*plVar14 + (long)iVar1 * 4);
          if (uVar5 == uVar4) goto LAB__text__004c3ba8;
          if (uVar5 < uVar4) {
            iVar7 = iVar1 + 1;
          }
          uVar5 = uVar11 - (uVar5 < uVar4);
          uVar11 = uVar5 >> 1;
        } while (1 < uVar5);
      }
      if (*(int *)(lVar10 + 8) != 0) {
        local_a8 = 0;
        local_a0 = 0;
        local_98 = (byte)*(ushort *)(lVar10 + 0xc) & 1;
        uStack_ac = (uint)*(ushort *)(lVar10 + 0x1a);
        local_b0 = 0;
        local_94 = uVar4;
        if ((*(ushort *)(lVar10 + 0xc) & 0x500) != 0) {
          local_94 = 0xffffffff;
        }
        local_90 = (ulong)*(uint *)(lVar10 + 8);
        iVar7 = (**(code **)(*(long *)*puVar6 + 0x48))
                          ((long *)*puVar6,uVar4,&local_b0,*(undefined1 *)(param_1 + 0x70));
        if (iVar7 == 1) {
          FUN__text__004919e0(plVar14,uVar4,&uStack_61);
        }
        uVar8 = local_70 & 0xffffffff;
        plVar9 = local_78;
      }
LAB__text__004c3ba8:
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar9 + uVar8);
  }
  uVar8 = local_80 & 0xffffffff;
  if ((int)local_80 != 0) {
    plVar9 = local_88;
    plVar17 = local_88;
    do {
      lVar10 = *plVar17;
      uVar11 = *(uint *)(param_1 + 0x58);
      uVar4 = *(uint *)(lVar10 + 4);
      if (uVar11 != 0) {
        iVar7 = 0;
        do {
          iVar1 = iVar7 + (uVar11 >> 1);
          uVar5 = *(uint *)(*plVar14 + (long)iVar1 * 4);
          if (uVar5 == uVar4) goto LAB__text__004c3c88;
          if (uVar5 < uVar4) {
            iVar7 = iVar1 + 1;
          }
          uVar5 = uVar11 - (uVar5 < uVar4);
          uVar11 = uVar5 >> 1;
        } while (1 < uVar5);
      }
      uVar11 = *(uint *)(param_1 + 0x68);
      if (uVar11 != 0) {
        iVar7 = 0;
        do {
          iVar1 = iVar7 + (uVar11 >> 1);
          uVar5 = *(uint *)(*plVar15 + (long)iVar1 * 4);
          if (uVar5 == uVar4) goto LAB__text__004c3c88;
          if (uVar5 < uVar4) {
            iVar7 = iVar1 + 1;
          }
          uVar5 = uVar11 - (uVar5 < uVar4);
          uVar11 = uVar5 >> 1;
        } while (1 < uVar5);
      }
      if (*(int *)(lVar10 + 8) != 0) {
        local_a8 = 0;
        local_a0 = 0;
        local_98 = (byte)*(ushort *)(lVar10 + 0xc) & 1;
        uStack_ac = (uint)*(ushort *)(lVar10 + 0x1a);
        local_b0 = 0;
        local_94 = uVar4;
        if ((*(ushort *)(lVar10 + 0xc) & 0x500) != 0) {
          local_94 = 0xffffffff;
        }
        local_90 = (ulong)*(uint *)(lVar10 + 8);
        iVar7 = (**(code **)(*(long *)*puVar6 + 0x48))
                          ((long *)*puVar6,uVar4,&local_b0,*(undefined1 *)(param_1 + 0x71));
        if (iVar7 == 1) {
          FUN__text__004919e0(plVar15,uVar4,&uStack_61);
        }
        uVar8 = local_80 & 0xffffffff;
        plVar9 = local_88;
      }
LAB__text__004c3c88:
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar9 + uVar8);
  }
  if (uVar3 != 0) {
    lVar10 = (ulong)uVar3 << 2;
    puVar16 = puVar12;
    do {
      (**(code **)(*(long *)*puVar6 + 0x50))
                ((long *)*puVar6,*puVar16,*(undefined1 *)(param_1 + 0x70));
      lVar10 = lVar10 + -4;
      puVar16 = puVar16 + 1;
    } while (lVar10 != 0);
  }
  if (uVar2 != 0) {
    lVar10 = (ulong)uVar2 << 2;
    puVar16 = puVar13;
    do {
      (**(code **)(*(long *)*puVar6 + 0x50))
                ((long *)*puVar6,*puVar16,*(undefined1 *)(param_1 + 0x71));
      lVar10 = lVar10 + -4;
      puVar16 = puVar16 + 1;
    } while (lVar10 != 0);
  }
  if (puVar12 != (undefined4 *)0x0) {
    FUN__text__00400fc0(0,puVar12);
  }
  if (puVar13 != (undefined4 *)0x0) {
    FUN__text__00400fc0(0,puVar13);
  }
  if (local_78 != (long *)0x0) {
    local_70 = local_70 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
    local_78 = (long *)0x0;
    local_70 = local_70 & 0xffffffff;
  }
  if (local_88 != (long *)0x0) {
    local_80 = local_80 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
  }
  return;
}


