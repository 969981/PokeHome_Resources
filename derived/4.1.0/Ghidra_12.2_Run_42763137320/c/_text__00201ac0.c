/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201ac0; name: FUN_.text__00201ac0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00201ac0(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined2 uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  byte bVar23;
  uint *puVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  char cVar28;
  ulong uVar29;
  char cVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  byte bVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  undefined1 local_68;
  
LAB__text__00201afc:
  puVar24 = param_2 + -5;
  puVar18 = param_1;
LAB__text__00201b1c:
  while( true ) {
    param_1 = puVar18;
    uVar27 = (long)param_2 - (long)param_1;
    uVar29 = ((long)uVar27 >> 2) * -0x3333333333333333;
    if (uVar29 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00202710 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(uVar29 + 0x726f2c) * 4 + 0x20271c))();
      return;
    }
    if ((long)uVar27 < 0x1e0) break;
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar31 = uVar29 - 2 >> 1;
      uVar35 = uVar31;
      goto LAB__text__00202bb4;
    }
    uVar29 = uVar29 >> 1;
    puVar18 = param_1 + uVar29 * 5;
    if (uVar27 < 0xa01) {
      FUN__text__00203a60(puVar18,param_1,puVar24);
      uVar43 = *param_1;
    }
    else {
      FUN__text__00203a60(param_1,puVar18,puVar24);
      puVar22 = param_1 + 5;
      FUN__text__00203a60(puVar22,param_1 + uVar29 * 5 + -5,param_2 + -10);
      FUN__text__00203a60(param_1 + 10,puVar22 + uVar29 * 5,param_2 + -0xf);
      FUN__text__00203a60(param_1 + uVar29 * 5 + -5,puVar18,puVar22 + uVar29 * 5);
      uVar3 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)(param_1 + 2);
      uVar43 = param_1[4];
      uVar4 = *(undefined8 *)puVar18;
      uVar6 = *(undefined8 *)(puVar18 + 2);
      *(char *)(param_1 + 4) = (char)puVar18[4];
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 2) = uVar6;
      local_68 = (undefined1)uVar43;
      *(undefined1 *)(puVar18 + 4) = local_68;
      *(undefined8 *)puVar18 = uVar3;
      *(undefined8 *)(puVar18 + 2) = uVar5;
      uVar43 = *param_1;
    }
    if ((param_4 & 1) != 0) {
LAB__text__00201cd0:
      param_3 = param_3 + -1;
      puVar22 = param_1 + 5;
      uVar38 = param_1[1];
      bVar36 = *(byte *)((long)param_1 + 5);
      bVar12 = *(byte *)((long)param_1 + 6);
      bVar13 = *(byte *)((long)param_1 + 7);
      uVar16 = param_1[2];
      bVar14 = *(byte *)((long)param_1 + 9);
      uVar15 = *(undefined2 *)((long)param_1 + 10);
      uVar44 = param_1[3];
      cVar28 = (char)param_1[4];
      uVar25 = (uint)(byte)uVar38;
      uVar32 = (uint)bVar36;
      uVar33 = (uint)bVar12;
      uVar34 = (uint)bVar13;
      uVar37 = (uint)(byte)uVar16;
      uVar41 = (uint)bVar14;
      puVar17 = param_2;
      puVar18 = param_2 + -2;
      if (*puVar22 == 0) {
LAB__text__002023a4:
        if (puVar22 < param_2) {
          if (uVar43 != 0) {
            do {
              puVar17 = puVar18 + -3;
              if (*puVar17 == 0) {
                if (puVar17 <= puVar22) goto LAB__text__00201e50;
              }
              else {
                bVar42 = (byte)puVar18[-2];
                if ((((bVar42 == uVar25) &&
                     (bVar42 = *(byte *)((long)puVar18 + -7), bVar42 == uVar32)) &&
                    (bVar42 = *(byte *)((long)puVar18 + -6), bVar42 == uVar33)) &&
                   (((bVar42 = *(byte *)((long)puVar18 + -5), bVar42 == uVar34 &&
                     (bVar42 = (byte)puVar18[-1], bVar42 == uVar37)) &&
                    (bVar42 = *(byte *)((long)puVar18 + -3), bVar42 == uVar41)))) {
                  if (*puVar18 == uVar44) {
                    if ((puVar17 <= puVar22) ||
                       ((char)puVar18[1] != '\0' && (char)puVar18[1] != cVar28))
                    goto LAB__text__00201e50;
                  }
                  else if ((puVar17 <= puVar22) || ((int)uVar41 < (int)*puVar18))
                  goto LAB__text__00201e50;
                }
                else if ((puVar17 <= puVar22) || (bVar42 != 0)) goto LAB__text__00201e50;
              }
              puVar18 = puVar18 + -5;
            } while( true );
          }
          puVar18 = puVar24;
          do {
            puVar17 = puVar18;
            puVar18 = puVar17 + -5;
          } while (*puVar17 == 0 && puVar22 < puVar17);
        }
      }
      else {
        if (uVar43 == 0) {
          do {
            puVar20 = puVar22;
            puVar22 = puVar20 + 5;
          } while (*puVar22 != 0);
        }
        else {
          puVar20 = param_1;
          do {
            puVar45 = puVar22;
            bVar42 = (byte)puVar45[1];
            puVar22 = puVar45;
            if ((((bVar42 == uVar25) && (bVar42 = *(byte *)((long)puVar45 + 5), bVar42 == uVar32))
                && (bVar42 = *(byte *)((long)puVar45 + 6), bVar42 == uVar33)) &&
               ((bVar42 = *(byte *)((long)puVar45 + 7), bVar42 == uVar34 &&
                (bVar42 = (byte)puVar45[2], bVar42 == uVar37)))) {
              bVar42 = *(byte *)((long)puVar45 + 9);
              if ((uint)bVar42 != (uint)bVar14) goto LAB__text__00201d80;
              uVar19 = puVar45[3];
              if (uVar19 == uVar44) {
                if (((char)puVar45[4] == '\0') || ((char)puVar45[4] == cVar28)) {
                  puVar20 = puVar45 + -5;
                  break;
                }
              }
              else if (uVar19 == uVar41 || (int)uVar19 < (int)(uint)bVar14) break;
            }
            else {
LAB__text__00201d80:
              if (bVar42 == 0) break;
            }
            puVar22 = puVar45 + 5;
            puVar20 = puVar45;
          } while (*puVar22 != 0);
        }
        if (puVar20 == param_1) goto LAB__text__002023a4;
        if (uVar43 != 0) {
          do {
            if (puVar18[-3] != 0) {
              uVar19 = (uint)(byte)puVar18[-2];
              if ((((uVar19 == uVar25) &&
                   (uVar19 = (uint)*(byte *)((long)puVar18 + -7), uVar19 == uVar32)) &&
                  (uVar19 = (uint)*(byte *)((long)puVar18 + -6), uVar19 == uVar33)) &&
                 (((uVar19 = (uint)*(byte *)((long)puVar18 + -5), uVar19 == uVar34 &&
                   (uVar19 = (uint)(byte)puVar18[-1], uVar19 == uVar37)) &&
                  (uVar19 = (uint)*(byte *)((long)puVar18 + -3), uVar19 == uVar41)))) {
                if (*puVar18 == uVar44) {
                  if (((char)puVar18[1] != '\0') && ((char)puVar18[1] != cVar28))
                  goto LAB__text__00201e50;
                }
                else if ((int)uVar41 < (int)*puVar18) goto LAB__text__00201e50;
              }
              else if (uVar19 != 0) goto LAB__text__00201e50;
            }
            puVar18 = puVar18 + -5;
          } while( true );
        }
        do {
          puVar17 = puVar17 + -5;
        } while (*puVar17 == 0);
      }
      goto LAB__text__00202498;
    }
    if (param_1[-5] == 0) {
      cVar28 = (char)param_1[1];
      goto LAB__text__00201e5c;
    }
    if (uVar43 == 0) goto LAB__text__00201cd0;
    cVar28 = (char)param_1[-4];
    if (cVar28 == (char)param_1[1]) {
      cVar30 = *(char *)((long)param_1 + -0xf);
      if (((cVar30 == *(char *)((long)param_1 + 5)) &&
          (cVar30 = *(char *)((long)param_1 + -0xe), cVar30 == *(char *)((long)param_1 + 6))) &&
         ((cVar30 = *(char *)((long)param_1 + -0xd), cVar30 == *(char *)((long)param_1 + 7) &&
          (cVar30 = (char)param_1[-3], cVar30 == (char)param_1[2])))) {
        bVar36 = *(byte *)((long)param_1 + 9);
        if ((uint)*(byte *)((long)param_1 + -0xb) == (uint)bVar36) {
          uVar44 = param_1[-2];
          if (uVar44 == param_1[3]) {
            if (((char)param_1[-1] != '\0') && ((char)param_1[-1] != (char)param_1[4]))
            goto LAB__text__00201cd0;
          }
          else if (uVar44 != bVar36 && (int)(uint)bVar36 <= (int)uVar44) goto LAB__text__00201cd0;
        }
        else if (*(byte *)((long)param_1 + -0xb) != 0) goto LAB__text__00201cd0;
      }
      else if (cVar30 != '\0') goto LAB__text__00201cd0;
    }
    else {
      if (cVar28 != '\0') goto LAB__text__00201cd0;
      cVar28 = (char)param_1[1];
    }
