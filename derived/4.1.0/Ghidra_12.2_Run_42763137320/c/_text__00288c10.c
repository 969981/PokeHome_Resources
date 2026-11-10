/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00288c10; name: FUN_.text__00288c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00288c10(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *local_280;
  code *local_278;
  code *local_270;
  undefined *local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 *local_170;
  code *local_168;
  code *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_70 [2];
  
  local_280 = (undefined1 *)0x918e9ae3c487032f;
  lVar6 = FUN__text__0012cdb0(param_1 + 0x110,&local_280);
  lVar12 = 1;
  lVar10 = *(long *)(param_1 + 0x980);
  piVar7 = (int *)(*(long *)(param_1 + 0x640) + 0x698f0);
  do {
    if (piVar7[-6] == 0) {
      uVar11 = (int)lVar12 - 1;
      goto joined_r0x00288cb0;
    }
    if (*piVar7 == 0) goto LAB__text__00288c98;
    lVar12 = lVar12 + 2;
    piVar7 = piVar7 + 0xc;
  } while (lVar12 != 0xbb9);
  lVar12 = 3000;
LAB__text__00288c98:
  uVar11 = (uint)lVar12;
joined_r0x00288cb0:
  if (lVar10 == 0) {
    local_280 = *(undefined1 **)(param_1 + 8);
    lVar12 = FUN__text__0018037c(&local_f0,local_280,0x7303a0,&local_280);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x980) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x980) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x980) = lVar12;
    local_70[0] = lVar12;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))((long *)(lVar12 + 0x48));
    }
    FUN__text__003b1808(lVar6,local_70);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
  }
  else if (*(long *)(lVar10 + 0xe8) != 0) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
  }
  if (uVar11 != 0) {
    uVar13 = tpidr_el0;
    uVar9 = 0;
    uVar13 = uVar13 & 0xffffffffffffe000;
    do {
      while( true ) {
        lVar12 = *(long *)(param_1 + 0x980);
        local_f0._0_5_ = (uint5)uVar9;
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0xe0) + *(long *)(lVar12 + 0xe8) * 8);
        if (*(long *)(lVar12 + 0xe8) == *(long *)(lVar12 + 0xf0)) break;
        if (*(long *)(uVar13 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar13 + *(long *)(uVar13 + 0x98) * 8 + 0x18) =
             *(undefined8 *)(lVar12 + 0xa0);
        *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
        *puVar1 = local_f0;
        *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
        *(long *)(lVar12 + 0xe8) = *(long *)(lVar12 + 0xe8) + 1;
        uVar9 = uVar9 + 1;
        if (uVar11 == uVar9) goto LAB__text__00288de4;
      }
      FUN__text__00180c38(&local_280,lVar12 + 0xa0,puVar1,1,&local_f0);
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar9);
  }
