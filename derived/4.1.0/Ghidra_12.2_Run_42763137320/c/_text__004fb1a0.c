/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fb1a0; name: FUN_.text__004fb1a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fb1a0(long *param_1,int param_2,long *param_3,long *param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined4 uVar13;
  byte bVar14;
  long *plVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  double dVar31;
  double dVar32;
  long local_3c0;
  long *local_3b8;
  long *local_3b0;
  undefined4 *local_398;
  undefined4 local_388;
  undefined4 local_384;
  long *local_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  int local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  int local_234;
  long local_230;
  int local_224;
  undefined1 auStack_220 [4];
  char local_21c [4];
  long local_218;
  undefined4 local_210;
  undefined1 local_20c;
  undefined4 local_208;
  undefined1 local_204;
  undefined8 local_200;
  ulong local_1f8;
  byte local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  byte local_1d4;
  undefined8 local_1d0;
  undefined5 local_1c8;
  undefined3 uStack_1c3;
  undefined4 uStack_1c0;
  byte local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  byte local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined1 auStack_198 [264];
  long local_90 [2];
  int local_80;
  char local_6e;
  
  lVar25 = 0;
  lVar26 = *(long *)(param_1[0xc] + 8);
  plVar15 = param_1;
  do {
    lVar25 = plVar15[0xd] + lVar25;
    plVar15 = (long *)plVar15[2];
  } while (plVar15 != (long *)0x0);
  FUN__text__004f6114(auStack_198,param_1,0);
  if (local_90[0] == 0) {
    FUN__text__004ec13c(*param_4);
    *param_4 = 0;
    goto LAB__text__004fc2b0;
  }
  if ((long *)param_1[0x15] == (long *)0x0) {
    puVar29 = (undefined8 *)0x0;
    puVar24 = (undefined8 *)0x0;
    plVar15 = (long *)param_1[0x14];
    plVar17 = (long *)*plVar15;
  }
  else {
    plVar15 = param_1 + 0x13;
    do {
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0 && plVar15 != (long *)param_1[0x15]);
    if (plVar15 == (long *)0x0) {
LAB__text__004fb25c:
      puVar29 = (undefined8 *)0x0;
      puVar24 = (undefined8 *)0x0;
    }
    else {
      plVar17 = (long *)param_1[0x14];
      if (plVar17 == (long *)0x0) {
LAB__text__004fb344:
        puVar20 = (undefined8 *)*plVar15;
      }
      else {
        plVar22 = plVar15;
        do {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB__text__004fb344;
        } while (plVar22 != plVar17);
        param_1[0x15] = (long)plVar17;
        puVar20 = (undefined8 *)*plVar17;
        plVar15 = plVar17;
      }
      if (puVar20 == (undefined8 *)0x0) goto LAB__text__004fb25c;
      puVar29 = (undefined8 *)0x0;
      puVar23 = (undefined8 *)0x0;
      do {
        puVar24 = puVar20;
        puVar20 = (undefined8 *)*puVar24;
        plVar17 = param_1 + 0x13;
        if ((undefined8 *)param_1[0x13] != puVar24) {
          plVar17 = plVar15;
        }
        *plVar17 = (long)puVar20;
        if ((undefined8 *)param_1[0x12] == puVar24) {
          param_1[0x12] = (long)plVar15;
          *puVar24 = 0;
        }
        else {
          *puVar24 = 0;
        }
        puVar30 = puVar24;
        if (puVar29 != (undefined8 *)0x0) {
          *puVar23 = puVar24;
          puVar30 = puVar29;
        }
        puVar29 = puVar30;
        puVar23 = puVar24;
      } while (puVar20 != (undefined8 *)0x0);
    }
    (**(code **)(*param_1 + 0xc0))(param_1,auStack_198);
    plVar15 = (long *)param_1[0x14];
    plVar17 = (long *)*plVar15;
  }
  lVar26 = lVar26 - lVar25;
  if (plVar17 != (long *)0x0) {
    plVar22 = plVar15;
    do {
      plVar10 = plVar17;
      uVar12 = (**(code **)(*(long *)plVar22[1] + 0xd8))();
      if (((uVar12 & 1) == 0) ||
         ((*(byte *)(plVar10[1] + 0x5a) & 3) != 0 && (*(byte *)(plVar10[1] + 0x5a) & 0x10) == 0)) {
        plVar15 = plVar10;
      }
      plVar17 = (long *)*plVar10;
      plVar22 = plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x168) != '\0')) {
    lVar25 = (**(code **)(*(long *)plVar15[1] + 0xd0))();
    if (lVar25 == 0) {
      if (param_2 != 0) goto LAB__text__004fb3c0;
    }
    else if (*(int *)(lVar25 + 0x20) != param_2) goto LAB__text__004fb3c0;
  }
  else {
LAB__text__004fb3c0:
    uVar12 = (**(code **)(*(long *)plVar15[1] + 0xd8))();
    if ((uVar12 & 1) != 0) {
      plVar17 = param_1 + 0x13;
      local_80 = local_80 + 1;
      plVar22 = plVar17;
      do {
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0 && plVar22 != plVar15);
      local_370 = plVar22;
      plVar10 = (long *)FUN__text__004f6870(auStack_198);
      if (plVar22 != plVar10) {
        FUN__text__004f6800(auStack_198,&local_370);
        (**(code **)(*(long *)local_370[1] + 0xb8))((long *)local_370[1],auStack_198,0);
      }
      plVar22 = (long *)0x0;
      local_1a0 = 0;
      local_398 = (undefined4 *)0x0;
      local_80 = local_80 + -1;
      local_3b8 = (long *)0x0;
      local_3b0 = (long *)0x0;
      local_1a4 = 0;
      local_210 = 0;
      local_20c = 0;
      local_208 = 0;
      local_204 = 0;
      bVar4 = true;
      iVar6 = -1;
LAB__text__004fb4a8:
      plVar10 = local_3b0;
      lVar25 = FUN__text__004fce74(param_1,auStack_198,*param_4,&local_1a4,&local_218,local_21c);
      iVar28 = *(int *)(lVar25 + 0x58);
      if (iVar28 == iVar6) {
        iVar28 = iVar6;
LAB__text__004fb878:
        iVar6 = (**(code **)(*(long *)*param_4 + 0xb0))
                          ((long *)*param_4,&local_1d0,local_398,&local_210,&local_224,auStack_220,0
                           ,0);
        if (iVar6 == 2) {
          iVar6 = iVar28;
          goto LAB__text__004fb4a8;
        }
        if (iVar6 != 0) {
          local_238 = 0;
          local_240 = 0;
          FUN__text__004f60f0(&local_370,1);
          if (plVar22 == (long *)0x0) {
            local_3c0 = 0;
            local_234 = local_224;
            auVar2 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)(int)local_1b8)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar6 = ((int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f)) - (int)local_1b0;
            if (iVar6 <= local_224) {
              iVar6 = local_224;
            }
            lVar25 = lVar26 + iVar6;
          }
          else {
            local_380 = (long *)((ulong)local_380 & 0xffffff0000000000);
            local_378 = 0;
            local_374 = 0;
            (**(code **)(*local_3b8 + 0xb0))
                      (local_3b8,&local_1e8,0,&local_380,&local_234,&local_238,0,0);
            iVar8 = local_224;
            iVar6 = local_234;
            lVar25 = FUN__text__004f6038(local_3b8,0);
            if (lVar25 == 0) {
              lVar25 = 0;
            }
            else {
              iVar7 = FUN__text__004f4810();
              lVar25 = (long)iVar7;
            }
            auVar2 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)(int)local_1b8)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar7 = ((int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f)) - (int)local_1b0;
            if (iVar7 <= iVar6) {
              iVar7 = iVar6;
            }
            auVar2 = SEXT816((long)((long)(int)local_200 * (ulong)*_DAT_008a4b68)) *
                     SEXT816(0x20c49ba5e353f7cf);
            iVar3 = ((int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f)) - (int)local_1f8;
            iVar6 = iVar3;
            if (iVar3 <= iVar8) {
              iVar6 = iVar8;
            }
            lVar11 = (lVar26 - lVar25) + (long)iVar6;
            lVar25 = lVar26 + iVar7;
            if (lVar26 + iVar7 <= lVar11) {
              lVar25 = lVar11;
            }
            if (iVar3 <= local_224) {
              iVar3 = local_224;
            }
            local_3c0 = lVar26 + iVar3;
          }
          local_384 = local_1b0._4_4_;
          bVar14 = local_1a8;
          do {
            if ((local_1bc & 0x38) == 8) {
              bVar5 = true;
            }
            else {
              bVar5 = (local_1bc & 0x80) != 0 && (local_1bc & 0x30) == 0x10;
            }
            local_388 = 0;
            iVar8 = FUN__text__004f62c0(auStack_198,lVar25,bVar14 & 0x1f,&local_384,bVar5 ^ 1,1,
                                        &local_230);
            if (iVar8 == 3) {
              if (local_6e == '\0') {
                iVar8 = 3;
              }
              else {
                plVar10 = plVar17;
                do {
                  plVar10 = (long *)*plVar10;
                } while (plVar10 != (long *)0x0 && plVar10 != plVar15);
                if (plVar10 != (long *)0x0) {
                  plVar19 = (long *)param_1[0x14];
                  if (plVar19 != (long *)0x0) {
                    plVar21 = plVar10;
                    do {
                      plVar21 = (long *)*plVar21;
                      if (plVar21 == (long *)0x0) goto LAB__text__004fbb08;
                    } while (plVar21 != plVar19);
                    plVar10 = plVar19;
                    plVar15 = plVar19;
                  }
LAB__text__004fbb08:
                  puVar20 = (undefined8 *)*plVar10;
                  puVar23 = puVar24;
                  puVar30 = puVar29;
                  if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
                    do {
                      puVar24 = puVar20;
                      puVar20 = (undefined8 *)*puVar24;
                      plVar19 = plVar17;
                      if ((undefined8 *)param_1[0x13] != puVar24) {
                        plVar19 = plVar10;
                      }
                      *plVar19 = (long)puVar20;
                      if ((undefined8 *)param_1[0x12] == puVar24) {
                        param_1[0x12] = (long)plVar10;
                        *puVar24 = 0;
                      }
                      else {
                        *puVar24 = 0;
                      }
                      puVar29 = puVar24;
                      if (puVar30 != (undefined8 *)0x0) {
                        *puVar23 = puVar24;
                        puVar29 = puVar30;
                      }
                      puVar23 = puVar24;
                      puVar30 = puVar29;
                    } while (puVar20 != (undefined8 *)0x0);
                    bVar14 = local_1a8;
                  }
                }
                (**(code **)(*param_1 + 0xc0))(param_1,auStack_198);
                if ((local_1bc & 0x38) == 8) {
                  bVar5 = true;
                }
                else if ((char)local_1bc < '\0') {
                  bVar5 = (local_1bc & 0x30) == 0x10;
                }
                else {
                  bVar5 = false;
                }
                iVar8 = FUN__text__004f62c0(auStack_198,lVar25,bVar14 & 0x1f,&local_384,bVar5 ^ 1,1,
                                            &local_230);
              }
            }
            local_270 = 0;
            local_250 = 0;
            local_258 = 0;
            local_248 = 0x1000001;
            local_268 = 0;
            uStack_260 = 0;
            if ((plVar22 != (long *)0x0) && (iVar8 == 1)) {
              local_380 = local_3b0;
              *(long *)(local_3b0[1] + 0x68) = local_230;
              local_258 = 1;
              FUN__text__004f6800(&local_370,&local_380);
              (**(code **)(*(long *)local_380[1] + 0xb8))((long *)local_380[1],&local_370,0);
              local_258 = local_258 + -1;
              iVar8 = FUN__text__004f62c0(&local_370,local_3c0,local_1f0 & 0x1f,&local_388,1,1,
                                          &local_240);
            }
            lVar25 = local_230;
            if ((local_1bc & 0x38) != 8) {
              if (((char)local_1bc < '\0') && (bVar5 = (local_1bc & 0x30) == 0x10, iVar8 == 1))
              goto LAB__text__004fbce8;
LAB__text__004fbe20:
              if (iVar8 == 1) goto LAB__text__004fbe68;
              (**(code **)(*param_1 + 0xb8))(param_1,auStack_198,0);
              iVar7 = 0;
              iVar28 = -1;
              goto LAB__text__004fc0d8;
            }
            bVar5 = true;
            if (iVar8 != 1) goto LAB__text__004fbe20;
