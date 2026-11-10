/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00525630; name: FUN_.text__00525630
 */


/* WARNING: Removing unreachable block (ram,0x00525a44) */
/* WARNING: Removing unreachable block (ram,0x00525c44) */

void FUN__text__00525630(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  float *pfVar20;
  ulong uVar21;
  undefined4 *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  undefined4 *puVar28;
  float fVar29;
  ulong local_98;
  undefined4 *local_88;
  
  lVar8 = FUN__text__00506a00();
  param_1[7] = lVar8;
  iVar6 = *(int *)(*(long *)(*(long *)(param_1[6] + 8) + 0x38) + 0xbc);
  *(int *)(param_2 + 0xa8) = iVar6;
  if (*(int *)(param_2 + 0x60) == 0) {
LAB__text__005260d0:
    param_1[7] = 0;
    return;
  }
  puVar27 = *(ulong **)(param_2 + 0x58);
LAB__text__005256b8:
  uVar24 = *puVar27;
  FUN__text__00527f10(param_1,uVar24,0,param_2);
  while (uVar13 = *(uint *)(param_1 + 5), uVar13 != 0) {
    do {
      pfVar20 = (float *)param_1[4];
      fVar29 = *pfVar20;
      lVar8 = *(long *)(pfVar20 + 2);
      if (uVar13 != 0 && uVar13 - 1 != 0) {
        uVar14 = 0;
        uVar3 = *(undefined8 *)(pfVar20 + (ulong)(uVar13 - 1) * 4 + 2);
        *(undefined8 *)pfVar20 = *(undefined8 *)(pfVar20 + (ulong)(uVar13 - 1) * 4);
        *(undefined8 *)(pfVar20 + 2) = uVar3;
        uVar13 = (int)param_1[5] - 1;
        *(uint *)(param_1 + 5) = uVar13;
        uVar21 = 1;
        uVar23 = 0;
        if (uVar13 < 2) goto LAB__text__00525760;
        do {
          uVar23 = uVar21;
          if (*(float *)(param_1[4] + uVar14 * 0x10) <= *(float *)(param_1[4] + uVar21 * 0x10)) {
            uVar1 = (int)uVar14 * 2 + 2;
            uVar23 = uVar14;
            if (uVar1 < uVar13) goto LAB__text__00525770;
            goto LAB__text__005257b4;
          }
LAB__text__00525760:
          do {
            uVar1 = (int)uVar14 * 2 + 2;
            if (uVar1 < uVar13) {
LAB__text__00525770:
              if (*(float *)(param_1[4] + uVar23 * 0x10) <=
                  *(float *)(param_1[4] + (ulong)uVar1 * 0x10)) goto LAB__text__005257b4;
              uVar17 = (uint)uVar14;
              uVar21 = uVar14;
              uVar14 = (ulong)uVar1;
              if (uVar1 == uVar17) goto LAB__text__005256f4;
            }
            else {
LAB__text__005257b4:
              iVar18 = (int)uVar14;
              uVar21 = uVar14;
              uVar14 = uVar23;
              if ((int)uVar23 == iVar18) goto LAB__text__005256f4;
            }
            puVar26 = (undefined8 *)(param_1[4] + uVar21 * 0x10);
            puVar2 = (undefined8 *)(param_1[4] + uVar14 * 0x10);
            uVar4 = puVar2[1];
            uVar3 = *puVar26;
            uVar5 = puVar26[1];
            *puVar26 = *puVar2;
            puVar26[1] = uVar4;
            puVar26 = (undefined8 *)(param_1[4] + uVar14 * 0x10);
            *puVar26 = uVar3;
            puVar26[1] = uVar5;
            uVar13 = *(uint *)(param_1 + 5);
            uVar1 = (int)uVar14 << 1 | 1;
            uVar21 = (ulong)uVar1;
            uVar23 = uVar14;
          } while (uVar13 <= uVar1);
        } while( true );
      }
      uVar13 = 0;
      *(undefined4 *)(param_1 + 5) = 0;
LAB__text__005256f4:
    } while ((uVar13 != 0) && (1.1920929e-07 < ABS(fVar29 - *(float *)(lVar8 + 0x28))));
    lVar9 = FUN__text__005211e0(*(undefined8 *)(lVar8 + 8),
                                *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x78));
    if ((lVar9 != 0 && lVar9 != param_2) &&
       (uVar14 = (ulong)*(uint *)(lVar9 + 0x60), *(uint *)(lVar9 + 0x60) != 0)) {
      plVar19 = *(long **)(lVar9 + 0x58);
      plVar25 = plVar19;
      do {
        if (*plVar25 != *(long *)(lVar8 + 8)) {
          FUN__text__00527f10(param_1,*plVar25,lVar8,lVar9);
          plVar19 = *(long **)(lVar9 + 0x58);
          uVar14 = (ulong)*(uint *)(lVar9 + 0x60);
        }
        plVar25 = plVar25 + 1;
      } while (plVar25 != plVar19 + uVar14);
    }
  }
  iVar18 = (int)param_1[2];
  if (iVar18 != 0) {
    local_88 = *(undefined4 **)param_1[1];
    if (local_88 == (undefined4 *)0x0) {
      local_98 = 0;
      do {
        if (iVar18 - 1 == local_98) goto LAB__text__00525de4;
        local_88 = (undefined4 *)((long *)param_1[1])[local_98 + 1];
        local_98 = local_98 + 1;
      } while (local_88 == (undefined4 *)0x0);
      iVar18 = local_88[0xb];
    }
    else {
      local_98 = 0;
      iVar18 = local_88[0xb];
    }
    if (iVar18 != 0) goto LAB__text__00525908;
LAB__text__005258f0:
    do {
      local_88 = *(undefined4 **)(local_88 + 8);
      if (local_88 == (undefined4 *)0x0) {
        uVar13 = *(uint *)(param_1 + 2);
        if (uVar13 <= (int)local_98 + 1U) {
          uVar13 = (int)local_98 + 1;
        }
        do {
          if (uVar13 - 1 == (int)local_98) {
            iVar18 = (int)param_1[2];
            goto LAB__text__00525de4;
          }
          local_98 = (ulong)((int)local_98 + 1);
          local_88 = *(undefined4 **)(param_1[1] + local_98 * 8);
        } while (local_88 == (undefined4 *)0x0);
        iVar18 = local_88[0xb];
      }
      else {
        iVar18 = local_88[0xb];
      }
    } while (iVar18 == 0);
LAB__text__00525908:
    lVar8 = *(long *)(local_88 + 2);
    if (*(int *)(lVar8 + 0x110) == iVar6) {
LAB__text__00525b70:
      lVar9 = *(long *)(lVar8 + 0x80);
      uVar13 = *(uint *)(lVar8 + 0x88);
    }
    else {
      *(int *)(lVar8 + 0x110) = iVar6;
      lVar8 = *(long *)(local_88 + 2);
      *(undefined4 *)(lVar8 + 0x88) = 0;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
      *(undefined4 *)(lVar8 + 0xb8) = 0;
      (**(code **)(*(long *)(lVar8 + 0x90) + 0x10))();
      *(undefined4 *)(lVar8 + 0xf8) = 0;
      *(undefined8 *)(lVar8 + 0xf0) = 0;
      (**(code **)(*(long *)(lVar8 + 0xd0) + 0x10))((long *)(lVar8 + 0xd0));
      lVar8 = *(long *)(local_88 + 2);
      if (*(long *)(lVar8 + 0x80) != 0) {
        *(undefined4 *)(lVar8 + 0x88) = 0;
        FUN__text__00400fc0(9);
        *(undefined8 *)(lVar8 + 0x80) = 0;
        *(undefined4 *)(lVar8 + 0x8c) = 0;
        lVar8 = *(long *)(local_88 + 2);
      }
      uVar13 = *(uint *)(param_2 + 0x60);
      if (*(uint *)(lVar8 + 0x8c) < uVar13) {
        if (*(long *)(lVar8 + 0x80) == 0) {
          uVar1 = *(uint *)(lVar8 + 0x88);
          lVar9 = FUN__text__00400f80(9,(ulong)uVar13 * 0x90);
          if (lVar9 == 0) goto LAB__text__00525b14;
          lVar10 = *(long *)(lVar8 + 0x80);
          if ((lVar10 == 0) || (lVar10 == lVar9)) goto LAB__text__00525b0c;
          if (uVar1 != 0) {
            if (uVar1 == 1) {
              lVar15 = 0;
LAB__text__00525ad8:
              puVar26 = (undefined8 *)(lVar9 + lVar15 * 0x90);
              *(undefined4 *)(puVar26 + 0x10) = 0;
              *(undefined8 *)((long)puVar26 + 0x84) = 0x7f7fffff;
              *puVar26 = 0;
              memcpy(puVar26,(void *)(*(long *)(lVar8 + 0x80) + lVar15 * 0x90),0x90);
            }
            else {
              lVar10 = 0;
              lVar15 = 0;
              do {
                puVar26 = (undefined8 *)(lVar9 + lVar10);
                *(undefined4 *)(puVar26 + 0x10) = 0;
                *(undefined8 *)((long)puVar26 + 0x84) = 0x7f7fffff;
                *puVar26 = 0;
                memcpy(puVar26,(void *)(*(long *)(lVar8 + 0x80) + lVar10),0x90);
                puVar26[0x12] = 0;
                *(undefined4 *)(puVar26 + 0x22) = 0;
                *(undefined8 *)((long)puVar26 + 0x114) = 0x7f7fffff;
                memcpy(puVar26 + 0x12,(void *)(*(long *)(lVar8 + 0x80) + lVar10 + 0x90),0x90);
                lVar15 = lVar15 + -2;
                lVar10 = lVar10 + 0x120;
              } while (-lVar15 != ((ulong)uVar1 & 0xfffffffe));
              lVar15 = -lVar15;
              if ((uVar1 & 1) != 0) goto LAB__text__00525ad8;
            }
            lVar10 = *(long *)(lVar8 + 0x80);
          }
          FUN__text__00400fc0(9,lVar10);
        }
        else {
          lVar9 = FUN__text__00400fa0(9);
          if (lVar9 == 0) goto LAB__text__00525b14;
        }
LAB__text__00525b0c:
        *(long *)(lVar8 + 0x80) = lVar9;
        *(uint *)(lVar8 + 0x8c) = uVar13;
      }
LAB__text__00525b14:
      lVar8 = *(long *)(local_88 + 2);
      if (*(int *)(lVar8 + 0x60) == 0) goto LAB__text__00525b70;
      plVar25 = *(long **)(lVar8 + 0x58);
      do {
        plVar19 = plVar25 + 1;
        *(int *)(*plVar25 + 0xa8) = iVar6;
        lVar8 = *(long *)(local_88 + 2);
        plVar25 = plVar19;
      } while (plVar19 != (long *)(*(long *)(lVar8 + 0x58) + (ulong)*(uint *)(lVar8 + 0x60) * 8));
      lVar9 = *(long *)(lVar8 + 0x80);
      uVar13 = *(uint *)(lVar8 + 0x88);
    }
    puVar28 = local_88;
    if (uVar13 == 0) goto LAB__text__00525b60;
    uVar14 = (ulong)uVar13;
    uVar13 = 0;
    do {
      uVar1 = uVar13 + (int)(uVar14 >> 1);
      bVar7 = *(ulong *)(lVar9 + (ulong)uVar1 * 0x90) < uVar24;
      if (bVar7) {
        uVar13 = uVar1 + 1;
      }
      uVar23 = uVar14 - bVar7;
      uVar14 = uVar23 >> 1;
    } while (1 < uVar23);
    goto LAB__text__00525bcc;
  }
  goto LAB__text__005256a0;
