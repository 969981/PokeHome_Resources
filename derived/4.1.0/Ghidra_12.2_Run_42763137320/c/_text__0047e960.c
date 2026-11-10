/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047e960; name: FUN_.text__0047e960
 */


void FUN__text__0047e960(ulong param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_80;
  long lStack_78;
  
  lVar3 = -0x80 - ((param_1 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
  lVar13 = (long)&local_80 + (lVar3 - ((param_1 & 0xffffffff) * 0xc + 0xf & 0x1ffffffff0)) + 0x80;
  uVar5 = (param_1 & 0xffffffff) * 4 + 0xf & 0x7fffffff0;
  lVar14 = lVar13 - uVar5;
  lVar15 = lVar14 - uVar5;
  lVar16 = lVar15 - uVar5;
  if (*(int *)(param_4 + 0x120) != 0) {
    uVar17 = 0;
    local_80 = param_3;
    lStack_78 = param_4;
    do {
      plVar6 = *(long **)(param_4 + 0x118);
      if (*(char *)((long)plVar6 + (ulong)uVar17 * 0x118 + 0x6c) == '\0') {
        uVar17 = uVar17 + 1;
        bVar4 = uVar17 < *(uint *)(param_4 + 0x120);
      }
      else {
        if ((int)param_1 == 0) {
          FUN__text__00488e80(param_1,lVar13,lVar14,lVar15,lVar16);
          return;
        }
        uVar2 = *(uint *)(param_4 + 0x120);
        uVar5 = 0;
        bVar4 = false;
        lVar7 = plVar6[(ulong)uVar17 * 0x23];
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        do {
          pfVar9 = (float *)(lVar13 + uVar5 * 0xc);
          uVar10 = 0;
          lVar11 = uVar5 * 4;
          *(undefined4 *)(lVar14 + lVar11) = 0x3dcccccd;
          *(undefined4 *)(lVar15 + lVar11) = 0x3dcccccd;
          pfVar9[0] = 0.0;
          pfVar9[1] = 0.0;
          *(undefined4 *)(lVar16 + lVar11) = 0x3f800000;
          pfVar9[2] = 0.0;
          *(undefined8 *)((long)&local_80 + uVar5 * 8 + lVar3 + 0x80) = 0;
          plVar8 = plVar6;
          uVar18 = uVar17;
          do {
            lVar12 = *plVar8;
            uVar17 = uVar18;
            if ((lVar12 == lVar7) &&
               ((int)plVar8[2] == *(int *)(*(long *)(param_2 + uVar5 * 8) + 0x68))) {
              fVar19 = *(float *)((long)plVar8 + 0x4c);
              *(long **)((long)&local_80 + uVar5 * 8 + lVar3 + 0x80) = plVar8;
              if (fVar19 <= 0.1) {
                fVar19 = 0.1;
              }
              *(float *)(lVar14 + lVar11) = fVar19;
              fVar19 = *(float *)(param_3 + lVar11);
              if (*(float *)(param_3 + lVar11) <= 0.1) {
                fVar19 = 0.1;
              }
              *(float *)(lVar15 + lVar11) = fVar19;
              fVar19 = *(float *)(plVar8 + 8);
              fVar20 = fVar19 * fVar19 +
                       *(float *)((long)plVar8 + 0x44) * *(float *)((long)plVar8 + 0x44) +
                       *(float *)(plVar8 + 9) * *(float *)(plVar8 + 9);
              if (0.0 < fVar20) {
                fVar20 = 1.0 / SQRT(fVar20);
                *pfVar9 = fVar20 * fVar19;
                lVar11 = lVar13 + uVar5 * 0xc;
                *(float *)(lVar11 + 4) = *(float *)((long)plVar8 + 0x44) * fVar20;
                *(float *)(lVar11 + 8) = *(float *)(plVar8 + 9) * fVar20;
              }
              break;
            }
            plVar8 = plVar8 + 0x23;
            bVar1 = uVar18 < uVar10;
            uVar17 = (uint)uVar10;
            if ((bVar4 || lVar12 == lVar7) || !bVar1) {
              uVar17 = uVar18;
            }
            uVar10 = uVar10 + 1;
            if ((!bVar4 && lVar12 != lVar7) && bVar1) {
              bVar4 = true;
            }
            uVar18 = uVar17;
          } while (uVar2 != uVar10);
          uVar5 = uVar5 + 1;
        } while (uVar5 != (param_1 & 0xffffffff));
        FUN__text__00488e80(param_1,lVar13,lVar14,lVar15,lVar16);
        param_3 = local_80;
        param_4 = lStack_78;
        if ((int)param_1 != 0) {
          uVar5 = 0;
          do {
            lVar7 = *(long *)((long)&local_80 + uVar5 * 8 + lVar3 + 0x80);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0xf8) != 0)) {
              uVar2 = *(uint *)(lVar7 + 0xc0);
              if ((*(uint *)(lVar7 + 0xb8) & 0xf00) != 0x300) {
                uVar2 = *(uint *)(lVar7 + 0xb8);
              }
              lVar11 = (ulong)((uVar2 & 0xff) + 3 & 0x1fc) * (ulong)(*(uint *)(lVar7 + 0xc0) & 0xff)
              ;
              if ((int)lVar11 != 0) {
                fVar19 = *(float *)(lVar16 + uVar5 * 4);
                pfVar9 = (float *)(*(long *)(lVar7 + 0xf8) + 8);
                do {
                  lVar11 = lVar11 + -4;
                  pfVar9[-2] = pfVar9[-2] * fVar19;
                  pfVar9[-1] = pfVar9[-1] * fVar19;
                  *pfVar9 = *pfVar9 * fVar19;
                  pfVar9[1] = pfVar9[1] * fVar19;
                  pfVar9 = pfVar9 + 4;
                } while (lVar11 != 0);
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 != (param_1 & 0xffffffff));
        }
      }
    } while (bVar4);
  }
  return;
}