LAB__text__00201e5c:
    cVar30 = *(char *)((long)param_1 + 5);
    cVar7 = *(char *)((long)param_1 + 6);
    cVar8 = *(char *)((long)param_1 + 7);
    cVar9 = (char)param_1[2];
    bVar36 = *(byte *)((long)param_1 + 9);
    uVar15 = *(undefined2 *)((long)param_1 + 10);
    uVar44 = param_1[3];
    cVar10 = (char)param_1[4];
    uVar38 = (uint)bVar36;
    puVar22 = param_2;
    if (uVar43 == 0) goto LAB__text__00201fc4;
    if (*puVar24 == 0) {
LAB__text__00201ef4:
      puVar18 = param_1 + 5;
      if (*puVar18 != 0) {
        do {
          cVar11 = cVar28;
          if ((((cVar28 == (char)puVar18[1]) &&
               (cVar11 = cVar30, cVar30 == *(char *)((long)puVar18 + 5))) &&
              (cVar11 = cVar7, cVar7 == *(char *)((long)puVar18 + 6))) &&
             ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar18 + 7) &&
              (cVar11 = cVar9, cVar9 == (char)puVar18[2])))) {
            bVar12 = *(byte *)((long)puVar18 + 9);
            if (uVar38 == bVar12) {
              if (uVar44 == puVar18[3]) {
                if ((cVar10 != '\0') && (cVar10 != (char)puVar18[4])) break;
              }
              else if (uVar44 != bVar12 && (int)(uint)bVar12 <= (int)uVar44) break;
            }
            else if (uVar38 != 0) break;
          }
          else if (cVar11 != '\0') break;
          puVar18 = puVar18 + 5;
        } while (*puVar18 != 0);
        goto LAB__text__002020c4;
      }
      if (puVar18 < param_2) goto LAB__text__002020d4;
    }
    else {
      cVar11 = cVar28;
      if ((cVar28 == (char)param_2[-4]) &&
         (cVar11 = cVar30, cVar30 == *(char *)((long)param_2 + -0xf))) {
        cVar11 = cVar7;
        if ((cVar7 != *(char *)((long)param_2 + -0xe)) ||
           (cVar11 = cVar8, cVar8 != *(char *)((long)param_2 + -0xd))) {
          if (cVar11 == '\0') goto LAB__text__00201fc4;
          goto LAB__text__00201ef4;
        }
        cVar11 = cVar9;
        if (cVar9 != (char)param_2[-3]) goto joined_r0x00201ef0;
        bVar12 = *(byte *)((long)param_2 + -0xb);
        if ((uint)bVar36 == (uint)bVar12) {
          if (uVar44 == param_2[-2]) {
            if ((cVar10 != '\0') && (cVar10 != (char)param_2[-1])) goto LAB__text__00201ef4;
          }
          else if (uVar44 != bVar12 && (int)(uint)bVar12 <= (int)uVar44) goto LAB__text__00201ef4;
        }
        else if (bVar36 != 0) goto LAB__text__00201ef4;
      }
      else {
joined_r0x00201ef0:
        if (cVar11 != '\0') goto LAB__text__00201ef4;
      }
LAB__text__00201fc4:
      puVar18 = param_1 + 5;
      if (puVar18 < param_2) {
        if (uVar43 == 0) {
          puVar18 = param_1 + 10;
          if (param_2 <= puVar18) {
            puVar22 = puVar18;
          }
          lVar26 = (long)(puVar22 + -10) - (long)param_1;
          uVar27 = (lVar26 - (ulong)(lVar26 != 0)) / 0x14;
          if (puVar22 + -10 != param_1) {
            uVar27 = uVar27 + 1;
          }
          puVar18 = puVar18 + uVar27 * 5;
          puVar22 = param_2 + (ulong)(puVar18 < param_2) * -5;
          goto LAB__text__00202190;
        }
        do {
          if (*puVar18 == 0) break;
          cVar11 = cVar28;
          if ((((cVar28 == (char)puVar18[1]) &&
               (cVar11 = cVar30, cVar30 == *(char *)((long)puVar18 + 5))) &&
              (cVar11 = cVar7, cVar7 == *(char *)((long)puVar18 + 6))) &&
             ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar18 + 7) &&
              (cVar11 = cVar9, cVar9 == (char)puVar18[2])))) {
            bVar12 = *(byte *)((long)puVar18 + 9);
            if (uVar38 == bVar12) {
              if (uVar44 == puVar18[3]) {
                if ((cVar10 != '\0') && (cVar10 != (char)puVar18[4])) break;
              }
              else if (uVar44 != bVar12 && (int)(uint)bVar12 <= (int)uVar44) break;
            }
            else if (uVar38 != 0) break;
          }
          else if (cVar11 != '\0') break;
          puVar18 = puVar18 + 5;
        } while (puVar18 < param_2);
      }
