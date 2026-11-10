/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469b80; name: FUN_.text__00469b80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__00469b80(long param_1,long *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  float fVar11;
  long local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  long *local_28;
  
  uVar9 = *(uint *)(param_1 + 0xd2) & 0x3ff;
  if ((((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(*(long *)(param_1 + 0x58) + 2) & 1) != 0))
      && (uVar9 != 0)) && (*(uint *)(param_1 + 0x50) != 0)) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x50) << 3;
    plVar6 = *(long **)(param_1 + 0x48);
    do {
      if (*(int *)(*plVar6 + 8) == 0x10) {
        local_68 = 0;
        local_60 = 0;
        local_48 = 0;
        local_58 = 0xff;
        local_50 = 0xff;
        local_70 = *param_2;
        fVar11 = (float)FUN__text__00435a30(*_DAT_008a45f0,*plVar6,&local_70);
        uVar9 = (uint)fVar11;
        plVar6 = *(long **)(param_1 + 0x70);
        goto joined_r0x00469d28;
      }
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  plVar6 = *(long **)(param_1 + 0x70);
joined_r0x00469d28:
  if (plVar6 == (long *)0x0) {
    return 1;
  }
  lVar5 = *param_2;
  plVar7 = (long *)*plVar6;
  uVar2 = *(uint *)(plVar6 + 1);
  plVar6 = plVar7;
  if (uVar2 == 0) {
LAB__text__00469c34:
    plVar10 = plVar6 + 1;
    if (plVar6 == plVar7 + (ulong)uVar2 * 2) {
      local_28 = (long *)0x0;
LAB__text__00469c90:
      if (plVar6 == plVar7 + (ulong)uVar2 * 2) goto LAB__text__00469ca0;
    }
    else {
      local_28 = plVar10;
      if ((param_3 & 1) == 0) goto LAB__text__00469c90;
      lVar8 = *plVar10;
      if (lVar8 == 0) {
        return 1;
      }
      uVar9 = (uint)*(ushort *)(lVar8 + 0x78);
      if (*(char *)((long)param_2 + 0x29) != '\0') {
        if (uVar9 == 0) {
          return 1;
        }
        if ((int)((uint)*(ushort *)(lVar8 + 0x90) -
                 ((uint)*(ushort *)(lVar8 + 0x92) + (uint)*(ushort *)((long)param_2 + 0x26))) <
            (int)uVar9) {
          uVar9 = 1;
          uVar3 = 1;
        }
        else {
          local_70 = 0;
          uVar3 = FUN__text__00471e40((int)param_2[4],lVar8 + 0x68,uVar9,lVar5,
                                      *(uint *)(param_1 + 0xd2) >> 10 & 1,
                                      *(uint *)(param_1 + 0xd2) >> 0xb & 1,&local_70,1);
          uVar9 = 1;
          *(short *)((long)param_2 + 0x26) = *(short *)((long)param_2 + 0x26) + 1;
        }
        goto LAB__text__00469dcc;
      }
    }
    uVar3 = 1;
  }
  else {
    lVar8 = (ulong)uVar2 << 4;
    do {
      if (*plVar6 == lVar5) goto LAB__text__00469c34;
      plVar6 = plVar6 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    local_28 = (long *)0x0;
LAB__text__00469ca0:
    uVar9 = *(uint *)(param_1 + 0xd2) & 0x3ff;
    if (((*(long *)(param_1 + 0x58) != 0) && ((*(byte *)(*(long *)(param_1 + 0x58) + 2) & 1) != 0))
       && ((uVar9 != 0 && (*(uint *)(param_1 + 0x50) != 0)))) {
      plVar6 = *(long **)(param_1 + 0x48);
      lVar8 = (ulong)*(uint *)(param_1 + 0x50) << 3;
      do {
        if (*(int *)(*plVar6 + 8) == 0x10) {
          local_68 = 0;
          local_60 = 0;
          local_48 = 0;
          local_58 = 0xff;
          local_50 = 0xff;
          local_70 = lVar5;
          fVar11 = (float)FUN__text__00435a30(*_DAT_008a45f0,*plVar6,&local_70);
          uVar9 = (uint)fVar11;
          lVar5 = *param_2;
          break;
        }
        plVar6 = plVar6 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar3 = FUN__text__00469e50(param_1,lVar5,&local_28,uVar9);
    plVar10 = local_28;
  }
LAB__text__00469dcc:
  if (((plVar10 != (long *)0x0) && (uVar9 != 0)) && (lVar5 = param_2[1], lVar5 != 0)) {
    uVar9 = *(uint *)(lVar5 + 0x10);
    uVar2 = *(uint *)(lVar5 + 0x14);
    lVar8 = 0;
    if (*plVar10 != 0) {
      lVar8 = *plVar10 + 0x68;
    }
    if (uVar2 <= uVar9) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar4 = FUN__text__0046b710(lVar5,iVar1);
      if ((uVar4 & 1) == 0) {
        return uVar3;
      }
      if (*(uint *)(lVar5 + 0x14) <= uVar9) {
        return uVar3;
      }
      uVar9 = *(uint *)(lVar5 + 0x10);
    }
    *(uint *)(lVar5 + 0x10) = uVar9 + 1;
    if (*(long *)(lVar5 + 8) != 0) {
      *(long *)(*(long *)(lVar5 + 8) + (ulong)uVar9 * 8) = lVar8;
    }
  }
  return uVar3;
}