LAB__text__004fbce8:
            if ((!bVar5) || (*param_3 != 0)) goto LAB__text__004fbe20;
            if (*(long *)(local_90[0] + 0x18) == 0) goto LAB__text__004fbe64;
            if ((local_1bc & 0x38) == 8) {
              lVar11 = FUN__text__004f6970(auStack_198,0);
              local_210 = FUN__text__004f52d4(local_90,lVar25 - lVar11);
              local_20c = 0;
              iVar7 = (**(code **)(*(long *)*param_4 + 0xb0))
                                ((long *)*param_4,&local_1d0,local_398,&local_210,&local_224,
                                 auStack_220,0,1);
              iVar6 = local_234;
              iVar8 = local_224;
            }
            else {
              iVar7 = (**(code **)(*(long *)*param_4 + 0xb0))
                                ((long *)*param_4,&local_1d0,local_398,&local_210,&local_224,
                                 auStack_220,local_384,1);
              iVar6 = local_234;
              iVar8 = local_224;
            }
            local_234 = iVar6;
            local_224 = iVar8;
            if (iVar7 == 0) {
              iVar7 = 6;
              iVar8 = 1;
              *param_4 = 0;
              goto LAB__text__004fc0d8;
            }
            if (plVar22 == (long *)0x0) {
              lVar25 = (long)iVar8;
              local_234 = iVar8;
              if (lVar25 <= local_230 - lVar26) goto LAB__text__004fbe64;
            }
            else {
              lVar25 = FUN__text__004f6038(local_3b8,0);
              iVar7 = 0;
              if (lVar25 != 0) {
                iVar7 = FUN__text__004f4810();
              }
              iVar3 = iVar8 - iVar7;
              if (iVar8 - iVar7 <= iVar6) {
                iVar3 = iVar6;
              }
              lVar25 = (long)iVar3;
              if (lVar25 <= local_230 - lVar26) goto LAB__text__004fbe64;
            }
            lVar25 = lVar26 + lVar25;
            local_384 = local_1b0._4_4_;
          } while( true );
        }
        *param_4 = 0;
      }
      else {
        if (local_3b0 == (long *)0x0) {
          local_3b0 = (long *)0x0;
        }
        else {
          if (plVar22 == (long *)0x0) {
            local_3b0 = (long *)0x0;
          }
          else {
            *(byte *)(local_3b0 + 9) = *(byte *)(local_3b0 + 9) & 0xfc;
            FUN__text__004ec13c(local_3b0[1]);
            FUN__text__004fa444(local_3b0);
            FUN__text__00400fc0(0,local_3b0);
            plVar10 = plVar22;
          }
          FUN__text__004fa444(plVar10);
          FUN__text__00400fc0(0,plVar10);
          plVar22 = (long *)0x0;
        }
        if ((*(byte *)(local_90[0] + 0x40) >> 2 & 1) == 0) {
          if (*(undefined4 **)(lVar25 + 0x50) == (undefined4 *)0x0) {
            lVar11 = *param_4;
            local_3b0 = (long *)FUN__text__00400f80(0,0x50);
joined_r0x004fb5d8:
            if (local_3b0 != (long *)0x0) {
              FUN__text__004fa410(local_3b0,lVar11);
LAB__text__004fb6dc:
              local_3b8 = (long *)0x0;
LAB__text__004fb6e0:
              local_1b8 = *(undefined8 *)(lVar25 + 0x20);
              local_1b0 = *(undefined8 *)(lVar25 + 0x28);
              uVar18 = *(undefined8 *)(lVar25 + 0x41);
              local_1a8 = *(byte *)(lVar25 + 0x30);
              local_1d0 = *(undefined8 *)(lVar25 + 0x34);
              local_1c8 = (undefined5)*(undefined8 *)(lVar25 + 0x3c);
              uStack_1c3 = (undefined3)uVar18;
              uStack_1c0 = (undefined4)((ulong)uVar18 >> 0x18);
              local_1bc = (byte)((ulong)uVar18 >> 0x38);
              lVar11 = *(long *)(lVar25 + 0x50);
              if (lVar11 == 0) {
                local_1e8 = *(undefined8 *)(lVar25 + 0x34);
                uVar18 = *(undefined8 *)(lVar25 + 0x41);
                local_200 = *(undefined8 *)(lVar25 + 0x20);
                local_1f8 = *(ulong *)(lVar25 + 0x28);
                local_1f0 = *(byte *)(lVar25 + 0x30);
                local_1e0 = (undefined4)*(undefined8 *)(lVar25 + 0x3c);
                uStack_1dc._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar25 + 0x3c) >> 0x20);
                uStack_1dc._1_3_ = (undefined3)uVar18;
                uStack_1d8 = (undefined4)((ulong)uVar18 >> 0x18);
                local_1d4 = (byte)((ulong)uVar18 >> 0x38);
                cVar1 = (char)param_3[1];
              }
              else {
                local_1e8 = *(undefined8 *)(lVar11 + 4);
                local_1e0 = *(undefined4 *)(lVar11 + 0xc);
                uStack_1dc = 0;
                local_1d4 = local_1d4 & 7 | (*(byte *)(lVar11 + 0x1c) & 1) << 6;
                local_200 = *(undefined8 *)(lVar11 + 0x10);
                local_1f8 = (ulong)*(uint *)(lVar11 + 0x18);
                local_1f0 = local_1f0 & 0xc0 | (*(byte *)(lVar11 + 0x1c) >> 1 & 1) << 5 | 7;
                cVar1 = (char)param_3[1];
              }
              if (cVar1 != '\0') {
                local_1bc = (*(byte *)((long)param_3 + 0xc) & 7) << 3 | local_1bc & 199;
              }
              if (local_218 == 0) {
                puVar16 = (undefined4 *)*param_3;
                local_398 = (undefined4 *)0x0;
                if (puVar16 != (undefined4 *)0x0) goto LAB__text__004fb830;
LAB__text__004fb998:
                local_210 = 0;
                local_20c = 0;
              }
              else {
                local_398 = (undefined4 *)
                            (**(code **)(*param_1 + 0xa0))
                                      (param_1,*(undefined4 *)(local_218 + 0x20));
                puVar16 = (undefined4 *)*param_3;
                if (puVar16 == (undefined4 *)0x0) {
                  if ((local_398 == (undefined4 *)0x0) || ((local_1bc & 0x38) != 0x20))
                  goto LAB__text__004fb998;
                  local_210 = *local_398;
                  local_20c = 0;
                }
                else {
LAB__text__004fb830:
                  local_210 = *puVar16;
                  local_20c = *(undefined1 *)(puVar16 + 1);
                }
              }
              if ((local_1bc & 7) == 1) {
                local_208 = *(undefined4 *)(lVar25 + 0x44);
              }
              if ((((local_1bc & 6) == 2) && (local_398 != (undefined4 *)0x0)) &&
                 (local_21c[0] != '\0')) {
                local_204 = 1;
              }
              goto LAB__text__004fb878;
            }
          }
          else {
            local_3b8 = (long *)FUN__text__004fccb0(param_1,**(undefined4 **)(lVar25 + 0x50));
            if (local_3b8 == (long *)0x0) {
              lVar11 = *param_4;
              local_3b0 = (long *)FUN__text__00400f80(0,0x50);
              goto joined_r0x004fb5d8;
            }
            local_3b0 = (long *)FUN__text__00400f80(0,0x50);
            if (local_3b0 != (long *)0x0) {
              FUN__text__004fa410(local_3b0,local_3b8);
              lVar11 = *param_4;
              plVar22 = (long *)FUN__text__00400f80(0,0x50);
              if (plVar22 == (long *)0x0) {
                *(byte *)(local_3b0 + 9) = *(byte *)(local_3b0 + 9) & 0xfc;
                FUN__text__004ec13c(local_3b0[1]);
                FUN__text__004fa444(local_3b0);
                FUN__text__00400fc0(0,local_3b0);
                lVar11 = *param_4;
                local_3b0 = (long *)FUN__text__00400f80(0,0x50);
                goto joined_r0x004fb6a0;
              }
              FUN__text__004fa410(plVar22,lVar11);
              goto LAB__text__004fb6e0;
            }
            lVar27 = *param_4;
            lVar11 = FUN__text__00400f80(0,0x50);
            if (lVar11 == 0) {
              FUN__text__004ec13c(local_3b8);
              lVar11 = *param_4;
              local_3b0 = (long *)FUN__text__00400f80(0,0x50);
              if (local_3b0 == (long *)0x0) goto LAB__text__004fc304;
LAB__text__004fb6c8:
              FUN__text__004fa410(local_3b0,lVar11);
              plVar22 = (long *)0x0;
              goto LAB__text__004fb6dc;
            }
            FUN__text__004fa410(lVar11,lVar27);
            FUN__text__004ec13c(local_3b8);
            FUN__text__004fa444(lVar11);
            FUN__text__00400fc0(0,lVar11);
            lVar11 = *param_4;
            local_3b0 = (long *)FUN__text__00400f80(0,0x50);
joined_r0x004fb6a0:
            if (local_3b0 != (long *)0x0) goto LAB__text__004fb6c8;
LAB__text__004fc304:
            plVar22 = (long *)0x0;
          }
          local_3b0 = (long *)0x0;
          if (bVar4) goto LAB__text__004fc318;
          goto LAB__text__004fc41c;
        }
      }
      if (!bVar4) goto LAB__text__004fc41c;
      goto LAB__text__004fc318;
    }
  }
  plVar17 = param_1 + 0x13;
  do {
    plVar17 = (long *)*plVar17;
  } while (plVar17 != (long *)0x0 && plVar17 != plVar15);
  if (plVar17 != (long *)0x0) {
    plVar15 = (long *)param_1[0x14];
    if (plVar15 != (long *)0x0) {
      plVar22 = plVar17;
      do {
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB__text__004fc144;
      } while (plVar22 != plVar15);
      plVar17 = plVar15;
    }
LAB__text__004fc144:
    puVar20 = (undefined8 *)*plVar17;
    puVar23 = puVar29;
    if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
      do {
        puVar30 = puVar20;
        puVar20 = (undefined8 *)*puVar30;
        plVar15 = param_1 + 0x13;
        if ((undefined8 *)param_1[0x13] != puVar30) {
          plVar15 = plVar17;
        }
        *plVar15 = (long)puVar20;
        if ((undefined8 *)param_1[0x12] == puVar30) {
          param_1[0x12] = (long)plVar17;
          *puVar30 = 0;
        }
        else {
          *puVar30 = 0;
        }
        puVar29 = puVar30;
        if (puVar23 != (undefined8 *)0x0) {
          *puVar24 = puVar30;
          puVar29 = puVar23;
        }
        puVar24 = puVar30;
        puVar23 = puVar29;
      } while (puVar20 != (undefined8 *)0x0);
    }
  }
  (**(code **)(*param_1 + 0xc0))(param_1,auStack_198);
  FUN__text__004ec13c(*param_4);
  *param_4 = 0;
  uVar12 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
  if ((uVar12 & 1) != 0) {
    lVar25 = param_1[0x12];
    if ((*(byte *)(lVar25 + 0x48) & 6) == 4) {
      local_368 = 0;
      dVar31 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
      dVar31 = ((double)((int)lVar26 - *(int *)(lVar25 + 0x38)) * 1000.0) / dVar31;
      dVar32 = 0.5;
      if (dVar31 <= 0.0) {
        dVar32 = -0.5;
      }
      local_370 = (long *)CONCAT44(*(undefined4 *)(lVar25 + 0x44),(int)(dVar32 + dVar31));
      FUN__text__004ebee4(*(undefined8 *)(lVar25 + 8),&local_370);
      bVar14 = *(byte *)(lVar25 + 0x48);
    }
    else {
      bVar14 = *(byte *)(lVar25 + 0x48) & 0xfd;
    }
    *(undefined1 *)(lVar25 + 0x18) = 0;
    *(byte *)(lVar25 + 0x48) = bVar14 & 0xfb;
  }
  goto joined_r0x004fc42c;
