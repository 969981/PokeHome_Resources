/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00453c90; name: FUN_.text__00453c90
 */


void FUN__text__00453c90(long param_1,ulong param_2,long param_3,undefined4 param_4,long param_5,
                        long *param_6,long param_7,long param_8,long param_9)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long alStack_b0 [2];
  undefined4 auStack_a0 [8];
  ulong local_80 [3];
  undefined4 local_64;
  
  uVar11 = (uint)param_2;
  if (uVar11 != 0) {
    uVar15 = (param_2 >> 0x1d & 0x7fffffff8) + 0xf & 0xffffffff0;
    lVar8 = (long)local_80 - uVar15;
    lVar5 = lVar8 - uVar15;
    lVar6 = lVar5 - uVar15;
    lVar9 = lVar6 - uVar15;
    lVar10 = lVar9 - uVar15;
    param_6 = (long *)*param_6;
    bVar1 = *(byte *)(param_6 + 1);
    lVar7 = lVar10 - ((ulong)((uint)bVar1 * 8 + 0xf) & 0xff0);
    local_80[1] = param_7;
    local_80[2] = param_8;
    local_64 = param_4;
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        lVar12 = 4;
        do {
          plVar17 = (long *)(lVar7 + uVar13 * 8);
          uVar13 = uVar13 + 2;
          *plVar17 = *param_6 + (lVar12 + -4) * (ulong)*(ushort *)(param_6 + 2);
          lVar14 = lVar12 * (ulong)*(ushort *)(param_6 + 2);
          lVar12 = lVar12 + 8;
          plVar17[1] = *param_6 + lVar14;
        } while (((ulong)bVar1 & 0xfe) != uVar13);
      }
      if ((bVar1 & 1) != 0) {
        *(ulong *)(lVar7 + uVar13 * 8) = *param_6 + uVar13 * *(ushort *)(param_6 + 2) * 4;
      }
    }
    lVar12 = lVar7 - uVar15;
    lVar14 = lVar12 - uVar15;
    lVar16 = lVar14 - uVar15;
    uVar15 = 0;
    uVar13 = 0;
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    local_80[0] = (ulong)bVar1;
    do {
      lVar22 = (ulong)*(ushort *)(param_1 + uVar15 * 2) * 8;
      plVar17 = *(long **)(param_5 + lVar22);
      bVar2 = *(byte *)(plVar17 + 1);
      if (bVar2 != 0) {
        uVar18 = 0;
        lVar20 = *(long *)(*(long *)(param_3 + lVar22) + 0x20);
        uVar19 = *(undefined8 *)(local_80[1] + lVar22);
        lVar21 = *(long *)(local_80[2] + lVar22);
        lVar22 = *(long *)(param_9 + lVar22);
        do {
          uVar3 = *(ushort *)(plVar17 + 2);
          lVar4 = uVar13 * 8;
          uVar13 = (ulong)((int)uVar13 + 1);
          lVar24 = *plVar17;
          *(long *)(lVar5 + lVar4) = lVar20;
          *(long *)(lVar6 + lVar4) = lVar20 + 0x14;
          lVar25 = uVar18 * 0x10;
          *(ulong *)(lVar8 + lVar4) = lVar24 + uVar18 * uVar3 * 4;
          *(long *)(lVar9 + lVar4) = *(long *)(lVar20 + 0x28) + lVar25;
          lVar23 = uVar18 * (bVar1 + 3 & 0x1fc);
          uVar18 = uVar18 + 1;
          lVar24 = *(long *)(lVar20 + 0x30);
          *(undefined8 *)(lVar12 + lVar4) = uVar19;
          lVar23 = lVar23 * 4;
          *(long *)(lVar10 + lVar4) = lVar24 + lVar25;
          *(long *)(lVar14 + lVar4) = lVar21 + lVar23;
          *(long *)(lVar16 + lVar4) = lVar22 + lVar23;
        } while (uVar18 != bVar2);
      }
      uVar18 = local_80[0];
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar11);
    *(int *)(lVar16 + -0x18) = (int)uVar13;
    *(int *)(lVar16 + -0x10) = (int)uVar18;
    *(long *)(lVar16 + -0x30) = lVar16;
    *(undefined4 **)(lVar16 + -0x28) = &local_64;
    *(undefined4 *)(lVar16 + -0x20) = 1;
    FUN__text__0041f180(lVar8,lVar5,lVar9,lVar6,lVar10,lVar7,lVar12,lVar14);
  }
  return;
}


