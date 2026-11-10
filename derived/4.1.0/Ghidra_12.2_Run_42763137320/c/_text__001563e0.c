/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001563e0; name: FUN_.text__001563e0
 */


undefined8 FUN__text__001563e0(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  
  lVar11 = *param_2;
  uVar8 = (long)param_1 - lVar11;
  if ((((uVar8 & 3) == 0) && (uVar10 = param_2[1], 4 < uVar10)) &&
     (uVar9 = uVar10 - 4, uVar8 <= uVar9)) {
    lVar7 = param_2[2];
    uVar1 = (int)lVar7 + 1;
    iVar6 = *param_1;
    uVar2 = (int)param_2[3] + 1;
    *(uint *)(param_2 + 2) = uVar1;
    *(uint *)(param_2 + 3) = uVar2;
    if (((((uVar1 <= *(uint *)((long)param_2 + 0x14)) && (uVar2 <= *(uint *)((long)param_2 + 0x1c)))
         && ((uVar12 = uVar8 - (long)iVar6, (uVar12 & 1) == 0 &&
             ((uVar12 <= uVar10 - 2 && (uVar5 = *(ushort *)(lVar11 + uVar12), (uVar5 & 1) == 0))))))
        && (uVar5 < uVar10)) && (uVar12 <= uVar10 - uVar5)) {
      puVar13 = (ushort *)((long)param_1 - (long)*param_1);
      uVar5 = *puVar13;
      if (4 < uVar5) {
        if (((ulong)puVar13[2] != 0) && (uVar9 < uVar8 + puVar13[2])) {
          return 0;
        }
        if (6 < uVar5) {
          uVar12 = (ulong)puVar13[3];
          if (uVar12 != 0) {
            uVar3 = uVar8 + uVar12;
            if ((uVar3 & 3) != 0) {
              return 0;
            }
            if (uVar9 < uVar3) {
              return 0;
            }
            uVar1 = *(uint *)(lVar11 + uVar3);
            if ((int)uVar1 < 0) {
              return 0;
            }
            if (uVar1 == 0) {
              return 0;
            }
            if (uVar10 - 1 < uVar3 + uVar1) {
              return 0;
            }
            puVar4 = (uint *)((long)((long)param_1 + uVar12) +
                             (ulong)*(uint *)((long)param_1 + uVar12));
            uVar12 = (long)puVar4 - lVar11;
            if ((uVar12 & 3) != 0) {
              return 0;
            }
            if (uVar9 < uVar12) {
              return 0;
            }
            uVar1 = *puVar4;
            if (0x1ffffffe < uVar1) {
              return 0;
            }
            uVar3 = (ulong)uVar1 * 4 + 4;
            if (uVar10 <= uVar3) {
              return 0;
            }
            if (uVar10 - uVar3 < uVar12) {
              return 0;
            }
          }
          if (8 < uVar5) {
            if (((ulong)puVar13[4] != 0) && (uVar9 < uVar8 + puVar13[4])) {
              return 0;
            }
            if (((10 < uVar5) && ((ulong)puVar13[5] != 0)) && (uVar9 < uVar8 + puVar13[5])) {
              return 0;
            }
          }
        }
      }
      *(int *)(param_2 + 2) = (int)lVar7;
      return 1;
    }
  }
  return 0;
}