LAB__text__004fbe64:
  iVar8 = 1;
LAB__text__004fbe68:
  local_80 = local_80 + 1;
  plVar15 = (long *)FUN__text__004f6870(auStack_198);
  local_80 = local_80 + -1;
  plVar10 = plVar17;
  do {
    plVar10 = (long *)*plVar10;
  } while (plVar10 != (long *)0x0 && plVar10 != plVar15);
  if (plVar10 != (long *)0x0) {
    plVar19 = (long *)param_1[0x14];
    if (plVar19 == (long *)0x0) {
LAB__text__004fbed0:
      puVar20 = (undefined8 *)*plVar10;
      plVar19 = plVar10;
    }
    else {
      plVar21 = plVar10;
      do {
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) goto LAB__text__004fbed0;
      } while (plVar21 != plVar19);
      puVar20 = (undefined8 *)*plVar19;
      plVar15 = plVar19;
    }
    puVar23 = puVar24;
    puVar30 = puVar29;
    if (puVar20 != (undefined8 *)0x0) {
      do {
        puVar24 = puVar20;
        puVar20 = (undefined8 *)*puVar24;
        plVar10 = plVar17;
        if ((undefined8 *)param_1[0x13] != puVar24) {
          plVar10 = plVar19;
        }
        *plVar10 = (long)puVar20;
        if ((undefined8 *)param_1[0x12] == puVar24) {
          param_1[0x12] = (long)plVar19;
          *puVar24 = 0;
        }
        else {
          *puVar24 = 0;
        }
        puVar29 = puVar24;
        if (puVar30 != (undefined8 *)0x0) {
          *puVar23 = puVar24;
          puVar29 = puVar30;
        }
        puVar23 = puVar24;
        puVar30 = puVar29;
      } while (puVar20 != (undefined8 *)0x0);
    }
  }
  (**(code **)(*param_1 + 0xc0))(param_1,auStack_198);
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x168) != '\0')) {
    lVar25 = (**(code **)(*(long *)plVar15[1] + 0xd0))();
    if (lVar25 == 0) {
      if (param_2 == 0) goto LAB__text__004fbf9c;
    }
    else if (*(int *)(lVar25 + 0x20) == param_2) {
LAB__text__004fbf9c:
      iVar7 = 6;
      goto LAB__text__004fc0d8;
    }
  }
  param_1[0x15] = (long)plVar15;
  local_380 = (long *)0x0;
  FUN__text__004f6178(auStack_198,&local_380);
  lVar25 = local_230;
  if (local_380 != (long *)0x0) {
    if (*(long *)(local_90[0] + 0x18) == 0) {
      uVar9 = 0;
      iVar6 = (**(code **)(*local_380 + 0x80))();
      if (iVar6 == 8) goto LAB__text__004fc02c;
LAB__text__004fc044:
      uVar13 = 0;
    }
    else {
      lVar11 = FUN__text__004f6970(auStack_198,0);
      uVar9 = FUN__text__004f52d4(local_90,lVar25 - lVar11);
      iVar6 = (**(code **)(*local_380 + 0x80))();
      if (iVar6 != 8) goto LAB__text__004fc044;
LAB__text__004fc02c:
      if ((local_90[0] == 0) || (*(long *)(local_90[0] + 0x18) == 0)) goto LAB__text__004fc044;
      uVar13 = *(undefined4 *)(*(long *)(local_90[0] + 0x18) + 0x98);
    }
    (**(code **)(*param_1 + 0x90))(param_1,(int)local_380[4],uVar9,uVar13);
  }
  FUN__text__004fcfb0(param_1,lVar26,local_3b0,&local_1b8,&local_1e8,auStack_198,local_234,local_230
                      ,0,&local_1a0);
  if (plVar22 != (long *)0x0) {
    FUN__text__004fcfb0(param_1,lVar26,plVar22,&local_200,&local_1d0,&local_370,local_224,local_240,
                        1,&local_1a0);
  }
  iVar7 = 0;
  bVar4 = false;