LAB__text__002020c4:
      if ((puVar18 < param_2) && (puVar22 = puVar24, uVar43 != 0)) {
LAB__text__002020d4:
        puVar17 = puVar24;
        puVar20 = param_2;
        do {
          puVar22 = puVar17;
          if (puVar20[-5] != 0) {
            cVar11 = cVar28;
            if ((((cVar28 == (char)puVar20[-4]) &&
                 (cVar11 = cVar30, cVar30 == *(char *)((long)puVar20 + -0xf))) &&
                (cVar11 = cVar7, cVar7 == *(char *)((long)puVar20 + -0xe))) &&
               ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar20 + -0xd) &&
                (cVar11 = cVar9, cVar9 == (char)puVar20[-3])))) {
              bVar12 = *(byte *)((long)puVar20 + -0xb);
              if (uVar38 == bVar12) {
                if (uVar44 == puVar20[-2]) {
                  if ((cVar10 == '\0') || (cVar10 == (char)puVar20[-1])) break;
                }
                else if (uVar44 == bVar12 || (int)uVar44 < (int)(uint)bVar12) break;
              }
              else if (uVar38 == 0) break;
            }
            else if (cVar11 == '\0') break;
          }
          puVar17 = puVar22 + -5;
          puVar20 = puVar22;
        } while( true );
      }
    }
LAB__text__00202190:
    if (puVar18 < puVar22) {
      if (uVar43 == 0) {
        uVar3 = *(undefined8 *)puVar18;
        uVar5 = *(undefined8 *)(puVar18 + 2);
        uVar43 = puVar18[4];
        uVar4 = *(undefined8 *)puVar22;
        uVar6 = *(undefined8 *)(puVar22 + 2);
        *(char *)(puVar18 + 4) = (char)puVar22[4];
        *(undefined8 *)puVar18 = uVar4;
        *(undefined8 *)(puVar18 + 2) = uVar6;
        local_68 = (undefined1)uVar43;
        *(undefined1 *)(puVar22 + 4) = local_68;
        *(undefined8 *)puVar22 = uVar3;
        *(undefined8 *)(puVar22 + 2) = uVar5;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB__text__002021ac:
      uVar3 = *(undefined8 *)puVar18;
      uVar5 = *(undefined8 *)(puVar18 + 2);
      uVar16 = puVar18[4];
      uVar4 = *(undefined8 *)puVar22;
      uVar6 = *(undefined8 *)(puVar22 + 2);
      *(char *)(puVar18 + 4) = (char)puVar22[4];
      *(undefined8 *)puVar18 = uVar4;
      *(undefined8 *)(puVar18 + 2) = uVar6;
      local_68 = (undefined1)uVar16;
      *(undefined1 *)(puVar22 + 4) = local_68;
      *(undefined8 *)puVar22 = uVar3;
      *(undefined8 *)(puVar22 + 2) = uVar5;
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              puVar17 = puVar18;
              puVar18 = puVar17 + 5;
              if (*puVar18 == 0) goto LAB__text__00202284;
              cVar11 = cVar28;
              if ((((cVar28 == (char)puVar17[6]) &&
                   (cVar11 = cVar30, cVar30 == *(char *)((long)puVar17 + 0x19))) &&
                  (cVar11 = cVar7, cVar7 == *(char *)((long)puVar17 + 0x1a))) &&
                 ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar17 + 0x1b) &&
                  (cVar11 = cVar9, cVar9 == (char)puVar17[7])))) break;
              if (cVar11 != '\0') goto LAB__text__00202284;
            }
            bVar12 = *(byte *)((long)puVar17 + 0x1d);
            if (uVar38 == bVar12) break;
            if (uVar38 != 0) goto LAB__text__00202284;
          }
          if (uVar44 == puVar17[8]) break;
          if (uVar44 != bVar12 && (int)(uint)bVar12 <= (int)uVar44) goto LAB__text__00202284;
        }
      } while ((cVar10 == '\0') || (cVar10 == (char)puVar17[9]));
LAB__text__00202284:
      puVar22 = puVar22 + -2;
      do {
        if (puVar22[-3] != 0) {
          cVar11 = cVar28;
          if ((((cVar28 == (char)puVar22[-2]) &&
               (cVar11 = cVar30, cVar30 == *(char *)((long)puVar22 + -7))) &&
              (cVar11 = cVar7, cVar7 == *(char *)((long)puVar22 + -6))) &&
             ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar22 + -5) &&
              (cVar11 = cVar9, cVar9 == (char)puVar22[-1])))) {
            bVar12 = *(byte *)((long)puVar22 + -3);
            if ((uint)bVar36 == (uint)bVar12) {
              if (uVar44 == *puVar22) {
                if ((cVar10 == '\0') || (cVar10 == (char)puVar22[1])) goto LAB__text__002021a0;
              }
              else if (uVar44 == bVar12 || (int)uVar44 < (int)(uint)bVar12)
              goto LAB__text__002021a0;
            }
            else if (bVar36 == 0) goto LAB__text__002021a0;
          }
          else if (cVar11 == '\0') goto LAB__text__002021a0;
        }
        puVar22 = puVar22 + -5;
      } while( true );
    }
LAB__text__0020233c:
    if (puVar18 + -5 != param_1) {
      uVar3 = *(undefined8 *)(puVar18 + -5);
      uVar4 = *(undefined8 *)(puVar18 + -3);
      *(char *)(param_1 + 4) = (char)puVar18[-1];
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar4;
    }
    param_4 = 0;
    puVar18[-5] = uVar43;
    *(char *)(puVar18 + -4) = cVar28;
    *(char *)((long)puVar18 + -0xf) = cVar30;
    *(char *)((long)puVar18 + -0xe) = cVar7;
    *(char *)((long)puVar18 + -0xd) = cVar8;
    *(char *)(puVar18 + -3) = cVar9;
    *(byte *)((long)puVar18 + -0xb) = bVar36;
    *(undefined2 *)((long)puVar18 + -10) = uVar15;
    puVar18[-2] = uVar44;
    *(char *)(puVar18 + -1) = cVar10;
    param_3 = param_3 + -1;
  }
  puVar18 = param_1 + 5;
  if ((param_4 & 1) == 0) {
    if (param_1 == param_2 || puVar18 == param_2) {
      return;
    }
    goto LAB__text__002033d8;
  }
  if (param_1 == param_2 || puVar18 == param_2) {
    return;
  }
  lVar26 = 0;
  puVar24 = param_1;
  goto LAB__text__002028c8;
