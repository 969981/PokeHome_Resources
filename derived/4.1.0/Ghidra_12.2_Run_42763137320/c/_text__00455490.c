/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00455490; name: FUN_.text__00455490
 */


void FUN__text__00455490(long param_1,ulong param_2,long param_3,uint param_4,long param_5,
                        long *param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lStack_80;
  long *local_78;
  ulong local_70;
  ulong local_68;
  
  if ((int)param_2 != 0) {
    local_68 = param_2 >> 0x20;
    uVar13 = *(uint *)(*param_6 + 8);
    uVar14 = local_68 * 8 + 0xf & 0xffffffff0;
    local_70 = (ulong)uVar13 & 0xff;
    lVar12 = (-0x80 - uVar14) - uVar14;
    lVar9 = lVar12 - uVar14;
    lVar10 = lVar9 - uVar14;
    uVar15 = 0;
    iVar11 = 0;
    local_78 = param_6;
    do {
      uVar23 = (ulong)*(ushort *)(param_1 + uVar15 * 2);
      lVar22 = uVar23 * 8;
      bVar5 = *(byte *)(*(long **)(param_5 + lVar22) + 1);
      if (bVar5 != 0) {
        lVar17 = 0;
        uVar19 = *(undefined8 *)(param_7 + lVar22);
        uVar18 = 0;
        lVar20 = *(long *)(param_8 + lVar22);
        uVar16 = 0;
        lVar21 = **(long **)(param_5 + lVar22);
        lVar22 = *(long *)(param_9 + lVar22);
        lVar24 = *(long *)(*(long *)(param_3 + uVar23 * 8) + 0x20);
        do {
          lVar1 = lVar21 + uVar18 * 4;
          lVar4 = *(long *)(lVar24 + 0x30);
          lVar6 = (ulong)(uint)(iVar11 + (int)uVar16) * 8;
          uVar18 = (ulong)((int)uVar18 + param_4);
          uVar8 = *(undefined8 *)(lVar1 + (ulong)param_4 * 4 + -8);
          lVar25 = uVar16 * 0x10;
          uVar16 = uVar16 + 1;
          puVar7 = (undefined8 *)(*(long *)(lVar24 + 0x28) + lVar25);
          puVar7[1] = uVar8;
          *puVar7 = uVar8;
          puVar7 = (undefined8 *)(lVar4 + lVar25);
          puVar7[1] = uVar8;
          *puVar7 = uVar8;
          *(long *)((long)&lStack_80 + lVar6 + (-0x80 - uVar14) + 0x80) = lVar1;
          *(undefined8 *)((long)&lStack_80 + lVar6 + lVar12 + 0x80) = uVar19;
          *(long *)((long)&lStack_80 + lVar6 + lVar9 + 0x80) = lVar20 + lVar17;
          lVar1 = lVar22 + lVar17;
          lVar17 = lVar17 + ((ulong)((uVar13 & 0xff) * 4 + 0xc) & 0x7f0);
          *(long *)((long)&lStack_80 + lVar6 + lVar10 + 0x80) = lVar1;
        } while (bVar5 != uVar16);
        iVar11 = iVar11 + (int)uVar16;
      }
      uVar23 = local_70;
      uVar15 = uVar15 + 1;
    } while (uVar15 != (param_2 & 0xffffffff));
    iVar11 = (int)local_70;
    lVar10 = lVar10 - ((ulong)(iVar11 * 8 + 0xf) & 0xff0);
    if (iVar11 != 0) {
      lVar12 = *(long *)*local_78;
      if (iVar11 == 1) {
        uVar15 = 0;
      }
      else {
        uVar13 = 0;
        uVar15 = 0;
        uVar14 = local_70 & 0xfe;
        do {
          uVar2 = param_4 + uVar13;
          uVar16 = (ulong)uVar13;
          uVar13 = uVar13 + param_4 * 2;
          plVar3 = (long *)((long)&lStack_80 + uVar15 * 8 + lVar10 + 0x80);
          uVar15 = uVar15 + 2;
          *plVar3 = lVar12 + uVar16 * 4;
          plVar3[1] = lVar12 + (ulong)uVar2 * 4;
        } while (uVar14 != uVar15);
      }
      if ((uVar23 & 1) != 0) {
        *(ulong *)((long)&lStack_80 + uVar15 * 8 + lVar10 + 0x80) =
             lVar12 + (ulong)((int)uVar15 * param_4) * 4;
      }
    }
    thunk_FUN__text__00420400();
  }
  return;
}


