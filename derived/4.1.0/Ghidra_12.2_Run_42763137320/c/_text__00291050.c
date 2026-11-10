/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00291050; name: FUN_.text__00291050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00291050(long param_1)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  ushort *puVar9;
  code *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long local_280;
  code *local_278;
  code *local_270;
  long local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  long local_1f0;
  code *local_1e8;
  code *local_1e0;
  long lStack_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long local_170;
  code *local_168;
  code *local_160;
  long lStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  uint5 local_f0;
  undefined3 uStack_eb;
  code *local_e8;
  code *local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_70 [2];
  
  lVar13 = *(long *)(param_1 + 0x2d0);
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar2 = param_1 + 0x110;
  local_280 = -0x589b61f52e7f4fe6;
  local_278 = (code *)0x71a942;
  local_270 = (code *)0x1b;
  local_268 = 0;
  FUN__text__00115650(&local_f0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_280,0xb);
  lVar12 = *(long *)(_local_f0 + 0x60);
  if ((lVar12 == 0) || ((**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(), _local_f0 != 0)) {
    (**(code **)(*(long *)(_local_f0 + 0x48) + 0x18))();
    _local_f0 = 0;
  }
  if (local_268 != 0) {
    (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
  }
  local_280 = 0xc35056d0249a792;
  lVar6 = FUN__text__0012cdb0(lVar2,&local_280);
  lVar16 = *(long *)(param_1 + 0x640);
  lVar18 = *(long *)(param_1 + 0x880);
  lVar14 = 1;
  uVar4 = FUN__text__0027ac90(lVar16,*(undefined4 *)(lVar16 + 0x68),1);
  piVar8 = (int *)(lVar16 + 0x698f0);
  do {
    if (piVar8[-6] == 0) {
      uVar5 = (int)lVar14 - 1;
      goto joined_r0x002911c0;
    }
    if (*piVar8 == 0) goto LAB__text__002911a4;
    lVar14 = lVar14 + 2;
    piVar8 = piVar8 + 0xc;
  } while (lVar14 != 0xbb9);
  lVar14 = 3000;
LAB__text__002911a4:
  uVar5 = (uint)lVar14;
joined_r0x002911c0:
  if (lVar18 == 0) {
    local_280 = *(long *)(param_1 + 8);
    lVar14 = FUN__text__0018037c(&local_f0,local_280,0x730fd8,&local_280);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x880) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x880) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x880) = lVar14;
    local_70[0] = lVar14;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))((long *)(lVar14 + 0x48));
    }
    FUN__text__003b1808(lVar6,local_70);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
  }
  else if (*(long *)(*(long *)(param_1 + 0x880) + 0xe8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x880) + 0xe8) = 0;
  }
  if (uVar5 != 0) {
    uVar17 = tpidr_el0;
    uVar15 = 0;
    uVar17 = uVar17 & 0xffffffffffffe000;
    do {
      while( true ) {
        lVar14 = *(long *)(param_1 + 0x880);
        local_f0 = (uint5)uVar15;
        plVar11 = (long *)(*(long *)(lVar14 + 0xe0) + *(long *)(lVar14 + 0xe8) * 8);
        if (*(long *)(lVar14 + 0xe8) == *(long *)(lVar14 + 0xf0)) break;
        if (*(long *)(uVar17 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar17 + *(long *)(uVar17 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar14 + 0xa0);
        *(long *)(uVar17 + 0x98) = *(long *)(uVar17 + 0x98) + 1;
        *plVar11 = _local_f0;
        *(long *)(uVar17 + 0x98) = *(long *)(uVar17 + 0x98) + -1;
        *(long *)(lVar14 + 0xe8) = *(long *)(lVar14 + 0xe8) + 1;
        uVar15 = uVar15 + 1;
        if (uVar5 == uVar15) goto LAB__text__002912f4;
      }
      FUN__text__00180c38(&local_280,lVar14 + 0xa0,plVar11,1,&local_f0);
      uVar15 = uVar15 + 1;
    } while (uVar5 != uVar15);
  }
LAB__text__002912f4:
  lVar14 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731718);
  *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | uVar5 == 0;
  lVar14 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731720);
  *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | uVar5 != 0;
  lVar14 = *(long *)(lVar13 + 0x2e8);
  local_280 = 0x53108e8dfb39838f;
  if (lVar14 == 0) {
    FUN__text__005f2d98(lVar12,&local_280,0);
    lVar14 = *(long *)(lVar13 + 0x2e0);
  }
  else {
    plVar11 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN__text__005f2d98(lVar12,&local_280,lVar14);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    lVar14 = *(long *)(lVar13 + 0x2e0);
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar14,0,uVar4,4,1,1);
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  FUN__text__003c8c20(lVar13,0x731728,0xb);
  uVar17 = FUN__text__0027af44(*(undefined8 *)(param_1 + 0x640));
  if ((uVar17 & 1) == 0) {
    if ((*(int *)(*(long *)(param_1 + 0x640) + 0x134) - 2U < 4) ||
       (*(int *)(*(long *)(param_1 + 0x640) + 0x148) == 0)) {
      lVar14 = *(long *)(lVar13 + 0x2e8);
      local_280 = 0x7d86e205ad74a55;
      if (lVar14 == 0) {
        FUN__text__005f2d98(lVar12,&local_280,0);
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      else {
        plVar11 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN__text__005f2d98(lVar12,&local_280,lVar14);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      uVar7 = 1;
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x2e8);
      local_280 = 0x7d4e8205ad430cc;
      if (lVar14 == 0) {
        FUN__text__005f2d98(lVar12,&local_280,0);
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      else {
        plVar11 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN__text__005f2d98(lVar12,&local_280,lVar14);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar14,1,uVar5,4,0,1);
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      lVar14 = *(long *)(param_1 + 0x640);
      uVar5 = *(uint *)(lVar14 + (ulong)*(uint *)(lVar14 + 0x68) * 4 + 0xd0);
      uVar17 = (ulong)uVar5;
      if (uVar5 == 0) {
        uVar5 = 0;
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      else {
        uVar5 = 0;
        puVar9 = (ushort *)(*(long *)(lVar14 + (ulong)*(uint *)(lVar14 + 0x68) * 8 + 0x70) + 2);
        do {
          uVar3 = *puVar9;
          uVar17 = uVar17 - 1;
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + 2;
          uVar5 = ((uVar5 + uVar3) - (uint)*puVar1) + 1;
        } while (uVar17 != 0);
        lVar14 = *(long *)(lVar13 + 0x2e0);
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      uVar7 = 2;
    }
    FUN__text__00166508(lVar14,uVar7,uVar5,4,0,1);
    plVar11 = (long *)(lVar14 + 0x48);
    lVar14 = *plVar11;
LAB__text__002915fc:
    (**(code **)(lVar14 + 0x18))(plVar11);
    uVar5 = *(uint *)(*(long *)(param_1 + 0x640) + 0x134);
  }
  else {
    lVar14 = *(long *)(lVar13 + 0x2e8);
    local_280 = 0x7df7a205add7d67;
    if (lVar14 != 0) {
      plVar11 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      FUN__text__005f2d98(lVar12,&local_280,lVar14);
      lVar14 = *plVar11;
      goto LAB__text__002915fc;
    }
    FUN__text__005f2d98(lVar12,&local_280,0);
    uVar5 = *(uint *)(*(long *)(param_1 + 0x640) + 0x134);
  }
  if (uVar5 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0029162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00291630 + (ulong)*(byte *)((ulong)uVar5 + 0x730f80) * 4))();
    return;
  }
  FUN__text__003c8c20(lVar13,0x731730,0xb);
  if (lVar18 != 0) goto LAB__text__00291984;
  local_250 = 0;
  local_258 = _DAT_008a20f8;
  local_280 = _DAT_008a2100;
  local_278 = _DAT_008a2108;
  local_270 = _DAT_008a2128;
  local_268 = _DAT_008a2110;
  local_c0 = 0;
  _local_f0 = _DAT_008a2100;
  local_e8 = _DAT_008a2108;
  local_e0 = _DAT_008a2128;
  lStack_d8 = _DAT_008a2110;
  uStack_c8 = _DAT_008a2118;
  pcVar10 = *(code **)(lVar6 + 200);
  local_140 = 0;
  local_1c0 = 0;
  local_170 = _DAT_008a2100;
  local_168 = _DAT_008a2108;
  local_160 = _DAT_008a2128;
  lStack_158 = _DAT_008a2110;
  local_1f0 = _DAT_008a2100;
  local_1e8 = _DAT_008a2108;
  local_1e0 = _DAT_008a2128;
  lStack_1d8 = _DAT_008a2110;
  uStack_148 = _DAT_008a2120;
  uStack_1c8 = _DAT_008a2120;
  local_260 = param_1;
  local_1d0 = param_1;
  local_150 = param_1;
  local_d0 = param_1;
  if (pcVar10 == (code *)0x0) {
LAB__text__00291830:
    (*local_270)(&local_260,lVar6 + 0xe0);
    *(long *)(lVar6 + 0xc0) = local_280;
    *(code **)(lVar6 + 200) = local_278;
    *(code **)(lVar6 + 0xd0) = local_270;
    *(long *)(lVar6 + 0xd8) = local_268;
  }
  else {
    *(undefined8 *)(lVar6 + 0xd0) = 0;
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(long *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    (*pcVar10)(lVar6 + 0xe0);
    if (local_270 != (code *)0x0) goto LAB__text__00291830;
  }
  pcVar10 = *(code **)(lVar6 + 0x248);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(long *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar10)(lVar6 + 0x260);
  }
  if (local_e0 != (code *)0x0) {
    (*local_e0)(&local_d0,lVar6 + 0x260);
    *(long *)(lVar6 + 0x240) = _local_f0;
    *(code **)(lVar6 + 0x248) = local_e8;
    *(code **)(lVar6 + 0x250) = local_e0;
    *(long *)(lVar6 + 600) = lStack_d8;
  }
  pcVar10 = *(code **)(lVar6 + 0x1c8);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x1d0) = 0;
    *(undefined8 *)(lVar6 + 0x1d8) = 0;
    *(long *)(lVar6 + 0x1c0) = 0;
    *(undefined8 *)(lVar6 + 0x1c8) = 0;
    (*pcVar10)(lVar6 + 0x1e0);
  }
  if (local_160 != (code *)0x0) {
    (*local_160)(&local_150,lVar6 + 0x1e0);
    *(long *)(lVar6 + 0x1c0) = local_170;
    *(code **)(lVar6 + 0x1c8) = local_168;
    *(code **)(lVar6 + 0x1d0) = local_160;
    *(long *)(lVar6 + 0x1d8) = lStack_158;
  }
  pcVar10 = *(code **)(lVar6 + 0x448);
  *(undefined2 *)(lVar6 + 0x852) = 0;
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x450) = 0;
    *(undefined8 *)(lVar6 + 0x458) = 0;
    *(long *)(lVar6 + 0x440) = 0;
    *(undefined8 *)(lVar6 + 0x448) = 0;
    (*pcVar10)(lVar6 + 0x460);
  }
  if (local_1e0 != (code *)0x0) {
    (*local_1e0)(&local_1d0,lVar6 + 0x460);
    *(long *)(lVar6 + 0x440) = local_1f0;
    *(code **)(lVar6 + 0x448) = local_1e8;
    *(code **)(lVar6 + 0x450) = local_1e0;
    *(long *)(lVar6 + 0x458) = lStack_1d8;
  }
  pcVar10 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    lStack_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar10)(&local_1d0);
  }
  pcVar10 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    lStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar10)(&local_150);
  }
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    lStack_d8 = 0;
    _local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar10)(&local_d0);
  }
  pcVar10 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (code *)0x0;
    local_268 = 0;
    local_280 = 0;
    local_278 = (code *)0x0;
    (*pcVar10)(&local_260);
  }
