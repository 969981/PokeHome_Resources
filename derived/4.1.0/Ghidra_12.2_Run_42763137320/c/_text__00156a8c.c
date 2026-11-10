/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156a8c; name: FUN_.text__00156a8c
 */


undefined8 FUN__text__00156a8c(int *param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort *puVar11;
  uint *puVar12;
  
  lVar7 = *param_2;
  uVar9 = (long)param_1 - lVar7;
  if ((uVar9 & 3) != 0) {
    return 0;
  }
  uVar6 = param_2[1];
  if ((4 < uVar6) && (uVar8 = uVar6 - 4, uVar9 <= uVar8)) {
    iVar5 = (int)param_2[2];
    iVar4 = *param_1;
    uVar1 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 2) = iVar5 + 1U;
    *(uint *)(param_2 + 3) = uVar1;
    if (((iVar5 + 1U <= *(uint *)((long)param_2 + 0x14)) &&
        ((((uVar1 <= *(uint *)((long)param_2 + 0x1c) &&
           (uVar10 = uVar9 - (long)iVar4, (uVar10 & 1) == 0)) && (uVar10 <= uVar6 - 2)) &&
         ((uVar3 = *(ushort *)(lVar7 + uVar10), (uVar3 & 1) == 0 && (uVar3 < uVar6)))))) &&
       (uVar10 <= uVar6 - uVar3)) {
      puVar11 = (ushort *)((long)param_1 - (long)*param_1);
      if (*puVar11 < 5) {
LAB__text__00156c54:
        *(int *)(param_2 + 2) = iVar5;
        return 1;
      }
      if (((ulong)puVar11[2] == 0) || ((8 < uVar6 && (uVar9 + puVar11[2] <= uVar6 - 8)))) {
        if ((*puVar11 < 7) || (uVar10 = (ulong)puVar11[3], uVar10 == 0)) goto LAB__text__00156c54;
        uVar9 = uVar9 + uVar10;
        if (((uVar9 & 3) == 0) && (uVar9 <= uVar8)) {
          uVar1 = *(uint *)(lVar7 + uVar9);
          if ((int)uVar1 < 0) {
            return 0;
          }
          if ((uVar1 != 0) && (uVar9 + uVar1 <= uVar6 - 1)) {
            puVar2 = (uint *)((long)param_1 + uVar10);
            uVar9 = (long)((long)puVar2 + (ulong)*puVar2) - lVar7;
            if (((uVar9 & 3) == 0) && (uVar9 <= uVar8)) {
              uVar1 = *(uint *)((long)puVar2 + (ulong)*puVar2);
              if (0x1ffffffe < uVar1) {
                return 0;
              }
              uVar8 = (ulong)uVar1 * 4 + 4;
              if ((uVar8 < uVar6) && (uVar9 <= uVar6 - uVar8)) {
                puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
                if (*puVar2 != 0) {
                  uVar9 = 0;
                  puVar12 = puVar2;
                  do {
                    puVar12 = puVar12 + 1;
                    uVar6 = FUN__text__00156c94((long)puVar12 + (ulong)*puVar12,param_2);
                    if ((uVar6 & 1) == 0) {
                      return 0;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *puVar2);
                  iVar5 = (int)param_2[2] + -1;
                }
                goto LAB__text__00156c54;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


