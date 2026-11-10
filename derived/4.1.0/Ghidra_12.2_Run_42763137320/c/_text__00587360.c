/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00587360; name: FUN_.text__00587360
 */


undefined8
FUN__text__00587360(long param_1,long param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  if (param_3 == (int *)0x0) {
    uVar15 = *(uint *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x3c) * 4);
    if ((int)uVar15 < 0) {
      uVar15 = uVar15 + 1;
    }
    memset(param_4,0,(ulong)((uVar15 & 0x7ffffffe) << 1));
    return 0;
  }
  if ((1 < *(int *)(param_2 + 0x34)) && (0 < param_5)) {
    puVar1 = param_4 + param_5;
    uVar15 = 0;
    iVar14 = *(int *)(param_2 + 0x38) * *param_3;
    lVar13 = 1;
    do {
      uVar16 = (ulong)*(byte *)(*(long *)(param_2 + 0x18) + lVar13);
      puVar12 = param_4;
      if (param_3[uVar16] < 0x8000) {
        iVar6 = *(int *)(param_2 + 0x38) * param_3[uVar16];
        puVar2 = (undefined4 *)((long)iVar14 * 4 + 0x745174);
        Hint_Prefetch(puVar2,0,0,0);
        iVar9 = iVar6 - iVar14;
        iVar3 = -iVar9;
        if (-1 < iVar9) {
          iVar3 = iVar9;
        }
        uVar17 = (uint)*(ushort *)(*(long *)(param_2 + 0x10) + uVar16 * 2);
        iVar8 = uVar17 - uVar15;
        iVar7 = 0;
        if (iVar8 != 0) {
          iVar7 = iVar9 / iVar8;
        }
        iVar10 = iVar7 * iVar8;
        iVar4 = -iVar10;
        if (-1 < iVar10) {
          iVar4 = iVar10;
        }
        puVar12 = param_4 + 1;
        *param_4 = *puVar2;
        puVar2 = param_4 + iVar8;
        if (puVar1 <= param_4 + iVar8) {
          puVar2 = puVar1;
        }
        if (puVar12 < puVar2) {
          iVar10 = 0;
          puVar11 = puVar12;
          do {
            iVar10 = iVar10 + (iVar3 - iVar4);
            uVar15 = 0;
            if (iVar8 <= iVar10) {
              uVar15 = iVar9 >> 0x1f | 1;
            }
            iVar14 = iVar14 + iVar7 + uVar15;
            iVar5 = 0;
            if (iVar8 <= iVar10) {
              iVar5 = iVar8;
            }
            iVar10 = iVar10 - iVar5;
            puVar12 = puVar11 + 1;
            *puVar11 = *(undefined4 *)((long)iVar14 * 4 + 0x745174);
            puVar11 = puVar12;
          } while (puVar12 < puVar2);
        }
        iVar14 = iVar6;
        uVar15 = uVar17;
      }
      lVar13 = lVar13 + 1;
    } while ((lVar13 < *(int *)(param_2 + 0x34)) && (param_4 = puVar12, puVar12 < puVar1));
  }
  return 1;
}


