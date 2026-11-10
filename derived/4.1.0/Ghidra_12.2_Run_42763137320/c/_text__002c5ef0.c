/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c5ef0; name: FUN_.text__002c5ef0
 */


void FUN__text__002c5ef0(long param_1)

{
  uint *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  
  piVar17 = *(int **)(param_1 + 0x120);
  if (((piVar17 != (int *)0x0) && (4 < *(ushort *)((long)piVar17 - (long)*piVar17))) &&
     (uVar16 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar16 != 0)) {
    uVar18 = (ulong)*(uint *)((long)piVar17 + uVar16);
    puVar1 = (uint *)((long)((long)piVar17 + uVar16) + uVar18);
    uVar9 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      uVar10 = 0;
      uVar13 = 0;
      uVar14 = 0;
      puVar15 = (undefined2 *)0x0;
      puVar6 = (uint *)((long)piVar17 + uVar18 + uVar16 + 8);
      do {
        while (uVar12 = (uint)uVar13, (uVar14 >> 4 & 0xfff) < 0x753) {
          uVar18 = (ulong)puVar6[-1];
          uVar16 = 0;
          lVar11 = (long)*(int *)((long)puVar6 + (uVar18 - 4));
          lVar8 = uVar18 - lVar11;
          if (4 < *(ushort *)((long)puVar6 + lVar8 + -4)) {
            uVar7 = (ulong)*(ushort *)((long)puVar6 + lVar8);
            uVar16 = 0;
            if ((uVar7 != 0) &&
               (uVar3 = *(uint *)((long)puVar6 + uVar18 + uVar7 + -4), uVar16 = (ulong)uVar3,
               0x389 < uVar3)) goto LAB__text__002c6184;
          }
          puVar2 = (undefined2 *)(param_1 + 0x128 + uVar16 * 0x10);
          if (uVar10 == uVar16) {
            if (9 < (uVar12 & 0xffff)) break;
            lVar11 = -lVar11;
            uVar4 = *(ushort *)((long)puVar6 + uVar18 + lVar11 + -4);
          }
          else {
            if (puVar15 != (undefined2 *)0x0) {
              *(ulong *)(puVar15 + 1) = *(ulong *)(puVar15 + 1) & 0xfffffffffffffff0 | uVar13 & 0xf;
            }
            *puVar2 = (short)uVar14;
            uVar12 = 0;
            uVar18 = (ulong)puVar6[-1];
            lVar11 = -(long)*(int *)((long)puVar6 + (uVar18 - 4));
            uVar4 = *(ushort *)((long)puVar6 + uVar18 + lVar11 + -4);
            puVar15 = puVar2;
            uVar10 = uVar16;
          }
          if (((6 < uVar4) &&
              (uVar16 = (ulong)*(ushort *)((long)puVar6 + uVar18 + lVar11 + 2), uVar16 != 0)) &&
             (uVar3 = *(int *)((long)puVar6 + uVar18 + uVar16 + -4) - 1, uVar3 < 10)) {
                    /* WARNING: Could not emulate address calculation at 0x002c6084 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__002c6090 + (ulong)*(byte *)((ulong)uVar3 + 0x733548) * 4))();
            return;
          }
          uVar9 = (ulong)*puVar1;
          uVar13 = (ulong)(uVar12 + 1);
          uVar14 = uVar14 + 1;
          bVar5 = puVar6 == puVar1 + uVar9 + 1;
          puVar6 = puVar6 + 1;
          if (bVar5) goto LAB__text__002c6184;
        }
        uVar14 = uVar14 + 1;
        bVar5 = puVar6 != puVar1 + uVar9 + 1;
        puVar6 = puVar6 + 1;
      } while (bVar5);
LAB__text__002c6184:
      if (puVar15 != (undefined2 *)0x0) {
        *(ulong *)(puVar15 + 1) = *(ulong *)(puVar15 + 1) & 0xfffffffffffffff0 | uVar13 & 0xf;
      }
    }
  }
  return;
}


