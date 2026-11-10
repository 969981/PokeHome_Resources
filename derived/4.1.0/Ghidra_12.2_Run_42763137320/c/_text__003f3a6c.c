/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f3a6c; name: FUN_.text__003f3a6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003f3a6c(long param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                       long *param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *__src;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  int *__dest;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int aiStack_70 [4];
  uint local_44;
  
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar3 == 0) {
    uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar3;
    uVar10 = uVar3 << 1;
    if (8 < uVar10) goto LAB__text__003f3ab0;
LAB__text__003f3b5c:
    uVar13 = 8;
    __dest = aiStack_70;
    if (uVar3 != 0) goto LAB__text__003f3aec;
LAB__text__003f3b78:
    uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar3;
    uVar10 = 0;
    if (uVar3 != 0) {
      uVar10 = 8 / uVar3;
    }
    if (uVar10 * uVar3 != 8) goto LAB__text__003f3afc;
LAB__text__003f3ba0:
    uVar3 = 8;
  }
  else {
    uVar10 = uVar3 << 1;
    if (uVar10 < 9) goto LAB__text__003f3b5c;
LAB__text__003f3ab0:
    if (uVar3 == 0) {
      uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar10 = uVar3 << 1;
      *(uint *)(param_3 + 1) = uVar3;
    }
    uVar13 = (ulong)uVar10;
    __dest = (int *)((long)aiStack_70 + (0x10 - (uVar13 + 0xf & 0x1fffffff0)));
    if (uVar3 == 0) goto LAB__text__003f3b78;
LAB__text__003f3aec:
    uVar10 = 0;
    if (uVar3 != 0) {
      uVar10 = 8 / uVar3;
    }
    if (uVar10 * uVar3 == 8) goto LAB__text__003f3ba0;
LAB__text__003f3afc:
    if (uVar3 == 0) {
      uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar3;
      if (uVar3 != 0) goto LAB__text__003f3b1c;
      uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar11 = (ulong)uVar3;
      *(uint *)(param_3 + 1) = uVar3;
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = (ulong)__dest / uVar11;
      }
      __dest = (int *)(uVar2 * uVar11);
      if (uVar3 == 0) {
        uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
        *(uint *)(param_3 + 1) = uVar3;
      }
    }
    else {
LAB__text__003f3b1c:
      uVar11 = (ulong)uVar3;
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = (ulong)__dest / uVar11;
      }
      __dest = (int *)(uVar11 + uVar2 * uVar11);
    }
  }
  __src = (void *)FUN__text__00400f80(7,uVar13);
  iVar4 = (**(code **)(*(long *)*param_3 + 0x38))
                    (0,(long *)*param_3,__src,uVar3,1,param_4,&local_44);
  if ((iVar4 != 1) || (local_44 < 8)) {
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    FUN__text__00400fc0(7,__src);
    return 2;
  }
  memcpy(__dest,__src,(ulong)local_44);
  FUN__text__00400fc0(7,__src);
  if ((*__dest != 0x4b504b41) || (iVar4 = __dest[1], iVar4 == 0)) {
LAB__text__003f3d98:
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    return 2;
  }
  uVar3 = *(uint *)(param_3 + 1);
  if (uVar3 == 0) {
    uVar3 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar3;
  }
  uVar10 = iVar4 + uVar3 + 7;
  uVar6 = 0;
  if (uVar3 != 0) {
    uVar6 = uVar10 / uVar3;
  }
  lVar14 = (ulong)uVar10 - (ulong)(uVar10 - uVar6 * uVar3);
  lVar7 = FUN__text__00400f90(0xf,(int)lVar14 + 0x78);
  if (lVar7 == 0) {
    *param_5 = 0;
    goto LAB__text__003f3d98;
  }
  uVar5 = FUN__text__0040bb00(param_2);
  plVar8 = (long *)(lVar7 + lVar14);
  *plVar8 = _DAT_008a53d0 + 0x10;
  plVar8[1] = 0;
  FUN__text__003f4e04(plVar8 + 2);
  *(undefined4 *)(plVar8 + 8) = uVar5;
  *(int *)((long)plVar8 + 0x44) = iVar4 + 8;
  plVar8[9] = lVar7;
  lVar14 = _DAT_008a5480;
  *(undefined4 *)(plVar8 + 10) = 1;
  plVar8[0xb] = 0;
  *(undefined4 *)(plVar8 + 0xc) = 0;
  *plVar8 = lVar14 + 0x10;
  lVar14 = *param_3;
  *(int *)(plVar8 + 0xc) = (int)param_3[1];
  plVar8[0xb] = lVar14;
  lVar14 = (**(code **)(*(long *)*param_3 + 0x20))();
  plVar8[0xd] = *(long *)(lVar14 + 0x20);
  plVar8[0xe] = *(long *)(lVar14 + 0x18);
  *param_5 = (long)plVar8;
  uVar3 = __dest[1];
  if (local_44 < 9) {
    uVar13 = 8;
    if (uVar3 == 0) goto LAB__text__003f3ec0;
LAB__text__003f3de0:
    iVar4 = (**(code **)(*(long *)*param_3 + 0x38))
                      (0,(long *)*param_3,lVar7 + uVar13,uVar3,1,param_4,&local_44);
    plVar8 = (long *)*param_5;
    if ((iVar4 != 1) || (local_44 < uVar3)) {
      iVar4 = (int)plVar8[10] + -1;
      *(int *)(plVar8 + 10) = iVar4;
      goto joined_r0x003f3f60;
    }
  }
  else {
    uVar10 = local_44 - 8;
    memcpy((void *)(lVar7 + 8),__dest + 2,(ulong)uVar10);
    uVar6 = *(uint *)(param_3 + 1);
    if (uVar3 <= uVar10) {
      uVar10 = uVar3;
    }
    uVar13 = (ulong)(uVar10 + 8);
    if (uVar6 == 0) {
      uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar6;
      uVar3 = ((uVar3 - uVar10) + uVar6) - 1;
      if (uVar6 == 0) {
        uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar3 / uVar6;
        }
        *(uint *)(param_3 + 1) = uVar6;
        if (uVar6 == 0) {
          uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
          *(uint *)(param_3 + 1) = uVar6;
        }
      }
      else {
        uVar12 = 0;
        if (uVar6 != 0) {
          uVar12 = uVar3 / uVar6;
        }
      }
    }
    else {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = (((uVar3 - uVar10) + uVar6) - 1) / uVar6;
      }
    }
    uVar3 = uVar6 * uVar12;
    if (uVar3 != 0) goto LAB__text__003f3de0;
LAB__text__003f3ec0:
    plVar8 = (long *)*param_5;
  }
  iVar4 = FUN__text__003f4e4c(plVar8 + 2,lVar7,__dest[1] + 8);
  if (iVar4 != 1) {
    param_5 = (long *)*param_5;
    iVar1 = (int)param_5[10] + -1;
    *(int *)(param_5 + 10) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*param_5 + 0x10))();
      return iVar4;
    }
    return iVar4;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    iVar4 = FUN__text__003f59a0(_DAT_008a5488,param_1);
    if (iVar4 != 1) {
      plVar8 = (long *)*param_5;
      iVar4 = (int)plVar8[10] + -1;
      *(int *)(plVar8 + 10) = iVar4;
joined_r0x003f3f60:
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))();
        return 2;
      }
      return 2;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  lVar7 = *param_5;
  uVar9 = FUN__text__003f5990();
  iVar4 = FUN__text__003f507c(lVar7 + 0x10,uVar9);
  return iVar4;
}


