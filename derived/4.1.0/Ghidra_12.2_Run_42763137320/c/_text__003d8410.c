/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8410; name: FUN_.text__003d8410
 */


undefined8 FUN__text__003d8410(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  ulong uVar27;
  int local_48 [2];
  long local_40;
  char *local_38;
  
  lVar9 = param_1[1];
  if (lVar9 == 0) {
    return 0;
  }
  if ((*(long *)(lVar9 + 0x208) != *(long *)(lVar9 + 0x210)) ||
     ((**(code **)(*param_1 + 0x10))(param_1), *(long *)(lVar9 + 0x208) != *(long *)(lVar9 + 0x210))
     ) {
    *(undefined4 *)(lVar9 + 0x200) = 0xffffffff;
    lVar10 = 1 - lVar9;
    do {
      iVar5 = (**(code **)(*param_2 + 0x10))(param_2,local_48);
      if (iVar5 != 0) {
        if (*(int *)(lVar9 + 0x228) == 0) {
          *(int *)(lVar9 + 0x228) = iVar5;
          return 0;
        }
        return 0;
      }
      if (local_48[0] < 0) {
        if (local_38 == (char *)0x0) {
          pcVar6 = *(char **)(lVar9 + 0x208);
          lVar7 = (long)*(char **)(lVar9 + 0x210) - (long)pcVar6;
          pcVar4 = *(char **)(lVar9 + 0x210);
        }
        else {
          pcVar6 = *(char **)(lVar9 + 0x208);
          lVar7 = (long)local_38 - (long)pcVar6;
          pcVar4 = local_38;
        }
        if (0xf < lVar7) {
          pcVar8 = (char *)0x0;
          lVar7 = lVar7 + 0x10;
          do {
            uVar3 = *(undefined8 *)(pcVar6 + 8);
            uVar2 = *(undefined8 *)pcVar6;
            bVar11 = -((char)uVar2 == '\n');
            bVar12 = -((char)((ulong)uVar2 >> 8) == '\n');
            bVar13 = -((char)((ulong)uVar2 >> 0x10) == '\n');
            bVar14 = -((char)((ulong)uVar2 >> 0x18) == '\n');
            bVar15 = -((char)((ulong)uVar2 >> 0x20) == '\n');
            bVar16 = -((char)((ulong)uVar2 >> 0x28) == '\n');
            bVar17 = -((char)((ulong)uVar2 >> 0x30) == '\n');
            bVar18 = -((char)((ulong)uVar2 >> 0x38) == '\n');
            cVar19 = -((char)uVar3 == '\n');
            cVar20 = -((char)((ulong)uVar3 >> 8) == '\n');
            cVar21 = -((char)((ulong)uVar3 >> 0x10) == '\n');
            cVar22 = -((char)((ulong)uVar3 >> 0x18) == '\n');
            cVar23 = -((char)((ulong)uVar3 >> 0x20) == '\n');
            cVar24 = -((char)((ulong)uVar3 >> 0x28) == '\n');
            cVar25 = -((char)((ulong)uVar3 >> 0x30) == '\n');
            cVar26 = -((char)((ulong)uVar3 >> 0x38) == '\n');
            auVar1[1] = bVar12;
            auVar1[0] = bVar11;
            auVar1[2] = bVar13;
            auVar1[3] = bVar14;
            auVar1[4] = bVar15;
            auVar1[5] = bVar16;
            auVar1[6] = bVar17;
            auVar1[7] = bVar18;
            auVar1[8] = cVar19;
            auVar1[9] = cVar20;
            auVar1[10] = cVar21;
            auVar1[0xb] = cVar22;
            auVar1[0xc] = cVar23;
            auVar1[0xd] = cVar24;
            auVar1[0xe] = cVar25;
            auVar1[0xf] = cVar26;
            iVar5 = NEON_umaxv(auVar1,4);
            if (iVar5 != 0) {
              uVar27 = CONCAT17(cVar26,CONCAT16(cVar25,CONCAT15(cVar24,CONCAT14(cVar23,CONCAT13(
                                                  cVar22,CONCAT12(cVar21,CONCAT11(cVar20,cVar19)))))
                                               )) & 0x101010101010101;
              *(int *)(lVar9 + 0x22c) =
                   *(int *)(lVar9 + 0x22c) +
                   (int)(char)((bVar11 & 1) + (bVar12 & 1) + (bVar13 & 1) + (bVar14 & 1) +
                               (bVar15 & 1) + (bVar16 & 1) + (bVar17 & 1) + (bVar18 & 1) +
                               (char)uVar27 + (char)(uVar27 >> 8) + (char)(uVar27 >> 0x10) +
                               (char)(uVar27 >> 0x18) + (char)(uVar27 >> 0x20) +
                               (char)(uVar27 >> 0x28) + (char)(uVar27 >> 0x30) +
                              (char)(uVar27 >> 0x38));
              pcVar8 = pcVar6 + (0xf - ((ulong)LZCOUNT(CONCAT17((char)(CONCAT11(cVar26,cVar25) >> 4)
                                                                ,CONCAT16((char)(CONCAT11(cVar24,
                                                  cVar23) >> 4),
                                                  CONCAT15((char)(CONCAT11(cVar22,cVar21) >> 4),
                                                           CONCAT14((char)(CONCAT11(cVar20,cVar19)
                                                                          >> 4),
                                                                    CONCAT13((char)(CONCAT11(bVar18,
                                                  bVar17) >> 4),
                                                  CONCAT12((char)(CONCAT11(bVar16,bVar15) >> 4),
                                                           CONCAT11((char)(CONCAT11(bVar14,bVar13)
                                                                          >> 4),
                                                                    (char)(CONCAT11(bVar12,bVar11)
                                                                          >> 4))))))))) >> 2));
            }
            lVar7 = lVar7 + -0x10;
            pcVar6 = pcVar6 + 0x10;
          } while (0x1f < lVar7);
          if (pcVar8 != (char *)0x0) {
            *(char **)(lVar9 + 0x230) = pcVar8 + *(long *)(lVar9 + 0x238) + lVar10;
          }
        }
        if (pcVar6 != pcVar4) {
          pcVar8 = pcVar6;
          if (((int)pcVar4 - (int)pcVar6 & 1U) != 0) {
            if (*pcVar6 == '\n') {
              *(int *)(lVar9 + 0x22c) = *(int *)(lVar9 + 0x22c) + 1;
              *(char **)(lVar9 + 0x230) = pcVar6 + *(long *)(lVar9 + 0x238) + lVar10;
            }
            pcVar8 = pcVar6 + 1;
          }
          if (pcVar4 + ~(ulong)pcVar6 != (char *)0x0) {
            pcVar6 = pcVar8 + (2 - lVar9);
            do {
              if (*pcVar8 == '\n') {
                *(int *)(lVar9 + 0x22c) = *(int *)(lVar9 + 0x22c) + 1;
                *(char **)(lVar9 + 0x230) = pcVar6 + *(long *)(lVar9 + 0x238) + -1;
                cVar19 = pcVar8[1];
              }
              else {
                cVar19 = pcVar8[1];
              }
              if (cVar19 == '\n') {
                *(int *)(lVar9 + 0x22c) = *(int *)(lVar9 + 0x22c) + 1;
                *(char **)(lVar9 + 0x230) = pcVar6 + *(long *)(lVar9 + 0x238);
              }
              pcVar8 = pcVar8 + 2;
              pcVar6 = pcVar6 + 2;
            } while (pcVar8 != pcVar4);
          }
        }
      }
      else {
        if (local_40 != 0) {
          *(long *)(lVar9 + 0x230) = lVar10 + local_40 + *(long *)(lVar9 + 0x238);
        }
        *(int *)(lVar9 + 0x22c) = *(int *)(lVar9 + 0x22c) + local_48[0];
      }
      if (local_38 != (char *)0x0) {
        *(char **)(lVar9 + 0x208) = local_38;
        return 1;
      }
      *(undefined8 *)(lVar9 + 0x208) = *(undefined8 *)(lVar9 + 0x210);
      (**(code **)(*param_1 + 0x10))(param_1);
    } while (*(long *)(lVar9 + 0x208) != *(long *)(lVar9 + 0x210));
  }
  return 1;
}


