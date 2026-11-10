/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002579c0; name: FUN_.text__002579c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002579c0(long param_1,uint param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8 [5];
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar13 = (ulong)*(uint *)(param_1 + 0x6ec);
  if (param_3 != 0xffffffffffffffff) {
    uVar13 = param_3;
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    plVar17 = (long *)(*(long *)(param_1 + 0x2d0) + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  lVar15 = *(long *)(param_1 + 0x678);
  lVar22 = *(long *)(lVar15 + 0x2d0);
  if (lVar22 != 0) {
    plVar17 = (long *)(lVar22 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  local_d8[0] = -0x6b0f54948f1853c1;
  local_d8[1] = 0x719f5d;
  local_d8[2] = 0x1c;
  local_d8[3] = 0;
  FUN__text__00115650(&local_138,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),local_d8,0xb);
  lVar22 = *(long *)(local_138 + 0x60);
  if ((lVar22 == 0) || ((**(code **)(*(long *)(lVar22 + 0x48) + 0x10))(), local_138 != 0)) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  if (local_d8[3] != 0) {
    (**(code **)(*(long *)(local_d8[3] + 0x48) + 0x18))();
  }
  lVar19 = *(long *)(param_1 + 0x2d0);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(lVar19 + 0x2e0);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  lVar19 = *(long *)(param_1 + 0x640);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_d8[0] = *(long *)(param_1 + 0xfe0);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar19,local_d8,param_1 + 0x1004,uVar13 & 0xffffffff);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
  }
  iVar2 = *(int *)(param_1 + 0x1004);
  lVar19 = param_1 + 0x110;
  lVar23 = *(long *)(param_1 + 0xfe0);
  lVar15 = lVar15 + 0x110;
  iVar3 = 3;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x1000) = iVar3;
  *(bool *)(param_1 + 0x1008) = iVar2 == 0;
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
  }
  uVar10 = FUN__text__00306a08(lVar23,2);
  bVar8 = FUN__text__0025d6b8(param_1,uVar13 & 0xffffffff);
  bVar6 = param_2 != 0;
  local_d8[0] = 0x37755165a0935b69;
  if (bVar6) {
    local_d8[0] = -0x363cd24dd64f553e;
  }
  local_d8[2] = 0x9cf96c6e561e71dd;
  if (bVar6) {
    local_d8[2] = 0xe2bd7786bb313b5a;
  }
  local_d8[4] = 0xe38a50faaa83c375;
  if (bVar6) {
    local_d8[4] = 0x2047a7ff241109c0;
  }
  local_a8 = 0xe3ad7bde6f9a2c68;
  if (bVar6) {
    local_a8 = 0xb10270aa83cd1599;
  }
  local_98 = 0x6f59ccf29217ed12;
  if (bVar6) {
    local_98 = 0xbdb68f8c9b299eaf;
  }
  local_88 = 0x980d3bdb5e5c0494;
  if (bVar6) {
    local_88 = 0x8b1bd64623bb1137;
  }
  local_f8 = _DAT_0072c1a0;
  uStack_f0 = _DAT_0072c1a8;
  local_e8 = _DAT_0072c1b0;
  uStack_e0 = _DAT_0072c1b8;
  local_118 = _DAT_0072c180;
  uStack_110 = _DAT_0072c188;
  local_108 = _DAT_0072c190;
  uStack_100 = _DAT_0072c198;
  local_138 = _DAT_0072c160;
  uStack_130 = _DAT_0072c168;
  local_128 = _DAT_0072c170;
  uStack_120 = _DAT_0072c178;
  local_d8[1] = local_d8[0];
  local_d8[3] = local_d8[2];
  uStack_b0 = local_d8[4];
  uStack_a0 = local_a8;
  uStack_90 = local_98;
  uStack_80 = local_88;
  if (*(uint *)(param_1 + 0x6e8) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00257d24 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00257d3c +
              (ulong)*(ushort *)(&DAT_0072bf88 + (ulong)*(uint *)(param_1 + 0x6e8) * 2) * 4))();
    return;
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,0);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6b7) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30));
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,1);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6b8) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30 + 8));
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,2);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6b9) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30 + 0x10));
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,3);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6bc) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30 + 0x18));
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,4);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6bb) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30 + 0x20));
  }
  iVar3 = *(int *)(param_1 + 0x1000);
  iVar2 = *(int *)(param_1 + 0x6e8);
  uVar11 = FUN__text__00306848(lVar23,5);
  bVar5 = 0xfffffffd < iVar3 - 3U;
  bVar7 = iVar2 != 1;
  bVar6 = !bVar5;
  bVar4 = !bVar7;
  *(bool *)(param_1 + 0x6ba) =
       ((bVar6 && bVar4) && 0xfa < uVar11) && ((bVar5 || bVar7) || uVar11 != 0xfb);
  if ((bVar6 && bVar4) && 0xfb < uVar11) {
    FUN__text__0012c300(lVar19,*(undefined8 *)(_DAT_008a1cc8 + (long)(int)param_2 * 0x30 + 0x28));
  }
  local_138 = *(long *)((long)(int)param_2 * 8 + 0x7249f0);
  if (*(uint *)(param_1 + 0x6e8) < 4) {
    FUN__text__0012c97c(*(undefined4 *)((long)(int)*(uint *)(param_1 + 0x6e8) * 4 + 0x724bc0),lVar19
                        ,&local_138);
  }
  uVar1 = 0x72ccd8;
  if (param_2 != 0) {
    uVar1 = 0x72cce0;
  }
  lVar12 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar1);
  lVar20 = _DAT_008a1cd0;
  if (*(int *)(param_1 + 0x6e8) == 2) {
    if ((uVar10 & 1) == 0) {
      local_d8[0] = _DAT_00725130;
      local_d8[1] = _DAT_00725138;
      local_d8[2] = _DAT_00725140;
      local_d8[3] = _DAT_00725148;
      FUN__text__00306bc4(lVar23);
      uVar13 = FUN__text__00205f40();
      uVar1 = 0x72cce8;
      if (param_2 != 0) {
        uVar1 = 0x72ccf0;
      }
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      if (lVar20 != 0) {
        (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
      }
      FUN__text__005f2d98(lVar22,local_d8 + (uVar13 & 0xffffffff),lVar20);
      uVar14 = FUN__text__005f3244(lVar20);
      FUN__text__0012c9f0(lVar19,uVar1,uVar14,0xb);
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
      if (lVar22 != 0) {
        (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))();
      }
      lVar20 = _DAT_008a1cd0;
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
      lVar19 = 0x8aa780;
      if (*(int *)(param_1 + 0x6e8) != 2) {
        lVar19 = lVar20;
      }
      goto LAB__text__002590d4;
    }
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    lVar19 = 0x8aa780;
    if (*(int *)(param_1 + 0x6e8) != 2) {
      lVar19 = lVar20;
    }
  }
  else {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    lVar19 = 0x8aa780;
    if (*(int *)(param_1 + 0x6e8) != 2) {
      lVar19 = lVar20;
    }
    if ((uVar10 & 1) == 0) {
LAB__text__002590d4:
      uVar13 = FUN__text__00306898(lVar23);
      uVar18 = uVar13 & 0xffffffff;
      cVar9 = thunk_FUN__text__00638b78(uVar13,0);
      lVar19 = lVar19 + (ulong)(param_2 & 0xff) * 0x90;
      FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8));
      cVar9 = thunk_FUN__text__00638b78(uVar18,1);
      FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8 + 0x18));
      cVar9 = thunk_FUN__text__00638b78(uVar18,2);
      FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8 + 0x30));
      cVar9 = thunk_FUN__text__00638b78(uVar18,3);
      FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8 + 0x48));
      cVar9 = thunk_FUN__text__00638b78(uVar18,4);
      FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8 + 0x60));
      cVar9 = thunk_FUN__text__00638b78(uVar18,5);
      puVar16 = (undefined8 *)(lVar19 + (long)(char)(cVar9 + '\x01') * 8 + 0x78);
      goto LAB__text__002591a4;
    }
  }
  lVar19 = lVar19 + (ulong)(param_2 & 0xff) * 0x90;
  FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + 8));
  FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + 0x20));
  FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + 0x38));
  FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + 0x50));
  FUN__text__0012c300(lVar15,*(undefined8 *)(lVar19 + 0x68));
  puVar16 = (undefined8 *)(lVar19 + 0x80);
LAB__text__002591a4:
  FUN__text__0012c300(lVar15,*puVar16);
  lVar15 = FUN__text__00325bc0();
  *(byte *)(param_1 + 0x6d5) = *(int *)(lVar15 + 0x2c) != 0 & (bVar8 ^ 1);
  FUN__text__0025b6d0(param_1);
  (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  }
  return;
}