LAB__text__00291984:
  uVar4 = *(undefined4 *)(param_1 + 0x878);
  FUN__text__003b17ec(lVar6,0,0);
  FUN__text__003b17f8(lVar6,0);
  memcpy(&local_280,(void *)(lVar6 + 0x6c0),0x88);
  local_268 = 0xc25c0000c3994000;
  local_260 = 0x44428000448e6000;
  local_258 = CONCAT71(local_258._1_7_,1);
  local_200 = 1;
  local_210 = 0xc25c000043730000;
  uStack_208 = 0x443b000042200000;
  FUN__text__003ad1c8(lVar6,&local_280);
  FUN__text__003ad2d0(lVar6,0);
  FUN__text__003ae340(lVar6,uVar4,1);
  lVar13 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x731738);
  *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 1;
  uVar17 = FUN__text__0027af44(*(undefined8 *)(param_1 + 0x640));
  uVar5 = 1;
  if ((uVar17 & 1) != 0) {
    uVar5 = FUN__text__0027b038(*(undefined8 *)(param_1 + 0x640));
    uVar5 = uVar5 ^ 1;
  }
  uVar7 = FUN__text__0012cb14(lVar2,0x731058);
  FUN__text__003a14c4(uVar7,uVar5 & 1);
  uVar5 = FUN__text__0027af44(*(undefined8 *)(param_1 + 0x640));
  uVar7 = FUN__text__0012cb14(lVar2,0x731038);
  FUN__text__003a14e8(uVar7,uVar5 & 1);
  uVar7 = FUN__text__0012cb14(lVar2,0x731040);
  FUN__text__003a14e8(uVar7,(uVar5 ^ 0xffffffff) & 1);
  uVar5 = FUN__text__0027b038(*(undefined8 *)(param_1 + 0x640));
  uVar7 = FUN__text__0012cb14(lVar2,0x731048);
  FUN__text__003a14e8(uVar7,uVar5 & 1);
  uVar7 = FUN__text__0012cb14(lVar2,0x731050);
  FUN__text__003a14e8(uVar7,(uVar5 ^ 0xffffffff) & 1);
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


