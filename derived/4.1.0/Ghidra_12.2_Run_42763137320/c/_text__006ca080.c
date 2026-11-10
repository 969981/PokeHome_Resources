/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ca080; name: FUN_.text__006ca080
 */


void FUN__text__006ca080(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  byte bVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  
  cVar4 = *(char *)(param_2 + 0x1d);
  if (cVar4 == '\x04') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    uVar9 = (**(code **)(*plVar8 + 0x78))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    lVar10 = FUN__text__006b253c(uVar9,0x13);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) {
      lVar10 = FUN__text__006b253c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0x13);
    }
    else {
      lVar10 = FUN__text__006b253c(uVar9,0x13);
    }
    if ((((lVar10 != 0) && (*(long *)(lVar10 + 8) != 0)) &&
        (**(int **)(param_2 + 0x28) == 0x4d535046)) &&
       (uVar3 = (*(int **)(param_2 + 0x28))[1], 0 < (int)uVar3)) {
      uVar13 = 0;
      do {
        if ((uint)uVar13 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x006ca378 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__006ca384 + (ulong)*(byte *)((uVar13 & 0xffffffff) + 0x766674) * 4))
                    (*(undefined8 *)(*(long *)(param_3 + 0x18) + 8),lVar10,
                     *(undefined8 *)(param_2 + 0x30));
          return;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
    }
  }
  else if (cVar4 == '\x01') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    lVar10 = (**(code **)(*plVar8 + 0x88))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    piVar11 = *(int **)(param_2 + 0x28);
    if (*piVar11 == 0x53544c46) {
      uVar3 = piVar11[1];
      if ((uint)*(byte *)(param_2 + 0x1c) < (*(uint *)(lVar10 + 0x14) & 3) && 0 < (int)uVar3) {
        uVar13 = 0;
        do {
          lVar6 = uVar13 * 4;
          pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13);
          uVar13 = uVar13 + 1;
          *(undefined4 *)
           (*(long *)(lVar10 + 0x18) + ((ulong)*(uint *)(lVar10 + 0x10) & 3) * 0x10 +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)*pbVar1 * 4) =
               *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar6);
        } while (uVar3 != uVar13);
      }
    }
    else if ((*piVar11 == 0x434d4c46) && (uVar3 = piVar11[1], 0 < (int)uVar3)) {
      uVar13 = 0;
      do {
        bVar12 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13);
        uVar5 = bVar12 - 0x1c;
        if (bVar12 < 0x1c || uVar5 == 0) {
          fVar14 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar13 * 4) + 0.5;
          fVar15 = 0.0;
          if (0.0 <= fVar14) {
            fVar15 = fVar14;
          }
          fVar14 = 255.0;
          if (fVar15 <= 255.0) {
            fVar14 = fVar15;
          }
          FUN__text__0069a928(lVar10,bVar12,(int)fVar14);
        }
        else if (uVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x006ca2b4 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__006ca2c0 + (ulong)*(byte *)((ulong)(bVar12 & 3) + 0x766678) * 4))
                    (uVar5 >> 2);
          return;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
    }
  }
  else if (cVar4 == '\0') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x78))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    piVar11 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar11;
    if (iVar2 < 0x49564c46) {
      if (iVar2 == 0x41504c46) {
        uVar3 = piVar11[1];
        if (0 < (int)uVar3) {
          uVar13 = 0;
          do {
            lVar10 = uVar13 * 4;
            pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13);
            uVar13 = uVar13 + 1;
            *(undefined4 *)((long)plVar8 + (ulong)*pbVar1 * 4 + 0x30) =
                 *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar10);
            *(byte *)(plVar8 + 0xb) = *(byte *)(plVar8 + 0xb) | 0x10;
          } while (uVar3 != uVar13);
        }
      }
      else if (iVar2 == 0x43434c46) {
        uVar3 = piVar11[1];
        if (0 < (int)uVar3) {
          uVar13 = 0;
          do {
            FUN__text__006bf7bc(*(undefined4 *)
                                 (*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar13 * 4),plVar8,
                                *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13));
            uVar13 = uVar13 + 1;
          } while (uVar3 != uVar13);
        }
      }
      else if ((iVar2 == 0x43564c46) && (uVar3 = piVar11[1], 0 < (int)uVar3)) {
        uVar13 = 0;
        do {
          fVar14 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar13 * 4) + 0.5;
          fVar15 = 0.0;
          if (0.0 <= fVar14) {
            fVar15 = fVar14;
          }
          fVar14 = 255.0;
          if (fVar15 <= 255.0) {
            fVar14 = fVar15;
          }
          (**(code **)(*plVar8 + 0x38))
                    (plVar8,*(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13),
                     (int)fVar14);
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
    }
    else if (iVar2 == 0x49564c46) {
      uVar3 = piVar11[1];
      if (0 < (int)uVar3) {
        bVar12 = *(byte *)(plVar8 + 0xb);
        lVar10 = 0;
        do {
          pfVar7 = (float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar10);
          lVar10 = lVar10 + 4;
          bVar12 = bVar12 & 0xfe | *pfVar7 != 0.0;
          *(byte *)(plVar8 + 0xb) = bVar12;
        } while ((ulong)uVar3 * 4 != lVar10);
      }
    }
    else if (iVar2 == 0x53504c46) {
      uVar3 = piVar11[1];
      if (0 < (int)uVar3) {
        uVar13 = 0;
        do {
          uVar16 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar13 * 4);
          bVar12 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13);
          lVar10 = FUN__text__006b27a8(plVar8,6);
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + (ulong)bVar12 * 4 + 0x1c) = uVar16;
          }
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
    }
    else if ((iVar2 == 0x544d4c46) && (uVar3 = piVar11[1], 0 < (int)uVar3)) {
      uVar13 = 0;
      do {
        uVar16 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar13 * 4);
        bVar12 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar13);
        lVar10 = FUN__text__006b27a8(plVar8,3);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + (ulong)bVar12 * 4 + 0x18) = uVar16;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
    }
  }
  return;
}


