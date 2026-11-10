/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530380; name: FUN_.text__00530380
 */


undefined8 FUN__text__00530380(long *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *__dest;
  ulong *__dest_00;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar20 = *(float *)((long)param_2 + 0x84);
  fVar21 = *(float *)(param_2 + 0x11);
  uVar18 = *param_2;
  puVar16 = (ulong *)*param_1;
  uVar14 = *(uint *)(param_1 + 1);
  uVar15 = (ulong)uVar14;
  if (uVar14 == 0) {
    __dest_00 = puVar16;
LAB__text__00530420:
    if (puVar16 == (ulong *)0x0) {
      uVar10 = *(uint *)((long)param_1 + 0xc);
      lVar17 = 0;
      if (uVar10 <= uVar14) {
        iVar1 = uVar10 + (uVar10 >> 1);
        if (uVar10 == 0) {
          iVar1 = 1;
        }
        uVar15 = FUN__text__00530a70(param_1,iVar1);
        if ((uVar15 & 1) == 0) {
          return 0x34;
        }
        if (*(uint *)((long)param_1 + 0xc) <= uVar14) {
          return 0x34;
        }
        uVar14 = *(uint *)(param_1 + 1);
        lVar17 = *param_1;
      }
      *(uint *)(param_1 + 1) = uVar14 + 1;
      if (lVar17 == 0) {
        return 0x34;
      }
      __dest = (undefined8 *)(lVar17 + (ulong)uVar14 * 0x90);
      *(undefined4 *)(__dest + 0x10) = 0;
      *(undefined8 *)((long)__dest + 0x84) = 0x7f7fffff;
      *__dest = 0;
      memcpy(__dest,param_2,0x90);
      *(float *)((long)__dest + 0x84) = fVar20;
      goto LAB__text__00530648;
    }
  }
  else {
    uVar11 = 0;
    uVar12 = uVar15;
    do {
      uVar9 = (uint)uVar11;
      uVar10 = uVar9 + (int)(uVar12 >> 1);
      if (puVar16[(ulong)uVar10 * 0x12] < uVar18) {
        uVar9 = uVar10 + 1;
      }
      uVar11 = (ulong)uVar9;
      uVar13 = uVar12 - (puVar16[(ulong)uVar10 * 0x12] < uVar18);
      uVar12 = uVar13 >> 1;
    } while (1 < uVar13);
    __dest_00 = puVar16 + uVar11 * 0x12;
    if (uVar11 == uVar15) goto LAB__text__00530420;
    bVar2 = true;
    do {
      while( true ) {
        uVar14 = (uint)uVar15;
        if (*__dest_00 != uVar18) goto LAB__text__0053056c;
        fVar22 = *(float *)(__dest_00 + 0x11);
        fVar23 = *(float *)((long)__dest_00 + 0x8c);
        fVar24 = *(float *)((long)param_2 + 0x8c);
        bVar3 = false;
        bVar5 = false;
        bVar7 = false;
        if (*(float *)((long)__dest_00 + 0x84) <= fVar20) {
          bVar3 = false;
          bVar5 = false;
          bVar7 = true;
          if (!NAN(fVar22) && !NAN(fVar21)) {
            bVar3 = fVar22 < fVar21;
            bVar5 = fVar22 == fVar21;
            bVar7 = false;
          }
        }
        bVar4 = false;
        bVar6 = false;
        bVar8 = false;
        if (bVar5 || bVar3 != bVar7) {
          bVar4 = false;
          bVar6 = false;
          bVar8 = true;
          if (!NAN(fVar23) && !NAN(fVar24)) {
            bVar4 = fVar23 < fVar24;
            bVar6 = fVar23 == fVar24;
            bVar8 = false;
          }
        }
        if (bVar6 || bVar4 != bVar8) {
          return 1;
        }
        bVar3 = true;
        bVar5 = false;
        if (fVar20 <= *(float *)((long)__dest_00 + 0x84)) {
          bVar3 = false;
          bVar5 = true;
          if (!NAN(fVar22) && !NAN(fVar21)) {
            bVar3 = fVar22 < fVar21;
            bVar5 = false;
          }
        }
        bVar7 = true;
        bVar4 = false;
        if (bVar3 == bVar5) {
          bVar7 = false;
          bVar4 = true;
          if (!NAN(fVar23) && !NAN(fVar24)) {
            bVar7 = fVar23 < fVar24;
            bVar4 = false;
          }
        }
        if (bVar7 == bVar4) break;
LAB__text__005304dc:
        uVar14 = (uint)uVar15;
        __dest_00 = __dest_00 + 0x12;
        puVar16 = (ulong *)*param_1;
        if (__dest_00 == puVar16 + uVar15 * 0x12) goto LAB__text__0053056c;
      }
      if (bVar2) {
        memcpy(__dest_00,param_2,0x90);
        *(float *)((long)__dest_00 + 0x84) = fVar20;
        *(float *)(__dest_00 + 0x11) = fVar21;
        bVar2 = false;
        uVar15 = (ulong)*(uint *)(param_1 + 1);
        goto LAB__text__005304dc;
      }
      uVar15 = (ulong)(uVar14 - 1);
      if (__dest_00 < puVar16 + uVar15 * 0x12) {
        memmove(__dest_00,__dest_00 + 0x12,
                (ulong)(uint)((int)(puVar16 + uVar15 * 0x12) - (int)__dest_00));
        uVar15 = (ulong)((int)param_1[1] - 1);
      }
      bVar2 = false;
      uVar14 = (uint)uVar15;
      *(uint *)(param_1 + 1) = uVar14;
      puVar16 = (ulong *)*param_1;
    } while (__dest_00 != puVar16 + uVar15 * 0x12);
LAB__text__0053056c:
    if (!bVar2) {
      return 1;
    }
  }
  uVar10 = *(uint *)((long)param_1 + 0xc);
  if (uVar14 < uVar10) {
    puVar19 = puVar16;
  }
  else {
    iVar1 = uVar10 + (uVar10 >> 1);
    if (uVar10 == 0) {
      iVar1 = 1;
    }
    uVar15 = FUN__text__00530a70(param_1,iVar1);
    if ((uVar15 & 1) == 0) {
      return 0x34;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar14) {
      return 0x34;
    }
    uVar14 = *(uint *)(param_1 + 1);
    puVar19 = (ulong *)*param_1;
  }
  uVar15 = ((long)__dest_00 - (long)puVar16 >> 4) * 0x38e38e39;
  uVar18 = uVar15 & 0xffffffff;
  uVar10 = (uint)uVar15;
  iVar1 = uVar14 - uVar10;
  puVar16 = puVar19 + uVar18 * 0x12;
  if (uVar10 <= uVar14 && iVar1 != 0) {
    memmove(puVar16 + 0x12,puVar16,(ulong)(uint)(iVar1 * 0x90));
  }
  if (puVar19 != (ulong *)0x0) {
    *puVar16 = 0;
    *(undefined4 *)(puVar19 + uVar18 * 0x12 + 0x10) = 0;
    *(undefined8 *)((long)puVar19 + uVar18 * 0x90 + 0x84) = 0x7f7fffff;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (*param_1 == 0) {
    return 0x34;
  }
  __dest = (undefined8 *)(*param_1 + uVar18 * 0x90);
  memcpy(__dest,param_2,0x90);
  *(float *)((long)__dest + 0x84) = fVar20;
LAB__text__00530648:
  *(float *)(__dest + 0x11) = fVar21;
  return 1;
}