LAB__text__004fc0d8:
  FUN__text__004f6174(&local_370);
  iVar6 = iVar28;
  if (iVar8 == 1 || iVar7 == 6) goto LAB__text__004fc0f4;
  goto LAB__text__004fb4a8;
LAB__text__004fc0f4:
  if (bVar4) {
LAB__text__004fc318:
    if (local_3b0 != (long *)0x0) {
      if (plVar22 != (long *)0x0) {
        *(byte *)(local_3b0 + 9) = *(byte *)(local_3b0 + 9) & 0xfc;
        FUN__text__004ec13c(local_3b0[1]);
        FUN__text__004fa444(local_3b0);
        FUN__text__00400fc0(0,local_3b0);
        local_3b0 = plVar22;
      }
      FUN__text__004fa444(local_3b0);
      FUN__text__00400fc0(0,local_3b0);
    }
    if (*param_4 != 0) {
      FUN__text__004ec13c();
      *param_4 = 0;
    }
    uVar12 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xd8))();
    if ((uVar12 & 1) != 0) {
      lVar25 = param_1[0x12];
      if ((*(byte *)(lVar25 + 0x48) & 6) == 4) {
        local_368 = 0;
        dVar31 = (double)NEON_ucvtf((ulong)_DAT_008ab030);
        dVar31 = ((double)((int)lVar26 - *(int *)(lVar25 + 0x38)) * 1000.0) / dVar31;
        dVar32 = 0.5;
        if (dVar31 <= 0.0) {
          dVar32 = -0.5;
        }
        local_370 = (long *)CONCAT44(*(undefined4 *)(lVar25 + 0x44),(int)(dVar32 + dVar31));
        FUN__text__004ebee4(*(undefined8 *)(lVar25 + 8),&local_370);
        bVar14 = *(byte *)(lVar25 + 0x48);
      }
      else {
        bVar14 = *(byte *)(lVar25 + 0x48) & 0xfd;
      }
      *(undefined1 *)(lVar25 + 0x18) = 0;
      *(byte *)(lVar25 + 0x48) = bVar14 & 0xfb;
    }
  }
LAB__text__004fc41c:
  FUN__text__004eaab0(param_1[0xc],&local_1a0);
joined_r0x004fc42c:
  while (puVar29 != (undefined8 *)0x0) {
    *(byte *)(puVar29 + 9) = *(byte *)(puVar29 + 9) & 0xfc;
    puVar24 = (undefined8 *)*puVar29;
    FUN__text__004ec13c(puVar29[1]);
    FUN__text__004fa444(puVar29);
    FUN__text__00400fc0(0,puVar29);
    puVar29 = puVar24;
  }
LAB__text__004fc2b0:
  FUN__text__004f6174(auStack_198);
  return;
}


