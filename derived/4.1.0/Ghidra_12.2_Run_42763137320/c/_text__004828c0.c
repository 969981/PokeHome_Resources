/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004828c0; name: FUN_.text__004828c0
 */


void FUN__text__004828c0(float param_1,float param_2,float param_3,undefined8 param_4,
                        undefined4 *param_5,uint param_6,uint param_7,ulong param_8,
                        undefined8 *param_9)

{
  undefined1 (*pauVar1) [16];
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  float *pfVar19;
  ulong uVar20;
  ulong uVar21;
  void *pvVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  float *pfVar28;
  uint uVar29;
  int iVar30;
  float *pfVar31;
  float *pfVar32;
  uint *puVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  undefined4 *puVar40;
  float *pfVar41;
  uint *puVar42;
  ulong uVar43;
  ulong uVar44;
  undefined1 *puVar45;
  ulong uVar46;
  ulong uVar47;
  undefined1 *puVar48;
  undefined1 (*pauVar49) [16];
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined4 *local_130 [2];
  ulong local_120;
  ulong local_118;
  undefined8 local_110;
  undefined4 *local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 **local_b0;
  
  ppuVar13 = local_130;
  ppuVar12 = local_130;
  uVar51 = (uint)param_8;
  uVar29 = uVar51 >> 8 & 0xf;
  uVar44 = param_8 & 0xffffffff;
  if (uVar29 == 1) {
    uVar23 = uVar51 >> 0xc & 0xfffffff7;
    uVar39 = uVar23 - (uVar23 >> 1 & 0x55555555);
    uVar39 = (uVar39 & 0x33333333) + (uVar39 >> 2 & 0x33333333);
    uVar44 = (ulong)((uVar39 + (uVar39 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar23 << 0xc |
                    0x100);
  }
  uVar18 = (uint)uVar44;
  local_b8 = (ulong)(uVar18 & 0xff);
  uVar39 = param_6 & 0xff;
  uVar23 = (uVar18 & 0xff) - 1;
  local_b0 = (undefined4 **)(ulong)uVar23;
  if ((uVar44 & 0xff) == 0 || uVar23 == 0) {
    if (uVar23 != 0) {
      return;
    }
    if ((param_6 & 0xf00) == 0x200) {
      *param_5 = 0x3f800000;
      return;
    }
    uVar29 = uVar39 - 1;
    if (uVar39 == 0 || uVar29 == 0) {
      uVar39 = 1;
    }
    uVar44 = (ulong)uVar39;
    puVar33 = (uint *)((ulong)uVar29 * 0x20 + 0x73b770);
    do {
      if ((param_7 & 0xffff & *puVar33) != 0) {
        param_5[(ulong)(*puVar33 >> 0x10) * (ulong)((uVar51 & 0xff) + 3 & 0x1fc)] = 0x3f800000;
      }
      uVar44 = uVar44 - 1;
      puVar33 = puVar33 + 1;
    } while (uVar44 != 0);
    return;
  }
  uVar23 = param_6 >> 8 & 0xf;
  local_c0 = (undefined4 **)(CONCAT44(local_c0._4_4_,param_6) & 0xffffffff000000ff);
  if ((uVar23 == 0) || (uVar29 == 0)) {
    uVar29 = uVar51 & 0xff;
    uVar23 = uVar29 + 3 & 0x1fc;
    iVar30 = uVar23 * uVar39;
    if (iVar30 != 0) {
      memset(param_5,0,(ulong)(uint)(iVar30 * 4));
      uVar39 = (uint)local_c0;
    }
    if ((param_6 & 0xf00) != 0x200) {
      if (uVar29 <= uVar39) {
        uVar39 = uVar29;
      }
      if (uVar39 == 0) {
        return;
      }
      uVar44 = (ulong)uVar39 & 3;
      if (uVar39 < 4) {
        lVar36 = 0;
      }
      else {
        uVar43 = (param_8 & 0xff) + 3 >> 2;
        lVar14 = 3;
        puVar40 = param_5;
        do {
          lVar36 = lVar14;
          lVar14 = lVar36 + 4;
          *(undefined4 *)((long)puVar40 + (uVar43 << 4 | 4)) = 0x3f800000;
          *puVar40 = 0x3f800000;
          *(undefined4 *)((long)puVar40 + (uVar43 << 5 | 8)) = 0x3f800000;
          *(undefined4 *)((long)puVar40 + (uVar43 * 0x30 | 0xc)) = 0x3f800000;
          puVar40 = (undefined4 *)((long)puVar40 + (uVar43 << 6 | 0x10));
        } while (lVar14 - ((ulong)uVar39 & 0xfc) != 3);
        lVar36 = lVar36 + 1;
      }
      if ((uVar39 & 3) == 0) {
        return;
      }
      uVar43 = (ulong)((uVar51 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
      param_5 = (undefined4 *)((long)param_5 + lVar36 * uVar43);
      do {
        *param_5 = 0x3f800000;
        param_5 = (undefined4 *)((long)param_5 + uVar43);
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
      return;
    }
    if (uVar39 == 0) {
      return;
    }
    if ((param_8 & 0xff) == 0) {
      return;
    }
    if (uVar39 < 0xc) {
      uVar51 = *(uint *)((ulong)(uVar39 - 1) * 4 + 0x73cc20);
      uVar44 = 0;
      uVar29 = 0;
      while( true ) {
        if ((uVar51 >> (ulong)((uint)uVar44 & 0x1f) & 1) == 0) {
          uVar18 = uVar29 * uVar23;
          uVar29 = uVar29 + 1;
          param_5[uVar18 + uVar44] = 0x3f800000;
        }
        uVar44 = uVar44 + 1;
        if ((param_8 & 0xff) <= uVar44) break;
        if (uVar39 <= uVar29) {
          return;
        }
      }
      return;
    }
    uVar23 = uVar39 - 1;
    if (uVar29 - 1 <= uVar39 - 1) {
      uVar23 = uVar29 - 1;
    }
    uVar29 = uVar23 + 1;
    uVar44 = (ulong)uVar29 & 3;
    if (uVar23 < 3) {
      lVar36 = 0;
    }
    else {
      uVar43 = (param_8 & 0xff) + 3 >> 2;
      lVar14 = 3;
      puVar40 = param_5;
      do {
        lVar36 = lVar14;
        lVar14 = lVar36 + 4;
        *(undefined4 *)((long)puVar40 + (uVar43 << 4 | 4)) = 0x3f800000;
        *puVar40 = 0x3f800000;
        *(undefined4 *)((long)puVar40 + (uVar43 << 5 | 8)) = 0x3f800000;
        *(undefined4 *)((long)puVar40 + (uVar43 * 0x30 | 0xc)) = 0x3f800000;
        puVar40 = (undefined4 *)((long)puVar40 + (uVar43 << 6 | 0x10));
      } while (lVar14 - ((ulong)uVar29 & 0xfffffffc) != 3);
      lVar36 = lVar36 + 1;
    }
    if ((uVar29 & 3) == 0) {
      return;
    }
    uVar43 = (ulong)((uVar51 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
    param_5 = (undefined4 *)((long)param_5 + lVar36 * uVar43);
    do {
      *param_5 = 0x3f800000;
      param_5 = (undefined4 *)((long)param_5 + uVar43);
      uVar44 = uVar44 - 1;
    } while (uVar44 != 0);
    return;
  }
  if (uVar23 != 2) {
    if (param_9 == (undefined8 *)0x0) {
      return;
    }
    uVar29 = param_6 & 7;
    param_7 = param_6 >> 0xc & param_7;
    uVar39 = uVar29;
    if (param_7 != param_6 >> 0xc) {
      if (param_7 == 0) {
        return;
      }
      uVar39 = param_7 - (param_7 >> 1 & 0x55555555);
      uVar39 = (uVar39 & 0x33333333) + (uVar39 >> 2 & 0x33333333);
      uVar39 = (uVar39 + (uVar39 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 & 7;
    }
    if (uVar39 == 0) {
      return;
    }
    fVar59 = 1.0 / (float)uVar39;
    if ((uVar18 & 0xff9c0f00) == 0x100) {
      if (param_2 <= 0.0) {
        lVar14 = (long)local_130 - (ulong)(uVar39 << 4);
        FUN__text__00484c90(uVar39,param_4,lVar14);
        uVar43 = 1;
      }
      else {
        puVar16 = (undefined8 *)FUN__text__00484e00(param_9,uVar39,0);
        if (puVar16 == (undefined8 *)0x0) {
          return;
        }
        uVar23 = *(uint *)(puVar16 + 1);
        uVar43 = (ulong)uVar23;
        if (uVar39 == 1) {
          lVar14 = uVar43 << 4;
          uVar47 = uVar43;
          ppuVar13 = (undefined4 **)*puVar16;
        }
        else {
          ppuVar12 = local_130 + uVar43 * -2;
          local_c0 = ppuVar12;
          if (1.0 <= 1.0 - param_3) {
            memcpy(ppuVar12,(void *)*puVar16,uVar43 * 0x10);
          }
          else if (1.0 - param_3 <= 0.5) {
            FUN__text__00484eb0(*puVar16,uVar43,ppuVar12);
          }
          else {
            FUN__text__00484fc0();
          }
          uVar47 = (ulong)(uVar23 * uVar39);
          lVar14 = uVar47 * 0x10;
          ppuVar12 = ppuVar12 + uVar47 * -2;
          FUN__text__00485120(uVar39,uVar23,local_c0,ppuVar12);
          ppuVar13 = ppuVar12;
        }
        lVar14 = (long)ppuVar12 - (lVar14 + 0xfU & 0x1ffffffff0);
        FUN__text__004847f0(ppuVar13,uVar47,param_4,lVar14);
      }
      lVar36 = FUN__text__00484bf0(param_9,uVar44);
      uVar39 = (uint)local_b8;
      if (lVar36 == 0) {
        return;
      }
      uVar23 = uVar39 + 2;
      if (3 < uVar39) {
        uVar23 = uVar39;
      }
      lVar17 = 0;
      if ((uVar18 != (uVar18 & 0xffffbf00 | uVar18 + ((int)(uVar18 << 0x11) >> 0x1f) & 0xff)) &&
         (param_1 < 1.0)) {
        lVar17 = FUN__text__00484bf0(param_9);
        uVar39 = (uint)local_b8;
      }
      uVar5 = uVar29 - 1;
      puVar33 = (uint *)((long)local_b0 * 0x20 + 0x73b770);
      local_b0 = (undefined4 **)(param_8 & 0xff);
      uVar44 = 0;
      iVar30 = 0;
      uVar51 = (uVar51 & 0xff) + 3 & 0x1fc;
      uVar50 = (int)uVar43 * 4;
      if (uVar29 == 0 || uVar5 == 0) {
        uVar29 = 1;
      }
      fVar53 = 1.0 / (float)uVar43;
      do {
        uVar4 = *(uint *)((ulong)uVar5 * 0x20 + 0x73b770 + uVar44 * 4);
        if ((param_7 & 0xffff & uVar4) != 0) {
          pauVar1 = (undefined1 (*) [16])(param_5 + (ulong)(uVar4 >> 0x10) * (ulong)uVar51);
          pfVar41 = (float *)(lVar14 + (ulong)(iVar30 * uVar50) * 4);
          pfVar15 = pfVar41 + uVar50;
          do {
            while( true ) {
              fVar57 = *pfVar41;
              fVar54 = pfVar41[2];
              if (((uVar18 & 0xfffff000) != 0x3000) || (*(char *)(param_9 + 6) != '\x01')) break;
              fVar57 = fVar57 * (fVar57 * -0.20710677 + 0.5) + 0.70710677;
              fVar57 = fVar57 * fVar57;
              fVar54 = 1.0 - fVar57;
              if (1.0 < fVar57) {
                fVar54 = 0.0;
              }
              *(float *)*pauVar1 = *(float *)*pauVar1 + fVar54;
              pfVar41 = pfVar41 + 4;
              *(float *)((long)*pauVar1 + 4) = *(float *)((long)*pauVar1 + 4) + fVar57;
              if (pfVar15 <= pfVar41) goto LAB__text__00483b90;
            }
            uVar43 = 1;
            puVar24 = puVar33;
            pfVar19 = (float *)(lVar36 + 8);
            if (lVar17 == 0) {
              do {
                pfVar28 = pfVar19 + -2;
                pfVar31 = pfVar19 + -1;
                puVar24 = puVar24 + 1;
                fVar55 = *pfVar19;
                pfVar32 = pfVar19 + 1;
                if (uVar23 <= uVar43) break;
                pfVar19 = pfVar19 + 4;
                uVar43 = uVar43 + 1;
              } while (fVar55 * fVar57 < -(*pfVar32 * fVar54) ||
                       *pfVar28 * fVar57 < -(*pfVar31 * fVar54));
              fVar56 = *pfVar28 * fVar57 + 1.1920929e-07 + *pfVar31 * fVar54;
              fVar57 = fVar55 * fVar57 + 1.1920929e-07 + *pfVar32 * fVar54;
              fVar56 = fVar56 * fVar56;
              fVar57 = fVar57 * fVar57;
              fVar54 = 1.0 / (fVar57 + fVar56);
            }
            else {
              do {
                puVar42 = puVar24;
                pfVar28 = pfVar19 + -2;
                pfVar31 = pfVar19 + -1;
                puVar24 = puVar42 + 1;
                fVar55 = *pfVar19;
                pfVar32 = pfVar19 + 1;
                if (uVar23 <= uVar43) break;
                pfVar19 = pfVar19 + 4;
                uVar43 = uVar43 + 1;
              } while (fVar55 * fVar57 < -(*pfVar32 * fVar54) ||
                       *pfVar28 * fVar57 < -(*pfVar31 * fVar54));
              uVar43 = 1;
              fVar56 = *pfVar28 * fVar57 + 1.1920929e-07 + *pfVar31 * fVar54;
              fVar55 = fVar55 * fVar57 + 1.1920929e-07 + *pfVar32 * fVar54;
              uVar47 = (ulong)(*puVar42 >> 0xe) & 0x3fffc;
              fVar56 = fVar56 * fVar56;
              fVar55 = fVar55 * fVar55;
              fVar60 = param_1 / (fVar55 + fVar56);
              *(float *)((long)*pauVar1 + uVar47) =
                   *(float *)((long)*pauVar1 + uVar47) + fVar56 * fVar60;
              uVar47 = (ulong)(*puVar24 >> 0xe) & 0x3fffc;
              *(float *)((long)*pauVar1 + uVar47) =
                   *(float *)((long)*pauVar1 + uVar47) + fVar55 * fVar60;
              puVar24 = (uint *)((ulong)(uVar39 - 2) * 0x20 + 0x73b850);
              pfVar19 = (float *)(lVar17 + 8);
              do {
                pfVar28 = pfVar19 + -2;
                pfVar31 = pfVar19 + -1;
                puVar24 = puVar24 + 1;
                fVar55 = *pfVar19;
                pfVar32 = pfVar19 + 1;
                if (uVar23 - 1 <= uVar43) break;
                pfVar19 = pfVar19 + 4;
                uVar43 = uVar43 + 1;
              } while (fVar55 * fVar57 < -(*pfVar32 * fVar54) ||
                       *pfVar28 * fVar57 < -(*pfVar31 * fVar54));
              fVar56 = *pfVar28 * fVar57 + 1.1920929e-07 + *pfVar31 * fVar54;
              fVar57 = fVar55 * fVar57 + 1.1920929e-07 + *pfVar32 * fVar54;
              fVar56 = fVar56 * fVar56;
              fVar57 = fVar57 * fVar57;
              fVar54 = (1.0 - param_1) / (fVar57 + fVar56);
            }
            uVar43 = (ulong)(puVar24[-1] >> 0xe) & 0x3fffc;
            *(float *)((long)*pauVar1 + uVar43) =
                 *(float *)((long)*pauVar1 + uVar43) + fVar56 * fVar54;
            pfVar19 = (float *)((long)*pauVar1 + ((ulong)(*puVar24 >> 0xe) & 0x3fffc));
            pfVar41 = pfVar41 + 4;
            *pfVar19 = *pfVar19 + fVar54 * fVar57;
          } while (pfVar41 < pfVar15);
LAB__text__00483b90:
          if ((param_8 & 0xff) != 0) {
            if (local_b0 == (undefined4 **)0x1) {
              lVar25 = 0;
            }
            else {
              lVar25 = 0;
              do {
                pfVar41 = (float *)((long)*pauVar1 + lVar25 * 4);
                lVar25 = lVar25 + 2;
                *pfVar41 = *pfVar41 * fVar59 * fVar53;
                pfVar41[1] = pfVar41[1] * fVar59 * fVar53;
              } while ((long)local_b0 - (param_8 & 1) != lVar25);
            }
            if ((param_8 & 1) != 0) {
              *(float *)((long)*pauVar1 + lVar25 * 4) =
                   *(float *)((long)*pauVar1 + lVar25 * 4) * fVar59 * fVar53;
            }
            if (uVar51 != 0) {
              pauVar27 = pauVar1;
              do {
                auVar58 = NEON_frsqrte(*pauVar27,4);
                auVar58 = NEON_frecpe(auVar58,4);
                pauVar49 = pauVar27 + 1;
                *(long *)((long)*pauVar27 + 8) = auVar58._8_8_;
                *(long *)*pauVar27 = auVar58._0_8_;
                pauVar27 = pauVar49;
              } while (pauVar49 < (undefined1 (*) [16])((long)*pauVar1 + (ulong)uVar51 * 4));
            }
          }
          iVar30 = iVar30 + 1;
        }
        uVar44 = uVar44 + 1;
        if (uVar44 == uVar29) {
          return;
        }
      } while( true );
    }
    if (param_2 <= 0.0) {
      pfVar41 = (float *)((long)local_130 - (ulong)(uVar39 << 4));
      local_c0 = (undefined4 **)pfVar41;
      FUN__text__00484c90(uVar39,param_4);
      local_c8 = 1;
    }
    else {
      puVar16 = (undefined8 *)FUN__text__00484e00(param_9,uVar39,1);
      if (puVar16 == (undefined8 *)0x0) {
        return;
      }
      uVar43 = (ulong)*(uint *)(puVar16 + 1);
      local_c8 = uVar43;
      if (uVar39 == 1) {
        lVar14 = uVar43 << 4;
        ppuVar12 = (undefined4 **)*puVar16;
      }
      else {
        ppuVar13 = local_130 + uVar43 * -2;
        local_c0 = ppuVar13;
        if (1.0 <= 1.0 - param_3) {
          memcpy(ppuVar13,(void *)*puVar16,uVar43 * 0x10);
        }
        else if (1.0 - param_3 <= 0.5) {
          FUN__text__00484eb0(*puVar16,uVar43,ppuVar13);
        }
        else {
          FUN__text__00484fc0(*puVar16,uVar43,ppuVar13);
        }
        uVar43 = (ulong)((int)local_c8 * uVar39);
        lVar14 = uVar43 * 0x10;
        ppuVar13 = ppuVar13 + uVar43 * -2;
        FUN__text__00485120(uVar39,local_c8,local_c0,ppuVar13);
        ppuVar12 = ppuVar13;
      }
      pfVar41 = (float *)((long)ppuVar13 - (lVar14 + 0xfU & 0x1ffffffff0));
      local_c0 = (undefined4 **)pfVar41;
      FUN__text__004847f0(ppuVar12,uVar43,param_4);
    }
    uVar39 = uVar18 >> 8 & 0xf;
    if (uVar39 == 2) {
      uVar43 = param_8 & 0xff;
      iVar30 = *(char *)(uVar43 + 0x73b748) + 1;
      lVar14 = (long)pfVar41 - ((ulong)((uVar51 & 0xff) * 4 + 0xc) & 0x7f0);
      uVar44 = local_c8 & 0xffffffff;
      fVar59 = SQRT(fVar59);
      local_f0 = (ulong)((uVar51 & 0xff) + 3) & 0x1fc;
      uVar39 = uVar29 - 1;
      local_e8 = (ulong)(uint)((int)local_c8 << 2);
      uVar47 = param_8 & 3;
      if (uVar29 == 0 || uVar39 == 0) {
        uVar29 = 1;
      }
      local_c8 = (ulong)uVar29;
      local_f8 = param_8 & 1;
      local_100 = uVar43 - local_f8;
      local_b0 = (undefined4 **)(lVar14 + 8);
      local_d0 = (ulong)uVar39 * 0x20 + 0x73b770;
      uVar29 = param_7 & 0xffff;
      uVar21 = 0;
      iVar38 = 0;
      local_e0 = (void *)(CONCAT44(local_e0._4_4_,uVar51) & 0xffffffff000000ff);
      local_110 = CONCAT44(local_110._4_4_,param_7) & 0xffffffff0000ffff;
      local_108 = param_5 + 2;
      fVar53 = 1.0 / (float)uVar44;
      do {
        uVar51 = *(uint *)(local_d0 + uVar21 * 4);
        if ((uVar29 & uVar51) != 0) {
          local_b8 = CONCAT44(local_b8._4_4_,iVar38);
          puVar40 = (undefined4 *)((long)local_c0 + (ulong)(uint)(iVar38 * (int)local_e8) * 4);
          puVar2 = puVar40 + local_e8;
          if ((uint)local_e0 == 0) {
            do {
              FUN__text__00481ed0(*puVar40,puVar40[1],puVar40[2],iVar30,1,lVar14);
              puVar40 = puVar40 + 4;
            } while (puVar40 < puVar2);
          }
          else {
            lVar36 = (ulong)(uVar51 >> 0x10) * (local_f0 & 0xffffffff);
            pfVar41 = (float *)(local_108 + lVar36);
            local_d8 = uVar21;
            do {
              FUN__text__00481ed0(*puVar40,puVar40[1],puVar40[2],iVar30,1,lVar14);
              if (uVar43 - 1 < 3) {
                lVar17 = 0;
              }
              else {
                lVar17 = 0;
                pfVar15 = pfVar41;
                ppuVar12 = local_b0;
                do {
                  fVar57 = *(float *)((long)ppuVar12 + -4);
                  lVar17 = lVar17 + -4;
                  fVar54 = *(float *)ppuVar12;
                  fVar55 = *(float *)((long)ppuVar12 + 4);
                  pfVar15[-2] = pfVar15[-2] + *(float *)((long)ppuVar12 + -8);
                  pfVar15[-1] = pfVar15[-1] + fVar57;
                  *pfVar15 = *pfVar15 + fVar54;
                  pfVar15[1] = pfVar15[1] + fVar55;
                  pfVar15 = pfVar15 + 4;
                  ppuVar12 = (undefined4 **)((long)ppuVar12 + 0x10);
                } while (uVar47 - uVar43 != lVar17);
                lVar17 = -lVar17;
              }
              if (uVar47 != 0) {
                pfVar15 = (float *)(param_5 + lVar36 + lVar17);
                pfVar19 = (float *)(lVar14 + lVar17 * 4);
                uVar44 = uVar47;
                do {
                  uVar44 = uVar44 - 1;
                  *pfVar15 = *pfVar15 + *pfVar19;
                  pfVar15 = pfVar15 + 1;
                  pfVar19 = pfVar19 + 1;
                } while (uVar44 != 0);
              }
              puVar40 = puVar40 + 4;
            } while (puVar40 < puVar2);
            lVar17 = 0;
            if (uVar43 != 1) {
              do {
                pfVar41 = (float *)(param_5 + lVar36 + lVar17);
                lVar17 = lVar17 + 2;
                *pfVar41 = *pfVar41 * fVar59 * fVar53;
                pfVar41[1] = pfVar41[1] * fVar59 * fVar53;
              } while (local_100 != lVar17);
            }
            uVar21 = local_d8;
            uVar29 = (uint)local_110;
            if (local_f8 != 0) {
              param_5[lVar36 + lVar17] = (float)param_5[lVar36 + lVar17] * fVar59 * fVar53;
            }
          }
          iVar38 = (int)local_b8 + 1;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != local_c8);
      return;
    }
    if (uVar39 != 1) {
      return;
    }
    uVar43 = (ulong)(uVar18 & 0xffffbf00 | uVar18 + ((int)(uVar18 << 0x11) >> 0x1f) & 0xff);
    if ((uVar18 >> 0xe & 1) != 0) {
      if (param_1 != 1.0) {
        lVar14 = FUN__text__00484bf0(param_9,uVar43);
        if (param_1 == 0.0) {
          lVar36 = 0;
        }
        else {
          lVar36 = FUN__text__00484bf0(param_9,uVar44);
        }
        goto LAB__text__00483ccc;
      }
      uVar43 = uVar44;
    }
    lVar14 = FUN__text__00484bf0(param_9,uVar43);
    lVar36 = 0;
    local_b0 = (undefined4 **)(local_b8 & 0xffffffff);
LAB__text__00483ccc:
    if (lVar14 == 0) {
      return;
    }
    iVar35 = (int)local_b8;
    uVar39 = iVar35 * 4 + 0xcU & 0x7f0;
    iVar30 = (int)local_b0;
    iVar38 = (int)local_c8;
    if (lVar36 == 0) {
      iVar37 = 0;
      local_e0 = (void *)(CONCAT44(local_e0._4_4_,param_7) & 0xffffffff0000ffff);
      local_118 = local_b8 & 0xfe;
      local_108 = (undefined4 *)((ulong)((uVar51 & 0xff) + 3) & 0x1fc);
      local_100 = (ulong)(uint)(iVar35 - iVar30);
      local_110 = (ulong)(uint)(iVar38 << 2);
      local_f0 = (ulong)(uVar29 - 1) * 0x20 + 0x73b770;
      local_120 = (ulong)(iVar35 + 3U & 0x1fc);
      if (uVar29 == 0 || uVar29 - 1 == 0) {
        uVar29 = 1;
      }
      local_e8 = (ulong)uVar29;
      local_f8 = local_b8 - 1;
      local_d8 = local_b8 & 7;
      uVar47 = local_b8 & 0xf8;
      local_130[1] = param_5 + 4;
      uVar44 = 0;
      uVar43 = local_b8;
      do {
        uVar29 = *(uint *)(local_f0 + uVar44 * 4);
        if (((uint)local_e0 & uVar29) != 0) {
          local_c8 = CONCAT44(local_c8._4_4_,iVar37);
          local_d0 = (ulong)(uVar29 >> 0x10) * ((ulong)local_108 & 0xffffffff);
          pauVar1 = (undefined1 (*) [16])(param_5 + local_d0);
          pfVar15 = (float *)((long)local_c0 + (ulong)(uint)(iVar37 * (int)local_110) * 4);
          pfVar19 = pfVar15 + local_110;
          lVar36 = local_100 + 2;
          do {
            pfVar41 = (float *)((long)pfVar41 - ((ulong)(uVar39 + 0xf) & 0xff0));
            FUN__text__0048c9a0(pfVar15[2],-*pfVar15,pfVar15[1],lVar14,local_b0,pfVar41);
            fVar53 = pfVar41[1];
            fVar57 = *(float *)((long)*pauVar1 + 4);
            *(float *)*pauVar1 = *(float *)*pauVar1 + *pfVar41;
            *(float *)((long)*pauVar1 + 4) = fVar57 + fVar53;
            pfVar28 = pfVar41 + 2;
            pfVar31 = (float *)((long)*pauVar1 + lVar36 * 4);
            do {
              pfVar32 = pfVar31 + 1;
              *pfVar31 = *pfVar31 + *pfVar28;
              pfVar28 = pfVar28 + 1;
              pfVar31 = pfVar32;
            } while (pfVar32 < (float *)((long)*pauVar1 + uVar43 * 4));
            pfVar15 = pfVar15 + 4;
          } while (pfVar15 < pfVar19);
          if (local_f8 < 7) {
            lVar36 = 0;
            fVar53 = 0.0;
          }
          else {
            fVar53 = 0.0;
            lVar36 = 0;
            pfVar15 = (float *)(local_130[1] + local_d0);
            do {
              pfVar19 = pfVar15 + -4;
              pfVar32 = pfVar15 + -3;
              lVar36 = lVar36 + -8;
              pfVar28 = pfVar15 + -2;
              pfVar6 = pfVar15 + -1;
              fVar57 = *pfVar15;
              pfVar7 = pfVar15 + 1;
              pfVar31 = pfVar15 + 2;
              pfVar8 = pfVar15 + 3;
              pfVar15 = pfVar15 + 8;
              fVar53 = *pfVar8 + *pfVar31 +
                       *pfVar7 + fVar57 + *pfVar6 + *pfVar28 + *pfVar32 + *pfVar19 + fVar53;
            } while (-lVar36 != uVar47);
            lVar36 = -lVar36;
          }
          if (local_d8 != 0) {
            pfVar15 = (float *)(param_5 + local_d0 + lVar36);
            uVar43 = local_d8;
            do {
              uVar43 = uVar43 - 1;
              fVar53 = *pfVar15 + fVar53;
              pfVar15 = pfVar15 + 1;
            } while (uVar43 != 0);
          }
          if (0.0 < fVar53) {
            uVar43 = 0;
            if (local_f8 != 0) {
              uVar43 = 0;
              do {
                pfVar15 = (float *)((long)*pauVar1 + uVar43 * 4);
                uVar43 = uVar43 + 2;
                *pfVar15 = *pfVar15 * fVar59 * (1.0 / fVar53);
                pfVar15[1] = pfVar15[1] * fVar59 * (1.0 / fVar53);
              } while (local_118 != uVar43);
            }
            if ((local_b8 & 1) != 0) {
              *(float *)((long)*pauVar1 + uVar43 * 4) =
                   (*(float *)((long)*pauVar1 + uVar43 * 4) * fVar59) / fVar53;
            }
            if ((int)local_120 != 0) {
              pauVar27 = pauVar1;
              do {
                auVar58 = NEON_frsqrte(*pauVar27,4);
                auVar58 = NEON_frecpe(auVar58,4);
                pauVar49 = pauVar27 + 1;
                *(long *)((long)*pauVar27 + 8) = auVar58._8_8_;
                *(long *)*pauVar27 = auVar58._0_8_;
                pauVar27 = pauVar49;
              } while (pauVar49 < (undefined1 (*) [16])((long)*pauVar1 + local_120 * 4));
            }
          }
          iVar37 = (int)local_c8 + 1;
          uVar43 = local_b8;
        }
        uVar44 = uVar44 + 1;
      } while (uVar44 != local_e8);
      return;
    }
    uVar23 = uVar29 - 1;
    local_e8 = CONCAT44(local_e8._4_4_,param_7) & 0xffffffff0000ffff;
    fVar53 = 1.0 - param_1;
    local_c8 = 0;
    iVar37 = 0;
    local_108 = (undefined4 *)((ulong)((uVar51 & 0xff) + 3) & 0x1fc);
    local_118 = local_b8 & 0xfe;
    local_110 = (ulong)(uint)(iVar38 << 2);
    local_120 = (ulong)(iVar35 + 3U & 0x1fc);
    if (uVar29 == 0 || uVar23 == 0) {
      uVar29 = 1;
    }
    local_f0 = (ulong)uVar29;
    local_100 = local_b8 - 1;
    local_e0 = (void *)(local_b8 & 7);
    local_130[1] = (undefined4 *)-(local_b8 & 0xf8);
    local_f8 = (ulong)uVar23 * 0x20 + 0x73b770;
    local_130[0] = param_5 + 4;
    uVar44 = local_b8;
    do {
      uVar29 = *(uint *)(local_f8 + local_c8 * 4);
      if (((uint)local_e8 & uVar29) != 0) {
        local_d0 = CONCAT44(local_d0._4_4_,iVar37);
        local_d8 = (ulong)(uVar29 >> 0x10) * ((ulong)local_108 & 0xffffffff);
        pauVar1 = (undefined1 (*) [16])(param_5 + local_d8);
        pfVar15 = (float *)((long)local_c0 + (ulong)(uint)(iVar37 * (int)local_110) * 4);
        pfVar19 = pfVar15 + local_110;
        do {
          fVar60 = pfVar15[2];
          pfVar41 = (float *)((long)pfVar41 -
                             ((ulong)((iVar30 * 4 + 0xcU & 0x7ffffff0) + 0xf) & 0xfffffff0));
          fVar57 = *pfVar15;
          fVar56 = pfVar15[1];
          FUN__text__0048c9a0(fVar60,-fVar57,fVar56,lVar14,local_b0,pfVar41);
          fVar54 = pfVar41[1];
          fVar55 = *(float *)((long)*pauVar1 + 4);
          *(float *)*pauVar1 = *(float *)*pauVar1 + fVar53 * *pfVar41;
          *(float *)((long)*pauVar1 + 4) = fVar55 + fVar53 * fVar54;
          pfVar28 = pfVar41 + 2;
          pauVar27 = (undefined1 (*) [16])((long)*pauVar1 + 0xc);
          do {
            puVar40 = (undefined4 *)*pauVar27;
            *(float *)*pauVar27 = *(float *)*pauVar27 + fVar53 * *pfVar28;
            pfVar28 = pfVar28 + 1;
            pauVar27 = (undefined1 (*) [16])(puVar40 + 1);
          } while ((undefined1 (*) [16])(puVar40 + 1) <
                   (undefined1 (*) [16])((long)*pauVar1 + uVar44 * 4));
          pfVar41 = (float *)((long)pfVar41 - ((ulong)(uVar39 + 0xf) & 0xff0));
          FUN__text__0048c9a0(fVar60,-fVar57,fVar56,lVar36,local_b8,pfVar41);
          pauVar27 = pauVar1;
          pfVar28 = pfVar41;
          do {
            puVar40 = (undefined4 *)*pauVar27;
            *(float *)*pauVar27 = *(float *)*pauVar27 + param_1 * *pfVar28;
            pauVar27 = (undefined1 (*) [16])(puVar40 + 1);
            pfVar28 = pfVar28 + 1;
          } while ((undefined1 (*) [16])(puVar40 + 1) <
                   (undefined1 (*) [16])((long)*pauVar1 + uVar44 * 4));
          pfVar15 = pfVar15 + 4;
        } while (pfVar15 < pfVar19);
        if (local_100 < 7) {
          lVar17 = 0;
          fVar57 = 0.0;
        }
        else {
          fVar57 = 0.0;
          lVar17 = 0;
          pfVar15 = (float *)(local_130[0] + local_d8);
          do {
            pfVar19 = pfVar15 + -4;
            pfVar32 = pfVar15 + -3;
            lVar17 = lVar17 + -8;
            pfVar28 = pfVar15 + -2;
            pfVar6 = pfVar15 + -1;
            fVar54 = *pfVar15;
            pfVar7 = pfVar15 + 1;
            pfVar31 = pfVar15 + 2;
            pfVar8 = pfVar15 + 3;
            pfVar15 = pfVar15 + 8;
            fVar57 = *pfVar8 + *pfVar31 +
                     *pfVar7 + fVar54 + *pfVar6 + *pfVar28 + *pfVar32 + *pfVar19 + fVar57;
          } while (local_130[1] != (undefined4 *)lVar17);
          lVar17 = -lVar17;
        }
        if (local_e0 != (void *)0x0) {
          pfVar15 = (float *)(param_5 + local_d8 + lVar17);
          uVar44 = (ulong)local_e0;
          do {
            uVar44 = uVar44 - 1;
            fVar57 = *pfVar15 + fVar57;
            pfVar15 = pfVar15 + 1;
          } while (uVar44 != 0);
        }
        if (0.0 < fVar57) {
          uVar44 = 0;
          if (local_100 != 0) {
            uVar44 = 0;
            do {
              pfVar15 = (float *)((long)*pauVar1 + uVar44 * 4);
              uVar44 = uVar44 + 2;
              *pfVar15 = *pfVar15 * fVar59 * (1.0 / fVar57);
              pfVar15[1] = pfVar15[1] * fVar59 * (1.0 / fVar57);
            } while (local_118 != uVar44);
          }
          if ((local_b8 & 1) != 0) {
            *(float *)((long)*pauVar1 + uVar44 * 4) =
                 (*(float *)((long)*pauVar1 + uVar44 * 4) * fVar59) / fVar57;
          }
          if ((int)local_120 != 0) {
            pauVar27 = pauVar1;
            do {
              auVar58 = NEON_frsqrte(*pauVar27,4);
              auVar58 = NEON_frecpe(auVar58,4);
              pauVar49 = pauVar27 + 1;
              *(long *)((long)*pauVar27 + 8) = auVar58._8_8_;
              *(long *)*pauVar27 = auVar58._0_8_;
              pauVar27 = pauVar49;
            } while (pauVar49 < (undefined1 (*) [16])((long)*pauVar1 + local_120 * 4));
          }
        }
        iVar37 = (int)local_d0 + 1;
        uVar44 = local_b8;
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 != local_f0);
    return;
  }
  local_e8 = CONCAT44(local_e8._4_4_,uVar51) & 0xffffffff000000ff;
  uVar23 = uVar51 & 0xff;
  if (uVar39 <= (uVar51 & 0xff)) {
    uVar23 = uVar39;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  if (uVar29 != 2) {
    uVar23 = uVar39;
  }
  cVar3 = *(char *)((ulong)uVar23 + 0x73b748);
  uVar43 = (ulong)cVar3;
  uVar51 = *(uint *)(uVar43 * 4 + 0x73b734);
  uVar47 = (ulong)uVar51;
  ppuVar12 = local_130 + uVar47 * -2;
  local_b0 = ppuVar12;
  FUN__text__004847f0(*(undefined8 *)(uVar43 * 8 + 0x889b98),uVar47,param_4);
  lVar14 = FUN__text__00482470(uVar43 & 0xffffffff);
  if (lVar14 == 0) {
    return;
  }
  iVar30 = cVar3 + 2;
  local_c8 = (ulong)(uint)(iVar30 * iVar30);
  fVar59 = param_2 * param_2 * 0.5 + 0.5;
  if (uVar29 == 2) {
    uVar29 = uVar51 * 4 + 0xc & 0xfffffff0;
    puVar48 = (undefined1 *)((long)ppuVar12 - (ulong)(uVar29 * iVar30 * iVar30));
    fVar59 = SQRT(fVar59);
    uVar39 = uVar51;
    if (uVar51 < 2) {
      uVar39 = 1;
    }
    uVar44 = (ulong)uVar39;
    puVar45 = puVar48;
    ppuVar12 = local_b0 + 1;
    do {
      FUN__text__00481ed0(*(undefined4 *)(ppuVar12 + -1),*(undefined4 *)((long)ppuVar12 + -4),
                          *(undefined4 *)ppuVar12,cVar3 + 1,uVar47,puVar45);
      puVar45 = puVar45 + 4;
      uVar44 = uVar44 - 1;
      ppuVar12 = ppuVar12 + 2;
    } while (uVar44 != 0);
    if (iVar30 == 0) {
      return;
    }
    uVar23 = (uint)local_c8;
    uVar39 = uVar23;
    if (uVar23 < 2) {
      uVar39 = 1;
    }
    uVar44 = 0;
    iVar30 = 0;
    uVar18 = uVar51 + 3 & 0xfffffffc;
    fVar53 = 1.0 / (float)uVar47;
    pfVar41 = (float *)puVar48;
    do {
      if ((0xb < (uint)local_c0) ||
         ((*(uint *)((ulong)((uint)local_c0 - 1) * 4 + 0x73cc20) >> (ulong)((uint)uVar44 & 0x1f) & 1
          ) == 0)) {
        pfVar41 = (float *)((long)pfVar41 + -((ulong)uVar29 + 0xf & 0x1fffffff0));
        pfVar15 = (float *)(lVar14 + (ulong)((uint)uVar44 * uVar51) * 4);
        pfVar19 = pfVar41;
        uVar43 = uVar47 & 0xfffffffe;
        do {
          pfVar28 = pfVar15 + 2;
          fVar57 = pfVar15[1];
          uVar43 = uVar43 - 2;
          pfVar31 = pfVar19 + 2;
          *pfVar19 = *pfVar15 * fVar59 * fVar53;
          pfVar19[1] = fVar57 * fVar59 * fVar53;
          pfVar15 = pfVar28;
          pfVar19 = pfVar31;
        } while (uVar43 != 0);
        if ((uVar51 & 1) != 0) {
          *pfVar31 = *pfVar28 * fVar59 * fVar53;
        }
        uVar50 = iVar30 * ((uint)local_e8 + 3 & 0x1fc);
        if (uVar23 < 2) {
          uVar43 = 0;
        }
        else {
          uVar43 = 0;
          do {
            fVar55 = 0.0;
            fVar56 = 0.0;
            fVar57 = 0.0;
            fVar54 = 0.0;
            pfVar15 = (float *)(puVar48 + (ulong)(uVar18 * (int)uVar43) * 4);
            pfVar19 = pfVar41;
            do {
              pfVar28 = pfVar15 + 4;
              fVar57 = fVar57 + (float)*(undefined8 *)pfVar19 * *pfVar15;
              fVar54 = fVar54 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * pfVar15[1];
              fVar55 = fVar55 + (float)*(undefined8 *)(pfVar19 + 2) * pfVar15[2];
              fVar56 = fVar56 + (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * pfVar15[3];
              pfVar15 = pfVar28;
              pfVar19 = pfVar19 + 4;
            } while (pfVar28 < (float *)((long)(puVar48 + (ulong)(uVar18 * (int)uVar43) * 4) +
                                        uVar47 * 4));
            auVar58._4_4_ = fVar54;
            auVar58._0_4_ = fVar57;
            auVar58._8_4_ = fVar55;
            auVar58._12_4_ = fVar56;
            auVar58 = NEON_rev64(auVar58,4);
            uVar21 = uVar43 | 1;
            param_5[uVar50 + uVar43] = auVar58._8_4_ + fVar55 + auVar58._0_4_ + fVar57;
            fVar55 = 0.0;
            fVar56 = 0.0;
            fVar57 = 0.0;
            fVar54 = 0.0;
            pfVar15 = (float *)(puVar48 + (ulong)(uVar18 * (int)uVar21) * 4);
            pfVar19 = pfVar41;
            do {
              pfVar28 = pfVar15 + 4;
              fVar57 = fVar57 + (float)*(undefined8 *)pfVar19 * *pfVar15;
              fVar54 = fVar54 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * pfVar15[1];
              fVar55 = fVar55 + (float)*(undefined8 *)(pfVar19 + 2) * pfVar15[2];
              fVar56 = fVar56 + (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * pfVar15[3];
              pfVar15 = pfVar28;
              pfVar19 = pfVar19 + 4;
            } while (pfVar28 < (float *)((long)(puVar48 + (ulong)(uVar18 * (int)uVar21) * 4) +
                                        uVar47 * 4));
            auVar10._4_4_ = fVar54;
            auVar10._0_4_ = fVar57;
            auVar10._8_4_ = fVar55;
            auVar10._12_4_ = fVar56;
            auVar58 = NEON_rev64(auVar10,4);
            uVar43 = uVar43 + 2;
            param_5[uVar50 + uVar21] = auVar58._8_4_ + fVar55 + auVar58._0_4_ + fVar57;
          } while (uVar43 != ((ulong)uVar39 & 0x7ffffffe));
        }
        if ((uVar39 & 1) != 0) {
          fVar55 = 0.0;
          fVar56 = 0.0;
          fVar57 = 0.0;
          fVar54 = 0.0;
          pfVar15 = (float *)(puVar48 + (ulong)(uVar18 * (int)uVar43) * 4);
          pfVar19 = pfVar41;
          do {
            pfVar28 = pfVar15 + 4;
            fVar57 = fVar57 + (float)*(undefined8 *)pfVar19 * *pfVar15;
            fVar54 = fVar54 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20) * pfVar15[1];
            fVar55 = fVar55 + (float)*(undefined8 *)(pfVar19 + 2) * pfVar15[2];
            fVar56 = fVar56 + (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * pfVar15[3];
            pfVar15 = pfVar28;
            pfVar19 = pfVar19 + 4;
          } while (pfVar28 < (float *)((long)(puVar48 + (ulong)(uVar18 * (int)uVar43) * 4) +
                                      uVar47 * 4));
          auVar9._4_4_ = fVar54;
          auVar9._0_4_ = fVar57;
          auVar9._8_4_ = fVar55;
          auVar9._12_4_ = fVar56;
          auVar58 = NEON_rev64(auVar9,4);
          param_5[uVar50 + uVar43] = auVar58._8_4_ + fVar55 + auVar58._0_4_ + fVar57;
        }
        iVar30 = iVar30 + 1;
      }
      uVar44 = uVar44 + 1;
    } while (uVar44 != uVar39);
    return;
  }
  if (param_9 == (undefined8 *)0x0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_9 + 7));
  puVar24 = (uint *)*param_9;
  uVar29 = *(uint *)(param_9 + 1);
  puVar33 = puVar24;
  if (uVar29 == 0) {
LAB__text__0048308c:
    if (puVar33 != puVar24 + (ulong)uVar29 * 4) {
      lVar36 = *(long *)(puVar33 + 2);
      goto LAB__text__004830b0;
    }
  }
  else {
    lVar36 = (ulong)uVar29 << 4;
    do {
      if (*puVar33 == uVar18) goto LAB__text__0048308c;
      puVar33 = puVar33 + 4;
      lVar36 = lVar36 + -0x10;
    } while (lVar36 != 0);
  }
  lVar36 = FUN__text__004896b0(param_9,uVar44);
LAB__text__004830b0:
  nn::os::UnlockMutex((MutexType *)(param_9 + 7));
  if (lVar36 != 0) {
    local_108 = (undefined4 *)CONCAT44(local_108._4_4_,iVar30);
    local_e0 = (void *)((long)ppuVar12 - (ulong)(uVar51 * ((int)local_b8 * 4 + 0xcU & 0x7f0)));
    uVar29 = (int)local_b8 + 3;
    uVar39 = uVar29 & 0x1fc;
    if (uVar51 * uVar39 != 0) {
      memset(local_e0,0,(ulong)(uVar51 * uVar39) << 2);
    }
    uVar20 = local_b8;
    uVar21 = local_c8;
    pvVar22 = local_e0;
    local_100 = uVar43;
    local_110 = CONCAT44(local_110._4_4_,uVar29);
    local_118 = param_8;
    fVar59 = (1.0 / (float)uVar47) * fVar59;
    if ((param_8 & 0xff9c0000) == 0) {
      uVar29 = (uint)local_c0;
      if (((uVar18 & 0xfffff000) == 0x3000) && (*(char *)(param_9 + 6) == '\x01')) {
        uVar46 = param_8 & 3;
        uVar43 = 0;
        uVar44 = 0;
        uVar23 = uVar51;
        if (uVar51 < 2) {
          uVar23 = 1;
        }
        uVar18 = (uint)local_e8 + 3 & 0x1fc;
        do {
          pauVar1 = (undefined1 (*) [16])((long)pvVar22 + (ulong)(uVar39 * (int)uVar44) * 4);
          iVar30 = (uint)local_e8;
          fVar57 = *(float *)(local_b0 + uVar44 * 2) *
                   (*(float *)(local_b0 + uVar44 * 2) * -0.20710677 + 0.5) + 0.70710677;
          fVar54 = *(float *)(*pauVar1 + 4);
          fVar57 = fVar57 * fVar57;
          fVar53 = 1.0 - fVar57;
          if (1.0 < fVar57) {
            fVar53 = 0.0;
          }
          *(float *)*pauVar1 = fVar53 + *(float *)*pauVar1;
          *(float *)(*pauVar1 + 4) = fVar57 + fVar54;
          if (iVar30 != 0) {
            if ((param_8 & 0xff) - 1 < 3) {
              lVar36 = 0;
            }
            else {
              lVar36 = 0;
              pfVar41 = (float *)((long)pvVar22 + uVar43 * 4 + 8);
              do {
                lVar36 = lVar36 + -4;
                pfVar41[-1] = pfVar41[-1] * fVar59;
                pfVar41[1] = pfVar41[1] * fVar59;
                pfVar41[-2] = pfVar41[-2] * fVar59;
                *pfVar41 = *pfVar41 * fVar59;
                pfVar41 = pfVar41 + 4;
              } while (uVar46 - (param_8 & 0xff) != lVar36);
              lVar36 = -lVar36;
            }
            if (uVar46 != 0) {
              pfVar41 = (float *)((long)pvVar22 + uVar43 * 4 + lVar36 * 4);
              uVar52 = uVar46;
              do {
                uVar52 = uVar52 - 1;
                *pfVar41 = *pfVar41 * fVar59;
                pfVar41 = pfVar41 + 1;
              } while (uVar52 != 0);
            }
            if (uVar18 != 0) {
              pauVar27 = pauVar1;
              do {
                auVar58 = NEON_frsqrte(*pauVar27,4);
                auVar58 = NEON_frecpe(auVar58,4);
                pauVar49 = pauVar27 + 1;
                *(long *)(*pauVar27 + 8) = auVar58._8_8_;
                *(long *)*pauVar27 = auVar58._0_8_;
                pauVar27 = pauVar49;
              } while (pauVar49 < (undefined1 (*) [16])(*pauVar1 + (ulong)uVar18 * 4));
            }
          }
          uVar44 = uVar44 + 1;
          uVar43 = (ulong)((int)uVar43 + uVar39);
        } while (uVar44 != uVar23);
      }
      else {
        uVar18 = (uint)local_b8;
        uVar23 = uVar18 + 2;
        if (3 < uVar18) {
          uVar23 = uVar18;
        }
        uVar43 = 0;
        uVar18 = uVar51;
        if (uVar51 < 2) {
          uVar18 = 1;
        }
        do {
          uVar46 = 1;
          fVar53 = *(float *)(local_b0 + uVar43 * 2);
          fVar57 = *(float *)(local_b0 + uVar43 * 2 + 1);
          puVar33 = (uint *)((uVar44 & 0xff) * 0x20 + 0x73b74c);
          pfVar41 = (float *)(lVar36 + 8);
          do {
            puVar24 = puVar33;
            pfVar15 = pfVar41 + -1;
            puVar33 = puVar24 + 1;
            pfVar19 = pfVar41 + 1;
            fVar54 = pfVar41[-2] * fVar53;
            fVar55 = *pfVar41 * fVar53;
            if (uVar23 <= uVar46) break;
            pfVar41 = pfVar41 + 4;
            uVar46 = uVar46 + 1;
          } while (fVar55 < -(*pfVar19 * fVar57) || fVar54 < -(*pfVar15 * fVar57));
          pauVar1 = (undefined1 (*) [16])((long)pvVar22 + (ulong)(uVar39 * (int)uVar43) * 4);
          fVar53 = fVar54 + 1.1920929e-07 + *pfVar15 * fVar57;
          uVar52 = (ulong)(*puVar33 >> 0xe) & 0x3fffc;
          uVar46 = (ulong)(puVar24[2] >> 0xe) & 0x3fffc;
          fVar57 = fVar55 + 1.1920929e-07 + *pfVar19 * fVar57;
          fVar53 = fVar53 * fVar53;
          fVar57 = fVar57 * fVar57;
          fVar54 = fVar59 / (fVar57 + fVar53);
          *(float *)(*pauVar1 + uVar52) = *(float *)(*pauVar1 + uVar52) + fVar53 * fVar54;
          *(float *)(*pauVar1 + uVar46) = *(float *)(*pauVar1 + uVar46) + fVar57 * fVar54;
          if (uVar39 != 0) {
            pauVar27 = pauVar1;
            do {
              auVar58 = NEON_frsqrte(*pauVar27,4);
              auVar58 = NEON_frecpe(auVar58,4);
              pauVar49 = pauVar27 + 1;
              *(long *)(*pauVar27 + 8) = auVar58._8_8_;
              *(long *)*pauVar27 = auVar58._0_8_;
              pauVar27 = pauVar49;
            } while (pauVar49 < (undefined1 (*) [16])(*pauVar1 + (ulong)uVar39 * 4));
          }
          uVar43 = uVar43 + 1;
        } while (uVar43 != uVar18);
      }
    }
    else {
      local_d8 = local_b8 - 1;
      local_d0 = local_b8 & 7;
      uVar43 = local_b8 & 0xf8;
      uVar46 = 0;
      uVar44 = 0;
      uVar29 = uVar51;
      if (uVar51 < 2) {
        uVar29 = 1;
      }
      local_f0 = (ulong)uVar29;
      uVar52 = local_b8 & 0xfe;
      local_f8 = (long)local_e0 + 0x10;
      do {
        lVar17 = uVar46 * 4;
        pauVar1 = (undefined1 (*) [16])((long)pvVar22 + (ulong)(uVar39 * (int)uVar44) * 4);
        ppuVar12 = local_b0 + uVar44 * 2;
        FUN__text__0048c9a0(*(undefined4 *)(ppuVar12 + 1),-*(float *)ppuVar12,
                            *(undefined4 *)((long)ppuVar12 + 4),lVar36,uVar20,pauVar1);
        uVar20 = local_b8;
        uVar21 = local_c8;
        pvVar22 = local_e0;
        uVar29 = (uint)local_c0;
        if (local_d8 < 7) {
          lVar25 = 0;
          fVar53 = 0.0;
        }
        else {
          fVar53 = 0.0;
          lVar25 = 0;
          pfVar41 = (float *)(local_f8 + lVar17);
          do {
            pfVar15 = pfVar41 + -4;
            pfVar31 = pfVar41 + -3;
            lVar25 = lVar25 + -8;
            pfVar19 = pfVar41 + -2;
            pfVar32 = pfVar41 + -1;
            fVar57 = *pfVar41;
            pfVar6 = pfVar41 + 1;
            pfVar28 = pfVar41 + 2;
            pfVar7 = pfVar41 + 3;
            pfVar41 = pfVar41 + 8;
            fVar53 = *pfVar7 + *pfVar28 +
                     *pfVar6 + fVar57 + *pfVar32 + *pfVar19 + *pfVar31 + *pfVar15 + fVar53;
          } while (-lVar25 != uVar43);
          lVar25 = -lVar25;
        }
        if (local_d0 != 0) {
          pfVar41 = (float *)((long)local_e0 + lVar17 + lVar25 * 4);
          uVar26 = local_d0;
          do {
            uVar26 = uVar26 - 1;
            fVar53 = *pfVar41 + fVar53;
            pfVar41 = pfVar41 + 1;
          } while (uVar26 != 0);
        }
        if (0.0 < fVar53) {
          uVar26 = 0;
          if (local_d8 != 0) {
            uVar26 = 0;
            do {
              pfVar41 = (float *)((long)local_e0 + uVar26 * 4 + lVar17);
              uVar26 = uVar26 + 2;
              *pfVar41 = *pfVar41 * fVar59 * (1.0 / fVar53);
              pfVar41[1] = pfVar41[1] * fVar59 * (1.0 / fVar53);
            } while (uVar52 != uVar26);
          }
          if ((local_b8 & 1) != 0) {
            *(float *)(*pauVar1 + uVar26 * 4) =
                 (*(float *)(*pauVar1 + uVar26 * 4) * fVar59) / fVar53;
          }
          if (uVar39 != 0) {
            pauVar27 = pauVar1;
            do {
              auVar58 = NEON_frsqrte(*pauVar27,4);
              auVar58 = NEON_frecpe(auVar58,4);
              pauVar49 = pauVar27 + 1;
              *(long *)(*pauVar27 + 8) = auVar58._8_8_;
              *(long *)*pauVar27 = auVar58._0_8_;
              pauVar27 = pauVar49;
            } while (pauVar49 < (undefined1 (*) [16])(*pauVar1 + (ulong)uVar39 * 4));
          }
        }
        uVar44 = uVar44 + 1;
        uVar46 = (ulong)((int)uVar46 + uVar39);
      } while (uVar44 != local_f0);
    }
    if (((int)local_108 != 0) && (uVar29 != 0)) {
      local_d8 = (ulong)(uVar29 - 1);
      lVar36 = *(long *)(local_100 * 8 + 0x889b70);
      uVar23 = uVar51;
      if (uVar51 < 2) {
        uVar23 = 1;
      }
      uVar44 = 0;
      uVar18 = 0;
      uVar50 = 1;
      local_d0 = CONCAT44(local_d0._4_4_,(uint)local_e8 + 3) & 0xffffffff000001fc;
      local_f0 = (local_118 & 0xff) << 2;
      uVar5 = (uint)local_110 & 0x1fc;
      do {
        if ((0xb < uVar29) ||
           ((*(uint *)(local_d8 * 4 + 0x73cc20) >> (ulong)((uint)uVar44 & 0x1f) & 1) == 0)) {
          uVar4 = uVar18 * (int)local_d0;
          if ((uint)local_e8 != 0) {
            local_b0 = (undefined4 **)CONCAT44(local_b0._4_4_,uVar18);
            memset(param_5 + uVar4,0,local_f0);
            uVar20 = local_b8;
            uVar21 = local_c8;
            pvVar22 = local_e0;
            uVar29 = (uint)local_c0;
            uVar18 = (uint)local_b0;
          }
          if ((int)uVar20 != 0) {
            uVar43 = 0;
            do {
              uVar52 = 0;
              fVar53 = (1.0 / (float)uVar47) * 12.566371 * *(float *)(lVar36 + uVar44 * 4);
              fVar59 = 0.0;
              uVar46 = (ulong)uVar23 & 0xfffffffe;
              uVar11 = uVar50;
              do {
                uVar34 = uVar11;
                lVar17 = uVar52 * 4;
                uVar46 = uVar46 - 2;
                iVar30 = (int)uVar52;
                uVar52 = (ulong)(iVar30 + uVar5 * 2);
                fVar59 = fVar59 + *(float *)(lVar14 + (ulong)(uVar34 - 1) * 4) *
                                  fVar53 * *(float *)((long)pvVar22 + lVar17 + uVar43 * 4) +
                         *(float *)((long)pvVar22 + (ulong)(uVar39 + iVar30) * 4 + uVar43 * 4) *
                         fVar53 * *(float *)(lVar14 + (ulong)uVar34 * 4);
                uVar11 = uVar34 + 2;
              } while (uVar46 != 0);
              if ((uVar23 & 1) != 0) {
                fVar59 = fVar59 + *(float *)(lVar14 + (ulong)(uVar34 + 1) * 4) *
                                  fVar53 * *(float *)((long)pvVar22 + uVar52 * 4 + uVar43 * 4);
              }
              (param_5 + uVar4)[uVar43] = fVar59;
              uVar43 = uVar43 + 1;
            } while (uVar43 != uVar20);
          }
          uVar18 = uVar18 + 1;
        }
        uVar44 = uVar44 + 1;
      } while ((uVar44 < uVar21) && (uVar50 = uVar50 + uVar51, uVar18 < uVar29));
    }
  }
  return;
}


