/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031dc40; name: FUN_.text__0031dc40
 */


void FUN__text__0031dc40(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *__src;
  undefined1 local_800 [8];
  undefined8 local_7f8;
  undefined2 local_7f0;
  undefined2 local_7ee;
  undefined2 local_7ec;
  byte local_7ea;
  undefined1 uStack_7e9;
  undefined7 local_7e8;
  undefined1 uStack_7e1;
  undefined7 uStack_7e0;
  undefined1 uStack_7d9;
  undefined7 local_7d8;
  undefined1 uStack_7d1;
  undefined7 uStack_7d0;
  undefined1 uStack_7c9;
  undefined7 local_7c8;
  undefined1 uStack_7c1;
  undefined7 uStack_7c0;
  undefined1 uStack_7b9;
  undefined7 local_7b8;
  undefined1 uStack_7b1;
  undefined7 uStack_7b0;
  undefined1 uStack_7a9;
  undefined7 local_7a8;
  undefined1 uStack_7a1;
  undefined7 uStack_7a0;
  undefined1 uStack_799;
  undefined7 local_798;
  undefined1 uStack_791;
  undefined7 uStack_790;
  undefined4 local_789;
  byte bStack_785;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined2 local_720;
  undefined8 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined2 local_700;
  ushort local_6fe;
  undefined1 auStack_6fc [668];
  long local_460;
  long local_458;
  ulong local_450 [126];
  
  lVar8 = FUN__text__00304b90();
  *param_1 = 0;
  memset(param_1 + 4,0,0x8d0);
  sVar9 = strlen((char *)(param_2 + 0x13560a0));
  puVar1 = &DAT_009cca20 + param_2;
  FUN__text__003d5a80(local_450,puVar1,&DAT_00989680,(char *)(param_2 + 0x13560a0),sVar9,0);
  pbVar2 = (byte *)(param_2 + 0x1cdf720);
  nn::util::DecompressGzip(pbVar2,10000000,puVar1,10000000,(void *)(param_2 + 0x9896e8),0x1bf8);
  lVar10 = nn::util::GetGzipDecompressedSize(puVar1,local_450[0]);
  plVar11 = (long *)FUN__text__0064c260();
  uVar16 = tpidr_el0;
  uVar16 = uVar16 & 0xffffffffffffe000;
  if (*(long *)(uVar16 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) = plVar11;
  *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,0x310,8);
  if (lVar12 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN__text__00637458(lVar12,plVar11,0,0,0);
  *(long **)(lVar12 + 8) = plVar11;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0x310;
  *(undefined8 *)(lVar12 + 0x20) = 8;
  *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
  local_458 = lVar12;
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))((long *)(lVar12 + 0x48));
  FUN__text__002a33c8(&local_460,plVar11,&local_458);
  local_800[0] = 0;
  local_728 = 0;
  uStack_724 = 0;
  local_7f8 = 0;
  local_7f0 = 0;
  local_7ee = 0;
  local_7ec = 0;
  local_7ea = 0;
  uStack_7e9 = 0;
  local_720 = 0;
  local_7e8 = 0;
  uStack_7e1 = 0;
  uStack_7e0 = 0;
  uStack_7d9 = 0;
  local_7d8 = 0;
  uStack_7d1 = 0;
  uStack_7d0 = 0;
  uStack_7c9 = 0;
  local_7c8 = 0;
  uStack_7c1 = 0;
  uStack_7c0 = 0;
  uStack_7b9 = 0;
  local_7b8 = 0;
  uStack_7b1 = 0;
  uStack_7b0 = 0;
  uStack_7a9 = 0;
  local_7a8 = 0;
  uStack_7a1 = 0;
  uStack_7a0 = 0;
  uStack_799 = 0;
  local_798 = 0;
  uStack_791 = 0;
  uStack_790 = 0;
  local_789 = 0;
  bStack_785 = 0;
  uStack_784 = 0;
  uStack_780 = 0;
  uStack_77c = 0;
  local_778 = 0;
  uStack_774 = 0;
  uStack_770 = 0;
  uStack_76c = 0;
  local_768 = 0;
  uStack_764 = 0;
  uStack_760 = 0;
  uStack_75c = 0;
  local_758 = 0;
  uStack_754 = 0;
  uStack_750 = 0;
  uStack_74c = 0;
  local_748 = 0;
  uStack_744 = 0;
  uStack_740 = 0;
  uStack_73c = 0;
  local_738 = 0;
  uStack_734 = 0;
  uStack_730 = 0;
  uStack_72c = 0;
  memset(&local_718,0,0x2b2);
  if (0 < lVar10) {
    uVar18 = 0;
    uVar17 = 1;
    pbVar14 = pbVar2;
LAB__text__0031de58:
    do {
      bVar3 = *pbVar14;
      uVar4 = *(ushort *)(pbVar14 + 1);
      uVar16 = (ulong)uVar4;
      pbVar14 = pbVar14 + 3;
      if (bVar3 == 9) {
        FUN__text__00305130(lVar8,1);
LAB__text__0031df10:
        uVar13 = FUN__text__00305a80(lVar8,0);
        if (uVar4 != 0) {
          uVar13 = uVar13 & 0xffffffff;
          do {
            while( true ) {
              lVar12 = local_460;
              if (local_460 == 0) goto LAB__text__0031e234;
              plVar11 = (long *)(local_460 + 0x48);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              local_800[0] = 0;
              pbVar19 = pbVar14 + 7;
              local_7f8 = 0;
              local_7f0 = *(undefined2 *)pbVar14;
              local_7ee = *(undefined2 *)(pbVar14 + 2);
              local_7ec = *(undefined2 *)(pbVar14 + 4);
              local_7ea = pbVar14[6];
              uVar15 = (ulong)local_7ea;
              uStack_7e9 = 0;
              local_7e8 = 0;
              uStack_7e1 = 0;
              uStack_7e0 = 0;
              uStack_7d9 = 0;
              local_7d8 = 0;
              uStack_7d1 = 0;
              uStack_7d0 = 0;
              local_789 = 0;
              uStack_7c9 = 0;
              local_7c8 = 0;
              uStack_7c1 = 0;
              uStack_7c0 = 0;
              uStack_7b9 = 0;
              local_7b8 = 0;
              uStack_7b1 = 0;
              uStack_7b0 = 0;
              uStack_7a9 = 0;
              local_7a8 = 0;
              uStack_7a1 = 0;
              uStack_7a0 = 0;
              uStack_799 = 0;
              local_798 = 0;
              uStack_791 = 0;
              uStack_790 = 0;
              if (uVar15 != 0) {
                memcpy(&uStack_7e9,pbVar19,uVar15);
                pbVar19 = pbVar19 + uVar15;
              }
              __src = pbVar19 + 1;
              bStack_785 = *pbVar19;
              uVar15 = (ulong)bStack_785;
              uStack_724 = 0;
              uStack_784 = 0;
              uStack_780 = 0;
              uStack_77c = 0;
              local_778 = 0;
              uStack_774 = 0;
              uStack_770 = 0;
              uStack_76c = 0;
              local_768 = 0;
              uStack_764 = 0;
              uStack_760 = 0;
              uStack_75c = 0;
              local_758 = 0;
              uStack_754 = 0;
              uStack_750 = 0;
              uStack_74c = 0;
              local_748 = 0;
              uStack_744 = 0;
              uStack_740 = 0;
              uStack_73c = 0;
              local_738 = 0;
              uStack_734 = 0;
              uStack_730 = 0;
              uStack_72c = 0;
              local_728 = 0;
              if (uVar15 != 0) {
                memcpy(&uStack_784,__src,uVar15);
                __src = __src + uVar15;
              }
              pbVar14 = __src + 0x1e;
              local_720 = *(undefined2 *)__src;
              local_718 = *(undefined8 *)(__src + 2);
              local_710 = *(undefined8 *)(__src + 10);
              local_708 = *(undefined8 *)(__src + 0x12);
              local_700 = *(undefined2 *)(__src + 0x1a);
              uVar4 = *(ushort *)(__src + 0x1c);
              uVar15 = (ulong)uVar4;
              local_6fe = uVar4;
              memset(auStack_6fc,0,0x296);
              if (uVar4 < 0x297) {
                if (uVar4 != 0) {
                  memcpy(auStack_6fc,pbVar14,uVar15);
                  pbVar14 = pbVar14 + uVar15;
                }
              }
              else {
                memset(local_450,0,1000);
                memcpy(local_450,pbVar14,uVar15);
                local_6fe = 0x158;
                pbVar14 = pbVar14 + uVar15;
                memcpy(auStack_6fc,local_450,0x158);
              }
              FUN__text__00306824(lVar12);
              FUN__text__00306b04(lVar12,auStack_6fc);
              local_7f8 = FUN__text__00637404(*(undefined8 *)(lVar12 + 0x58));
              local_800[0] = 1;
              (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar11);
              iVar7 = FUN__text__00305ad0(lVar8,local_800);
              if (iVar7 != 9000) break;
              if (0x464 < (uint)(uVar13 >> 3)) goto LAB__text__0031e1e8;
              memcpy((void *)(lVar8 + uVar13 * 0x3a0 + 0x30),local_800,0x3a0);
              FUN__text__00305c0c(param_1,uVar13);
              uVar13 = FUN__text__00305a80(lVar8,(int)uVar13 + 1);
              uVar13 = uVar13 & 0xffffffff;
              uVar17 = (int)uVar16 - 1;
              uVar16 = (ulong)uVar17;
              if (uVar17 == 0) goto LAB__text__0031e148;
            }
            FUN__text__00305c0c(param_1,iVar7);
            uVar17 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar17;
          } while (uVar17 != 0);
        }
LAB__text__0031e148:
        uVar17 = 2;
      }
      else if (bVar3 == 2) {
        if (uVar17 == 1) {
          bVar6 = uVar4 != 0;
          while (bVar6) {
            iVar7 = FUN__text__00305b40(lVar8,*(undefined8 *)pbVar14);
            if (iVar7 != 9000) {
              FUN__text__00305c80(param_1,iVar7);
            }
            uVar17 = (int)uVar16 - 1;
            bVar6 = uVar17 != 0;
            uVar16 = (ulong)uVar17;
            pbVar14 = pbVar14 + 8;
          }
          uVar17 = 1;
        }
        else if (uVar4 != 0) {
          pbVar14 = pbVar14 + uVar16 * 8;
        }
      }
      else {
        if (bVar3 != 1) {
LAB__text__0031e234:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl();
        }
        if (uVar17 == 2) goto LAB__text__0031df10;
        if (uVar4 != 0) {
          do {
            if (local_460 == 0) goto LAB__text__0031e234;
            plVar11 = (long *)(local_460 + 0x48);
            (**(code **)(*plVar11 + 0x10))(plVar11);
            local_7f8 = 0;
            local_7ea = pbVar14[6];
            local_800[0] = 0;
            pbVar14 = pbVar14 + (ulong)local_7ea + 7;
            bStack_785 = *pbVar14;
            local_6fe = *(ushort *)(pbVar14 + (ulong)bStack_785 + 0x1d);
            pbVar14 = pbVar14 + (ulong)bStack_785 + 0x1f;
            pbVar19 = pbVar14;
            if (local_6fe != 0) {
              pbVar19 = pbVar14 + local_6fe;
            }
            pbVar14 = pbVar14 + local_6fe;
            if (local_6fe < 0x297) {
              pbVar14 = pbVar19;
            }
            (**(code **)(*plVar11 + 0x18))(plVar11);
            uVar5 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar5;
          } while (uVar5 != 0);
        }
      }
      if (uVar18 < 2) {
        uVar18 = uVar18 + 1;
        if (pbVar14 < pbVar2 + lVar10) goto LAB__text__0031de58;
      }
      uVar17 = uVar17 + 1;
      uVar18 = 0;
      pbVar14 = pbVar2;
    } while (uVar17 < 3);
  }
  FUN__text__00305cb8(param_1,1);
LAB__text__0031e1e8:
  if (local_460 != 0) {
    (**(code **)(*(long *)(local_460 + 0x48) + 0x18))();
  }
  if (local_458 != 0) {
    (**(code **)(*(long *)(local_458 + 0x48) + 0x18))();
  }
  return;
}


