/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cbb44; name: FUN_.text__001cbb44
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001cbb44(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 local_140 [6];
  long local_128;
  long local_120;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 == 0) goto LAB__text__001cc0c4;
  lVar14 = *(long *)(param_1 + 8);
  uVar7 = *param_2;
  uVar1 = param_2[1];
  lVar9 = *(long *)(lVar14 + 0x2d0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x148);
  iVar4 = *(int *)(*(long *)(param_1 + 0x38) + 0x1e8);
  uVar5 = FUN__text__00192b40(*(undefined8 *)(param_1 + 0x5788),*(undefined4 *)(param_1 + 0x5790));
  lVar6 = FUN__text__001920e4(uVar5,param_2);
  if (*(int *)(lVar6 + 0x18) == 0) {
LAB__text__001cbdb0:
    lVar13 = *_DAT_0089f598;
    FUN__text__005e927c(local_140,_DAT_008a0628);
    uVar5 = FUN__text__003eec14(lVar13);
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_ec = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    iVar4 = FUN__text__003ef560(lVar13,local_140,uVar5,0);
    if (iVar4 != 0) {
      FUN__text__0015e5bc(*(undefined8 *)(lVar13 + 0x210),local_140,iVar4,uVar5,0,&local_f0,0);
      pcVar2 = (code *)CONCAT44(uStack_e4,local_e8);
      if (pcVar2 != (code *)0x0) {
        local_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_ec = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        (*pcVar2)(&local_d0);
      }
    }
    if (local_128 != 0) {
      (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    }
  }
  else {
    local_100 = (undefined4)*(undefined8 *)(lVar6 + 8);
    uStack_fc = (undefined4)((ulong)*(undefined8 *)(lVar6 + 8) >> 0x20);
    uStack_f8 = (undefined4)*(undefined8 *)(lVar6 + 0x10);
    local_f4 = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20);
    uVar3 = FUN__text__00191358((ulong)&local_100 | 4);
    local_114[0] = 0;
    local_110 = local_100;
    local_10c = CONCAT44(uStack_f8,uStack_fc);
    local_104 = local_f4;
    if ((param_3 & 1) == 0) {
      if (iVar4 == 6) {
LAB__text__001cbe8c:
        local_120 = 0;
        iVar4 = FUN__text__001d3630(uVar11,&local_100,&local_120);
        if ((iVar4 == 3) || ((iVar4 == 1 && (local_120 == 0)))) {
          *(undefined4 *)(param_1 + 0x5868) = 0;
          *(undefined1 *)(param_1 + 0x5864) = 1;
          goto joined_r0x001cbe7c;
        }
        if (iVar4 == 0) goto LAB__text__001cbe60;
        *(undefined1 *)(param_1 + 0x5822) = 1;
        **(undefined1 **)(lVar13 + 0x90) = 0;
        uVar3 = FUN__text__001d3e4c(uVar11);
        **(undefined4 **)(lVar13 + 0x98) = uVar3;
        **(undefined1 **)(lVar13 + 0xa0) = 1;
        **(long **)(lVar13 + 0xa8) = local_120;
        iVar4 = FUN__text__001d3e4c(uVar11);
        if ((iVar4 - 1U < 2) &&
           ((uVar7 = (uint)local_120, iVar4 == 2 || ((uVar7 >> 0x15 & 1) == 0)))) {
          local_f0 = local_f0 & 0xffffff00;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          local_e0 = 0;
          if ((uVar7 >> 0xf & 1) == 0) {
            if ((uVar7 >> 0x10 & 1) == 0) {
              if ((uVar7 >> 0x11 & 1) == 0) goto LAB__text__001cbfe4;
              local_140[0] = 0x11;
            }
            else {
              local_140[0] = 0x10;
            }
          }
          else {
            local_140[0] = 0xf;
          }
          FUN__text__001d4490(uVar11,&local_f0,local_140,iVar4 == 2);
          puVar8 = *(undefined8 **)(lVar13 + 0x68);
          *(undefined4 *)(puVar8 + 2) = local_e0;
          *puVar8 = CONCAT44(uStack_ec,local_f0);
          puVar8[1] = CONCAT44(uStack_e4,local_e8);
        }
LAB__text__001cbfe4:
        lVar13 = *_DAT_0089f598;
        uVar5 = _DAT_008a0638;
      }
      else {
        local_f0 = 0;
        uStack_ec = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        FUN__text__001a19ec(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),3,
                            &local_f0,uVar3,0);
        lVar13 = *_DAT_0089f598;
        uVar5 = _DAT_008a0640;
      }
      FUN__text__005e927c(local_140,uVar5);
      uVar5 = FUN__text__003eec14(lVar13);
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_ec = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      iVar4 = FUN__text__003ef560(lVar13,local_140,uVar5,0);
      if (iVar4 != 0) {
        FUN__text__0015e5bc(*(undefined8 *)(lVar13 + 0x210),local_140,iVar4,uVar5,0,&local_f0,0);
        pcVar2 = (code *)CONCAT44(uStack_e4,local_e8);
        if (pcVar2 != (code *)0x0) {
          local_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          (*pcVar2)(&local_d0);
        }
      }
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
      }
      goto joined_r0x001cbe7c;
    }
    if (iVar4 != 3) {
      if (iVar4 == 6) goto LAB__text__001cbe8c;
      iVar4 = FUN__text__001d35e0(uVar11,&local_100);
      if (iVar4 == 2) {
        *(undefined1 *)(param_1 + 0x5823) = 1;
        goto LAB__text__001cbfe4;
      }
      if (iVar4 != 1) goto LAB__text__001cbdb0;
      lVar13 = *(long *)(param_1 + 8);
      lVar12 = *(long *)(lVar13 + 0x2d0);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        lVar13 = *(long *)(param_1 + 8);
      }
      lVar10 = param_1 + (ulong)uVar7 * 0x3c0 + (ulong)uVar1 * 0xc0;
      FUN__text__0012c378(lVar13 + 0x110,lVar10 + 0x14a0);
      FUN__text__001d2e30(param_1,lVar6,
                          param_1 + (ulong)uVar7 * 0x3c0 + (ulong)uVar1 * 0xc0 + 0x40f0);
      FUN__text__003c7c60(lVar12,lVar10 + 0x40f8,1);
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      FUN__text__0012c378(lVar14 + 0x110,lVar10 + 0x4188);
      lVar13 = *_DAT_0089f598;
      FUN__text__005e927c(local_140,_DAT_008a0608);
      uVar5 = FUN__text__003eec14(lVar13);
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_ec = 0;
      local_e8 = 0;
      uStack_e4 = 0;
      iVar4 = FUN__text__003ef560(lVar13,local_140,uVar5,0);
      if (iVar4 != 0) {
        FUN__text__0015e5bc(*(undefined8 *)(lVar13 + 0x210),local_140,iVar4,uVar5,0,&local_f0,0);
        pcVar2 = (code *)CONCAT44(uStack_e4,local_e8);
        if (pcVar2 != (code *)0x0) {
          local_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_e4 = 0;
          (*pcVar2)(&local_d0);
        }
      }
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
      }
      FUN__text__001a14b4(*(undefined8 *)(param_1 + 0x38));
      FUN__text__001ad490(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x30),1,
                          local_114);
      FUN__text__001a191c(*(undefined8 *)(param_1 + 0x38),1,local_114);
    }
  }
LAB__text__001cbe60:
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
LAB__text__001cc0c4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__001c3230(*(long *)(param_1 + 8),*(long *)(param_1 + 0x18),1);
joined_r0x001cbe7c:
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


