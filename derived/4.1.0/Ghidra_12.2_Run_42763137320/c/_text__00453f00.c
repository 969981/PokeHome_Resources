/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00453f00; name: FUN_.text__00453f00
 */


void FUN__text__00453f00(long *param_1,long param_2,undefined4 param_3,long param_4,long *param_5,
                        long param_6,long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined4 auStack_90 [8];
  ulong local_70;
  undefined4 local_64;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 != 0) {
    uVar10 = (ulong)*(uint *)(param_1 + 2) * 8 + 0xf & 0xffffffff0;
    lVar9 = -0x70 - uVar10;
    lVar15 = lVar9 - uVar10;
    lVar12 = lVar15 - uVar10;
    param_5 = (long *)*param_5;
    bVar4 = *(byte *)(param_5 + 1);
    uVar14 = (ulong)bVar4;
    lVar1 = lVar12 - ((ulong)((uint)bVar4 * 8 + 0xf) & 0xff0);
    local_70 = uVar14;
    local_64 = param_3;
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        lVar17 = 4;
        do {
          plVar20 = (long *)((long)auStack_90 + uVar16 * 8 + lVar1 + 0x90);
          uVar16 = uVar16 + 2;
          *plVar20 = *param_5 + (lVar17 + -4) * (ulong)*(ushort *)(param_5 + 2);
          lVar6 = lVar17 * (ulong)*(ushort *)(param_5 + 2);
          lVar17 = lVar17 + 8;
          plVar20[1] = *param_5 + lVar6;
        } while ((uVar14 & 0xfe) != uVar16);
      }
      uVar14 = local_70;
      if ((local_70 & 1) != 0) {
        *(ulong *)((long)auStack_90 + uVar16 * 8 + lVar1 + 0x90) =
             *param_5 + uVar16 * *(ushort *)(param_5 + 2) * 4;
      }
    }
    lVar1 = lVar1 - uVar10;
    lVar17 = lVar1 - uVar10;
    lVar6 = lVar17 - uVar10;
    uVar3 = *(uint *)(param_1 + 1);
    uVar10 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar16 = 0;
    }
    else {
      lVar19 = *param_1;
      uVar18 = 0;
      uVar16 = 0;
      do {
        lVar25 = (ulong)*(ushort *)(lVar19 + uVar18 * 2) * 8;
        plVar20 = *(long **)(param_4 + lVar25);
        bVar4 = *(byte *)(plVar20 + 1);
        if (bVar4 != 0) {
          uVar21 = 0;
          uVar22 = *(undefined8 *)(param_6 + lVar25);
          lVar24 = *(long *)(*(long *)(param_2 + lVar25) + 0x20);
          lVar23 = *(long *)(param_7 + lVar25);
          lVar25 = *(long *)(param_8 + lVar25);
          do {
            uVar5 = *(ushort *)(plVar20 + 2);
            lVar7 = uVar16 * 8;
            uVar16 = (ulong)((int)uVar16 + 1);
            lVar27 = *plVar20;
            *(long *)((long)auStack_90 + lVar7 + lVar15 + 0x90) = lVar24;
            *(ulong *)((long)auStack_90 + lVar7 + lVar9 + 0x90) = lVar27 + uVar21 * uVar5 * 4;
            lVar28 = *(long *)(lVar24 + 0x28);
            *(undefined8 *)((long)auStack_90 + lVar7 + lVar1 + 0x90) = uVar22;
            lVar27 = uVar21 * ((int)uVar14 + 3U & 0x1fc) * 4;
            *(long *)((long)auStack_90 + lVar7 + lVar17 + 0x90) = lVar23 + lVar27;
            *(long *)((long)auStack_90 + lVar7 + lVar6 + 0x90) = lVar25 + lVar27;
            lVar27 = uVar21 * 0x10;
            uVar21 = uVar21 + 1;
            *(long *)((long)auStack_90 + lVar7 + lVar12 + 0x90) = lVar28 + lVar27;
          } while (uVar21 != bVar4);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar10);
    }
    if (uVar3 < uVar2) {
      iVar13 = (int)local_70;
      lVar19 = *param_1;
      do {
        uVar14 = (ulong)*(ushort *)(lVar19 + uVar10 * 2);
        plVar20 = *(long **)(param_4 + uVar14 * 8);
        bVar4 = *(byte *)(plVar20 + 1);
        if (bVar4 != 0) {
          lVar25 = uVar14 * 8;
          uVar14 = 0;
          lVar23 = *(long *)(*(long *)(param_2 + lVar25) + 0x20);
          uVar22 = *(undefined8 *)(param_6 + lVar25);
          lVar24 = *(long *)(param_7 + lVar25);
          lVar25 = *(long *)(param_8 + lVar25);
          do {
            uVar5 = *(ushort *)(plVar20 + 2);
            lVar7 = uVar16 * 8;
            uVar16 = (ulong)((int)uVar16 + 1);
            lVar27 = *plVar20;
            *(long *)((long)auStack_90 + lVar7 + lVar15 + 0x90) = lVar23 + 0x14;
            *(ulong *)((long)auStack_90 + lVar7 + lVar9 + 0x90) = lVar27 + uVar14 * uVar5 * 4;
            lVar26 = *(long *)(lVar23 + 0x30);
            *(undefined8 *)((long)auStack_90 + lVar7 + lVar1 + 0x90) = uVar22;
            lVar28 = uVar14 * (iVar13 + 3U & 0x1fc) * 4;
            *(long *)((long)auStack_90 + lVar7 + lVar6 + 0x90) = lVar25 + lVar28;
            lVar27 = uVar14 * 0x10;
            uVar14 = uVar14 + 1;
            *(long *)((long)auStack_90 + lVar7 + lVar17 + 0x90) = lVar24 + lVar28;
            *(long *)((long)auStack_90 + lVar7 + lVar12 + 0x90) = lVar26 + lVar27;
          } while (uVar14 != bVar4);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar2);
    }
    uVar14 = local_70;
    *(int *)((long)auStack_90 + lVar6 + 0x78) = (int)uVar16;
    *(undefined4 *)((long)auStack_90 + lVar6 + 0x70) = 1;
    *(int *)((long)auStack_90 + lVar6 + 0x80) = (int)uVar14;
    FUN__text__0041f150();
    uVar14 = (ulong)*(uint *)(param_1 + 1);
    if (*(uint *)(param_1 + 1) == 0) {
      uVar14 = 0;
    }
    else {
      uVar10 = 0;
      do {
        pbVar11 = *(byte **)(param_2 + (ulong)*(ushort *)(*param_1 + uVar10 * 2) * 8);
        bVar4 = *pbVar11;
        if (bVar4 != 0) {
          lVar9 = *(long *)(pbVar11 + 0x20);
          if (bVar4 < 4) {
            lVar12 = 0;
          }
          else {
            lVar15 = 0;
            lVar12 = 0;
            do {
              lVar12 = lVar12 + 4;
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar15);
              puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15);
              puVar8[1] = uVar22;
              *puVar8 = uVar22;
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar15 + 0x10);
              lVar1 = *(long *)(lVar9 + 0x30) + lVar15;
              *(undefined8 *)(lVar1 + 0x18) = uVar22;
              *(undefined8 *)(lVar1 + 0x10) = uVar22;
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar15 + 0x20);
              lVar1 = *(long *)(lVar9 + 0x30) + lVar15;
              *(undefined8 *)(lVar1 + 0x28) = uVar22;
              *(undefined8 *)(lVar1 + 0x20) = uVar22;
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar15 + 0x30);
              lVar1 = *(long *)(lVar9 + 0x30) + lVar15;
              lVar15 = lVar15 + 0x40;
              *(undefined8 *)(lVar1 + 0x38) = uVar22;
              *(undefined8 *)(lVar1 + 0x30) = uVar22;
            } while (((ulong)bVar4 & 0xfc) * 0x10 != lVar15);
          }
          uVar14 = (ulong)bVar4 & 3;
          if ((bVar4 & 3) != 0) {
            lVar12 = lVar12 << 4;
            do {
              uVar14 = uVar14 - 1;
              uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x28) + lVar12);
              puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar12);
              puVar8[1] = uVar22;
              *puVar8 = uVar22;
              lVar12 = lVar12 + 0x10;
            } while (uVar14 != 0);
          }
          uVar14 = (ulong)*(uint *)(param_1 + 1);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar14);
    }
    uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
    for (; uVar14 < uVar10; uVar14 = uVar14 + 1) {
      pbVar11 = *(byte **)(param_2 + (ulong)*(ushort *)(*param_1 + uVar14 * 2) * 8);
      bVar4 = *pbVar11;
      if (bVar4 != 0) {
        lVar9 = *(long *)(pbVar11 + 0x20);
        if (bVar4 < 4) {
          lVar12 = 0;
        }
        else {
          lVar15 = 0;
          lVar12 = 0;
          do {
            lVar12 = lVar12 + 4;
            uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15 + 8);
            puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x28) + lVar15);
            puVar8[1] = uVar22;
            *puVar8 = uVar22;
            lVar1 = *(long *)(lVar9 + 0x28) + lVar15;
            uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15 + 0x18);
            *(undefined8 *)(lVar1 + 0x18) = uVar22;
            *(undefined8 *)(lVar1 + 0x10) = uVar22;
            lVar1 = *(long *)(lVar9 + 0x28) + lVar15;
            uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15 + 0x28);
            *(undefined8 *)(lVar1 + 0x28) = uVar22;
            *(undefined8 *)(lVar1 + 0x20) = uVar22;
            lVar1 = *(long *)(lVar9 + 0x30) + lVar15;
            lVar17 = *(long *)(lVar9 + 0x28) + lVar15;
            lVar15 = lVar15 + 0x40;
            uVar22 = *(undefined8 *)(lVar1 + 0x38);
            *(undefined8 *)(lVar17 + 0x38) = uVar22;
            *(undefined8 *)(lVar17 + 0x30) = uVar22;
          } while (((ulong)bVar4 & 0xfc) * 0x10 != lVar15);
        }
        uVar10 = (ulong)bVar4 & 3;
        if ((bVar4 & 3) != 0) {
          lVar12 = lVar12 << 4;
          do {
            uVar10 = uVar10 - 1;
            uVar22 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + lVar12 + 8);
            puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x28) + lVar12);
            puVar8[1] = uVar22;
            *puVar8 = uVar22;
            lVar12 = lVar12 + 0x10;
          } while (uVar10 != 0);
        }
        uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
      }
    }
  }
  return;
}