LAB__text__00288de4:
  uVar5 = _DAT_008a2090;
  pcVar4 = _DAT_008a2088;
  pcVar3 = _DAT_008a2080;
  if (lVar10 != 0) goto LAB__text__00288ffc;
  local_250 = 0;
  local_258 = _DAT_008a2070;
  local_280 = _DAT_008a2078;
  local_278 = _DAT_008a2080;
  local_270 = _DAT_008a2088;
  local_268 = (undefined *)_DAT_008a2090;
  pcVar8 = *(code **)(lVar6 + 200);
  local_c0 = 0;
  local_140 = 0;
  local_f0 = _DAT_008a2078;
  local_e8 = _DAT_008a2080;
  local_e0 = _DAT_008a2088;
  uStack_d8 = _DAT_008a2090;
  local_170 = _DAT_008a2078;
  local_168 = _DAT_008a2080;
  local_160 = _DAT_008a2088;
  uStack_158 = _DAT_008a2090;
  uStack_c8 = _DAT_008a2098;
  uStack_148 = _DAT_008a2098;
  local_260 = param_1;
  local_150 = param_1;
  local_d0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB__text__00289110:
    (*local_270)(&local_260,lVar6 + 0xe0);
    *(undefined8 *)(lVar6 + 0xc0) = local_280;
    *(code **)(lVar6 + 200) = local_278;
    *(code **)(lVar6 + 0xd0) = local_270;
    *(undefined **)(lVar6 + 0xd8) = local_268;
    pcVar8 = *(code **)(lVar6 + 0x1c8);
  }
  else {
    *(undefined8 *)(lVar6 + 0xd0) = 0;
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    (*pcVar8)(lVar6 + 0xe0);
    if (local_270 != (code *)0x0) goto LAB__text__00289110;
    pcVar8 = *(code **)(lVar6 + 0x1c8);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x1d0) = 0;
    *(undefined8 *)(lVar6 + 0x1d8) = 0;
    *(undefined8 *)(lVar6 + 0x1c0) = 0;
    *(undefined8 *)(lVar6 + 0x1c8) = 0;
    (*pcVar8)(lVar6 + 0x1e0);
  }
  if (local_e0 != (code *)0x0) {
    (*local_e0)(&local_d0,lVar6 + 0x1e0);
    *(undefined1 **)(lVar6 + 0x1c0) = local_f0;
    *(code **)(lVar6 + 0x1c8) = local_e8;
    *(code **)(lVar6 + 0x1d0) = local_e0;
    *(undefined8 *)(lVar6 + 0x1d8) = uStack_d8;
  }
  pcVar8 = *(code **)(lVar6 + 0x448);
  *(undefined2 *)(lVar6 + 0x852) = 0;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x450) = 0;
    *(undefined8 *)(lVar6 + 0x458) = 0;
    *(undefined8 *)(lVar6 + 0x440) = 0;
    *(undefined8 *)(lVar6 + 0x448) = 0;
    (*pcVar8)(lVar6 + 0x460);
  }
  if (local_160 != (code *)0x0) {
    (*local_160)(&local_150,lVar6 + 0x460);
    *(undefined8 *)(lVar6 + 0x440) = local_170;
    *(code **)(lVar6 + 0x448) = local_168;
    *(code **)(lVar6 + 0x450) = local_160;
    *(undefined8 *)(lVar6 + 0x458) = uStack_158;
  }
  local_1c0 = 0;
  pcVar8 = *(code **)(lVar6 + 0x248);
  uStack_1c8 = _DAT_008a20a0;
  local_1e0 = pcVar4;
  uStack_1d8 = uVar5;
  local_1f0 = _DAT_008a2078;
  local_1e8 = pcVar3;
  local_1d0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB__text__00288f5c:
    (*local_1e0)(&local_1d0,lVar6 + 0x260);
    *(undefined8 *)(lVar6 + 0x240) = local_1f0;
    *(code **)(lVar6 + 0x248) = local_1e8;
    *(code **)(lVar6 + 0x250) = local_1e0;
    *(undefined8 *)(lVar6 + 600) = uStack_1d8;
  }
  else {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar8)(lVar6 + 0x260);
    if (local_1e0 != (code *)0x0) goto LAB__text__00288f5c;
  }
  local_1f8 = 0x431e769ffc1ad350;
  lVar12 = FUN__text__0012ce7c(param_1 + 0x110,&local_1f8);
  pcVar3 = local_1e8;
  *(undefined1 *)(lVar12 + 0x170) = 0;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (code *)0x0;
    uStack_1d8 = 0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(&local_1d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    uStack_158 = 0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar3)(&local_150);
  }
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    uStack_d8 = 0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar3)(&local_d0);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (code *)0x0;
    local_268 = (undefined *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar3)(&local_260);
  }
LAB__text__00288ffc:
  uVar2 = *(undefined4 *)(param_1 + 0x970);
  FUN__text__003b17ec(lVar6,0,0);
  FUN__text__003b17f8(lVar6,0);
  memcpy(&local_280,(void *)(lVar6 + 0x6c0),0x88);
  local_258 = CONCAT71(local_258._1_7_,1);
  local_200 = 1;
  local_268 = (undefined *)0xc2700000442c2000;
  local_260 = 0x4444800044014000;
  local_210 = 0xc26c00004467c000;
  uStack_208 = 0x4446000042200000;
  FUN__text__003ad1c8(lVar6,&local_280);
  FUN__text__003ad2d0(lVar6,0);
  FUN__text__003ae340(lVar6,uVar2,1);
  local_280 = &LAB__text__0028dd68;
  local_278 = FUN__text__0028dd84;
  local_270 = (code *)&DAT__text__0028dd88;
  local_268 = &DAT__text__0028dd8c;
  FUN__text__00251970(lVar6,&local_280,0);
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (code *)0x0;
    local_268 = (undefined *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar3)(&local_260);
  }
  return;
}


