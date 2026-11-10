/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00250550; name: FUN_.text__00250550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00250550(long param_1)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  code *local_180;
  code *local_178;
  code *local_170;
  long lStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  code *local_100;
  code *local_f8;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_78;
  undefined4 local_6c [3];
  
  local_100 = (code *)0x94f0ab6b70e7ac3f;
  local_f8 = (code *)0x719f5d;
  lVar8 = param_1 + 0x110;
  local_f0 = (code *)0x1c;
  local_e8 = (undefined *)0x0;
  FUN__text__00115650(&local_180,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_100,0xb);
  lVar12 = *(long *)(local_180 + 0x60);
  if ((lVar12 == 0) || ((**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(), local_180 != (code *)0x0))
  {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = (code *)0x0;
  }
  if (local_e8 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_e8 + 0x48) + 0x18))();
  }
  local_100 = (code *)0x918e9ae3c487032f;
  lVar6 = FUN__text__0012cdb0(lVar8,&local_100);
  lVar14 = *(long *)(param_1 + 0x640);
  uVar2 = *(uint *)(param_1 + 0x67c);
  local_6c[0] = 0xd;
  if (lVar14 == 0) {
    local_100 = *(code **)(param_1 + 8);
    lVar9 = FUN__text__0013b080(&local_180,local_100,local_6c,&local_100);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x640) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x640) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x640) = lVar9;
    local_78 = lVar9;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    }
    FUN__text__003b1808(lVar6,&local_78);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
  }
  else if (*(long *)(lVar14 + 0xe8) != 0) {
    *(undefined8 *)(lVar14 + 0xe8) = 0;
  }
  if (uVar2 == 0) {
    lVar9 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72be80);
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    uVar15 = FUN__text__00306bcc(*(undefined8 *)(param_1 + 0x708));
    if ((uVar15 & 1) == 0) goto LAB__text__0025081c;
LAB__text__002507c8:
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_100 = (code *)0xd99d5203dd2011e;
    lVar9 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
