/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00485210; name: FUN_.text__00485210
 */


void FUN__text__00485210(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                        char param_5,uint param_6,ulong param_7,float *param_8,undefined8 param_9)

{
  uint uVar1;
  size_t sVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar20 = param_7 & 0xff;
  uVar19 = (uint)uVar20;
  uVar14 = param_6 & 0xff;
  uVar1 = uVar19 + 3 & 0x1fc;
  uVar16 = (ulong)uVar1;
  iVar12 = uVar1 * uVar14;
  if (iVar12 != 0) {
    memset(param_8,0,(ulong)(uint)(iVar12 * 4));
  }
  uVar10 = param_6 >> 8 & 0xf;
  uVar11 = (uint)param_7;
  uVar6 = uVar11 >> 8 & 0xf;
  if (uVar10 == uVar6) {
    if (uVar10 == 1) {
      uVar10 = uVar11 + ((int)(uVar11 << 0x10) >> 0x1f) & 0xff;
      if ((param_5 == '\0') || (uVar10 == 1)) {
        uVar6 = param_6 + ((int)(param_6 << 0x10) >> 0x1f);
        if ((uVar6 & 0xff) == 1) {
          if (uVar19 != 0) {
            memset(param_8,0,(param_7 & 0xff) << 2);
          }
          if (uVar10 < 2) {
            if (uVar10 == 1) {
              *param_8 = 1.0;
            }
          }
          else if (((uVar11 ^ 0xffffffff) & 0x7000) == 0) {
            fVar21 = SQRT(0.5 - param_4 * 0.5);
            *param_8 = fVar21;
            param_8[1] = fVar21;
            param_8[2] = SQRT(param_4);
          }
          else {
            param_8[0] = 0.70710677;
            param_8[1] = 0.70710677;
          }
          if ((param_6 >> 0xf & 1) != 0) {
            if (uVar19 != 0) {
              memset(param_8 + uVar1 * (uVar14 - 1),0,(param_7 & 0xff) << 2);
            }
            if ((uVar11 >> 0xf & 1) != 0) {
              (param_8 + uVar1 * (uVar14 - 1))[uVar20 - 1] = 1.0;
            }
          }
        }
        else {
          uVar10 = uVar11 >> 0xc & 0x737;
          uVar4 = (param_6 & 0xffff7f00) >> 0xc;
          uVar6 = param_6 & 0xffff7f00 | uVar6 & 0xff;
          if (uVar10 < 0x603) {
            if (uVar10 == 3) {
              if (0xfff < uVar6) {
                iVar12 = 0;
                uVar10 = 0;
                uVar17 = 1;
                do {
                  if ((uVar17 & uVar4) != 0) {
                    pfVar9 = param_8 + iVar12 * uVar1;
                    if (uVar19 == 0) {
                      *(undefined8 *)pfVar9 = *(undefined8 *)((ulong)uVar10 * 8 + 0x73d128);
                    }
                    else {
                      memset(pfVar9,0,(param_7 & 0xff) << 2);
                      *(undefined8 *)pfVar9 = *(undefined8 *)((ulong)uVar10 * 8 + 0x73d128);
                      if (2 < uVar19) {
                        memset(param_8 + (ulong)(iVar12 * uVar1) + 2,0,(ulong)(uVar19 - 3) * 4 + 4);
                      }
                    }
                    iVar12 = iVar12 + 1;
                  }
                  uVar17 = uVar17 * 2;
                  uVar10 = uVar10 + 1;
                } while (uVar17 <= uVar4);
              }
            }
            else if (uVar10 == 4) {
              if (0xfff < uVar6) {
                if (uVar19 == 0) {
                  uVar10 = 0;
                  uVar17 = 1;
                  do {
                    if ((uVar17 & uVar4) != 0) {
                      *param_8 = *(float *)((ulong)uVar10 * 4 + 0x73d0e0);
                    }
                    uVar17 = uVar17 * 2;
                    uVar10 = uVar10 + 1;
                  } while (uVar17 <= uVar4);
                }
                else {
                  iVar12 = 0;
                  uVar10 = 0;
                  uVar17 = 1;
                  do {
                    if ((uVar17 & uVar4) != 0) {
                      memset(param_8 + iVar12 * uVar1,0,(param_7 & 0xff) << 2);
                      param_8[iVar12 * uVar1] = *(float *)((ulong)uVar10 * 4 + 0x73d0e0);
                      if (1 < uVar19) {
                        memset(param_8 + (ulong)(iVar12 * uVar1) + 1,0,(ulong)(uVar19 - 2) * 4 + 4);
                      }
                      iVar12 = iVar12 + 1;
                    }
                    uVar17 = uVar17 * 2;
                    uVar10 = uVar10 + 1;
                  } while (uVar17 <= uVar4);
                }
              }
            }
            else if ((uVar10 == 7) && (0xfff < uVar6)) {
              uVar10 = 0;
              iVar12 = 0;
              uVar17 = 1;
              sVar2 = 0;
              if (3 < uVar19) {
                sVar2 = (param_7 & 0xff) * 4 - 0xc;
              }
              do {
                if ((uVar17 & uVar4) != 0) {
                  lVar7 = (ulong)uVar10 * 0xc;
                  pfVar9 = param_8 + iVar12 * uVar1;
                  if (uVar19 == 0) {
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d1b8 + lVar7);
                    pfVar9[2] = *(float *)(&DAT_0073d1c0 + lVar7);
                  }
                  else {
                    memset(pfVar9 + 3,0,sVar2);
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d1b8 + lVar7);
                    pfVar9[2] = *(float *)(&DAT_0073d1c0 + lVar7);
                    if (3 < uVar19) {
                      memset(param_8 + (ulong)(iVar12 * uVar1) + 3,0,(ulong)(uVar19 - 4) * 4 + 4);
                    }
                  }
                  iVar12 = iVar12 + 1;
                }
                uVar17 = uVar17 * 2;
                uVar10 = uVar10 + 1;
              } while (uVar17 <= uVar4);
            }
          }
          else if (uVar10 < 0x633) {
            if (uVar10 == 0x603) {
              if (0xfff < uVar6) {
                uVar10 = 0;
                iVar12 = 0;
                uVar17 = 1;
                sVar2 = 0;
                if (4 < uVar19) {
                  sVar2 = (param_7 & 0xff) * 4 - 0x10;
                }
                do {
                  if ((uVar17 & uVar4) != 0) {
                    lVar7 = (ulong)uVar10 * 0x10;
                    pfVar9 = param_8 + iVar12 * uVar1;
                    if (uVar19 == 0) {
                      *(undefined8 *)pfVar9 = *(undefined8 *)(lVar7 + 0x73d290);
                      *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(lVar7 + 0x73d298);
                    }
                    else {
                      memset(pfVar9 + 4,0,sVar2);
                      *(undefined8 *)pfVar9 = *(undefined8 *)(lVar7 + 0x73d290);
                      *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(lVar7 + 0x73d298);
                      if (4 < uVar19) {
                        memset(param_8 + (ulong)(iVar12 * uVar1) + 4,0,(ulong)(uVar19 - 5) * 4 + 4);
                      }
                    }
                    iVar12 = iVar12 + 1;
                  }
                  uVar17 = uVar17 * 2;
                  uVar10 = uVar10 + 1;
                } while (uVar17 <= uVar4);
              }
            }
            else if ((uVar10 == 0x607) && (0xfff < uVar6)) {
              uVar10 = 0;
              iVar12 = 0;
              uVar17 = 1;
              sVar2 = 0;
              if (5 < uVar19) {
                sVar2 = (param_7 & 0xff) * 4 - 0x14;
              }
              do {
                if ((uVar17 & uVar4) != 0) {
                  lVar7 = (ulong)uVar10 * 0x14;
                  pfVar9 = param_8 + iVar12 * uVar1;
                  if (uVar19 == 0) {
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d3b0 + lVar7);
                    *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d3b8 + lVar7);
                    pfVar9[4] = *(float *)(&DAT_0073d3c0 + lVar7);
                  }
                  else {
                    memset(pfVar9 + 5,0,sVar2);
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d3b0 + lVar7);
                    *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d3b8 + lVar7);
                    pfVar9[4] = *(float *)(&DAT_0073d3c0 + lVar7);
                    if (5 < uVar19) {
                      memset(param_8 + (ulong)(iVar12 * uVar1) + 5,0,(ulong)(uVar19 - 6) * 4 + 4);
                    }
                  }
                  iVar12 = iVar12 + 1;
                }
                uVar17 = uVar17 * 2;
                uVar10 = uVar10 + 1;
              } while (uVar17 <= uVar4);
            }
          }
          else if (uVar10 == 0x633) {
            if (0xfff < uVar6) {
              uVar10 = 0;
              iVar12 = 0;
              uVar17 = 1;
              sVar2 = 0;
              if (6 < uVar19) {
                sVar2 = (param_7 & 0xff) * 4 - 0x18;
              }
              do {
                if ((uVar17 & uVar4) != 0) {
                  lVar7 = (ulong)uVar10 * 0x18;
                  pfVar9 = param_8 + iVar12 * uVar1;
                  if (uVar19 == 0) {
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d518 + lVar7);
                    *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d520 + lVar7);
                    *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(&DAT_0073d528 + lVar7);
                  }
                  else {
                    memset(pfVar9 + 6,0,sVar2);
                    *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d518 + lVar7);
                    *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d520 + lVar7);
                    *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(&DAT_0073d528 + lVar7);
                    if (6 < uVar19) {
                      memset(param_8 + (ulong)(iVar12 * uVar1) + 6,0,(ulong)(uVar19 - 7) * 4 + 4);
                    }
                  }
                  iVar12 = iVar12 + 1;
                }
                uVar17 = uVar17 * 2;
                uVar10 = uVar10 + 1;
              } while (uVar17 <= uVar4);
            }
          }
          else if ((uVar10 == 0x637) && (0xfff < uVar6)) {
            uVar10 = 0;
            iVar12 = 0;
            uVar17 = 1;
            sVar2 = 0;
            if (7 < uVar19) {
              sVar2 = (param_7 & 0xff) * 4 - 0x1c;
            }
            do {
              if ((uVar17 & uVar4) != 0) {
                lVar7 = (ulong)uVar10 * 0x1c;
                pfVar9 = param_8 + iVar12 * uVar1;
                if (uVar19 == 0) {
                  *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d6c8 + lVar7);
                  *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d6d0 + lVar7);
                  *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(&DAT_0073d6d8 + lVar7);
                  pfVar9[6] = *(float *)(&DAT_0073d6e0 + lVar7);
                }
                else {
                  memset(pfVar9 + 7,0,sVar2);
                  *(undefined8 *)pfVar9 = *(undefined8 *)(&DAT_0073d6c8 + lVar7);
                  *(undefined8 *)(pfVar9 + 2) = *(undefined8 *)(&DAT_0073d6d0 + lVar7);
                  *(undefined8 *)(pfVar9 + 4) = *(undefined8 *)(&DAT_0073d6d8 + lVar7);
                  pfVar9[6] = *(float *)(&DAT_0073d6e0 + lVar7);
                  if (7 < uVar19) {
                    memset(param_8 + (ulong)(iVar12 * uVar1) + 7,0,(ulong)(uVar19 - 8) * 4 + 4);
                  }
                }
                iVar12 = iVar12 + 1;
              }
              uVar17 = uVar17 * 2;
              uVar10 = uVar10 + 1;
            } while (uVar17 <= uVar4);
          }
          if ((((param_6 & 0xff9c0000) != 0) && ((param_7 & 0xff9c0000) != 0)) && (0x7fffff < uVar6)
             ) {
            uVar10 = uVar4 & 0x637;
            if (uVar10 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
              uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
              uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
            }
            uVar16 = 0;
            uVar18 = 1;
            uVar17 = 0x800;
            uVar6 = uVar11 >> 0xc & 0xffff7;
            do {
              if ((uVar17 & uVar4) != 0) {
                if (uVar19 != 0) {
                  memset(param_8 + uVar10 * uVar1,0,(param_7 & 0xff) << 2);
                }
                if ((uVar17 & uVar6) != 0) {
                  while ((uVar18 & uVar17) == 0) {
                    uVar5 = uVar18 & uVar6;
                    uVar18 = uVar18 << 1;
                    uVar13 = (uint)uVar16;
                    if (uVar5 != 0) {
                      uVar13 = uVar13 + 1;
                    }
                    uVar16 = (ulong)uVar13;
                  }
                  (param_8 + uVar10 * uVar1)[uVar16] = 1.0;
                }
                uVar10 = uVar10 + 1;
              }
              uVar17 = uVar17 * 2;
            } while (uVar17 <= uVar4);
          }
        }
      }
      else if (param_5 == '\x02') {
        FUN__text__00486320(param_1,param_2,param_3,param_4,param_6,param_7 & 0xffffffff,param_8);
      }
      else if (param_5 == '\x01') {
        FUN__text__00489d60(param_1,param_2,param_4,param_6,param_7 & 0xffffffff,param_8);
      }
      if ((param_6 >> 0xf & 1) != 0) {
        uVar16 = (ulong)(uVar1 * (uVar14 - 1));
        if (uVar19 != 0) {
          memset(param_8 + uVar16,0,(param_7 & 0xff) << 2);
        }
        if ((uVar11 >> 0xf & 1) != 0) {
          param_8[uVar16 + (uVar20 - 1)] = 1.0;
        }
      }
    }
    else {
      if (iVar12 != 0) {
        memset(param_8,0,(ulong)(uint)(iVar12 * 4));
      }
      if ((param_6 & 0xf00) == 0x200) {
        if ((uVar14 != 0) && (uVar19 != 0)) {
          if (uVar14 < 0xc) {
            uVar10 = *(uint *)((ulong)(uVar14 - 1) * 4 + 0x73cc20);
            uVar16 = 0;
            uVar19 = 0;
            do {
              if ((uVar10 >> (ulong)((uint)uVar16 & 0x1f) & 1) == 0) {
                uVar6 = uVar19 * uVar1;
                uVar19 = uVar19 + 1;
                param_8[uVar6 + uVar16] = 1.0;
              }
              uVar16 = uVar16 + 1;
            } while ((uVar16 < (param_7 & 0xff)) && (uVar19 < uVar14));
          }
          else {
            uVar1 = uVar14 - 1;
            if (uVar19 - 1 <= uVar14 - 1) {
              uVar1 = uVar19 - 1;
            }
            uVar14 = uVar1 + 1;
            uVar16 = (ulong)uVar14 & 3;
            if (uVar1 < 3) {
              lVar8 = 0;
            }
            else {
              uVar20 = (param_7 & 0xff) + 3 >> 2;
              lVar7 = 3;
              pfVar9 = param_8;
              do {
                lVar8 = lVar7;
                lVar7 = lVar8 + 4;
                *(undefined4 *)((long)pfVar9 + (uVar20 << 4 | 4)) = 0x3f800000;
                *pfVar9 = 1.0;
                *(undefined4 *)((long)pfVar9 + (uVar20 << 5 | 8)) = 0x3f800000;
                *(undefined4 *)((long)pfVar9 + (uVar20 * 0x30 | 0xc)) = 0x3f800000;
                pfVar9 = (float *)((long)pfVar9 + (uVar20 << 6 | 0x10));
              } while (lVar7 - ((ulong)uVar14 & 0xfffffffc) != 3);
              lVar8 = lVar8 + 1;
            }
            if ((uVar14 & 3) != 0) {
              uVar20 = (ulong)((uVar11 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
              param_8 = (float *)((long)param_8 + lVar8 * uVar20);
              do {
                *param_8 = 1.0;
                param_8 = (float *)((long)param_8 + uVar20);
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
          }
        }
      }
      else {
        if (uVar19 <= uVar14) {
          uVar14 = uVar19;
        }
        if (uVar14 != 0) {
          uVar16 = (ulong)uVar14 & 3;
          if (uVar14 < 4) {
            lVar8 = 0;
          }
          else {
            uVar20 = (param_7 & 0xff) + 3 >> 2;
            lVar7 = 3;
            pfVar9 = param_8;
            do {
              lVar8 = lVar7;
              lVar7 = lVar8 + 4;
              *(undefined4 *)((long)pfVar9 + (uVar20 << 4 | 4)) = 0x3f800000;
              *pfVar9 = 1.0;
              *(undefined4 *)((long)pfVar9 + (uVar20 << 5 | 8)) = 0x3f800000;
              *(undefined4 *)((long)pfVar9 + (uVar20 * 0x30 | 0xc)) = 0x3f800000;
              pfVar9 = (float *)((long)pfVar9 + (uVar20 << 6 | 0x10));
            } while (lVar7 - ((ulong)uVar14 & 0xfc) != 3);
            lVar8 = lVar8 + 1;
          }
          if ((uVar14 & 3) != 0) {
            uVar20 = (ulong)((uVar11 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
            param_8 = (float *)((long)param_8 + lVar8 * uVar20);
            do {
              *param_8 = 1.0;
              param_8 = (float *)((long)param_8 + uVar20);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
      }
    }
  }
  else {
    if ((uVar10 == 2) && (uVar6 != 2)) {
      FUN__text__00487270(param_6,param_7 & 0xffffffff,param_8,param_9);
      return;
    }
    if (((param_6 & 0xf00) == 0x100) && (uVar6 == 2)) {
      if ((param_6 + ((int)(param_6 << 0x10) >> 0x1f) & 0xff) == 1) {
        *param_8 = 1.0;
      }
      else {
        uVar10 = param_6 >> 0xc & 0x637;
        uVar14 = uVar10 - (uVar10 >> 1 & 0xf1f1f1f1);
        uVar14 = (uVar14 & 0x33333333) + (uVar14 >> 2 & 0x33333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar10 != 0) {
          iVar12 = *(char *)((param_7 & 0xff) + 0x73b748) + 1;
          fVar22 = *(float *)((ulong)(uVar14 - 1) * 0x1c + 0x73c080);
          fVar21 = sinf(fVar22);
          fVar22 = cosf(fVar22);
          FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8);
          uVar10 = uVar14 - 1;
          if (uVar14 != 0 && uVar10 != 0) {
            fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c084);
            fVar21 = sinf(fVar22);
            fVar22 = cosf(fVar22);
            FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16);
            if (uVar14 != 2) {
              fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c088);
              fVar21 = sinf(fVar22);
              fVar22 = cosf(fVar22);
              FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16 * 2);
              if (uVar14 != 3) {
                fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c08c);
                fVar21 = sinf(fVar22);
                fVar22 = cosf(fVar22);
                FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16 * 3);
                if (uVar14 != 4) {
                  fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c090);
                  fVar21 = sinf(fVar22);
                  fVar22 = cosf(fVar22);
                  FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16 * 4);
                  if (uVar14 != 5) {
                    fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c094);
                    fVar21 = sinf(fVar22);
                    fVar22 = cosf(fVar22);
                    FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16 * 5);
                    if (uVar14 != 6) {
                      fVar22 = *(float *)((ulong)uVar10 * 0x1c + 0x73c098);
                      fVar21 = sinf(fVar22);
                      fVar22 = cosf(fVar22);
                      FUN__text__00481ed0(-fVar21,0,fVar22,iVar12,1,param_8 + uVar16 * 6);
                    }
                  }
                }
              }
            }
          }
        }
        uVar10 = param_6 >> 0xc & 0xff9c0;
        if (uVar10 != 0) {
          uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
          uVar10 = (uVar10 & 0x33333333) + (uVar10 >> 2 & 0x33333333);
          uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
          cVar3 = *(char *)((param_7 & 0xff) + 0x73b748);
          uVar6 = uVar10 - 1;
          if (uVar10 == 0 || uVar6 == 0) {
            uVar10 = 1;
          }
          uVar16 = (ulong)uVar10;
          uVar14 = uVar14 * (uVar19 + 3 >> 2) * 4;
          pfVar9 = (float *)((ulong)uVar6 * 0x18 + 0x73c144);
          pfVar15 = (float *)((ulong)uVar6 * 0x18 + 0x73c1d4);
          do {
            fVar23 = *pfVar9;
            fVar24 = *pfVar15;
            fVar21 = cosf(fVar24);
            fVar22 = sinf(fVar23);
            fVar24 = sinf(fVar24);
            fVar23 = cosf(fVar23);
            FUN__text__00481ed0(-(fVar22 * fVar21),fVar24,fVar21 * fVar23,cVar3 + 1,1,
                                param_8 + uVar14);
            uVar14 = uVar14 + uVar1;
            uVar16 = uVar16 - 1;
            pfVar9 = pfVar9 + 1;
            pfVar15 = pfVar15 + 1;
          } while (uVar16 != 0);
        }
      }
    }
    else {
      if (uVar19 <= uVar14) {
        uVar14 = uVar19;
      }
      if (uVar14 != 0) {
        uVar16 = (ulong)uVar14 & 3;
        if (uVar14 < 4) {
          lVar8 = 0;
        }
        else {
          uVar20 = (param_7 & 0xff) + 3 >> 2;
          lVar7 = 3;
          pfVar9 = param_8;
          do {
            lVar8 = lVar7;
            lVar7 = lVar8 + 4;
            *(undefined4 *)((long)pfVar9 + (uVar20 << 4 | 4)) = 0x3f800000;
            *pfVar9 = 1.0;
            *(undefined4 *)((long)pfVar9 + (uVar20 << 5 | 8)) = 0x3f800000;
            *(undefined4 *)((long)pfVar9 + (uVar20 * 0x30 | 0xc)) = 0x3f800000;
            pfVar9 = (float *)((long)pfVar9 + (uVar20 << 6 | 0x10));
          } while (lVar7 - ((ulong)uVar14 & 0xfc) != 3);
          lVar8 = lVar8 + 1;
        }
        if ((uVar14 & 3) != 0) {
          uVar20 = (ulong)((uVar11 & 0xff) * 4 + 0xc) & 0x7f0 | 4;
          param_8 = (float *)((long)param_8 + lVar8 * uVar20);
          do {
            *param_8 = 1.0;
            param_8 = (float *)((long)param_8 + uVar20);
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
    }
  }
  return;
}


