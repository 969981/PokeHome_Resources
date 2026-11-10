/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da3f0; name: FUN_.text__004da3f0
 */


/* WARNING: Removing unreachable block (ram,0x004da560) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004da3f0(long param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  size_t __n;
  float fVar7;
  ushort *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ushort uVar17;
  float fVar18;
  
  if (*(int *)((long)param_2 + 0x2c) == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  plVar1 = (long *)(param_1 + 0x80);
  if (*(short *)(param_1 + 0x92) == 0) {
    if (*plVar1 == 0) {
      if (*(short *)((long)param_2 + 0x12) == 0) goto LAB__text__004da5dc;
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
LAB__text__004da5dc:
      if (*(int *)((long)param_2 + 0x2c) == 0x2d) {
        iVar9 = 0x2b;
        goto LAB__text__004da770;
      }
    }
    lVar10 = param_2[1];
    *plVar1 = *param_2;
    *(long *)(param_1 + 0x88) = lVar10;
    lVar12 = param_2[4];
    lVar10 = param_2[2];
    lVar11 = param_2[3];
    *(int *)(param_1 + 0xa8) = (int)param_2[5];
    *(long *)(param_1 + 0x98) = lVar11;
    *(long *)(param_1 + 0xa0) = lVar12;
    *(long *)(param_1 + 0x90) = lVar10;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    lVar10 = *(long *)(param_1 + 0xb0);
    puVar8 = _DAT_008a4b70;
  }
  else {
    lVar10 = *(long *)(param_1 + 0xb0);
    puVar8 = _DAT_008a4b70;
  }
  _DAT_008a4b70 = puVar8;
  if (lVar10 == 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x88);
    *(short *)(param_1 + 0xc0) = (short)*(undefined4 *)puVar8;
    iVar9 = FUN__text__0041ec00(param_1 + 0xb0);
    if (iVar9 != 1) {
      iVar9 = 2;
      goto LAB__text__004da770;
    }
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar18 = *(float *)(*(long *)(param_1 + 0xe8) + 700);
      fVar7 = (float)NEON_ucvtf((uint)*puVar8);
      fVar18 = ((float)*(int *)(*(long *)(param_1 + 0xe8) + 0x330) + fVar7 * fVar18) / fVar18;
      uVar17 = 0x3f00;
      if (fVar18 <= 0.0) {
        uVar17 = 0xbf00;
      }
      uVar14 = (uint)((float)((uint)uVar17 << 0x10) + fVar18);
      if (0 < (int)uVar14) {
        bVar6 = *(byte *)(param_1 + 0xb8);
        if (bVar6 != 0) {
          __n = (ulong)uVar14 << 2;
          if (bVar6 == 1) {
            lVar11 = 0;
          }
          else {
            uVar15 = (ulong)bVar6 & 0xfe;
            lVar10 = 4;
            do {
              lVar11 = lVar10;
              memset((void *)(*(long *)(param_1 + 0xb0) +
                             (lVar11 + -4) * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n);
              memset((void *)(*(long *)(param_1 + 0xb0) +
                             lVar11 * (ulong)*(ushort *)(param_1 + 0xc0)),0,__n);
              uVar15 = uVar15 - 2;
              lVar10 = lVar11 + 8;
            } while (uVar15 != 0);
            lVar11 = lVar11 + 4;
          }
          if ((bVar6 & 1) != 0) {
            memset((void *)(*(long *)(param_1 + 0xb0) + lVar11 * (ulong)*(ushort *)(param_1 + 0xc0))
                   ,0,__n);
          }
        }
        *(uint *)(param_1 + 0x3c) = uVar14;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  plVar13 = (long *)(param_1 + 0xb0);
  lVar10 = *(long *)(param_1 + 0xe8);
  puVar2 = (uint *)(lVar10 + 0x313);
  uVar17 = *(ushort *)(param_1 + 0x92);
  if (((*puVar2 >> 0x16 & 1) == 0) && (iVar9 = *(int *)(lVar10 + 0x30c), iVar9 != 0)) {
    if ((int)(uint)uVar17 <= iVar9) {
      *(uint *)(lVar10 + 0x30c) = iVar9 - (uint)uVar17;
      *puVar2 = *puVar2 & 0xfe3fffff;
      *(undefined2 *)(param_1 + 0x92) = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))();
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x8c) = 0x2b;
      *(undefined8 *)(param_1 + 0x94) = 0;
      *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
      *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 0x12) = 0;
      *(undefined8 *)((long)param_2 + 0x14) = 0;
      iVar9 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        iVar9 = 0x11;
      }
      goto LAB__text__004da770;
    }
    *(int *)(param_1 + 0x38) = iVar9;
    *(ushort *)(param_1 + 0x92) = uVar17 - (short)iVar9;
    *(undefined4 *)(lVar10 + 0x30c) = 0;
    *puVar2 = *puVar2 & 0xfe3fffff;
    uVar17 = *(ushort *)(param_1 + 0x92);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  lVar10 = param_1 + 0x10;
  iVar9 = FUN__text__0041b380(lVar10,plVar1,plVar13);
  iVar5 = *(int *)(*(long *)(param_1 + 0xe0) + 0x108);
  uVar3 = 0;
  if (iVar5 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0x100);
  }
  FUN__text__004af620(uVar3,iVar5,plVar1,plVar13,iVar4,uVar17 - *(short *)(param_1 + 0x92));
  iVar5 = *(int *)(param_1 + 0x9c);
  if ((iVar5 == -1) || (*(char *)(param_1 + 0xf1) != '\0')) {
    uVar16 = FUN__text__0041ac60(lVar10);
    *(undefined4 *)(param_1 + 0xd0) = uVar16;
    if (*(short *)(param_1 + 0x92) == 0) goto LAB__text__004da6e4;
LAB__text__004da4fc:
    if ((iVar9 != 0x2d) && (iVar9 != 0x11)) goto LAB__text__004da770;
  }
  else {
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(param_1 + 0x9c);
    *(int *)(param_1 + 0xcc) = iVar5 + iVar4;
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0xf1) = 1;
    uVar16 = FUN__text__0041ac60(lVar10);
    *(undefined4 *)(param_1 + 0xd0) = uVar16;
    if (*(short *)(param_1 + 0x92) != 0) goto LAB__text__004da4fc;
LAB__text__004da6e4:
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xa4) = 0x1ffffffff;
    *param_2 = 0;
    *(undefined2 *)((long)param_2 + 0x12) = 0;
    *(undefined8 *)((long)param_2 + 0x14) = 0;
    if (*(char *)(param_1 + 0xf0) == '\0') goto LAB__text__004da4fc;
    if (*(long *)(*(long *)(param_1 + 0xe0) + 0xe8) != 0) {
      iVar9 = FUN__text__0044fe08(*(long *)(param_1 + 0xe0),plVar13);
      goto LAB__text__004da4fc;
    }
    iVar9 = 0x11;
  }
  lVar10 = *(long *)(param_1 + 0xb8);
  *param_2 = *plVar13;
  param_2[1] = lVar10;
  lVar12 = *(long *)(param_1 + 0xd0);
  lVar10 = *(long *)(param_1 + 0xc0);
  lVar11 = *(long *)(param_1 + 200);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0xd8);
  param_2[3] = lVar11;
  param_2[4] = lVar12;
  param_2[2] = lVar10;
  *(undefined8 *)(param_1 + 0xc4) = 0;
LAB__text__004da770:
  *(int *)((long)param_2 + 0x2c) = iVar9;
  return;
}