LAB__text__002033d8:
  puVar24 = puVar18;
  uVar43 = param_1[5];
  if (uVar43 == 0) goto LAB__text__002033cc;
  cVar28 = (char)param_1[6];
  if (*param_1 == 0) {
LAB__text__00203488:
    cVar30 = *(char *)((long)param_1 + 0x19);
    cVar7 = *(char *)((long)param_1 + 0x1a);
    cVar8 = *(char *)((long)param_1 + 0x1b);
    cVar9 = (char)param_1[7];
    bVar36 = *(byte *)((long)param_1 + 0x1d);
    uVar15 = *(undefined2 *)((long)param_1 + 0x1e);
    uVar44 = param_1[8];
    cVar10 = (char)param_1[9];
    uVar38 = (uint)bVar36;
    puVar18 = puVar24;
    if (cVar28 != '\0') {
      do {
        *(undefined8 *)puVar18 = *(undefined8 *)(puVar18 + -5);
        *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + -3);
        *(char *)(puVar18 + 4) = (char)puVar18[-1];
        if ((puVar18[-10] != 0) && (cVar28 == (char)puVar18[-9])) {
          cVar11 = cVar30;
          if ((cVar30 == *(char *)((long)puVar18 + -0x23)) &&
             (((cVar11 = cVar7, cVar7 == *(char *)((long)puVar18 + -0x22) &&
               (cVar11 = cVar8, cVar8 == *(char *)((long)puVar18 + -0x21))) &&
              (cVar11 = cVar9, cVar9 == (char)puVar18[-8])))) {
            bVar12 = *(byte *)((long)puVar18 + -0x1f);
            if (uVar38 == bVar12) {
              if (uVar44 == puVar18[-7]) {
                if ((cVar10 == '\0') || (cVar10 == (char)puVar18[-6])) goto LAB__text__002033a0;
              }
              else if (uVar44 == bVar12 || (int)uVar44 < (int)(uint)bVar12)
              goto LAB__text__002033a0;
            }
            else if (uVar38 == 0) goto LAB__text__002033a0;
          }
          else if (cVar11 == '\0') goto LAB__text__002033a0;
        }
        puVar18 = puVar18 + -5;
      } while( true );
    }
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              puVar18 = param_1;
              *(undefined8 *)(puVar18 + 5) = *(undefined8 *)puVar18;
              *(undefined8 *)(puVar18 + 7) = *(undefined8 *)(puVar18 + 2);
              *(char *)(puVar18 + 9) = (char)puVar18[4];
              param_1 = puVar18 + -5;
            } while (*param_1 == 0);
            if ((char)puVar18[-4] != '\0') goto LAB__text__002033a4;
            cVar11 = cVar30;
            if (((cVar30 == *(char *)((long)puVar18 + -0xf)) &&
                (cVar11 = cVar7, cVar7 == *(char *)((long)puVar18 + -0xe))) &&
               ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar18 + -0xd) &&
                (cVar11 = cVar9, cVar9 == (char)puVar18[-3])))) break;
            if (cVar11 == '\0') goto LAB__text__002033a4;
          }
          bVar12 = *(byte *)((long)puVar18 + -0xb);
          if (uVar38 == bVar12) break;
          if (uVar38 == 0) goto LAB__text__002033a4;
        }
        if (uVar44 != puVar18[-2]) break;
        if ((cVar10 == '\0') || (cVar10 == (char)puVar18[-1])) goto LAB__text__002033a4;
      }
    } while (uVar44 != bVar12 && (int)(uint)bVar12 <= (int)uVar44);
    goto LAB__text__002033a4;
  }
  if (cVar28 == (char)param_1[1]) {
    cVar30 = *(char *)((long)param_1 + 0x19);
    if ((((cVar30 == *(char *)((long)param_1 + 5)) &&
         (cVar30 = *(char *)((long)param_1 + 0x1a), cVar30 == *(char *)((long)param_1 + 6))) &&
        (cVar30 = *(char *)((long)param_1 + 0x1b), cVar30 == *(char *)((long)param_1 + 7))) &&
       (cVar30 = (char)param_1[7], cVar30 == (char)param_1[2])) {
      bVar36 = *(byte *)((long)param_1 + 9);
      if ((uint)*(byte *)((long)param_1 + 0x1d) == (uint)bVar36) {
        uVar44 = param_1[8];
        if (uVar44 == param_1[3]) {
          if (((char)param_1[9] != '\0') && ((char)param_1[9] != (char)param_1[4]))
          goto LAB__text__00203488;
        }
        else if (uVar44 != bVar36 && (int)(uint)bVar36 <= (int)uVar44) goto LAB__text__00203488;
      }
      else if (*(byte *)((long)param_1 + 0x1d) != 0) goto LAB__text__00203488;
    }
    else if (cVar30 != '\0') goto LAB__text__00203488;
  }
  else if (cVar28 != '\0') {
    cVar28 = '\x01';
    goto LAB__text__00203488;
  }
  goto LAB__text__002033cc;
LAB__text__002033a0:
  puVar18 = puVar18 + -5;
LAB__text__002033a4:
  *puVar18 = uVar43;
  *(char *)(puVar18 + 1) = cVar28;
  *(char *)((long)puVar18 + 5) = cVar30;
  *(char *)((long)puVar18 + 6) = cVar7;
  *(char *)((long)puVar18 + 7) = cVar8;
  *(char *)(puVar18 + 2) = cVar9;
  *(byte *)((long)puVar18 + 9) = bVar36;
  *(undefined2 *)((long)puVar18 + 10) = uVar15;
  puVar18[3] = uVar44;
  *(char *)(puVar18 + 4) = cVar10;
LAB__text__002033cc:
  puVar18 = puVar24 + 5;
  param_1 = puVar24;
  if (puVar24 + 5 == param_2) {
    return;
  }
  goto LAB__text__002033d8;
