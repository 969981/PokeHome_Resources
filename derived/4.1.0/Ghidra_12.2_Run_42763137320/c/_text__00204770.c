/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00204770; name: FUN_.text__00204770
 */


void FUN__text__00204770(long param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  undefined1 *local_770;
  code *pcStack_768;
  code *local_760;
  undefined1 *local_758;
  undefined1 auStack_750 [96];
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined1 *local_670;
  code *local_668;
  code *local_660;
  undefined1 *puStack_658;
  undefined1 auStack_650 [96];
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  long local_188;
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  long local_160 [12];
  undefined1 *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *puStack_e8;
  long local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  long local_78;
  long local_70 [2];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar20 != (undefined8 *)0x0)) {
    plVar10 = (long *)(**(code **)*puVar20)(puVar20);
    plVar11 = (long *)FUN__text__0018d6a0();
    if (plVar11 != plVar10) {
      do {
        plVar10 = (long *)*plVar10;
      } while (plVar10 != plVar11 && plVar10 != (long *)0x0);
      if (plVar10 == (long *)0x0) goto LAB__text__00204e30;
    }
    lVar17 = puVar20[4];
    if ((lVar17 != 0) && (lVar22 = puVar20[0x48], local_70[0] = lVar22, lVar22 != 0)) {
      plVar10 = (long *)(lVar22 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      local_78 = lVar22;
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN__text__0019485c(lVar17,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
      plVar11 = (long *)(**(code **)*puVar19)(puVar19);
      plVar12 = (long *)FUN__text__0012615c();
      if (plVar12 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar12 && plVar11 != (long *)0x0);
      }
      lVar18 = puVar19[0xaf];
      if (lVar18 != 0) {
        local_770 = (undefined1 *)0xf809dfdea7bdfe07;
        pcStack_768 = (code *)0x70f808;
        local_760 = (code *)0x14;
        local_758 = (undefined1 *)0x0;
        lVar13 = FUN__text__00137c10(lVar18,&local_770);
        if (local_758 != (undefined1 *)0x0) {
          (**(code **)(*(long *)((long)local_758 + 0x48) + 0x18))();
        }
        if ((lVar13 != 0) && (puVar20[0x38] != 0)) {
          uVar24 = 0;
          puVar23 = (undefined4 *)&DAT_00726f7c;
          while (lVar14 = FUN__text__00139b48(lVar13,0,uVar24 & 0xffffffff), lVar14 != 0) {
            FUN__text__003d5154(puVar20[0x38],puVar23[-1],lVar14,0,0);
            if ((uVar24 & 0x7ffffffd) == 0) {
              uVar16 = 1;
            }
            else {
              lVar14 = FUN__text__00139b48(lVar13,1,uVar24 & 0xffffffff);
              if (lVar14 == 0) break;
              FUN__text__003d5154(puVar20[0x38],*puVar23,lVar14,0,0);
              uVar16 = 2;
            }
            FUN__text__0013a4e8(lVar13,uVar24 & 0xffffffff,uVar16);
            FUN__text__0013a0d0(lVar13,2,uVar24 & 0xffffffff);
            bVar3 = 5 < (uint)uVar24;
            uVar21 = (uint)(0x10204030507 >> ((uVar24 & 7) << 3));
            uVar1 = uVar21;
            if (bVar3) {
              uVar1 = 0;
            }
            uVar15 = FUN__text__003069e8(lVar22,uVar1);
            bVar4 = 0;
            if ((uVar15 & 1) == 0) {
              bVar6 = 0;
              if (uVar24 != 4 || bVar3) goto LAB__text__002049e0;
LAB__text__00204a34:
              uVar16 = FUN__text__003069d0(lVar22);
              local_770 = (undefined1 *)CONCAT44(local_770._4_4_,4);
              uVar15 = FUN__text__00196a94(uVar16,&local_770);
              if ((uVar15 & 1) == 0) {
                uVar16 = FUN__text__003069d0(lVar22);
                local_100 = (undefined1 *)CONCAT44(local_100._4_4_,5);
                bVar5 = FUN__text__00196a94(uVar16,&local_100);
              }
              else {
                bVar5 = 1;
              }
              uVar9 = FUN__text__003065f8(lVar22);
              uVar7 = FUN__text__00306600(lVar22);
              bVar6 = FUN__text__00306c60(lVar22,uVar9,uVar7);
              bVar6 = bVar4 & bVar5 & bVar6;
              uVar15 = FUN__text__00193d54(lVar17,(long)puVar20 + 0x54);
              if ((uVar15 & 1) != 0) goto LAB__text__00204ab8;
LAB__text__002049f0:
              lVar14 = FUN__text__0013a730(lVar13,uVar24 & 0xffffffff);
            }
            else {
              uVar9 = FUN__text__003065f8(lVar22);
              uVar7 = FUN__text__00306600(lVar22);
              bVar4 = FUN__text__005fe794(uVar9,uVar7,uVar1);
              bVar6 = bVar4;
              if (uVar24 == 4 && !bVar3) goto LAB__text__00204a34;
LAB__text__002049e0:
              uVar15 = FUN__text__00193d54(lVar17,(long)puVar20 + 0x54);
              if ((uVar15 & 1) == 0) goto LAB__text__002049f0;
LAB__text__00204ab8:
              uVar8 = FUN__text__001933c8(lVar17);
              if (5 < (uint)uVar24) {
                uVar21 = 0;
              }
              bVar6 = bVar6 & (uVar8 & 0xff) != (uVar21 & 0xff);
              lVar14 = FUN__text__0013a730(lVar13,uVar24 & 0xffffffff);
            }
            if (lVar14 == 0) break;
            FUN__text__003a14c4(lVar14,bVar6 & 1);
            if ((bVar6 & 1) != 0) {
              *(undefined1 *)(param_1 + (ulong)(byte)uVar1 + 0x80) = 1;
            }
            uVar24 = uVar24 + 1;
            puVar23 = puVar23 + 2;
            if (uVar24 == 6) {
              uVar9 = FUN__text__00204ef0(param_1,local_70);
              local_100 = &LAB__text__00205130;
              local_f8 = FUN__text__002052dc;
              local_178 = FUN__text__00205318;
              local_f0 = FUN__text__002052e0;
              puStack_e8 = &LAB__text__002052f4;
              puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
              local_180 = &LAB__text__00205308;
              local_170 = FUN__text__0020531c;
              local_168 = &LAB__text__00205328;
              local_160[0] = param_1;
              local_e0 = param_1;
              puStack_d8 = puVar20 + -10;
              local_d0 = lVar17;
              plVar11 = (long *)(**(code **)*puVar19)(puVar19);
              plVar12 = (long *)FUN__text__0012615c();
              if (plVar12 != plVar11) {
                do {
                  plVar11 = (long *)*plVar11;
                } while (plVar11 != plVar12 && plVar11 != (long *)0x0);
              }
              FUN__text__001156d0(&local_188,puVar19[0xd],0);
              local_558 = 0;
              local_560 = 0;
              local_360 = 0xe98bd2f9c79e70f;
              local_568 = 0;
              local_2c0 = 0xcbf29ce484222645;
              local_230 = 0xcbf29ce484222645;
              local_1a0 = 0xffffffff;
              local_760 = (code *)0x0;
              local_758 = (undefined1 *)0x0;
              local_570 = 0;
              local_4d8 = 0;
              local_4e0 = 0;
              local_4e8 = 0;
              local_4f0 = 0;
              local_470 = 0;
              local_468 = 0;
              local_460 = 0;
              local_458 = 0;
              local_3f0 = 0;
              local_3e8 = 0;
              local_3e0 = 0;
              local_3d8 = 0;
              local_370 = 0;
              local_368 = 0;
              local_340 = 0;
              local_338 = 0;
              local_330 = 0;
              local_328 = 0;
              local_348 = 0;
              local_350 = 0;
              local_358 = 0;
              local_298 = 0;
              local_2a0 = 0;
              local_2a8 = 0;
              local_2b0 = 0;
              local_208 = 0;
              local_210 = 0;
              local_218 = 0;
              local_220 = 0;
              local_19c = 0;
              local_198 = 0;
              local_770 = (undefined1 *)0x0;
              pcStack_768 = (code *)0x0;
              local_6f0 = 0;
              uStack_6e8 = 0;
              local_6e0 = 0;
              uStack_6d8 = 0;
              local_670 = (undefined1 *)0x0;
              local_668 = (code *)0x0;
              local_660 = (code *)0x0;
              puStack_658 = (undefined1 *)0x0;
              local_5f0 = 0;
              uStack_5e8 = 0;
              local_5e0 = 0;
              uStack_5d8 = 0;
              if (local_f0 != (code *)0x0) {
                (*local_f0)(&local_e0,auStack_750);
                pcVar2 = local_668;
                local_770 = local_100;
                pcStack_768 = local_f8;
                local_760 = local_f0;
                local_758 = puStack_e8;
                if (local_668 != (code *)0x0) {
                  local_660 = (code *)0x0;
                  puStack_658 = (undefined1 *)0x0;
                  local_670 = (undefined1 *)0x0;
                  local_668 = (code *)0x0;
                  (*pcVar2)(auStack_650);
                }
              }
              if (local_170 != (code *)0x0) {
                (*local_170)(local_160,auStack_650);
                local_670 = local_180;
                local_668 = local_178;
                local_660 = local_170;
                puStack_658 = local_168;
              }
              lVar17 = local_188;
              if (local_188 != 0) {
                (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
              }
              lVar22 = local_370;
              local_370 = lVar17;
              if (lVar22 != 0) {
                (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
              }
              local_360 = 0x40f2336e6b7ca85;
              local_348 = 6;
              local_1a0 = uVar9;
              FUN__text__00137b30(0x70f808,lVar18,&local_770);
              *(undefined4 *)(param_1 + 0x78) = 0;
              FUN__text__0013aa2c(&local_770);
              if (local_188 != 0) {
                (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
              }
              pcVar2 = local_178;
              if (local_178 != (code *)0x0) {
                local_168 = (undefined1 *)0x0;
                local_170 = (code *)0x0;
                local_178 = (code *)0x0;
                local_180 = (undefined1 *)0x0;
                (*pcVar2)(local_160);
              }
              pcVar2 = local_f8;
              if (local_f8 != (code *)0x0) {
                local_f0 = (code *)0x0;
                puStack_e8 = (undefined1 *)0x0;
                local_100 = (undefined1 *)0x0;
                local_f8 = (code *)0x0;
                (*pcVar2)(&local_e0);
              }
              (**(code **)(*plVar10 + 0x18))(plVar10);
              return;
            }
          }
        }
      }
    }
  }
LAB__text__00204e30:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


