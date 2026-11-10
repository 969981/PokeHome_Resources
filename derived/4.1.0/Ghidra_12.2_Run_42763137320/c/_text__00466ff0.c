/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466ff0; name: FUN_.text__00466ff0
 */


void FUN__text__00466ff0(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 uStack_61;
  
  if ((((*(uint *)(param_1 + 0xd2) & 0x400) == 0 ^ param_2) & 1) == 0) {
    uVar11 = 0x400;
    if ((param_2 & 1) == 0) {
      uVar11 = 0;
    }
    *(uint *)(param_1 + 0xd2) = *(uint *)(param_1 + 0xd2) & 0xfffffbff | uVar11;
    lVar10 = *(long *)(param_1 + 0x70);
    if (lVar10 != 0) {
      uVar11 = *(uint *)(lVar10 + 0x88);
      uVar15 = (ulong)uVar11;
      *(byte *)(lVar10 + 0x92) = *(byte *)(lVar10 + 0x92) ^ 1;
      if (uVar11 != 0) {
        *(undefined4 *)(lVar10 + 0x88) = 0;
        if (0 < (int)uVar11) {
          plVar6 = *(long **)(lVar10 + 0x80);
          do {
            lVar16 = *plVar6;
            plVar5 = (long *)FUN__text__0046b2d0(lVar10 + 0x80,*(undefined8 *)(lVar16 + 0x318),
                                                 *(undefined4 *)(lVar16 + 800),&uStack_61);
            uVar15 = uVar15 - 1;
            *plVar5 = lVar16;
            plVar6 = plVar6 + 1;
          } while (uVar15 != 0);
        }
      }
      if ((int)(*(long **)(param_1 + 0x70))[1] != 0) {
        lVar10 = **(long **)(param_1 + 0x70);
        do {
          lVar16 = *(long *)(lVar10 + 8);
          if (lVar16 != 0) {
            uVar11 = *(uint *)(lVar16 + 0x70);
            *(byte *)(lVar16 + 0x7a) = *(byte *)(lVar16 + 0x7a) ^ 1;
            if (uVar11 != 0) {
              lVar17 = *(long *)(lVar16 + 0x68);
              *(undefined4 *)(lVar16 + 0x70) = 0;
              if (0 < (int)uVar11) {
                uVar15 = 0;
                do {
                  while( true ) {
                    lVar18 = *(long *)(lVar17 + uVar15 * 8);
                    uVar12 = *(uint *)(lVar16 + 0x70);
                    if (uVar12 == 0) break;
                    iVar8 = 0;
                    uVar1 = *(uint *)(lVar18 + 0x31c);
                    uVar2 = *(uint *)(lVar18 + 800);
                    do {
                      iVar7 = iVar8 + (uVar12 >> 1);
                      lVar14 = *(long *)(*(long *)(lVar16 + 0x68) + (long)iVar7 * 8);
                      if (*(float *)(lVar14 + 0x318) == *(float *)(lVar18 + 0x318)) {
                        uVar13 = *(uint *)(lVar14 + 0x31c);
                        uVar3 = *(uint *)(lVar14 + 800);
                        if (uVar13 == uVar1 && uVar3 == uVar2) break;
                        if (*(char *)(lVar16 + 0x7a) == '\0') {
                          bVar4 = uVar1 < uVar13;
                          if (uVar3 != uVar2) {
                            bVar4 = uVar2 < uVar3;
                          }
                          uVar13 = (uint)bVar4;
                        }
                        else {
                          bVar4 = uVar13 < uVar1;
                          if (uVar3 != uVar2) {
                            bVar4 = uVar3 < uVar2;
                          }
                          uVar13 = (uint)bVar4;
                        }
                      }
                      else {
                        uVar13 = (uint)(*(float *)(lVar18 + 0x318) < *(float *)(lVar14 + 0x318));
                      }
                      uVar3 = uVar12 - uVar13;
                      if (uVar13 != 0) {
                        iVar8 = iVar7 + 1;
                      }
                      uVar12 = uVar3 >> 1;
                      iVar7 = iVar8;
                    } while (1 < uVar3);
LAB__text__00467108:
                    plVar6 = (long *)FUN__text__0046b4e0((long *)(lVar16 + 0x68),iVar7);
                    uVar15 = uVar15 + 1;
                    *plVar6 = lVar18;
                    if (uVar15 == uVar11) goto LAB__text__004670b0;
                  }
                  if (*(long *)(lVar16 + 0x68) != 0) {
                    iVar7 = 0;
                    goto LAB__text__00467108;
                  }
                  if (*(int *)(lVar16 + 0x74) == 0) {
                    lVar14 = FUN__text__00400f80(0,8);
                    lVar9 = *(long *)(lVar16 + 0x68);
                    if ((lVar9 != 0) && (lVar9 != lVar14)) {
                      FUN__text__00400fc0(0);
                    }
                    uVar12 = *(uint *)(lVar16 + 0x70);
                    *(long *)(lVar16 + 0x68) = lVar14;
                    *(undefined4 *)(lVar16 + 0x74) = 1;
                  }
                  else {
                    uVar12 = 0;
                    lVar14 = 0;
                  }
                  *(uint *)(lVar16 + 0x70) = uVar12 + 1;
                  uVar15 = uVar15 + 1;
                  *(long *)(lVar14 + (ulong)uVar12 * 8) = lVar18;
                } while (uVar15 != uVar11);
              }
            }
          }
LAB__text__004670b0:
          lVar10 = lVar10 + 0x10;
        } while (lVar10 != **(long **)(param_1 + 0x70) +
                           (ulong)*(uint *)(*(long **)(param_1 + 0x70) + 1) * 0x10);
      }
    }
  }
  return;
}


