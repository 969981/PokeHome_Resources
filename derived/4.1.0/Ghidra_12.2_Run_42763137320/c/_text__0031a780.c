/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031a780; name: FUN_.text__0031a780
 */


void FUN__text__0031a780(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  ushort uVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *__src;
  ulong uVar16;
  byte *__src_00;
  uint uVar17;
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
  
  uVar7 = FUN__text__00304b90();
  *param_1 = 0;
  memset(param_1 + 4,0,0x8d0);
  sVar8 = strlen((char *)(param_2 + 0x13560a0));
  puVar1 = &DAT_009cca20 + param_2;
  FUN__text__003d5a80(local_450,puVar1,&DAT_00989680,(char *)(param_2 + 0x13560a0),sVar8,0);
  __src = (byte *)(param_2 + 0x1cdf720);
  nn::util::DecompressGzip(__src,10000000,puVar1,10000000,(void *)(param_2 + 0x9896e8),0x1bf8);
  lVar9 = nn::util::GetGzipDecompressedSize(puVar1,local_450[0]);
  plVar10 = (long *)FUN__text__0064c260();
  uVar16 = tpidr_el0;
  uVar16 = uVar16 & 0xffffffffffffe000;
  if (*(long *)(uVar16 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) = plVar10;
  *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
  lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,0x310,8);
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN__text__00637458(lVar11,plVar10,0,0,0);
  *(long **)(lVar11 + 8) = plVar10;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 0x310;
  *(undefined8 *)(lVar11 + 0x20) = 8;
  *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
  local_458 = lVar11;
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))((long *)(lVar11 + 0x48));
  FUN__text__002a33c8(&local_460,plVar10,&local_458);
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
  if (0 < lVar9) {
    uVar13 = 0;
    piVar2 = (int *)(param_2 + 0x3138a00);
    pbVar3 = __src + lVar9;
    lVar9 = param_2 + 0x3138a08;
    do {
      bVar4 = *__src;
      uVar6 = *(ushort *)(__src + 1);
      uVar17 = (uint)uVar6;
      __src = __src + 3;
      lVar11 = local_460;
      if (bVar4 == 1) {
joined_r0x0031aaa8:
        for (; local_460 = lVar11, uVar17 != 0; uVar17 = uVar17 - 1) {
          if (lVar11 == 0) goto LAB__text__0031acc8;
          plVar10 = (long *)(lVar11 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          local_800[0] = 0;
          pbVar15 = __src + 7;
          local_7f8 = 0;
          local_7f0 = *(undefined2 *)__src;
          local_7ee = *(undefined2 *)(__src + 2);
          local_7ec = *(undefined2 *)(__src + 4);
          local_7ea = __src[6];
          uVar16 = (ulong)local_7ea;
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
          if (uVar16 != 0) {
            memcpy(&uStack_7e9,pbVar15,uVar16);
            pbVar15 = pbVar15 + uVar16;
          }
          __src_00 = pbVar15 + 1;
          bStack_785 = *pbVar15;
          uVar16 = (ulong)bStack_785;
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
          if (uVar16 != 0) {
            memcpy(&uStack_784,__src_00,uVar16);
            __src_00 = __src_00 + uVar16;
          }
          __src = __src_00 + 0x1e;
          local_720 = *(undefined2 *)__src_00;
          local_718 = *(undefined8 *)(__src_00 + 2);
          local_710 = *(undefined8 *)(__src_00 + 10);
          local_708 = *(undefined8 *)(__src_00 + 0x12);
          local_700 = *(undefined2 *)(__src_00 + 0x1a);
          uVar6 = *(ushort *)(__src_00 + 0x1c);
          uVar16 = (ulong)uVar6;
          local_6fe = uVar6;
          memset(auStack_6fc,0,0x296);
          if (uVar6 < 0x297) {
            if (uVar6 != 0) {
              memcpy(auStack_6fc,__src,uVar16);
              __src = __src + uVar16;
            }
          }
          else {
            memset(local_450,0,1000);
            memcpy(local_450,__src,uVar16);
            local_6fe = 0x158;
            __src = __src + uVar16;
            memcpy(auStack_6fc,local_450,0x158);
          }
          FUN__text__00306824(lVar11);
          FUN__text__00306b04(lVar11,auStack_6fc);
          local_7f8 = FUN__text__00637404(*(undefined8 *)(lVar11 + 0x58));
          local_800[0] = 1;
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar10);
          iVar5 = *(int *)(param_2 + 0x3138a04);
          *(int *)(param_2 + 0x3138a04) = iVar5 + 1;
          memcpy((void *)(param_2 + 0x314a348 + (long)iVar5 * 0x3a0),local_800,0x3a0);
          lVar11 = local_460;
        }
      }
      else {
        if (bVar4 == 9) {
          if (*(int *)(param_2 + 0x3138a04) == 0) {
            FUN__text__00305130(uVar7,1);
            lVar11 = local_460;
          }
          goto joined_r0x0031aaa8;
        }
        if (bVar4 != 2) {
LAB__text__0031acc8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl();
        }
        if (uVar17 != 0) {
          if (3 < uVar17) {
            uVar12 = uVar17 & 0xfffc;
            do {
              iVar5 = *piVar2;
              uVar12 = uVar12 - 4;
              uVar14 = *(undefined8 *)__src;
              *piVar2 = iVar5 + 1;
              *(undefined8 *)(lVar9 + (long)iVar5 * 8) = uVar14;
              iVar5 = *piVar2;
              uVar14 = *(undefined8 *)(__src + 8);
              *piVar2 = iVar5 + 1;
              *(undefined8 *)(lVar9 + (long)iVar5 * 8) = uVar14;
              iVar5 = *piVar2;
              uVar14 = *(undefined8 *)(__src + 0x10);
              *piVar2 = iVar5 + 1;
              *(undefined8 *)(lVar9 + (long)iVar5 * 8) = uVar14;
              iVar5 = *piVar2;
              uVar14 = *(undefined8 *)(__src + 0x18);
              __src = __src + 0x20;
              *piVar2 = iVar5 + 1;
              *(undefined8 *)(lVar9 + (long)iVar5 * 8) = uVar14;
            } while (uVar12 != 0);
          }
          uVar17 = uVar17 & 3;
          pbVar15 = __src;
          if ((uVar6 & 3) != 0) {
            do {
              iVar5 = *piVar2;
              uVar17 = uVar17 - 1;
              __src = pbVar15 + 8;
              uVar14 = *(undefined8 *)pbVar15;
              *piVar2 = iVar5 + 1;
              *(undefined8 *)(lVar9 + (long)iVar5 * 8) = uVar14;
              pbVar15 = __src;
            } while (uVar17 != 0);
          }
        }
      }
    } while ((uVar13 < 2) && (uVar13 = uVar13 + 1, __src < pbVar3));
  }
  FUN__text__00305cb8(param_1,1);
  if (local_460 != 0) {
    (**(code **)(*(long *)(local_460 + 0x48) + 0x18))();
  }
  if (local_458 != 0) {
    (**(code **)(*(long *)(local_458 + 0x48) + 0x18))();
  }
  return;
}


