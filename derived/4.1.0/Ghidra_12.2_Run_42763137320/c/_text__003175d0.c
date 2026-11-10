/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003175d0; name: FUN_.text__003175d0
 */


undefined8 FUN__text__003175d0(long param_1,int *param_2)

{
  char *__s;
  char *__s_00;
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  byte *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  byte *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte *local_98;
  undefined1 uStack_89;
  byte *local_88;
  byte *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  __s_00 = (char *)(param_1 + 0x13560a0);
  iVar3 = FUN__text__0064baec(param_1 + 0x2ff2420);
  *param_2 = iVar3;
  uVar5 = FUN__text__0064c260();
  FUN__text__005f559c(&uStack_89,uVar5,1,1);
  lVar6 = FUN__text__0064bad0(param_1 + 0x2ff2420);
  FUN__text__00317c34(param_1,*(undefined8 *)(lVar6 + 8));
  local_9b0 = 0;
  local_9a8 = 0;
  local_9b8 = 1;
  local_9d8 = 0x1e00000;
  uStack_9d0 = 0x1e00000;
  local_9c8 = 0x1e00000;
  uStack_9c0 = 0x400;
  sVar7 = strlen(__s_00);
  local_100 = (byte *)0x0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0xffffffff;
  local_e0 = 0;
  local_d8 = 0;
  iVar3 = FUN__text__003dd89c(&local_100,&local_9d8);
  local_c8 = local_100;
  if (iVar3 != 0) {
    local_f8 = 0xe;
    local_c0 = 0xe;
    local_100 = (byte *)0x0;
    local_b8 = local_f0;
    uStack_b0 = local_e8;
    local_e8 = 0;
    local_a8 = local_e0;
    uStack_a0 = local_d8;
    FUN__text__003dd6cc(&local_100);
    local_98 = (byte *)0x0;
    uVar5 = 0xffffffff;
    goto LAB__text__003179a0;
  }
  iVar3 = FUN__text__003ddea8(&local_100,__s_00,__s_00 + sVar7);
  if (iVar3 == 0) {
    FUN__text__003dd208(&local_80,&local_100,0);
    local_c8 = local_100;
    local_98 = local_80;
    uStack_b0 = local_e8;
  }
  else {
    local_98 = (byte *)0x0;
    local_c8 = local_100;
    uStack_b0 = local_e8;
  }
  pbVar1 = local_98;
  iVar3 = local_f8;
  local_100 = (byte *)0x0;
  local_e8 = 0;
  local_a8 = local_e0;
  uStack_a0 = local_d8;
  local_c0 = local_f8;
  local_b8 = local_f0;
  FUN__text__003dd6cc(&local_100);
  if (iVar3 == 0) {
    memset(__s_00,0,10000000);
    local_9a8 = 0;
    uStack_9a0 = 0;
    local_9b8 = 0;
    local_9b0 = 0;
    local_9c8 = 0;
    uStack_9c0 = 0;
    local_9d8 = 0;
    uStack_9d0 = 0;
    uVar8 = FUN__text__00317e00(param_1,&local_9d8,0x710fb3,pbVar1);
    if ((uVar8 & 1) == 0) {
      *param_2 = 0;
    }
    else {
      iVar3 = atoi((char *)&local_9d8);
      *param_2 = iVar3;
      lVar6 = FUN__text__00321ac0();
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      local_9b0 = 0;
      local_9c8 = 0;
      uStack_9c0 = 0;
      local_9d8 = 0;
      uStack_9d0 = 0;
      uVar8 = FUN__text__00317e00(param_1,&local_9d8,*(undefined8 *)(param_1 + 0x50),pbVar1);
      if ((uVar8 & 1) != 0) {
        iVar3 = atoi((char *)&local_9d8);
        *(int *)(lVar6 + 0x7a878) = iVar3;
      }
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      local_9b0 = 0;
      local_9c8 = 0;
      uStack_9c0 = 0;
      local_9d8 = 0;
      uStack_9d0 = 0;
      uVar8 = FUN__text__00317e00(param_1,&local_9d8,*(undefined8 *)(param_1 + 0x38),pbVar1);
      if ((uVar8 & 1) != 0) {
        iVar3 = atoi((char *)&local_9d8);
        *(int *)(param_1 + 0x31270b8) = iVar3;
      }
      lVar6 = FUN__text__00321ac0();
      FUN__text__00317e00(param_1,lVar6 + 0x934dd,*(undefined8 *)(param_1 + 0x40),pbVar1);
      lVar6 = FUN__text__00321ac0();
      local_9a8 = 0;
      uStack_9a0 = 0;
      local_9b8 = 0;
      local_9b0 = 0;
      local_9c8 = 0;
      uStack_9c0 = 0;
      local_9d8 = 0;
      uStack_9d0 = 0;
      uVar8 = FUN__text__00317e00(param_1,&local_9d8,*(undefined8 *)(param_1 + 0x48),pbVar1);
      if ((uVar8 & 1) != 0) {
        lVar9 = atoll((char *)&local_9d8);
        *(longlong *)(lVar6 + 0x93520) = lVar9;
      }
      __s = (char *)(param_1 + 0x68);
      uVar8 = FUN__text__00318020(param_1,__s,0x711c24,pbVar1);
      uVar5 = 0xffffffff;
      if ((uVar8 & 1) != 0) {
        FUN__text__00318240(param_1,__s);
        local_9b8 = 1;
        local_9b0 = 0;
        local_9a8 = 0;
        local_9d8 = 0x1e00000;
        uStack_9d0 = 0x1e00000;
        local_9c8 = 0x1e00000;
        uStack_9c0 = 0x400;
        sVar7 = strlen(__s);
        local_80 = (byte *)0x0;
        local_78 = 0;
        local_68 = 0;
        local_70 = 0xffffffff;
        local_60 = 0;
        local_58 = 0;
        iVar3 = FUN__text__003dd89c(&local_80,&local_9d8);
        pbVar10 = local_80;
        if (iVar3 == 0) {
          iVar3 = FUN__text__003ddea8(&local_80,__s,__s + sVar7);
          if (iVar3 == 0) {
            FUN__text__003dd208(&local_88,&local_80,0);
            local_100 = local_80;
            pbVar10 = local_88;
          }
          else {
            local_100 = local_80;
            pbVar10 = (byte *)0x0;
          }
          iVar3 = local_78;
          local_f8 = local_78;
          local_f0 = local_70;
          local_e8 = local_68;
          local_e0 = local_60;
          local_d8 = local_58;
          local_80 = (byte *)0x0;
          local_68 = 0;
          FUN__text__003dd6cc(&local_80);
          if (iVar3 == 0) {
            local_9a8 = 0;
            uStack_9a0 = 0;
            local_9b8 = 0;
            local_9b0 = 0;
            local_9c8 = 0;
            uStack_9c0 = 0;
            local_9d8 = 0;
            uStack_9d0 = 0;
            bVar2 = FUN__text__00317e00(param_1,&local_9d8,0x70e54d,pbVar10);
            if ((bVar2 & 1) == 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = atoi((char *)&local_9d8);
            }
            local_9a8 = 0;
            uStack_9a0 = 0;
            local_9b8 = 0;
            local_9b0 = 0;
            local_9c8 = 0;
            uStack_9c0 = 0;
            local_9d8 = 0;
            uStack_9d0 = 0;
            uVar8 = FUN__text__00317e00(param_1,&local_9d8,0x715112,pbVar10);
            if ((uVar8 & 1) != 0) {
              iVar4 = atoi((char *)&local_9d8);
              lVar6 = FUN__text__00304b90();
              if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != iVar4)) {
                if (DAT_008e1d78 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl();
                }
                FUN__text__003059a4(DAT_008e1d78,0);
              }
            }
            uVar8 = FUN__text__00318020(param_1,__s_00,0x7146d3,pbVar10);
            if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0x39674e0) != '\0' || *__s_00 != '\0')) {
              FUN__text__0031a780(&local_9d8,param_1);
              memset(__s_00,0,10000000);
            }
            if ((bVar2 & iVar3 == 1) == 1) {
              FUN__text__0031acd0(param_1);
              uVar8 = FUN__text__0031a614(param_1,pbVar10);
              if ((uVar8 & 1) == 0) {
                *(undefined4 *)(param_1 + 0x3951c00) = 30000;
                goto LAB__text__00317a34;
              }
              uVar5 = 1;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
LAB__text__00317a34:
            uVar5 = 0xffffffff;
          }
          local_d0 = 0;
          if (pbVar10 != (byte *)0x0) {
            if (*pbVar10 - 6 < 5) {
              FUN__text__0031d370(pbVar10);
            }
            operator_delete(pbVar10);
          }
        }
        else {
          local_78 = 0xe;
          local_f8 = 0xe;
          local_80 = (byte *)0x0;
          local_100 = pbVar10;
          local_f0 = local_70;
          local_e8 = local_68;
          local_68 = 0;
          local_e0 = local_60;
          local_d8 = local_58;
          FUN__text__003dd6cc(&local_80);
          local_d0 = 0;
        }
        FUN__text__003dd6cc(&local_100);
        goto joined_r0x0031797c;
      }
    }
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = 0xffffffff;
  }
joined_r0x0031797c:
  local_98 = (byte *)0x0;
  if (pbVar1 != (byte *)0x0) {
    local_98 = (byte *)0x0;
    if (*pbVar1 - 6 < 5) {
      FUN__text__0031d370(pbVar1);
    }
    operator_delete(pbVar1);
  }
LAB__text__003179a0:
  FUN__text__003dd6cc(&local_c8);
  FUN__text__005f5690(&uStack_89);
  return uVar5;
}


