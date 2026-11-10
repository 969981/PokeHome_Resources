/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156580; name: FUN_.text__00156580
 */


undefined8 FUN__text__00156580(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *param_2;
  uVar8 = (long)param_1 - lVar7;
  if ((uVar8 & 3) != 0) {
    return 0;
  }
  uVar6 = param_2[1];
  if (uVar6 < 5) {
    return 0;
  }
  if (uVar6 - 4 < uVar8) {
    return 0;
  }
  iVar4 = *param_1;
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
  uVar9 = uVar8 - (long)iVar4;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  if (uVar6 - 2 < uVar9) {
    return 0;
  }
  uVar3 = *(ushort *)(lVar7 + uVar9);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (uVar6 <= uVar3) {
    return 0;
  }
  if (uVar6 - uVar3 < uVar9) {
    return 0;
  }
  puVar5 = (ushort *)((long)param_1 - (long)*param_1);
  uVar3 = *puVar5;
  if (uVar3 < 5) {
LAB__text__00156684:
    lVar7 = 0;
LAB__text__00156688:
    uVar8 = FUN__text__00156750(param_2,lVar7,0);
  }
  else {
    uVar9 = (ulong)puVar5[2];
    if (uVar9 == 0) {
      if (uVar3 < 7) goto LAB__text__00156684;
LAB__text__001566c0:
      uVar10 = (ulong)puVar5[3];
      if (uVar10 == 0) {
        lVar7 = 0;
      }
      else {
        uVar8 = uVar8 + uVar10;
        if (((uVar8 & 3) != 0) || (uVar6 - 4 < uVar8)) {
          return 0;
        }
        uVar1 = *(uint *)(lVar7 + uVar8);
        if ((int)uVar1 < 0) {
          return 0;
        }
        if (uVar1 == 0) {
          return 0;
        }
        if (uVar6 - 1 < uVar8 + uVar1) {
          return 0;
        }
        lVar7 = (long)((long)param_1 + uVar10) + (ulong)*(uint *)((long)param_1 + uVar10);
      }
      if (puVar5[2] == 0) goto LAB__text__00156688;
    }
    else {
      if (uVar6 - 1 < uVar8 + uVar9) {
        return 0;
      }
      if (6 < uVar3) goto LAB__text__001566c0;
      lVar7 = 0;
    }
    uVar8 = FUN__text__00156750(param_2,lVar7,*(undefined1 *)((long)param_1 + uVar9));
  }
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 2) = (int)param_2[2] + -1;
  return 1;
}