LAB__text__00525de4:
  if (iVar18 != 0) {
    plVar25 = *(long **)param_1[1];
    if (plVar25 == (long *)0x0) {
      uVar24 = 0;
      do {
        if (iVar18 - 1 == uVar24) goto LAB__text__005256a0;
        plVar25 = (long *)((undefined8 *)param_1[1])[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (plVar25 == (long *)0x0);
    }
    else {
      uVar24 = 0;
    }
    do {
      plVar19 = (long *)plVar25[6];
      while (plVar19 != (long *)0x0) {
        plVar16 = (long *)*param_1;
        if (plVar16 == (long *)0x0) {
          plVar16 = (long *)0x0;
          plVar11 = (long *)0x0;
          plVar12 = (long *)plVar19[6];
joined_r0x00525ee0:
          lVar8 = lRam00000000000001d0;
          if (lRam00000000000001d0 == 0) goto LAB__text__00525f70;
LAB__text__00525f3c:
          *plVar19 = lVar8;
          plVar11[0x3a] = (long)plVar19;
          iVar18 = (int)plVar11[0x39] + 1;
          *(int *)(plVar11 + 0x39) = iVar18;
          plVar19 = plVar12;
        }
        else {
          if ((plVar19 < plVar16) || (plVar16 + 0x38 <= plVar19)) {
            plVar11 = (long *)plVar16[0x38];
            if (plVar11 == (long *)0x0) {
              plVar12 = (long *)plVar19[6];
              goto joined_r0x00525ee0;
            }
            if (plVar19 < plVar11 || plVar11 + 0x38 <= plVar19) {
              do {
                plVar16 = plVar11;
                plVar11 = (long *)plVar16[0x38];
                if (plVar11 == (long *)0x0) break;
              } while ((plVar19 < plVar11) || (plVar11 + 0x38 <= plVar19));
            }
            plVar12 = (long *)plVar19[6];
            lVar8 = plVar11[0x3a];
          }
          else {
            plVar12 = (long *)plVar19[6];
            lVar8 = plVar16[0x3a];
            plVar11 = plVar16;
            plVar16 = (long *)0x0;
          }
          if (lVar8 != 0) goto LAB__text__00525f3c;
LAB__text__00525f70:
          plVar11[0x3a] = (long)plVar19;
          *plVar19 = 0;
          iVar18 = (int)plVar11[0x39] + 1;
          *(int *)(plVar11 + 0x39) = iVar18;
          plVar19 = plVar12;
        }
        if (iVar18 == 8) {
          plVar12 = param_1;
          if ((long *)*param_1 != plVar11) {
            plVar12 = plVar16 + 0x38;
          }
          *plVar12 = plVar11[0x38];
          FUN__text__00400fc0(0xb);
        }
      }
      plVar16 = (long *)plVar25[4];
      uVar14 = uVar24 & 0xffffffff;
      plVar19 = plVar16;
      if (plVar16 == (long *)0x0) {
        uVar13 = *(uint *)(param_1 + 2);
        if (uVar13 <= (int)uVar24 + 1U) {
          uVar13 = (int)uVar24 + 1;
        }
        uVar14 = (ulong)uVar13;
        uVar23 = uVar24 & 0xffffffff;
        do {
          if (uVar13 - 1 == (int)uVar23) {
            plVar19 = (long *)0x0;
            goto LAB__text__00525fb4;
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          plVar19 = *(long **)(param_1[1] + uVar23 * 8);
        } while (plVar19 == (long *)0x0);
        uVar14 = uVar23;
      }
LAB__text__00525fb4:
      *(long **)(param_1[1] + (uVar24 & 0xffffffff) * 8) = plVar16;
      plVar16 = (long *)*param_1;
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        plVar11 = (long *)0x0;
joined_r0x0052600c:
        lVar8 = lRam00000000000001d0;
        if (lRam00000000000001d0 == 0) goto LAB__text__00526090;
LAB__text__0052605c:
        *plVar25 = lVar8;
        plVar11[0x3a] = (long)plVar25;
        iVar18 = (int)plVar11[0x39] + 1;
        *(int *)(plVar11 + 0x39) = iVar18;
      }
      else {
        if ((plVar25 < plVar16) || (plVar16 + 0x38 <= plVar25)) {
          plVar11 = (long *)plVar16[0x38];
          if (plVar11 == (long *)0x0) goto joined_r0x0052600c;
          do {
            if ((plVar11 <= plVar25) && (plVar12 = plVar11, plVar25 < plVar11 + 0x38)) break;
            plVar12 = (long *)plVar11[0x38];
            plVar16 = plVar11;
            plVar11 = plVar12;
          } while (plVar12 != (long *)0x0);
          lVar8 = plVar12[0x3a];
          plVar11 = plVar12;
        }
        else {
          lVar8 = plVar16[0x3a];
          plVar11 = plVar16;
          plVar16 = (long *)0x0;
        }
        if (lVar8 != 0) goto LAB__text__0052605c;
LAB__text__00526090:
        plVar11[0x3a] = (long)plVar25;
        *plVar25 = 0;
        iVar18 = (int)plVar11[0x39] + 1;
        *(int *)(plVar11 + 0x39) = iVar18;
      }
      if (iVar18 == 8) {
        plVar25 = param_1;
        if ((long *)*param_1 != plVar11) {
          plVar25 = plVar16 + 0x38;
        }
        *plVar25 = plVar11[0x38];
        FUN__text__00400fc0(0xb);
      }
      uVar24 = uVar14;
      plVar25 = plVar19;
    } while (plVar19 != (long *)0x0);
  }
LAB__text__005256a0:
  puVar27 = puVar27 + 1;
  if (puVar27 == (ulong *)(*(long *)(param_2 + 0x58) + (ulong)*(uint *)(param_2 + 0x60) * 8))
  goto LAB__text__005260d0;
  goto LAB__text__005256b8;
LAB__text__00525b60:
  if (lVar9 != 0) {
    uVar13 = 0;
LAB__text__00525bcc:
    do {
      lVar9 = *(long *)(puVar28 + 2);
      uVar17 = *(uint *)(lVar9 + 0x88);
      uVar1 = *(uint *)(lVar9 + 0x8c);
      lVar8 = *(long *)(lVar9 + 0x80);
      if (uVar17 < uVar1) {
LAB__text__00525d38:
        puVar26 = (undefined8 *)(lVar8 + (ulong)uVar13 * 0x90);
        if (uVar13 < uVar17) {
          memmove(puVar26 + 0x12,puVar26,(ulong)((uVar17 - uVar13) * 0x90));
        }
        if (lVar8 != 0) {
          lVar8 = lVar8 + (ulong)uVar13 * 0x90;
          *puVar26 = 0;
          *(undefined4 *)(lVar8 + 0x80) = 0;
          *(undefined8 *)(lVar8 + 0x84) = 0x7f7fffff;
        }
        *(int *)(lVar9 + 0x88) = *(int *)(lVar9 + 0x88) + 1;
        lVar8 = *(long *)(lVar9 + 0x80);
        if (lVar8 != 0) {
          lVar9 = lVar8 + (ulong)uVar13 * 0x90;
          *(undefined4 *)(lVar9 + 0x84) = puVar28[10];
          *(undefined4 *)(lVar9 + 0x80) = puVar28[0xb];
          *(undefined4 *)(lVar9 + 0x88) = *puVar28;
          *(undefined4 *)(lVar9 + 0x8c) = puVar28[1];
          puVar22 = puVar28;
          do {
            uVar14 = -(ulong)(puVar22[0xb] - 1 >> 0x1f) & 0xfffffff800000000 |
                     (ulong)(puVar22[0xb] - 1) << 3;
            *(undefined8 *)(lVar8 + (ulong)uVar13 * 0x90 + uVar14) = *(undefined8 *)(puVar22 + 2);
            *(undefined8 *)(lVar8 + (ulong)uVar13 * 0x90 + uVar14 + 0x40) =
                 *(undefined8 *)(puVar22 + 4);
            puVar22 = *(undefined4 **)(puVar22 + 6);
          } while (puVar22 != (undefined4 *)0x0);
        }
      }
      else {
        iVar18 = uVar1 + (uVar1 >> 1);
        if (uVar1 == 0) {
          iVar18 = 1;
        }
        uVar1 = iVar18 + uVar1;
        if (lVar8 == 0) {
          lVar8 = FUN__text__00400f80(9,(ulong)uVar1 * 0x90);
          if (lVar8 == 0) goto LAB__text__00525bc4;
          lVar10 = *(long *)(lVar9 + 0x80);
          if ((lVar10 == 0) || (lVar10 == lVar8)) goto LAB__text__00525d24;
          if (uVar17 != 0) {
            if (uVar17 == 1) {
              lVar15 = 0;
LAB__text__00525cf0:
              puVar26 = (undefined8 *)(lVar8 + lVar15 * 0x90);
              *(undefined4 *)(puVar26 + 0x10) = 0;
              *(undefined8 *)((long)puVar26 + 0x84) = 0x7f7fffff;
              *puVar26 = 0;
              memcpy(puVar26,(void *)(*(long *)(lVar9 + 0x80) + lVar15 * 0x90),0x90);
            }
            else {
              lVar10 = 0;
              lVar15 = 0;
              do {
                puVar26 = (undefined8 *)(lVar8 + lVar10);
                *(undefined4 *)(puVar26 + 0x10) = 0;
                *(undefined8 *)((long)puVar26 + 0x84) = 0x7f7fffff;
                *puVar26 = 0;
                memcpy(puVar26,(void *)(*(long *)(lVar9 + 0x80) + lVar10),0x90);
                puVar26[0x12] = 0;
                *(undefined4 *)(puVar26 + 0x22) = 0;
                *(undefined8 *)((long)puVar26 + 0x114) = 0x7f7fffff;
                memcpy(puVar26 + 0x12,(void *)(*(long *)(lVar9 + 0x80) + lVar10 + 0x90),0x90);
                lVar15 = lVar15 + -2;
                lVar10 = lVar10 + 0x120;
              } while (-((ulong)uVar17 & 0xfffffffe) != lVar15);
              lVar15 = -lVar15;
              if ((uVar17 & 1) != 0) goto LAB__text__00525cf0;
            }
            lVar10 = *(long *)(lVar9 + 0x80);
          }
          FUN__text__00400fc0(9,lVar10);
LAB__text__00525d24:
          *(long *)(lVar9 + 0x80) = lVar8;
          *(uint *)(lVar9 + 0x8c) = uVar1;
          if (uVar17 < uVar1) {
            uVar17 = *(uint *)(lVar9 + 0x88);
            goto LAB__text__00525d38;
          }
        }
        else {
          lVar8 = FUN__text__00400fa0(9,lVar8);
          if (lVar8 != 0) goto LAB__text__00525d24;
        }
      }
LAB__text__00525bc4:
      plVar25 = (long *)(puVar28 + 0xc);
      puVar28 = (undefined4 *)*plVar25;
    } while ((undefined4 *)*plVar25 != (undefined4 *)0x0);
  }
  goto LAB__text__005258f0;
}


