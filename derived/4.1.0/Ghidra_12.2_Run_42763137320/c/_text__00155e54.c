/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155e54; name: FUN_.text__00155e54
 */


undefined8 FUN__text__00155e54(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  uint *puVar13;
  
  lVar7 = *param_2;
  uVar11 = (long)param_1 - lVar7;
  if ((uVar11 & 3) != 0) {
    return 0;
  }
  uVar6 = param_2[1];
  if (uVar6 < 5) {
    return 0;
  }
  uVar8 = uVar6 - 4;
  if (uVar8 < uVar11) {
    return 0;
  }
  iVar5 = *param_1;
  uVar1 = (int)param_2[2] + 1;
  *(uint *)(param_2 + 2) = uVar1;
  uVar2 = (int)param_2[3] + 1;
  *(uint *)(param_2 + 3) = uVar2;
  if (*(uint *)((long)param_2 + 0x14) < uVar1) {
    return 0;
  }
  if (*(uint *)((long)param_2 + 0x1c) < uVar2) {
    return 0;
  }
  uVar9 = uVar11 - (long)iVar5;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  if (uVar6 - 2 < uVar9) {
    return 0;
  }
  uVar4 = *(ushort *)(lVar7 + uVar9);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (uVar6 <= uVar4) {
    return 0;
  }
  if (uVar6 - uVar4 < uVar9) {
    return 0;
  }
  lVar10 = -(long)*param_1;
  puVar12 = (ushort *)((long)param_1 - (long)*param_1);
  if ((4 < *puVar12) && (uVar9 = (ulong)puVar12[2], uVar9 != 0)) {
    uVar11 = uVar11 + uVar9;
    if ((uVar11 & 3) != 0) {
      return 0;
    }
    if (uVar8 < uVar11) {
      return 0;
    }
    uVar1 = *(uint *)(lVar7 + uVar11);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar6 - 1 < uVar11 + uVar1) {
      return 0;
    }
    puVar3 = (uint *)((long)param_1 + uVar9);
    uVar11 = (long)((long)puVar3 + (ulong)*puVar3) - lVar7;
    if ((uVar11 & 3) != 0) {
      return 0;
    }
    if (uVar8 < uVar11) {
      return 0;
    }
    uVar1 = *(uint *)((long)puVar3 + (ulong)*puVar3);
    if (0x1ffffffe < uVar1) {
      return 0;
    }
    uVar8 = (ulong)uVar1 * 4 + 4;
    if (uVar6 <= uVar8) {
      return 0;
    }
    if (uVar6 - uVar8 < uVar11) {
      return 0;
    }
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    if (*puVar3 != 0) {
      uVar11 = 0;
      puVar13 = puVar3;
      do {
        puVar13 = puVar13 + 1;
        uVar6 = FUN__text__001563e0((long)puVar13 + (ulong)*puVar13,param_2);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar3);
      lVar10 = -(long)*param_1;
    }
  }
  if ((*(ushort *)((long)param_1 + lVar10) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)param_1 + lVar10))[3], uVar11 == 0)) {
    uVar11 = FUN__text__00156250(param_2,0);
  }
  else {
    uVar6 = (long)param_1 + (uVar11 - *param_2);
    if ((uVar6 & 3) != 0) {
      return 0;
    }
    uVar8 = param_2[1];
    if ((uVar8 < 5) || (uVar8 - 4 < uVar6)) {
      return 0;
    }
    uVar1 = *(uint *)(*param_2 + uVar6);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    if (uVar8 - 1 < uVar6 + uVar1) {
      return 0;
    }
    puVar3 = (uint *)((long)param_1 + uVar11);
    uVar11 = (long)((long)puVar3 + (ulong)*puVar3) - *param_2;
    if ((uVar11 & 3) != 0) {
      return 0;
    }
    uVar6 = param_2[1];
    if (uVar6 < 5) {
      return 0;
    }
    if (uVar6 - 4 < uVar11) {
      return 0;
    }
    uVar1 = *(uint *)((long)puVar3 + (ulong)*puVar3);
    if (0x1ffffffe < uVar1) {
      return 0;
    }
    uVar8 = (ulong)uVar1 * 4 + 4;
    if (uVar6 <= uVar8) {
      return 0;
    }
    if (uVar6 - uVar8 < uVar11) {
      return 0;
    }
    uVar11 = FUN__text__00156250(param_2,(long)puVar3 + (ulong)*puVar3);
  }
  if (((uVar11 & 1) != 0) && (uVar11 = FUN__text__001561cc(param_1,param_2,8), (uVar11 & 1) != 0)) {
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
       (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar11 == 0)) {
      lVar7 = 0;
    }
    else {
      puVar3 = (uint *)((long)param_1 + uVar11);
      lVar7 = (long)puVar3 + (ulong)*puVar3;
    }
    uVar11 = FUN__text__001562e0(param_2,lVar7);
    if ((uVar11 & 1) != 0) {
      if ((*(ushort *)((long)param_1 - (long)*param_1) < 9) ||
         (uVar11 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4], uVar11 == 0)) {
        lVar7 = 0;
      }
      else {
        puVar3 = (uint *)((long)param_1 + uVar11);
        lVar7 = (long)puVar3 + (ulong)*puVar3;
      }
      uVar11 = FUN__text__00156350(param_2,lVar7);
      if ((uVar11 & 1) != 0) {
        *(int *)(param_2 + 2) = (int)param_2[2] + -1;
        return 1;
      }
    }
  }
  return 0;
}


