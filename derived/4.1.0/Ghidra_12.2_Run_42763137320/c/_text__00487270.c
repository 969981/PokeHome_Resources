/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00487270; name: FUN_.text__00487270
 */


void FUN__text__00487270(ulong param_1,ulong param_2,undefined8 *param_3,long param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  bool bVar15;
  void *pvVar16;
  uint *puVar17;
  undefined4 *puVar18;
  int iVar19;
  long lVar20;
  undefined4 *puVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  undefined4 *puVar35;
  float *pfVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  ulong uVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  long local_e0;
  ulong local_d8;
  undefined8 *local_d0;
  uint local_c8;
  uint local_c4;
  ulong local_c0;
  undefined8 *local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  void *local_98;
  long local_90;
  ulong local_88;
  void *local_78;
  
  uVar38 = (uint)param_2;
  iVar8 = -(uVar38 >> 0xf & 1);
  uVar23 = iVar8 + uVar38;
  uVar37 = uVar23 & 0xff;
  uVar39 = (ulong)uVar37;
  if (uVar37 - 1 == 0) {
    *(undefined4 *)param_3 = 0x3f800000;
    return;
  }
  if (((uVar38 & 0xffff7f00) >> 0xc | 4) == 7) {
    *param_3 = 0x3f0000003f000000;
    if ((param_1 & 0xfe) == 0) {
      return;
    }
    *(undefined8 *)((long)param_3 + ((ulong)((uVar38 & 0xff) + 3) & 0x1fc) * 4) = 0xbf0000003f000000
    ;
    return;
  }
  if (param_4 == 0) {
    return;
  }
  if (uVar37 == 0) {
    return;
  }
  puVar31 = (undefined8 *)(param_4 + 0x20);
  puVar28 = (uint *)*puVar31;
  uVar5 = *(uint *)(param_4 + 0x28);
  puVar17 = puVar28;
  if (uVar5 == 0) {
LAB__text__00487374:
    if (puVar17 != puVar28 + (ulong)uVar5 * 4) {
      puVar17 = puVar17 + 2;
      goto LAB__text__00487b90;
    }
  }
  else {
    lVar30 = (ulong)uVar5 << 4;
    do {
      if (*puVar17 == (uint)param_1 && puVar17[1] == uVar38) goto LAB__text__00487374;
      puVar17 = puVar17 + 4;
      lVar30 = lVar30 + -0x10;
    } while (lVar30 != 0);
  }
  cVar6 = *(char *)((param_1 & 0xff) + 0x73b748);
  uVar41 = (ulong)cVar6;
  uVar5 = (uint)param_1 & 0xff;
  local_78 = (void *)0x0;
  local_b8 = puVar31;
  if ((uVar38 & 0xf00) == 0x100) {
    local_c0 = param_1;
    local_90 = FUN__text__00484bf0(param_4,uVar38 & 0xffff7f00 | uVar23 & 0xff);
    if (local_90 != 0) {
      local_c4 = uVar5;
      lVar30 = (long)(int)cVar6;
      if ((uVar38 & 0xff9c0f00) == 0x100) {
        local_98 = (void *)((long)&local_e0 - (ulong)((uVar37 * 4 + 0xc & 0x7f0) * 0xc));
        uVar23 = uVar37 + 3 & 0x1fc;
        if (uVar23 != 0) {
          memset(local_98,0,(ulong)(uVar23 * 0x30));
        }
        pvVar16 = local_98;
        lVar24 = 0;
        uVar5 = uVar37 + 2;
        if (3 < uVar37) {
          uVar5 = uVar37;
        }
        pfVar26 = (float *)(local_90 + 8);
        do {
          uVar39 = 1;
          fVar42 = *(float *)(lVar24 * 0x10 + 0x73cea0);
          fVar44 = *(float *)(lVar24 * 0x10 + 0x73cea8);
          puVar17 = (uint *)((ulong)(uVar37 - 1) * 0x20 + 0x73b770);
          pfVar36 = pfVar26;
          do {
            puVar28 = puVar17;
            pfVar9 = pfVar36 + -1;
            pfVar10 = pfVar36 + 1;
            fVar45 = pfVar36[-2] * fVar42;
            fVar46 = *pfVar36 * fVar42;
            if (uVar5 <= uVar39) break;
            pfVar36 = pfVar36 + 4;
            uVar39 = uVar39 + 1;
            puVar17 = puVar28 + 1;
          } while (fVar46 < -(*pfVar10 * fVar44) || fVar45 < -(*pfVar9 * fVar44));
          pauVar3 = (undefined1 (*) [16])((long)pvVar16 + lVar24 * (ulong)uVar23 * 4);
          fVar42 = fVar45 + 1.1920929e-07 + *pfVar9 * fVar44;
          uVar34 = (ulong)(*puVar28 >> 0xe) & 0x3fffc;
          uVar39 = (ulong)(puVar28[1] >> 0xe) & 0x3fffc;
          fVar44 = fVar46 + 1.1920929e-07 + *pfVar10 * fVar44;
          fVar42 = fVar42 * fVar42;
          fVar44 = fVar44 * fVar44;
          fVar45 = 0.083333336 / (fVar44 + fVar42);
          *(float *)(*pauVar3 + uVar34) = *(float *)(*pauVar3 + uVar34) + fVar42 * fVar45;
          *(float *)(*pauVar3 + uVar39) = *(float *)(*pauVar3 + uVar39) + fVar44 * fVar45;
          if (uVar23 != 0) {
            pauVar32 = pauVar3;
            do {
              auVar43 = NEON_frsqrte(*pauVar32,4);
              auVar43 = NEON_frecpe(auVar43,4);
              pauVar33 = pauVar32 + 1;
              *(long *)(*pauVar32 + 8) = auVar43._8_8_;
              *(long *)*pauVar32 = auVar43._0_8_;
              pauVar32 = pauVar33;
            } while (pauVar33 < (undefined1 (*) [16])(*pauVar3 + (ulong)uVar23 * 4));
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0xc);
        lVar24 = FUN__text__00487bd0(uVar41 & 0xffffffff);
        local_c8 = 0xc;
        fVar44 = 0.5235988;
        lVar27 = 0x889bc0;
      }
      else {
        uVar7 = *(uint *)(lVar30 * 4 + 0x73b734);
        local_98 = (void *)((long)&local_e0 - (ulong)(uVar7 * (uVar37 * 4 + 0xc & 0x7f0)));
        fVar42 = 1.0 / (float)uVar7;
        uVar5 = uVar37 + 3 & 0x1fc;
        local_d8 = uVar41;
        local_d0 = param_3;
        if (uVar7 * uVar5 != 0) {
          memset(local_98,0,(ulong)(uVar7 * uVar5) << 2);
        }
        fVar44 = fVar42 * 12.566371;
        local_a0 = *(long *)(lVar30 * 8 + 0x889b98);
        uVar40 = uVar7;
        if (uVar7 < 2) {
          uVar40 = 1;
        }
        local_a8 = (ulong)uVar40;
        uVar22 = 0;
        uVar34 = 0;
        local_88 = uVar39 & 7;
        local_b0 = (long)local_98 + 0x10;
        pvVar16 = local_98;
        local_e0 = lVar30;
        local_c8 = uVar7;
        do {
          lVar30 = uVar22 * 4;
          pauVar3 = (undefined1 (*) [16])((long)pvVar16 + (ulong)(uVar5 * (int)uVar34) * 4);
          pfVar26 = (float *)(local_a0 + uVar34 * 0x10);
          FUN__text__0048c9a0(pfVar26[2],-*pfVar26,pfVar26[1],local_90,uVar37,pauVar3);
          pvVar16 = local_98;
          if (uVar37 < 8) {
            lVar24 = 0;
            fVar45 = 0.0;
          }
          else {
            fVar45 = 0.0;
            lVar24 = 0;
            pfVar26 = (float *)(local_b0 + lVar30);
            do {
              pfVar36 = pfVar26 + -4;
              pfVar11 = pfVar26 + -3;
              lVar24 = lVar24 + -8;
              pfVar9 = pfVar26 + -2;
              pfVar12 = pfVar26 + -1;
              fVar46 = *pfVar26;
              pfVar13 = pfVar26 + 1;
              pfVar10 = pfVar26 + 2;
              pfVar14 = pfVar26 + 3;
              pfVar26 = pfVar26 + 8;
              fVar45 = *pfVar14 + *pfVar10 +
                       *pfVar13 + fVar46 + *pfVar12 + *pfVar9 + *pfVar11 + *pfVar36 + fVar45;
            } while (-lVar24 != (uVar39 & 0xf8));
            lVar24 = -lVar24;
          }
          if (local_88 != 0) {
            pfVar26 = (float *)((long)local_98 + lVar30 + lVar24 * 4);
            uVar41 = local_88;
            do {
              uVar41 = uVar41 - 1;
              fVar45 = *pfVar26 + fVar45;
              pfVar26 = pfVar26 + 1;
            } while (uVar41 != 0);
          }
          if (0.0 < fVar45) {
            if (uVar37 == 1) {
              uVar41 = 0;
            }
            else {
              uVar41 = 0;
              do {
                pfVar26 = (float *)((long)local_98 + uVar41 * 4 + lVar30);
                uVar41 = uVar41 + 2;
                *pfVar26 = *pfVar26 * fVar42 * (1.0 / fVar45);
                pfVar26[1] = pfVar26[1] * fVar42 * (1.0 / fVar45);
              } while ((uVar39 & 0xfe) != uVar41);
            }
            if ((uVar23 & 1) != 0) {
              *(float *)(*pauVar3 + uVar41 * 4) =
                   (*(float *)(*pauVar3 + uVar41 * 4) * fVar42) / fVar45;
            }
            if (uVar5 != 0) {
              pauVar32 = pauVar3;
              do {
                auVar43 = NEON_frsqrte(*pauVar32,4);
                auVar43 = NEON_frecpe(auVar43,4);
                pauVar33 = pauVar32 + 1;
                *(long *)(*pauVar32 + 8) = auVar43._8_8_;
                *(long *)*pauVar32 = auVar43._0_8_;
                pauVar32 = pauVar33;
              } while (pauVar33 < (undefined1 (*) [16])(*pauVar3 + (ulong)uVar5 * 4));
            }
          }
          uVar41 = local_d8;
          uVar34 = uVar34 + 1;
          uVar22 = (ulong)((int)uVar22 + uVar5);
        } while (uVar34 != local_a8);
        lVar24 = FUN__text__00482470(local_d8 & 0xffffffff);
        lVar27 = 0x889b70;
        lVar30 = local_e0;
        param_3 = local_d0;
      }
      uVar23 = local_c4;
      if (lVar24 == 0) {
        return;
      }
      lVar30 = *(long *)(lVar27 + lVar30 * 8);
      uVar39 = (ulong)(((uVar38 & 0xff) * 4 + 0xc & 0x7f0) * local_c4);
      local_78 = (void *)FUN__text__00400f80(0,uVar39);
      if (local_78 == (void *)0x0) {
        return;
      }
      iVar19 = (int)uVar41 + 2;
      memset(local_78,0,uVar39);
      if ((iVar19 != 0) && (uVar23 != 0)) {
        uVar7 = iVar19 * iVar19;
        uVar5 = (uVar38 & 0xff) + 3 & 0x1fc;
        if (local_c8 == 0) {
          if (uVar23 < 0xc) {
            uVar37 = 0;
            uVar29 = *(uint *)((ulong)(uVar23 - 1) * 4 + 0x73cc20);
            uVar39 = (ulong)(iVar8 + uVar38) & 0xff;
            uVar40 = 1;
            if ((iVar8 + uVar38 & 0xfe) == 0) {
              uVar39 = 1;
            }
            do {
              if ((uVar29 >> (ulong)(uVar40 - 1 & 0x1f) & 1) == 0) {
                memset((void *)((long)local_78 + (ulong)(uVar37 * uVar5) * 4),0,uVar39 << 2);
                uVar37 = uVar37 + 1;
                uVar23 = local_c4;
              }
            } while ((uVar40 < uVar7) && (uVar40 = uVar40 + 1, uVar37 < uVar23));
          }
          else {
            lVar30 = 0;
            uVar39 = 1;
            uVar34 = local_c0 & 0xff;
            uVar41 = (ulong)(iVar8 + uVar38) & 0xff;
            if ((iVar8 + uVar38 & 0xfe) == 0) {
              uVar41 = 1;
            }
            do {
              memset((void *)((long)local_78 + lVar30),0,uVar41 << 2);
              if (uVar7 <= (uint)uVar39) break;
              lVar30 = lVar30 + ((ulong)((uVar38 & 0xff) * 4 + 0xc) & 0x7f0);
              bVar15 = uVar39 < uVar34;
              uVar39 = uVar39 + 1;
            } while (bVar15);
          }
        }
        else {
          uVar40 = uVar37 + 3;
          uVar4 = uVar40 & 0x1fc;
          uVar39 = 0;
          uVar29 = 0;
          if (uVar37 < 2) {
            uVar37 = 1;
          }
          do {
            if ((0xb < uVar23) ||
               ((*(uint *)((ulong)(uVar23 - 1) * 4 + 0x73cc20) >> (ulong)((uint)uVar39 & 0x1f) & 1)
                == 0)) {
              uVar41 = 0;
              iVar8 = (uint)uVar39 * local_c8;
              do {
                fVar42 = *(float *)(lVar30 + uVar39 * 4) * fVar44;
                if (local_c8 == 1) {
                  uVar34 = 0;
                  fVar45 = 0.0;
                }
                else {
                  fVar45 = 0.0;
                  uVar22 = 0;
                  uVar34 = 0;
                  do {
                    lVar27 = uVar22 * 4;
                    uVar2 = iVar8 + (int)uVar34;
                    uVar34 = uVar34 + 2;
                    iVar19 = (int)uVar22;
                    uVar22 = (ulong)(iVar19 + (uVar40 * 2 & 0x3f8));
                    fVar45 = fVar45 + *(float *)(lVar24 + (ulong)uVar2 * 4) *
                                      fVar42 * *(float *)((long)local_98 + lVar27 + uVar41 * 4) +
                             *(float *)(lVar24 + (ulong)(uVar2 + 1) * 4) *
                             fVar42 * *(float *)((long)local_98 +
                                                (ulong)(uVar4 + iVar19) * 4 + uVar41 * 4);
                  } while (((ulong)local_c8 & 0xfffffffe) != uVar34);
                }
                if ((local_c8 & 1) != 0) {
                  fVar45 = fVar45 + *(float *)(lVar24 + (ulong)(uint)(iVar8 + (int)uVar34) * 4) *
                                    *(float *)((long)local_98 +
                                              (ulong)(uVar4 * (int)uVar34) * 4 + uVar41 * 4) *
                                    fVar42;
                }
                *(float *)((long)local_78 + uVar41 * 4 + (ulong)(uVar29 * uVar5) * 4) = fVar45;
                uVar41 = uVar41 + 1;
              } while (uVar41 != uVar37);
              uVar29 = uVar29 + 1;
            }
            uVar39 = uVar39 + 1;
          } while ((uVar39 < uVar7) && (uVar29 < uVar23));
        }
      }
    }
LAB__text__00487b6c:
    param_1 = local_c0;
    if (local_78 == (void *)0x0) {
      return;
    }
  }
  else {
    lVar30 = FUN__text__00482470(uVar41 & 0xffffffff);
    uVar39 = (ulong)(((uVar38 & 0xff) * 4 + 0xc & 0x7f0) * uVar5);
    local_78 = (void *)FUN__text__00400f80(0,uVar39);
    if (local_78 == (void *)0x0) {
      return;
    }
    memset(local_78,0,uVar39);
    if ((param_1 & 0xff) != 0) {
      uVar39 = param_2 & 0xff;
      if (uVar37 < 2) {
        uVar37 = 1;
      }
      lVar25 = 0;
      lVar27 = 0;
      uVar41 = 0;
      puVar35 = (undefined4 *)(lVar30 + 8);
      uVar34 = (ulong)((int)uVar39 * 4 + 0xc) & 0x7f0;
      lVar24 = 8;
      do {
        if (uVar37 < 4) {
          lVar20 = 0;
        }
        else {
          lVar20 = 0;
          puVar21 = (undefined4 *)((long)local_78 + lVar24);
          puVar18 = puVar35;
          do {
            lVar20 = lVar20 + -4;
            puVar21[-2] = puVar18[-2];
            puVar21[-1] = puVar18[-1];
            *puVar21 = *puVar18;
            puVar1 = puVar18 + 1;
            puVar18 = puVar18 + 4;
            puVar21[1] = *puVar1;
            puVar21 = puVar21 + 4;
          } while (-lVar20 != ((ulong)uVar37 & 0xfc));
          lVar20 = -lVar20;
        }
        if ((uVar37 & 3) != 0) {
          puVar18 = (undefined4 *)((long)local_78 + lVar27 + lVar20 * 4);
          puVar21 = (undefined4 *)(lVar30 + (lVar20 + lVar25) * 4);
          lVar20 = ((ulong)uVar37 & 3) << 2;
          do {
            lVar20 = lVar20 + -4;
            *puVar18 = *puVar21;
            puVar18 = puVar18 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar20 != 0);
        }
        uVar41 = uVar41 + 1;
        puVar35 = puVar35 + uVar39;
        lVar24 = lVar24 + uVar34;
        lVar27 = lVar27 + uVar34;
        lVar25 = lVar25 + uVar39;
        local_c0 = param_1;
      } while (uVar41 != (param_1 & 0xff));
      goto LAB__text__00487b6c;
    }
  }
  puVar17 = (uint *)FUN__text__004880f0(local_b8,param_1 & 0xffffffff | param_2 << 0x20,&local_78);
  if (puVar17 == (uint *)0x0) {
    FUN__text__00400fc0(0,local_78);
    return;
  }
LAB__text__00487b90:
  iVar8 = ((uVar38 & 0xff) + 3 & 0x1fc) * ((uint)param_1 & 0xff);
  if (iVar8 != 0) {
    memcpy(param_3,*(void **)puVar17,(ulong)(uint)(iVar8 * 4));
  }
  return;
}


