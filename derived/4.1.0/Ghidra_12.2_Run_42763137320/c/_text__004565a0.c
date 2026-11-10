/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004565a0; name: FUN_.text__004565a0
 */


void FUN__text__004565a0(long *param_1,long param_2,undefined4 param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lStack_60;
  undefined4 local_54;
  
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 != 0) {
    uVar11 = (ulong)*(uint *)(param_1 + 2) * 8 + 0xf & 0xffffffff0;
    lVar10 = -0x60 - uVar11;
    lVar16 = lVar10 - uVar11;
    lVar14 = lVar16 - uVar11;
    lVar2 = lVar14 - uVar11;
    uVar4 = *(uint *)(param_1 + 1);
    uVar11 = (ulong)uVar4;
    local_54 = param_3;
    if (uVar4 == 0) {
      uVar9 = 0;
    }
    else {
      lVar15 = *param_1;
      uVar12 = 0;
      uVar9 = 0;
      do {
        uVar17 = (ulong)*(ushort *)(lVar15 + uVar12 * 2);
        lVar20 = uVar17 * 8;
        plVar21 = *(long **)(param_4 + lVar20);
        bVar5 = *(byte *)(plVar21 + 1);
        if (bVar5 != 0) {
          plVar18 = *(long **)(param_5 + uVar17 * 8);
          lVar20 = *(long *)(*(long *)(param_2 + lVar20) + 0x20);
          if (bVar5 == 1) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            lVar19 = 0x10;
            lVar22 = 4;
            do {
              lVar25 = *plVar21;
              uVar1 = (int)uVar9 + (int)uVar17;
              uVar6 = *(ushort *)(plVar21 + 2);
              lVar23 = (ulong)uVar1 * 8;
              uVar17 = uVar17 + 2;
              *(long *)((long)&lStack_60 + lVar23 + lVar16 + 0x60) = lVar20;
              *(ulong *)((long)&lStack_60 + lVar23 + lVar10 + 0x60) =
                   lVar25 + (lVar22 + -4) * (ulong)uVar6;
              *(long *)((long)&lStack_60 + lVar23 + lVar14 + 0x60) =
                   *(long *)(lVar20 + 0x28) + lVar19 + -0x10;
              *(ulong *)((long)&lStack_60 + lVar23 + lVar2 + 0x60) =
                   *plVar18 + (lVar22 + -4) * (ulong)*(ushort *)(plVar18 + 2);
              lVar23 = *plVar21;
              uVar6 = *(ushort *)(plVar21 + 2);
              lVar25 = (ulong)(uVar1 + 1) * 8;
              *(long *)((long)&lStack_60 + lVar25 + lVar16 + 0x60) = lVar20;
              *(ulong *)((long)&lStack_60 + lVar25 + lVar10 + 0x60) = lVar23 + lVar22 * (ulong)uVar6
              ;
              lVar23 = *(long *)(lVar20 + 0x28) + lVar19;
              lVar19 = lVar19 + 0x20;
              *(long *)((long)&lStack_60 + lVar25 + lVar14 + 0x60) = lVar23;
              lVar23 = lVar22 * (ulong)*(ushort *)(plVar18 + 2);
              lVar22 = lVar22 + 8;
              *(long *)((long)&lStack_60 + lVar25 + lVar2 + 0x60) = *plVar18 + lVar23;
            } while (((ulong)bVar5 & 0xfe) != uVar17);
            uVar9 = (ulong)(uint)((int)uVar9 + (int)uVar17);
            if ((bVar5 & 1) == 0) goto LAB__text__00456630;
          }
          lVar22 = *plVar21;
          uVar6 = *(ushort *)(plVar21 + 2);
          lVar19 = uVar9 * 8;
          uVar9 = (ulong)((int)uVar9 + 1);
          *(long *)((long)&lStack_60 + lVar19 + lVar16 + 0x60) = lVar20;
          *(ulong *)((long)&lStack_60 + lVar19 + lVar10 + 0x60) = lVar22 + uVar17 * 4 * (ulong)uVar6
          ;
          *(ulong *)((long)&lStack_60 + lVar19 + lVar14 + 0x60) =
               *(long *)(lVar20 + 0x28) + uVar17 * 0x10;
          *(ulong *)((long)&lStack_60 + lVar19 + lVar2 + 0x60) =
               *plVar18 + uVar17 * 4 * (ulong)*(ushort *)(plVar18 + 2);
        }
LAB__text__00456630:
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
    if (uVar4 < uVar3) {
      lVar15 = *param_1;
      do {
        uVar12 = (ulong)*(ushort *)(lVar15 + uVar11 * 2);
        plVar21 = *(long **)(param_4 + uVar12 * 8);
        bVar5 = *(byte *)(plVar21 + 1);
        if (bVar5 != 0) {
          lVar20 = uVar12 * 8;
          lVar19 = *(long *)(*(long *)(param_2 + lVar20) + 0x20);
          plVar18 = *(long **)(param_5 + lVar20);
          lVar20 = lVar19 + 0x14;
          if (bVar5 == 1) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            lVar22 = 0x10;
            lVar23 = 4;
            do {
              lVar24 = *plVar21;
              uVar4 = (int)uVar9 + (int)uVar12;
              uVar6 = *(ushort *)(plVar21 + 2);
              lVar25 = (ulong)uVar4 * 8;
              uVar12 = uVar12 + 2;
              *(long *)((long)&lStack_60 + lVar25 + lVar16 + 0x60) = lVar20;
              *(ulong *)((long)&lStack_60 + lVar25 + lVar10 + 0x60) =
                   lVar24 + (lVar23 + -4) * (ulong)uVar6;
              *(long *)((long)&lStack_60 + lVar25 + lVar14 + 0x60) =
                   *(long *)(lVar19 + 0x30) + lVar22 + -0x10;
              *(ulong *)((long)&lStack_60 + lVar25 + lVar2 + 0x60) =
                   *plVar18 + (lVar23 + -4) * (ulong)*(ushort *)(plVar18 + 2);
              lVar25 = *plVar21;
              uVar6 = *(ushort *)(plVar21 + 2);
              lVar24 = (ulong)(uVar4 + 1) * 8;
              *(long *)((long)&lStack_60 + lVar24 + lVar16 + 0x60) = lVar20;
              *(ulong *)((long)&lStack_60 + lVar24 + lVar10 + 0x60) = lVar25 + lVar23 * (ulong)uVar6
              ;
              lVar25 = *(long *)(lVar19 + 0x30) + lVar22;
              lVar22 = lVar22 + 0x20;
              *(long *)((long)&lStack_60 + lVar24 + lVar14 + 0x60) = lVar25;
              lVar25 = lVar23 * (ulong)*(ushort *)(plVar18 + 2);
              lVar23 = lVar23 + 8;
              *(long *)((long)&lStack_60 + lVar24 + lVar2 + 0x60) = *plVar18 + lVar25;
            } while (((ulong)bVar5 & 0xfe) != uVar12);
            uVar9 = (ulong)(uint)((int)uVar9 + (int)uVar12);
            if ((bVar5 & 1) == 0) goto LAB__text__00456770;
          }
          lVar23 = *plVar21;
          uVar6 = *(ushort *)(plVar21 + 2);
          lVar22 = uVar9 * 8;
          uVar9 = (ulong)((int)uVar9 + 1);
          *(long *)((long)&lStack_60 + lVar22 + lVar16 + 0x60) = lVar20;
          *(ulong *)((long)&lStack_60 + lVar22 + lVar10 + 0x60) = lVar23 + uVar12 * 4 * (ulong)uVar6
          ;
          *(ulong *)((long)&lStack_60 + lVar22 + lVar14 + 0x60) =
               *(long *)(lVar19 + 0x30) + uVar12 * 0x10;
          *(ulong *)((long)&lStack_60 + lVar22 + lVar2 + 0x60) =
               *plVar18 + uVar12 * 4 * (ulong)*(ushort *)(plVar18 + 2);
        }
LAB__text__00456770:
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar3);
    }
    thunk_FUN__text__00422210();
    uVar11 = (ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar9 = 0;
      do {
        pbVar13 = *(byte **)(param_2 + (ulong)*(ushort *)(*param_1 + uVar9 * 2) * 8);
        bVar5 = *pbVar13;
        if (bVar5 != 0) {
          lVar10 = *(long *)(pbVar13 + 0x20);
          if (bVar5 < 4) {
            lVar14 = 0;
          }
          else {
            lVar16 = 0;
            lVar14 = 0;
            do {
              lVar14 = lVar14 + 4;
              uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar16);
              puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar16);
              puVar7[1] = uVar8;
              *puVar7 = uVar8;
              uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar16 + 0x10);
              lVar2 = *(long *)(lVar10 + 0x30) + lVar16;
              *(undefined8 *)(lVar2 + 0x18) = uVar8;
              *(undefined8 *)(lVar2 + 0x10) = uVar8;
              uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar16 + 0x20);
              lVar2 = *(long *)(lVar10 + 0x30) + lVar16;
              *(undefined8 *)(lVar2 + 0x28) = uVar8;
              *(undefined8 *)(lVar2 + 0x20) = uVar8;
              uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar16 + 0x30);
              lVar2 = *(long *)(lVar10 + 0x30) + lVar16;
              lVar16 = lVar16 + 0x40;
              *(undefined8 *)(lVar2 + 0x38) = uVar8;
              *(undefined8 *)(lVar2 + 0x30) = uVar8;
            } while (((ulong)bVar5 & 0xfc) * 0x10 != lVar16);
          }
          uVar11 = (ulong)bVar5 & 3;
          if ((bVar5 & 3) != 0) {
            lVar14 = lVar14 << 4;
            do {
              uVar11 = uVar11 - 1;
              uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + lVar14);
              puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar14);
              puVar7[1] = uVar8;
              *puVar7 = uVar8;
              lVar14 = lVar14 + 0x10;
            } while (uVar11 != 0);
          }
          uVar11 = (ulong)*(uint *)(param_1 + 1);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar11);
    }
    uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
    for (; uVar11 < uVar9; uVar11 = uVar11 + 1) {
      pbVar13 = *(byte **)(param_2 + (ulong)*(ushort *)(*param_1 + uVar11 * 2) * 8);
      bVar5 = *pbVar13;
      if (bVar5 != 0) {
        lVar10 = *(long *)(pbVar13 + 0x20);
        if (bVar5 < 4) {
          lVar14 = 0;
        }
        else {
          lVar16 = 0;
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 4;
            uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar16 + 8);
            puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x28) + lVar16);
            puVar7[1] = uVar8;
            *puVar7 = uVar8;
            lVar2 = *(long *)(lVar10 + 0x28) + lVar16;
            uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar16 + 0x18);
            *(undefined8 *)(lVar2 + 0x18) = uVar8;
            *(undefined8 *)(lVar2 + 0x10) = uVar8;
            lVar2 = *(long *)(lVar10 + 0x28) + lVar16;
            uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar16 + 0x28);
            *(undefined8 *)(lVar2 + 0x28) = uVar8;
            *(undefined8 *)(lVar2 + 0x20) = uVar8;
            lVar2 = *(long *)(lVar10 + 0x30) + lVar16;
            lVar15 = *(long *)(lVar10 + 0x28) + lVar16;
            lVar16 = lVar16 + 0x40;
            uVar8 = *(undefined8 *)(lVar2 + 0x38);
            *(undefined8 *)(lVar15 + 0x38) = uVar8;
            *(undefined8 *)(lVar15 + 0x30) = uVar8;
          } while (((ulong)bVar5 & 0xfc) * 0x10 != lVar16);
        }
        uVar9 = (ulong)bVar5 & 3;
        if ((bVar5 & 3) != 0) {
          lVar14 = lVar14 << 4;
          do {
            uVar9 = uVar9 - 1;
            uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x30) + lVar14 + 8);
            puVar7 = (undefined8 *)(*(long *)(lVar10 + 0x28) + lVar14);
            puVar7[1] = uVar8;
            *puVar7 = uVar8;
            lVar14 = lVar14 + 0x10;
          } while (uVar9 != 0);
        }
        uVar9 = (ulong)*(uint *)((long)param_1 + 0xc);
      }
    }
  }
  return;
}


