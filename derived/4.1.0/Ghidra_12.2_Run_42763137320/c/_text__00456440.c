/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00456440; name: FUN_.text__00456440
 */


void FUN__text__00456440(long param_1,ulong param_2,long param_3,undefined4 param_4,long param_5,
                        long param_6)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 auStack_50 [4];
  long lStack_40;
  undefined4 local_34;
  
  if ((int)param_2 != 0) {
    uVar12 = (param_2 >> 0x1d & 0x7fffffff8) + 0xf & 0xffffffff0;
    lVar4 = (long)auStack_50 + (0x10 - uVar12);
    lVar9 = lVar4 - uVar12;
    lVar10 = lVar9 - uVar12;
    lVar6 = lVar10 - uVar12;
    lVar11 = lVar6 - uVar12;
    lVar5 = lVar11 - uVar12;
    uVar12 = 0;
    uVar13 = 0;
    local_34 = param_4;
    do {
      uVar7 = (ulong)*(ushort *)(param_1 + uVar12 * 2);
      lVar16 = uVar7 * 8;
      plVar14 = *(long **)(param_5 + lVar16);
      bVar1 = *(byte *)(plVar14 + 1);
      if (bVar1 != 0) {
        uVar15 = 0;
        plVar8 = *(long **)(param_6 + uVar7 * 8);
        lVar16 = *(long *)(*(long *)(param_3 + lVar16) + 0x20);
        do {
          lVar17 = *plVar14;
          lVar19 = uVar15 * 4;
          lVar3 = uVar13 * 8;
          uVar2 = *(ushort *)(plVar14 + 2);
          *(long *)(lVar9 + lVar3) = lVar16;
          *(long *)(lVar10 + lVar3) = lVar16 + 0x14;
          uVar13 = (ulong)((int)uVar13 + 1);
          lVar18 = uVar15 * 0x10;
          uVar15 = uVar15 + 1;
          *(ulong *)(lVar4 + lVar3) = lVar17 + lVar19 * (ulong)uVar2;
          *(long *)(lVar6 + lVar3) = *(long *)(lVar16 + 0x28) + lVar18;
          *(long *)(lVar11 + lVar3) = *(long *)(lVar16 + 0x30) + lVar18;
          *(ulong *)(lVar5 + lVar3) = *plVar8 + lVar19 * (ulong)*(ushort *)(plVar8 + 2);
        } while (uVar15 != bVar1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != (param_2 & 0xffffffff));
    *(int *)(lVar5 + -0x10) = (int)uVar13;
    FUN__text__0041f170(lVar4,lVar5,lVar9,lVar6,lVar10,lVar11,&local_34,1);
  }
  return;
}