LAB__text__002028c8:
  uVar43 = puVar24[5];
  if (uVar43 == 0) goto LAB__text__002028b8;
  cVar28 = (char)puVar24[6];
  if (*puVar24 == 0) {
LAB__text__00202978:
    uVar3 = *(undefined8 *)(puVar24 + 2);
    cVar30 = *(char *)((long)puVar24 + 0x19);
    cVar7 = *(char *)((long)puVar24 + 0x1a);
    cVar8 = *(char *)((long)puVar24 + 0x1b);
    cVar9 = (char)puVar24[7];
    bVar36 = *(byte *)((long)puVar24 + 0x1d);
    uVar15 = *(undefined2 *)((long)puVar24 + 0x1e);
    uVar44 = puVar24[8];
    cVar10 = (char)puVar24[9];
    *(undefined8 *)puVar18 = *(undefined8 *)puVar24;
    *(undefined8 *)(puVar18 + 2) = uVar3;
    *(char *)(puVar18 + 4) = (char)puVar24[4];
    puVar22 = param_1;
    if (puVar24 != param_1) {
      uVar38 = (uint)bVar36;
      lVar40 = lVar26;
      if (cVar28 == '\0') {
        do {
          puVar22 = (uint *)((long)param_1 + lVar40);
          if (puVar22[-5] != 0) {
            if ((char)puVar22[-4] != '\0') goto LAB__text__00202890;
            cVar11 = cVar30;
            if (((cVar30 == *(char *)((long)puVar22 + -0xf)) &&
                (cVar11 = cVar7, cVar7 == *(char *)((long)puVar22 + -0xe))) &&
               ((cVar11 = cVar8, cVar8 == *(char *)((long)puVar22 + -0xd) &&
                (cVar11 = cVar9, cVar9 == (char)puVar22[-3])))) {
              bVar12 = *(byte *)((long)puVar22 + -0xb);
              if (uVar38 == bVar12) {
                if (uVar44 == puVar22[-2]) {
                  if ((cVar10 == '\0') || (cVar10 == (char)puVar22[-1])) goto LAB__text__00202b40;
                }
                else if (uVar44 == bVar12 || (int)uVar44 < (int)(uint)bVar12)
                goto LAB__text__00202b40;
              }
              else if (uVar38 == 0) goto LAB__text__00202b40;
            }
            else if (cVar11 == '\0') goto LAB__text__00202b40;
          }
          puVar24 = puVar24 + -5;
          lVar40 = lVar40 + -0x14;
          *(char *)(puVar22 + 4) = (char)puVar22[-1];
          *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + -5);
          *(undefined8 *)(puVar22 + 2) = *(undefined8 *)(puVar22 + -3);
        } while (lVar40 != 0);
      }
      else {
        do {
          puVar22 = (uint *)((long)param_1 + lVar40);
          if ((puVar22[-5] != 0) && (cVar28 == (char)puVar22[-4])) {
            cVar11 = cVar30;
            if ((cVar30 == *(char *)((long)puVar22 + -0xf)) &&
               (((cVar11 = cVar7, cVar7 == *(char *)((long)puVar22 + -0xe) &&
                 (cVar11 = cVar8, cVar8 == *(char *)((long)puVar22 + -0xd))) &&
                (cVar11 = cVar9, cVar9 == (char)puVar22[-3])))) {
              bVar12 = *(byte *)((long)puVar22 + -0xb);
              if (uVar38 == bVar12) {
                if (uVar44 == puVar22[-2]) {
                  if ((cVar10 == '\0') || (cVar10 == (char)puVar22[-1])) goto LAB__text__00202890;
                }
                else if (uVar44 == bVar12 || (int)uVar44 < (int)(uint)bVar12)
                goto LAB__text__00202b40;
              }
              else if (uVar38 == 0) goto LAB__text__00202b40;
            }
            else if (cVar11 == '\0') goto LAB__text__00202b40;
          }
          puVar24 = puVar24 + -5;
          lVar40 = lVar40 + -0x14;
          *(char *)(puVar22 + 4) = (char)puVar22[-1];
          *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + -5);
          *(undefined8 *)(puVar22 + 2) = *(undefined8 *)(puVar22 + -3);
        } while (lVar40 != 0);
      }
      puVar22 = param_1;
    }
    goto LAB__text__00202890;
  }
  if (cVar28 == (char)puVar24[1]) {
    cVar30 = *(char *)((long)puVar24 + 0x19);
    if ((((cVar30 == *(char *)((long)puVar24 + 5)) &&
         (cVar30 = *(char *)((long)puVar24 + 0x1a), cVar30 == *(char *)((long)puVar24 + 6))) &&
        (cVar30 = *(char *)((long)puVar24 + 0x1b), cVar30 == *(char *)((long)puVar24 + 7))) &&
       (cVar30 = (char)puVar24[7], cVar30 == (char)puVar24[2])) {
      bVar36 = *(byte *)((long)puVar24 + 9);
      if ((uint)*(byte *)((long)puVar24 + 0x1d) == (uint)bVar36) {
        uVar44 = puVar24[8];
        if (uVar44 == puVar24[3]) {
          if (((char)puVar24[9] != '\0') && ((char)puVar24[9] != (char)puVar24[4]))
          goto LAB__text__00202978;
        }
        else if (uVar44 != bVar36 && (int)(uint)bVar36 <= (int)uVar44) goto LAB__text__00202978;
      }
      else if (*(byte *)((long)puVar24 + 0x1d) != 0) goto LAB__text__00202978;
    }
    else if (cVar30 != '\0') goto LAB__text__00202978;
  }
  else if (cVar28 != '\0') {
    cVar28 = '\x01';
    goto LAB__text__00202978;
  }
  goto LAB__text__002028b8;
LAB__text__00202b40:
  puVar22 = puVar24;
LAB__text__00202890:
  *puVar22 = uVar43;
  *(char *)(puVar22 + 1) = cVar28;
  *(char *)((long)puVar22 + 5) = cVar30;
  *(char *)((long)puVar22 + 6) = cVar7;
  *(char *)((long)puVar22 + 7) = cVar8;
  *(char *)(puVar22 + 2) = cVar9;
  *(byte *)((long)puVar22 + 9) = bVar36;
  *(undefined2 *)((long)puVar22 + 10) = uVar15;
  puVar22[3] = uVar44;
  *(char *)(puVar22 + 4) = cVar10;
LAB__text__002028b8:
  puVar22 = puVar18 + 5;
  lVar26 = lVar26 + 0x14;
  puVar24 = puVar18;
  puVar18 = puVar22;
  if (puVar22 == param_2) {
    return;
  }
  goto LAB__text__002028c8;