joined_r0x002507f8:
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar12,&local_100,lVar9);
    uVar7 = FUN__text__005f3244(lVar9);
    FUN__text__0012c9f0(lVar8,0x72be88,uVar7,0xb);
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    uVar5 = _DAT_008a1c80;
    pcVar11 = _DAT_008a1c88;
    pcVar3 = _DAT_008a1c90;
    pcVar4 = _DAT_008a1c98;
    lVar9 = _DAT_008a1ca0;
    uVar7 = uStack_d8;
  }
  else {
    uVar15 = tpidr_el0;
    uVar13 = 0;
    uVar15 = uVar15 & 0xffffffffffffe000;
    do {
      while( true ) {
        lVar9 = *(long *)(param_1 + 0x640);
        local_180._0_5_ = (uint5)uVar13;
        plVar1 = (long *)(*(long *)(lVar9 + 0xe0) + *(long *)(lVar9 + 0xe8) * 8);
        if (*(long *)(lVar9 + 0xe8) == *(long *)(lVar9 + 0xf0)) break;
        if (*(long *)(uVar15 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar15 + *(long *)(uVar15 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar9 + 0xa0);
        *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + 1;
        *plVar1 = (long)local_180;
        *(long *)(uVar15 + 0x98) = *(long *)(uVar15 + 0x98) + -1;
        *(long *)(lVar9 + 0xe8) = *(long *)(lVar9 + 0xe8) + 1;
        uVar13 = uVar13 + 1;
        if (uVar2 == uVar13) goto LAB__text__00250774;
      }
      FUN__text__00180c38(&local_100,lVar9 + 0xa0,plVar1,1,&local_180);
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
LAB__text__00250774:
    lVar9 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x72be80);
    if (uVar2 == 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      uVar15 = FUN__text__00306bcc(*(undefined8 *)(param_1 + 0x708));
      if ((uVar15 & 1) != 0) goto LAB__text__002507c8;
LAB__text__0025081c:
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      local_100 = (code *)0xd99d6203dd202d1;
      lVar9 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
      goto joined_r0x002507f8;
    }
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    uVar5 = _DAT_008a1c80;
    pcVar11 = _DAT_008a1c88;
    pcVar3 = _DAT_008a1c90;
    pcVar4 = _DAT_008a1c98;
    lVar9 = _DAT_008a1ca0;
    uVar7 = uStack_d8;
  }
  uStack_d8 = uVar5;
  _DAT_008a1c80 = uStack_d8;
  _DAT_008a1c88 = pcVar11;
  _DAT_008a1c90 = pcVar3;
  _DAT_008a1c98 = pcVar4;
  _DAT_008a1ca0 = lVar9;
  if (lVar14 == 0) {
    local_d0 = 0;
    pcVar10 = *(code **)(lVar6 + 200);
    local_100 = pcVar11;
    local_f8 = pcVar3;
    local_f0 = pcVar4;
    local_e8 = (undefined *)lVar9;
    local_e0 = param_1;
    if (pcVar10 == (code *)0x0) {
LAB__text__00250924:
      (*local_f0)(&local_e0,lVar6 + 0xe0);
      *(long *)(lVar6 + 0xc0) = (long)local_100;
      *(code **)(lVar6 + 200) = local_f8;
      *(code **)(lVar6 + 0xd0) = local_f0;
      *(undefined **)(lVar6 + 0xd8) = local_e8;
    }
    else {
      *(undefined8 *)(lVar6 + 0xd0) = 0;
      *(undefined8 *)(lVar6 + 0xd8) = 0;
      *(long *)(lVar6 + 0xc0) = 0;
      *(undefined8 *)(lVar6 + 200) = 0;
      (*pcVar10)(lVar6 + 0xe0);
      if (local_f0 != (code *)0x0) goto LAB__text__00250924;
    }
    local_150 = 0;
    pcVar10 = *(code **)(lVar6 + 0x1c8);
    uStack_158 = _DAT_008a1ca8;
    local_180 = pcVar11;
    local_178 = pcVar3;
    local_170 = pcVar4;
    lStack_168 = lVar9;
    local_160 = param_1;
    if (pcVar10 == (code *)0x0) {
LAB__text__00250984:
      (*local_170)(&local_160,lVar6 + 0x1e0);
      *(long *)(lVar6 + 0x1c0) = (long)local_180;
      *(code **)(lVar6 + 0x1c8) = local_178;
      *(code **)(lVar6 + 0x1d0) = local_170;
      *(long *)(lVar6 + 0x1d8) = lStack_168;
    }
    else {
      *(undefined8 *)(lVar6 + 0x1d0) = 0;
      *(undefined8 *)(lVar6 + 0x1d8) = 0;
      *(long *)(lVar6 + 0x1c0) = 0;
      *(undefined8 *)(lVar6 + 0x1c8) = 0;
      (*pcVar10)(lVar6 + 0x1e0);
      if (local_170 != (code *)0x0) goto LAB__text__00250984;
    }
    pcVar11 = local_178;
    *(undefined2 *)(lVar6 + 0x852) = 0;
    if (local_178 != (code *)0x0) {
      local_170 = (code *)0x0;
      lStack_168 = 0;
      local_180 = (code *)0x0;
      local_178 = (code *)0x0;
      (*pcVar11)(&local_160);
    }
    pcVar11 = local_f8;
    uVar7 = uStack_d8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (code *)0x0;
      local_e8 = (undefined *)0x0;
      local_100 = (code *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar11)(&local_e0);
      uVar7 = uStack_d8;
    }
  }
  uStack_d8 = uVar7;
  FUN__text__003b17ec(lVar6,0,0);
  FUN__text__003b17f8(lVar6,0);
  FUN__text__003ad2d0(lVar6,0);
  local_100 = (code *)0x431e769ffc1ad350;
  lVar8 = FUN__text__0012ce7c(lVar8,&local_100);
  *(undefined1 *)(lVar8 + 0x170) = 0;
  pcVar11 = *(code **)(lVar6 + 0x248);
  local_100 = (code *)&LAB__text__002518cc;
  local_f8 = FUN__text__002518e0;
  local_f0 = FUN__text__002518e4;
  local_e8 = &LAB__text__002518f0;
  local_e0 = param_1;
  if (pcVar11 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar11)(lVar6 + 0x260);
    if (local_f0 == (code *)0x0) goto LAB__text__00250a98;
  }
  (*local_f0)(&local_e0,lVar6 + 0x260);
  *(undefined8 *)(lVar6 + 0x240) = local_100;
  *(code **)(lVar6 + 0x248) = local_f8;
  *(code **)(lVar6 + 0x250) = local_f0;
  *(undefined **)(lVar6 + 600) = local_e8;
LAB__text__00250a98:
  pcVar11 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(&local_e0);
  }
  local_100 = FUN__text__002518fc;
  local_f8 = FUN__text__00251964;
  local_f0 = (code *)&DAT__text__00251968;
  local_e8 = &DAT__text__0025196c;
  FUN__text__00251970(lVar6,&local_100,0);
  pcVar11 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(&local_e0);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


