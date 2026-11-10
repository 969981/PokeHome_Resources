/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00524560; name: FUN_.text__00524560
 */


long * FUN__text__00524560(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,
                          long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  
  uVar5 = (ulong)*(uint *)(param_4 + 0x60);
  if (*(uint *)(param_4 + 0x60) == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar9 = *(long **)(param_4 + 0x58);
    fVar19 = 3.4028235e+38;
    plVar12 = (long *)0x0;
    plVar14 = plVar9;
    do {
      lVar15 = *plVar14;
      uVar10 = (ulong)*(uint *)(lVar15 + 0x88);
      if (*(uint *)(lVar15 + 0x88) != 0) {
        plVar6 = *(long **)(lVar15 + 0x80);
        plVar13 = plVar12;
        plVar9 = plVar6;
        do {
          plVar12 = plVar13;
          if (plVar9[(ulong)((int)plVar9[0x10] - 1) + 8] != param_4) {
            uVar4 = *(uint *)(param_5 + 0x108);
            if (uVar4 != 0) {
              iVar8 = 0;
              uVar5 = *(ulong *)(*plVar9 + 0x70);
              do {
                iVar1 = iVar8 + (uVar4 >> 1);
                puVar11 = *(ulong **)(*(long *)(param_5 + 0x100) + (long)iVar1 * 8);
                uVar10 = *puVar11;
                if (uVar10 == uVar5) {
                  if (*(char *)((long)puVar11 + 0x31) != '\0') {
                    lVar7 = *(long *)(*(long *)(param_5 + 8) + 0x20);
                    local_68 = *(undefined8 *)(lVar7 + 0x78);
                    dVar18 = *(double *)(lVar7 + 0x80);
                    local_58 = *(undefined8 *)(lVar7 + 0x88);
                    dStack_60 = dVar18;
                    dVar17 = (double)FUN__text__00520f94(*plVar9,&local_68);
                    lVar7 = *(long *)(*(long *)(param_5 + 8) + 0x20);
                    dVar18 = dVar18 - *(double *)(lVar7 + 0x80);
                    dVar17 = dVar17 - *(double *)(lVar7 + 0x78);
                    param_3 = param_3 - *(double *)(lVar7 + 0x88);
                    fVar16 = (float)SQRT(dVar17 * dVar17 + dVar18 * dVar18 + param_3 * param_3);
                    goto LAB__text__005245e4;
                  }
                  lVar7 = FUN__text__0052c760(puVar11 + 1);
                  if (lVar7 != 0) {
                    fVar16 = *(float *)(lVar7 + 0x100);
                    goto LAB__text__005245e4;
                  }
                  break;
                }
                if (uVar10 < uVar5) {
                  iVar8 = iVar1 + 1;
                }
                uVar2 = uVar4 - (uVar10 < uVar5);
                uVar4 = uVar2 >> 1;
              } while (1 < uVar2);
            }
            fVar16 = *(float *)(param_5 + 0x50);
LAB__text__005245e4:
            fVar16 = *(float *)((long)plVar9 + 0x84) + fVar16;
            plVar6 = *(long **)(lVar15 + 0x80);
            uVar10 = (ulong)*(uint *)(lVar15 + 0x88);
            bVar3 = fVar19 <= fVar16;
            fVar19 = (float)NEON_fminnm(fVar16,fVar19);
            plVar12 = plVar9;
            if (bVar3) {
              plVar12 = plVar13;
            }
          }
          plVar9 = plVar9 + 0x12;
          plVar13 = plVar12;
        } while (plVar9 != plVar6 + uVar10 * 0x12);
        plVar9 = *(long **)(param_4 + 0x58);
        uVar5 = (ulong)*(uint *)(param_4 + 0x60);
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar9 + uVar5);
  }
  return plVar12;
}