LAB__text__00202bb4:
  do {
    if ((long)uVar31 < (long)uVar35) goto LAB__text__00202bac;
    puVar24 = param_1 + uVar35 * 5;
    uVar39 = uVar35 << 1 | 1;
    uVar1 = uVar35 * 2 + 2;
    puVar18 = param_1 + uVar39 * 5;
    if ((long)uVar29 <= (long)uVar1) goto LAB__text__00202ca8;
    if (*puVar18 == 0) {
      uVar43 = *puVar24;
LAB__text__00202d6c:
      uVar3 = *(undefined8 *)(puVar18 + 2);
      uVar38 = puVar24[1];
      bVar36 = *(byte *)((long)puVar24 + 5);
      bVar12 = *(byte *)((long)puVar24 + 6);
      bVar13 = *(byte *)((long)puVar24 + 7);
      uVar16 = puVar24[2];
      bVar14 = *(byte *)((long)puVar24 + 9);
      uVar15 = *(undefined2 *)((long)puVar24 + 10);
      uVar44 = puVar24[3];
      uVar25 = puVar18[4];
      *(undefined8 *)puVar24 = *(undefined8 *)puVar18;
      *(undefined8 *)(puVar24 + 2) = uVar3;
      uVar32 = puVar24[4];
      *(char *)(puVar24 + 4) = (char)uVar25;
      if ((long)uVar31 < (long)uVar39) {
LAB__text__00202b80:
        puVar24 = puVar18;
      }
      else {
        do {
          lVar26 = uVar39 * 2;
          uVar39 = uVar39 << 1 | 1;
          uVar1 = lVar26 + 2;
          puVar24 = param_1 + uVar39 * 5;
          if ((long)uVar29 <= (long)uVar1) goto LAB__text__00202ec0;
          if (*puVar24 != 0) {
            if (puVar24[5] == 0) {
LAB__text__00202eb8:
              puVar24 = puVar24 + 5;
              uVar39 = uVar1;
            }
            else {
              cVar28 = (char)param_1[uVar39 * 5 + 1];
              if ((((cVar28 == (char)puVar24[6]) &&
                   (cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 5),
                   cVar28 == *(char *)((long)puVar24 + 0x19))) &&
                  (cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 6),
                  cVar28 == *(char *)((long)puVar24 + 0x1a))) &&
                 ((cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 7),
                  cVar28 == *(char *)((long)puVar24 + 0x1b) &&
                  (cVar28 = (char)param_1[uVar39 * 5 + 2], cVar28 == (char)puVar24[7])))) {
                bVar42 = *(byte *)((long)puVar24 + 0x1d);
                uVar25 = (uint)*(byte *)((long)param_1 + uVar39 * 0x14 + 9);
                if (uVar25 == bVar42) {
                  uVar25 = param_1[uVar39 * 5 + 3];
                  if (uVar25 == puVar24[8]) {
                    if (((char)param_1[uVar39 * 5 + 4] != '\0') &&
                       ((char)param_1[uVar39 * 5 + 4] != (char)puVar24[9]))
                    goto LAB__text__00202eb8;
                  }
                  else if (uVar25 != bVar42 && (int)(uint)bVar42 <= (int)uVar25)
                  goto LAB__text__00202eb8;
                }
                else if (uVar25 != 0) goto LAB__text__00202eb8;
              }
              else if (cVar28 != '\0') goto LAB__text__00202eb8;
            }
LAB__text__00202ec0:
            if (*puVar24 != 0) {
              if (uVar43 == 0) goto LAB__text__00202b80;
              uVar25 = (uint)(byte)puVar24[1];
              if ((((uVar25 == (byte)uVar38) &&
                   (uVar25 = (uint)*(byte *)((long)puVar24 + 5), uVar25 == bVar36)) &&
                  (uVar25 = (uint)*(byte *)((long)puVar24 + 6), uVar25 == bVar12)) &&
                 (((uVar25 = (uint)*(byte *)((long)puVar24 + 7), uVar25 == bVar13 &&
                   (uVar25 = (uint)(byte)puVar24[2], uVar25 == (byte)uVar16)) &&
                  (uVar25 = (uint)*(byte *)((long)puVar24 + 9), uVar25 == bVar14)))) {
                if (puVar24[3] == uVar44) {
                  if (((char)puVar24[4] != '\0') && ((char)puVar24[4] != (char)uVar32))
                  goto LAB__text__00202b80;
                }
                else if ((int)(uint)bVar14 < (int)puVar24[3]) goto LAB__text__00202b80;
              }
              else if (uVar25 != 0) goto LAB__text__00202b80;
            }
          }
          uVar3 = *(undefined8 *)puVar24;
          uVar4 = *(undefined8 *)(puVar24 + 2);
          *(char *)(puVar18 + 4) = (char)puVar24[4];
          *(undefined8 *)puVar18 = uVar3;
          *(undefined8 *)(puVar18 + 2) = uVar4;
          puVar18 = puVar24;
        } while ((long)uVar39 <= (long)uVar31);
      }
      *puVar24 = uVar43;
      *(byte *)(puVar24 + 1) = (byte)uVar38;
      *(byte *)((long)puVar24 + 5) = bVar36;
      *(byte *)((long)puVar24 + 6) = bVar12;
      *(byte *)((long)puVar24 + 7) = bVar13;
      *(byte *)(puVar24 + 2) = (byte)uVar16;
      *(byte *)((long)puVar24 + 9) = bVar14;
      *(undefined2 *)((long)puVar24 + 10) = uVar15;
      puVar24[3] = uVar44;
      *(char *)(puVar24 + 4) = (char)uVar32;
    }
    else {
      if (puVar18[5] == 0) {
LAB__text__00202ca0:
        puVar18 = puVar18 + 5;
        uVar39 = uVar1;
      }
      else {
        cVar28 = (char)param_1[uVar39 * 5 + 1];
        if (((cVar28 == (char)puVar18[6]) &&
            (cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 5),
            cVar28 == *(char *)((long)puVar18 + 0x19))) &&
           ((cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 6),
            cVar28 == *(char *)((long)puVar18 + 0x1a) &&
            ((cVar28 = *(char *)((long)param_1 + uVar39 * 0x14 + 7),
             cVar28 == *(char *)((long)puVar18 + 0x1b) &&
             (cVar28 = (char)param_1[uVar39 * 5 + 2], cVar28 == (char)puVar18[7])))))) {
          bVar36 = *(byte *)((long)puVar18 + 0x1d);
          uVar43 = (uint)*(byte *)((long)param_1 + uVar39 * 0x14 + 9);
          if (uVar43 == bVar36) {
            uVar43 = param_1[uVar39 * 5 + 3];
            if (uVar43 == puVar18[8]) {
              if (((char)param_1[uVar39 * 5 + 4] != '\0') &&
                 ((char)param_1[uVar39 * 5 + 4] != (char)puVar18[9])) goto LAB__text__00202ca0;
            }
            else if (uVar43 != bVar36 && (int)(uint)bVar36 <= (int)uVar43) goto LAB__text__00202ca0;
          }
          else if (uVar43 != 0) goto LAB__text__00202ca0;
        }
        else if (cVar28 != '\0') goto LAB__text__00202ca0;
      }
LAB__text__00202ca8:
      uVar43 = *puVar24;
      if (*puVar18 == 0) goto LAB__text__00202d6c;
      if (uVar43 != 0) {
        cVar28 = (char)puVar18[1];
        if ((((cVar28 == (char)param_1[uVar35 * 5 + 1]) &&
             (cVar28 = *(char *)((long)puVar18 + 5),
             cVar28 == *(char *)((long)param_1 + uVar35 * 0x14 + 5))) &&
            (cVar28 = *(char *)((long)puVar18 + 6),
            cVar28 == *(char *)((long)param_1 + uVar35 * 0x14 + 6))) &&
           ((cVar28 = *(char *)((long)puVar18 + 7),
            cVar28 == *(char *)((long)param_1 + uVar35 * 0x14 + 7) &&
            (cVar28 = (char)puVar18[2], cVar28 == (char)param_1[uVar35 * 5 + 2])))) {
          bVar36 = *(byte *)((long)param_1 + uVar35 * 0x14 + 9);
          if ((uint)*(byte *)((long)puVar18 + 9) == (uint)bVar36) {
            uVar44 = puVar18[3];
            if (uVar44 == param_1[uVar35 * 5 + 3]) {
              if (((char)puVar18[4] == '\0') || ((char)puVar18[4] == (char)param_1[uVar35 * 5 + 4]))
              goto LAB__text__00202d6c;
            }
            else if (uVar44 == bVar36 || (int)uVar44 < (int)(uint)bVar36) goto LAB__text__00202d6c;
          }
          else if (*(byte *)((long)puVar18 + 9) == 0) goto LAB__text__00202d6c;
        }
        else if (cVar28 == '\0') goto LAB__text__00202d6c;
      }
    }
