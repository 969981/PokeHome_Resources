/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002438c0; name: FUN_.text__002438c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002438c0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  ulong uVar16;
  code *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  long lStack_160;
  undefined1 local_158;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  uint local_6c;
  long local_68;
  ulong local_48;
  
  local_180 = (code *)0xae55050415d68330;
  lVar11 = FUN__text__0012cdb0(param_1 + 0x110,&local_180);
  local_6c = 0;
  *(undefined4 *)(param_1 + 0x718) = 0;
  iVar10 = FUN__text__003239e0(param_1 + 0x6d8);
  if (iVar10 == 0) {
    uVar13 = *(uint *)(param_1 + 0x6e8);
  }
  else {
    iVar15 = 0;
    do {
      lVar12 = FUN__text__00323c30(iVar15,param_1 + 0x6d8);
      uVar13 = *(uint *)(param_1 + 0x6e8);
      if (uVar13 < 2) {
        if (*(int *)(lVar12 + 0x2c) - 0xdU < 0xfffffffe) {
LAB__text__00243934:
          uVar4 = *(uint *)(param_1 + 0x718);
          *(uint *)(param_1 + 0x718) = uVar4 + 1;
          *(int *)(param_1 + (ulong)uVar4 * 4 + 0x71c) = iVar15;
        }
      }
      else if ((uVar13 == 2) && (*(int *)(lVar12 + 0x2c) - 0xbU < 2)) goto LAB__text__00243934;
      iVar15 = iVar15 + 1;
    } while (iVar10 != iVar15);
  }
  uVar4 = *(uint *)(param_1 + 0x718);
  local_180 = *(code **)(param_1 + 8);
  local_6c = uVar4;
  if (uVar13 == 0) {
    local_6c = uVar4 + 1;
  }
  *(uint *)(param_1 + 0x6ec) = uVar4;
  lVar12 = FUN__text__00246350(&local_f0,local_180,&local_6c,&local_180);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x640) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x640) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x640) = lVar12;
  if (0 < (int)uVar4) {
    uVar16 = tpidr_el0;
    uVar13 = 0;
    uVar16 = uVar16 & 0xffffffffffffe000;
    do {
      while( true ) {
        lVar12 = *(long *)(param_1 + 0x640);
        local_f0._0_5_ = (uint5)uVar13;
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0xe0) + *(long *)(lVar12 + 0xe8) * 8);
        if (*(long *)(lVar12 + 0xe8) == *(long *)(lVar12 + 0xf0)) break;
        if (*(long *)(uVar16 + 0x98) == 0x10) goto LAB__text__00243e44;
        *(undefined8 *)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar12 + 0xa0);
        *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
        *puVar1 = local_f0;
        *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
        *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
        uVar13 = uVar13 + 1;
        if (uVar4 == uVar13) goto LAB__text__00243aa4;
      }
      FUN__text__00180c38(&local_180,lVar12 + 0xa0,puVar1,1,&local_f0);
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar13);
LAB__text__00243aa4:
    lVar12 = *(long *)(param_1 + 0x640);
  }
  local_48 = *(ulong *)(lVar12 + 0xe0);
  lVar3 = *(long *)(lVar12 + 0xe8);
  local_f0 = FUN__text__002464bc;
  local_e8 = FUN__text__00246784;
  local_180 = FUN__text__002464bc;
  local_178 = FUN__text__00246784;
  local_68 = local_48 + lVar3 * 8;
  lVar12 = 0;
  if (lVar3 != 0) {
    lVar12 = LZCOUNT(lVar3) * -2 + 0x7e;
  }
  local_e0 = &LAB__text__00246788;
  local_d8 = &LAB__text__00246794;
  local_168 = &LAB__text__00246794;
  local_170 = &LAB__text__00246788;
  lStack_160 = param_1;
  alStack_d0[0] = param_1;
  FUN__text__002467a0(&local_48,&local_68,&local_180,lVar12,1);
  pcVar14 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined1 *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (code *)0x0;
    local_178 = (code *)0x0;
    (*pcVar14)(&lStack_160);
  }
  if (*(int *)(param_1 + 0x6e8) == 0) {
    lVar12 = *(long *)(param_1 + 0x640);
    local_48 = CONCAT44((int)(local_48 >> 0x20),*(undefined4 *)(param_1 + 0x6ec)) &
               0xffffff00ffffffff;
    puVar2 = (ulong *)(*(long *)(lVar12 + 0xe0) + *(long *)(lVar12 + 0xe8) * 8);
    if (*(long *)(lVar12 + 0xe8) == *(long *)(lVar12 + 0xf0)) {
      FUN__text__00180c38(&local_180,lVar12 + 0xa0,puVar2,1,&local_48);
      local_f8 = *(long *)(param_1 + 0x640);
      goto joined_r0x00243bb4;
    }
    uVar16 = tpidr_el0;
    uVar16 = uVar16 & 0xffffffffffffe000;
    if (*(long *)(uVar16 + 0x98) == 0x10) {
LAB__text__00243e44:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar16 + *(long *)(uVar16 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar12 + 0xa0);
    *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + 1;
    *puVar2 = local_48;
    *(long *)(uVar16 + 0x98) = *(long *)(uVar16 + 0x98) + -1;
    *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
  }
  local_f8 = *(long *)(param_1 + 0x640);
joined_r0x00243bb4:
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))();
  }
  FUN__text__003b1808(lVar11,&local_f8);
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  pcVar14 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar14)(alStack_d0);
  }
  pcVar14 = *(code **)(lVar11 + 200);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0xd0) = 0;
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xc0) = 0;
    *(undefined8 *)(lVar11 + 200) = 0;
    (*pcVar14)(lVar11 + 0xe0);
  }
  uVar7 = _DAT_008a1b50;
  uVar6 = _DAT_008a1b48;
  uVar5 = _DAT_008a1b40;
  *(undefined8 *)(lVar11 + 0xf0) = 0;
  uVar9 = _DAT_008a1b60;
  uVar8 = _DAT_008a1b58;
  *(long *)(lVar11 + 0xe0) = param_1;
  *(undefined8 *)(lVar11 + 0xe8) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x248);
  *(undefined8 *)(lVar11 + 0xc0) = uVar6;
  *(undefined8 *)(lVar11 + 200) = uVar7;
  *(undefined8 *)(lVar11 + 0xd0) = uVar8;
  *(undefined8 *)(lVar11 + 0xd8) = uVar9;
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x250) = 0;
    *(undefined8 *)(lVar11 + 600) = 0;
    *(undefined8 *)(lVar11 + 0x240) = 0;
    *(undefined8 *)(lVar11 + 0x248) = 0;
    (*pcVar14)(lVar11 + 0x260);
  }
  *(long *)(lVar11 + 0x260) = param_1;
  uVar5 = _DAT_008a1b68;
  *(undefined8 *)(lVar11 + 0x270) = 0;
  *(undefined8 *)(lVar11 + 0x240) = uVar6;
  *(undefined8 *)(lVar11 + 0x248) = uVar7;
  *(undefined8 *)(lVar11 + 0x250) = uVar8;
  *(undefined8 *)(lVar11 + 600) = uVar9;
  *(undefined8 *)(lVar11 + 0x268) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x1c8);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x1d0) = 0;
    *(undefined8 *)(lVar11 + 0x1d8) = 0;
    *(undefined8 *)(lVar11 + 0x1c0) = 0;
    *(undefined8 *)(lVar11 + 0x1c8) = 0;
    (*pcVar14)(lVar11 + 0x1e0);
  }
  *(undefined8 *)(lVar11 + 0x1f0) = 0;
  uVar5 = _DAT_008a1b70;
  *(undefined8 *)(lVar11 + 0x1c0) = uVar6;
  *(undefined8 *)(lVar11 + 0x1c8) = uVar7;
  *(undefined2 *)(lVar11 + 0x852) = 0x100;
  *(undefined8 *)(lVar11 + 0x1d0) = uVar8;
  *(undefined8 *)(lVar11 + 0x1d8) = uVar9;
  *(long *)(lVar11 + 0x1e0) = param_1;
  *(undefined8 *)(lVar11 + 0x1e8) = uVar5;
  pcVar14 = *(code **)(lVar11 + 0x5c8);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(lVar11 + 0x5d0) = 0;
    *(undefined8 *)(lVar11 + 0x5d8) = 0;
    *(undefined8 *)(lVar11 + 0x5c0) = 0;
    *(undefined8 *)(lVar11 + 0x5c8) = 0;
    (*pcVar14)(lVar11 + 0x5e0);
  }
  uVar5 = _DAT_008a1b78;
  *(long *)(lVar11 + 0x5e0) = param_1;
  uVar6 = _DAT_008a1b80;
  *(undefined8 *)(lVar11 + 0x5f0) = 0;
  uVar8 = _DAT_008a1b90;
  uVar7 = _DAT_008a1b88;
  *(undefined8 *)(lVar11 + 0x5e8) = uVar5;
  *(undefined8 *)(lVar11 + 0x5c0) = uVar6;
  *(undefined8 *)(lVar11 + 0x5c8) = uVar7;
  *(undefined8 *)(lVar11 + 0x5d0) = uVar8;
  *(undefined8 *)(lVar11 + 0x5d8) = _DAT_008a1b98;
  FUN__text__003b17ec(lVar11,param_2,0);
  FUN__text__003b17f8(lVar11,param_3);
  if (*(int *)(param_1 + 0x708) == 0) {
    local_180 = (code *)0x1aaf9f0537083c3b;
    lVar12 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_180);
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
  }
  memcpy(&local_180,(void *)(lVar11 + 0x6c0),0x88);
  local_158 = 1;
  local_100 = 1;
  local_168 = (undefined1 *)0xc2f4000043eb0000;
  lStack_160 = 0x4427000044540000;
  local_110 = 0xc2f40000445bc000;
  uStack_108 = 0x442c000042380000;
  FUN__text__003ad1c8(lVar11,&local_180);
  FUN__text__003ad2d0(lVar11,1);
  local_180 = (code *)0x167d91046464dafd;
  lVar11 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_180);
  *(byte *)(lVar11 + 0x58) =
       *(byte *)(lVar11 + 0x58) & 0xfe | *(int *)(*(long *)(param_1 + 0x640) + 0xf0) == 0;
  return;
}


