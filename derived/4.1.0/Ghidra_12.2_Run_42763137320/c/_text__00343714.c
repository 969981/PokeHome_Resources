/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00343714; name: FUN_.text__00343714
 */


int FUN__text__00343714(long param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d1;
  byte *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  byte *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_48;
  
  iVar3 = FUN__text__0064baec(param_1 + 0x2ff2420);
  uVar5 = FUN__text__0064c260();
  FUN__text__005f559c(&uStack_d1,uVar5,1,1);
  lVar6 = FUN__text__0064bad0(param_1 + 0x2ff2420);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__00317c34(param_1,*(undefined8 *)(lVar6 + 8));
  pcVar1 = (char *)(param_1 + 0x13560a0);
  local_b0 = 1;
  local_a8 = 0;
  local_a0 = 0;
  local_d0 = (byte *)0x1e00000;
  local_c8 = 0x1e00000;
  local_c0 = 0x1e00000;
  uStack_b8 = 0x400;
  sVar7 = strlen(pcVar1);
  local_148 = 0;
  local_140 = (ulong)local_140._4_4_ << 0x20;
  local_130 = 0;
  local_138 = 0xffffffff;
  local_128 = 0;
  local_120 = 0;
  iVar4 = FUN__text__003dd89c(&local_148,&local_d0);
  local_110 = local_148;
  if (iVar4 == 0) {
    iVar4 = FUN__text__003ddea8(&local_148,pcVar1,pcVar1 + sVar7);
    if (iVar4 == 0) {
      FUN__text__003dd208(&local_90,&local_148,0);
      local_110 = local_148;
      uStack_f8 = local_130;
      pbVar10 = local_90;
      iVar4 = (int)local_140;
    }
    else {
      local_e0 = 0;
      local_110 = local_148;
      uStack_f8 = local_130;
      pbVar10 = (byte *)0x0;
      iVar4 = (int)local_140;
    }
    local_148 = 0;
    local_130 = 0;
    local_f0 = local_128;
    uStack_e8 = local_120;
    local_108 = iVar4;
    local_100 = local_138;
    FUN__text__003dd6cc(&local_148);
    if (iVar4 == 0) {
      memset(pcVar1,0,10000000);
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = (byte *)0x0;
      local_c8 = 0;
      uVar8 = FUN__text__00317e00(param_1,&local_d0,0x710fb3,pbVar10);
      if ((uVar8 & 1) != 0) {
        iVar3 = atoi((char *)&local_d0);
        lVar6 = FUN__text__00321ac0();
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = (byte *)0x0;
        local_c8 = 0;
        uVar8 = FUN__text__00317e00(param_1,&local_d0,*(undefined8 *)(param_1 + 0x50),pbVar10);
        if ((uVar8 & 1) != 0) {
          iVar4 = atoi((char *)&local_d0);
          *(int *)(lVar6 + 0x7a878) = iVar4;
        }
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = (byte *)0x0;
        local_c8 = 0;
        uVar8 = FUN__text__00317e00(param_1,&local_d0,*(undefined8 *)(param_1 + 0x38),pbVar10);
        if ((uVar8 & 1) != 0) {
          iVar4 = atoi((char *)&local_d0);
          *(int *)(param_1 + 0x31270b8) = iVar4;
        }
        lVar6 = FUN__text__00321ac0();
        FUN__text__00317e00(param_1,lVar6 + 0x934dd,*(undefined8 *)(param_1 + 0x40),pbVar10);
        lVar6 = FUN__text__00321ac0();
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = (byte *)0x0;
        local_c8 = 0;
        uVar8 = FUN__text__00317e00(param_1,&local_d0,*(undefined8 *)(param_1 + 0x48),pbVar10);
        if ((uVar8 & 1) == 0) {
          lVar6 = FUN__text__00321ac0();
          *(undefined8 *)(lVar6 + 0x93520) = 0;
        }
        else {
          lVar9 = atoll((char *)&local_d0);
          *(longlong *)(lVar6 + 0x93520) = lVar9;
        }
        pcVar1 = (char *)(param_1 + 0x68);
        uVar8 = FUN__text__00318020(param_1,pcVar1,0x711c24,pbVar10);
        if ((uVar8 & 1) != 0) {
          lVar6 = FUN__text__00321ac0();
          uVar2 = *(undefined1 *)(lVar6 + 0x1935b0);
          lVar6 = FUN__text__00321ac0();
          *(undefined1 *)(lVar6 + 0x1935b0) = 1;
          FUN__text__00318240(param_1,pcVar1);
          lVar6 = FUN__text__00321ac0();
          *(undefined1 *)(lVar6 + 0x1935b0) = uVar2;
          local_120 = 0;
          uStack_118 = 0;
          local_128 = 1;
          local_148 = 0x1e00000;
          local_140 = 0x1e00000;
          local_138 = 0x1e00000;
          local_130 = 0x400;
          sVar7 = strlen(pcVar1);
          local_90 = (byte *)0x0;
          local_88 = 0;
          local_78 = 0;
          local_80 = 0xffffffff;
          local_70 = 0;
          local_68 = 0;
          iVar4 = FUN__text__003dd89c(&local_90,&local_148);
          pbVar11 = local_90;
          if (iVar4 == 0) {
            iVar4 = FUN__text__003ddea8(&local_90,pcVar1,pcVar1 + sVar7);
            if (iVar4 == 0) {
              FUN__text__003dd208(&local_48,&local_90,0);
              local_d0 = local_90;
              uStack_b8 = local_78;
              pbVar11 = local_48;
            }
            else {
              local_d0 = local_90;
              uStack_b8 = local_78;
              pbVar11 = (byte *)0x0;
            }
            iVar4 = local_88;
            local_c8 = CONCAT44(local_c8._4_4_,local_88);
            local_b0 = local_70;
            local_a8 = local_68;
            local_90 = (byte *)0x0;
            local_78 = 0;
            local_c0 = local_80;
            FUN__text__003dd6cc(&local_90);
            if (iVar4 == 0) {
              FUN__text__00343be4(param_1,pbVar11);
            }
            local_a0 = 0;
            if (pbVar11 != (byte *)0x0) {
              if (*pbVar11 - 6 < 5) {
                FUN__text__0031d370(pbVar11);
              }
              operator_delete(pbVar11);
            }
          }
          else {
            local_88 = 0xe;
            local_c8 = CONCAT44(local_c8._4_4_,0xe);
            local_90 = (byte *)0x0;
            local_d0 = pbVar11;
            local_c0 = local_80;
            uStack_b8 = local_78;
            local_78 = 0;
            local_b0 = local_70;
            local_a8 = local_68;
            FUN__text__003dd6cc(&local_90);
            local_a0 = 0;
          }
          FUN__text__003dd6cc(&local_d0);
        }
      }
    }
  }
  else {
    local_140 = CONCAT44(local_140._4_4_,0xe);
    local_108 = 0xe;
    local_148 = 0;
    local_e0 = 0;
    local_100 = local_138;
    uStack_f8 = local_130;
    local_130 = 0;
    local_f0 = local_128;
    uStack_e8 = local_120;
    FUN__text__003dd6cc(&local_148);
    pbVar10 = (byte *)0x0;
  }
  local_e0 = 0;
  if (pbVar10 != (byte *)0x0) {
    if (*pbVar10 - 6 < 5) {
      FUN__text__0031d370(pbVar10);
    }
    operator_delete(pbVar10);
  }
  FUN__text__003dd6cc(&local_110);
  FUN__text__005f5690(&uStack_d1);
  return iVar3;
}