LAB__text__00202bac:
    bVar2 = uVar35 != 0;
    uVar35 = uVar35 - 1;
  } while (bVar2);
  uVar27 = uVar27 / 0x14;
  do {
    uVar43 = param_1[4];
    uVar29 = 0;
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    puVar18 = param_1;
    do {
      lVar26 = uVar29 + 1;
      puVar24 = puVar18 + lVar26 * 5;
      lVar40 = uVar29 * 2;
      uVar29 = uVar29 << 1 | 1;
      uVar35 = lVar40 + 2;
      if ((long)uVar35 < (long)uVar27) {
        if (*puVar24 != 0) {
          if (puVar24[5] == 0) {
LAB__text__00202fd4:
            puVar24 = puVar24 + 5;
            uVar29 = uVar35;
          }
          else {
            cVar28 = (char)puVar18[lVar26 * 5 + 1];
            if ((((cVar28 == (char)puVar24[6]) &&
                 (cVar28 = *(char *)((long)puVar18 + lVar26 * 0x14 + 5),
                 cVar28 == *(char *)((long)puVar24 + 0x19))) &&
                (cVar28 = *(char *)((long)puVar18 + lVar26 * 0x14 + 6),
                cVar28 == *(char *)((long)puVar24 + 0x1a))) &&
               ((cVar28 = *(char *)((long)puVar18 + lVar26 * 0x14 + 7),
                cVar28 == *(char *)((long)puVar24 + 0x1b) &&
                (cVar28 = (char)puVar18[lVar26 * 5 + 2], cVar28 == (char)puVar24[7])))) {
              bVar36 = *(byte *)((long)puVar24 + 0x1d);
              uVar44 = (uint)*(byte *)((long)puVar18 + lVar26 * 0x14 + 9);
              if (uVar44 == bVar36) {
                uVar44 = puVar18[lVar26 * 5 + 3];
                if (uVar44 == puVar24[8]) {
                  if (((char)puVar18[lVar26 * 5 + 4] != '\0') &&
                     ((char)puVar18[lVar26 * 5 + 4] != (char)puVar24[9])) goto LAB__text__00202fd4;
                }
                else if (uVar44 != bVar36 && (int)(uint)bVar36 <= (int)uVar44)
                goto LAB__text__00202fd4;
              }
              else if (uVar44 != 0) goto LAB__text__00202fd4;
            }
            else if (cVar28 != '\0') goto LAB__text__00202fd4;
          }
        }
      }
      uVar5 = *(undefined8 *)puVar24;
      uVar6 = *(undefined8 *)(puVar24 + 2);
      *(char *)(puVar18 + 4) = (char)puVar24[4];
      *(undefined8 *)puVar18 = uVar5;
      *(undefined8 *)(puVar18 + 2) = uVar6;
      puVar18 = puVar24;
    } while ((long)uVar29 <= (long)(uVar27 - 2 >> 1));
    puVar18 = param_2 + -5;
    local_68 = (undefined1)uVar43;
    if (puVar24 == puVar18) {
      *(undefined1 *)(puVar24 + 4) = local_68;
      *(undefined8 *)puVar24 = uVar3;
      *(undefined8 *)(puVar24 + 2) = uVar4;
    }
    else {
      uVar5 = *(undefined8 *)puVar18;
      uVar6 = *(undefined8 *)(param_2 + -3);
      *(char *)(puVar24 + 4) = (char)param_2[-1];
      *(undefined8 *)puVar24 = uVar5;
      *(undefined8 *)(puVar24 + 2) = uVar6;
      *(undefined8 *)puVar18 = uVar3;
      *(undefined8 *)(param_2 + -3) = uVar4;
      *(undefined1 *)(param_2 + -1) = local_68;
      uVar29 = (long)puVar24 + (0x14 - (long)param_1);
      if (0x14 < (long)uVar29) {
        uVar29 = uVar29 / 0x14 - 2;
        uVar35 = uVar29 >> 1;
        puVar22 = param_1 + uVar35 * 5;
        if (*puVar22 != 0) {
          uVar43 = *puVar24;
          if (uVar43 == 0) {
            bVar36 = (byte)puVar24[1];
            goto LAB__text__00203214;
          }
          bVar36 = (byte)param_1[uVar35 * 5 + 1];
          bVar13 = (byte)puVar24[1];
          bVar12 = bVar36;
          if (bVar36 == (byte)puVar24[1]) {
            bVar12 = *(byte *)((long)param_1 + uVar35 * 0x14 + 5);
            bVar13 = bVar36;
            if ((((bVar12 != *(byte *)((long)puVar24 + 5)) ||
                 (bVar12 = *(byte *)((long)param_1 + uVar35 * 0x14 + 6),
                 bVar12 != *(byte *)((long)puVar24 + 6))) ||
                (bVar12 = *(byte *)((long)param_1 + uVar35 * 0x14 + 7),
                bVar12 != *(byte *)((long)puVar24 + 7))) ||
               (bVar12 = (byte)param_1[uVar35 * 5 + 2], bVar12 != (byte)puVar24[2]))
            goto joined_r0x00203204;
            bVar12 = *(byte *)((long)param_1 + uVar35 * 0x14 + 9);
            bVar14 = *(byte *)((long)puVar24 + 9);
            if ((uint)bVar12 != (uint)bVar14) goto joined_r0x00203204;
            uVar44 = param_1[uVar35 * 5 + 3];
            if (uVar44 != puVar24[3]) {
              if (uVar44 != bVar14 && (int)(uint)bVar14 <= (int)uVar44) goto LAB__text__00203214;
              goto LAB__text__00202fa0;
            }
            if (((char)param_1[uVar35 * 5 + 4] == '\0') ||
               ((char)param_1[uVar35 * 5 + 4] == (char)puVar24[4])) goto LAB__text__00202fa0;
          }
          else {
joined_r0x00203204:
            bVar36 = bVar13;
            if (bVar12 == 0) goto LAB__text__00202fa0;
          }
LAB__text__00203214:
          uVar3 = *(undefined8 *)(puVar22 + 2);
          bVar12 = *(byte *)((long)puVar24 + 5);
          bVar13 = *(byte *)((long)puVar24 + 6);
          bVar14 = *(byte *)((long)puVar24 + 7);
          uVar38 = puVar24[2];
          bVar42 = *(byte *)((long)puVar24 + 9);
          uVar15 = *(undefined2 *)((long)puVar24 + 10);
          uVar44 = puVar24[3];
          uVar16 = puVar22[4];
          *(undefined8 *)puVar24 = *(undefined8 *)puVar22;
          *(undefined8 *)(puVar24 + 2) = uVar3;
          uVar25 = puVar24[4];
          *(char *)(puVar24 + 4) = (char)uVar16;
          if (uVar29 < 2) {
LAB__text__0020324c:
            puVar24 = puVar22;
          }
          else if (uVar43 == 0) {
            do {
              uVar29 = uVar35 - 1;
              uVar35 = uVar29 >> 1;
              puVar24 = param_1 + uVar35 * 5;
              if (*puVar24 == 0) goto LAB__text__0020324c;
              uVar3 = *(undefined8 *)puVar24;
              uVar4 = *(undefined8 *)(puVar24 + 2);
              *(char *)(puVar22 + 4) = (char)puVar24[4];
              *(undefined8 *)puVar22 = uVar3;
              *(undefined8 *)(puVar22 + 2) = uVar4;
              puVar22 = puVar24;
            } while (1 < uVar29);
          }
          else {
            do {
              uVar29 = uVar35 - 1;
              uVar35 = uVar29 >> 1;
              puVar24 = param_1 + uVar35 * 5;
              if (*puVar24 == 0) goto LAB__text__0020324c;
              bVar23 = (byte)param_1[uVar35 * 5 + 1];
              if (((bVar23 == bVar36) &&
                  (bVar23 = *(byte *)((long)param_1 + uVar35 * 0x14 + 5), bVar23 == bVar12)) &&
                 ((bVar23 = *(byte *)((long)param_1 + uVar35 * 0x14 + 6), bVar23 == bVar13 &&
                  (((bVar23 = *(byte *)((long)param_1 + uVar35 * 0x14 + 7), bVar23 == bVar14 &&
                    (bVar23 = (byte)param_1[uVar35 * 5 + 2], bVar23 == (byte)uVar38)) &&
                   (bVar23 = *(byte *)((long)param_1 + uVar35 * 0x14 + 9),
                   (uint)bVar23 == (uint)bVar42)))))) {
                if (param_1[uVar35 * 5 + 3] == uVar44) {
                  if (((char)param_1[uVar35 * 5 + 4] == '\0') ||
                     ((char)param_1[uVar35 * 5 + 4] == (char)uVar25)) goto LAB__text__0020324c;
                }
                else if ((int)param_1[uVar35 * 5 + 3] <= (int)(uint)bVar42)
                goto LAB__text__0020324c;
              }
              else if (bVar23 == 0) goto LAB__text__0020324c;
              uVar3 = *(undefined8 *)puVar24;
              uVar4 = *(undefined8 *)(puVar24 + 2);
              *(char *)(puVar22 + 4) = (char)puVar24[4];
              *(undefined8 *)puVar22 = uVar3;
              *(undefined8 *)(puVar22 + 2) = uVar4;
              puVar22 = puVar24;
            } while (1 < uVar29);
          }
          *puVar24 = uVar43;
          *(byte *)(puVar24 + 1) = bVar36;
          *(byte *)((long)puVar24 + 5) = bVar12;
          *(byte *)((long)puVar24 + 6) = bVar13;
          *(byte *)((long)puVar24 + 7) = bVar14;
          *(byte *)(puVar24 + 2) = (byte)uVar38;
          *(byte *)((long)puVar24 + 9) = bVar42;
          *(undefined2 *)((long)puVar24 + 10) = uVar15;
          puVar24[3] = uVar44;
          *(char *)(puVar24 + 4) = (char)uVar25;
        }
      }
    }
LAB__text__00202fa0:
    bVar2 = (long)uVar27 < 3;
    uVar27 = uVar27 - 1;
    param_2 = puVar18;
    if (bVar2) {
      return;
    }
  } while( true );
LAB__text__00201e50:
  puVar17 = puVar18 + -3;
LAB__text__00202498:
  puVar18 = puVar22;
  if (puVar22 < puVar17) {
    puVar20 = puVar17;
LAB__text__002024bc:
    uVar3 = *(undefined8 *)puVar18;
    uVar5 = *(undefined8 *)(puVar18 + 2);
    uVar19 = puVar18[4];
    uVar4 = *(undefined8 *)puVar20;
    uVar6 = *(undefined8 *)(puVar20 + 2);
    *(char *)(puVar18 + 4) = (char)puVar20[4];
    *(undefined8 *)puVar18 = uVar4;
    *(undefined8 *)(puVar18 + 2) = uVar6;
    local_68 = (undefined1)uVar19;
    *(undefined1 *)(puVar20 + 4) = local_68;
    *(undefined8 *)puVar20 = uVar3;
    *(undefined8 *)(puVar20 + 2) = uVar5;
    puVar18 = puVar18 + 5;
    uVar19 = (uint)bVar14;
    if (*puVar18 != 0) {
      if (uVar43 == 0) {
        do {
          puVar18 = puVar18 + 5;
        } while (*puVar18 != 0);
      }
      else {
        do {
          bVar42 = (byte)puVar18[1];
          if (((((bVar42 == uVar25) && (bVar42 = *(byte *)((long)puVar18 + 5), bVar42 == uVar32)) &&
               (bVar42 = *(byte *)((long)puVar18 + 6), bVar42 == uVar33)) &&
              ((bVar42 = *(byte *)((long)puVar18 + 7), bVar42 == uVar34 &&
               (bVar42 = (byte)puVar18[2], bVar42 == uVar37)))) &&
             (bVar42 = *(byte *)((long)puVar18 + 9), bVar42 == uVar41)) {
            if (puVar18[3] == uVar44) {
              if (((char)puVar18[4] == '\0') || ((char)puVar18[4] == cVar28)) break;
            }
            else if ((int)puVar18[3] <= (int)uVar19) break;
          }
          else if (bVar42 == 0) break;
          puVar18 = puVar18 + 5;
        } while (*puVar18 != 0);
      }
    }
    if (uVar43 != 0) {
      puVar20 = puVar20 + -2;
      do {
        if (puVar20[-3] != 0) {
          uVar21 = (uint)(byte)puVar20[-2];
          if ((((uVar21 == uVar25) &&
               (uVar21 = (uint)*(byte *)((long)puVar20 + -7), uVar21 == uVar32)) &&
              (uVar21 = (uint)*(byte *)((long)puVar20 + -6), uVar21 == uVar33)) &&
             (((uVar21 = (uint)*(byte *)((long)puVar20 + -5), uVar21 == uVar34 &&
               (uVar21 = (uint)(byte)puVar20[-1], uVar21 == uVar37)) &&
              (uVar21 = (uint)*(byte *)((long)puVar20 + -3), uVar21 == uVar19)))) {
            uVar21 = *puVar20;
            if (uVar21 == uVar44) {
              if (((char)puVar20[1] != '\0') && ((char)puVar20[1] != cVar28))
              goto LAB__text__002024b0;
            }
            else if (uVar21 != uVar41 && (int)uVar19 <= (int)uVar21) goto LAB__text__002024b0;
          }
          else if (uVar21 != 0) goto LAB__text__002024b0;
        }
        puVar20 = puVar20 + -5;
      } while( true );
    }
    do {
      puVar20 = puVar20 + -5;
    } while (*puVar20 == 0);
    goto LAB__text__002024b4;
  }
LAB__text__00202640:
  puVar20 = puVar18 + -5;
  if (puVar20 != param_1) {
    uVar3 = *(undefined8 *)puVar20;
    uVar4 = *(undefined8 *)(puVar18 + -3);
    *(char *)(param_1 + 4) = (char)puVar18[-1];
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  puVar18[-5] = uVar43;
  *(byte *)(puVar18 + -4) = (byte)uVar38;
  *(byte *)((long)puVar18 + -0xf) = bVar36;
  *(byte *)((long)puVar18 + -0xe) = bVar12;
  *(byte *)((long)puVar18 + -0xd) = bVar13;
  *(byte *)(puVar18 + -3) = (byte)uVar16;
  *(byte *)((long)puVar18 + -0xb) = bVar14;
  *(undefined2 *)((long)puVar18 + -10) = uVar15;
  puVar18[-2] = uVar44;
  *(char *)(puVar18 + -1) = cVar28;
  if (puVar17 <= puVar22) {
    uVar27 = FUN__text__00203e90(param_1,puVar20);
    uVar29 = FUN__text__00203e90(puVar18,param_2);
    if ((uVar29 & 1) != 0) goto LAB__text__002026f8;
    if ((uVar27 & 1) != 0) goto LAB__text__00201b1c;
  }
  FUN__text__00201ac0(param_1,puVar20,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB__text__00201b1c;
LAB__text__002024b0:
  puVar20 = puVar20 + -3;
LAB__text__002024b4:
  if (puVar20 <= puVar18) goto LAB__text__00202640;
  goto LAB__text__002024bc;
LAB__text__002026f8:
  param_2 = puVar20;
  if ((uVar27 & 1) != 0) {
    return;
  }
  goto LAB__text__00201afc;
LAB__text__002021a0:
  puVar22 = puVar22 + -3;
  if (puVar22 <= puVar18) goto LAB__text__0020233c;
  goto LAB__text__002021ac;
}


