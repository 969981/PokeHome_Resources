/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003477f0; name: FUN_.text__003477f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003477f0(long param_1)

{
  char *__s;
  char *__s_00;
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  longlong lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  byte *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte *local_f8;
  byte *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte *local_c0;
  undefined1 uStack_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte *local_70 [2];
  
  __s_00 = (char *)(param_1 + 0x13560a0);
  iVar3 = FUN__text__0064baec(param_1 + 0x2ff2420);
  uVar6 = FUN__text__0064c260();
  FUN__text__005f559c(&uStack_b1,uVar6,1,1);
  lVar7 = FUN__text__0064bad0(param_1 + 0x2ff2420);
  FUN__text__00317c34(param_1,*(undefined8 *)(lVar7 + 8));
  local_88 = 0;
  local_80 = 0;
  local_90 = 1;
  local_b0 = 0x1e00000;
  uStack_a8 = 0x1e00000;
  local_a0 = 0x1e00000;
  uStack_98 = 0x400;
  sVar8 = strlen(__s_00);
  local_168 = (byte *)0x0;
  local_160 = (ulong)local_160._4_4_ << 0x20;
  local_150 = 0;
  local_158 = 0xffffffff;
  local_148 = 0;
  local_140 = 0;
  iVar4 = FUN__text__003dd89c(&local_168,&local_b0);
  local_f0 = local_168;
  if (iVar4 != 0) {
    local_160 = CONCAT44(local_160._4_4_,0xe);
    local_e8 = 0xe;
    local_168 = (byte *)0x0;
    local_c0 = (byte *)0x0;
    local_e0 = local_158;
    uStack_d8 = local_150;
    local_150 = 0;
    local_d0 = local_148;
    uStack_c8 = local_140;
    FUN__text__003dd6cc(&local_168);
    pbVar14 = (byte *)0x0;
    goto LAB__text__00347ef0;
  }
  iVar4 = FUN__text__003ddea8(&local_168,__s_00,__s_00 + sVar8);
  if (iVar4 == 0) {
    FUN__text__003dd208(&local_128,&local_168,0);
    local_f0 = local_168;
    local_c0 = local_128;
    uStack_d8 = local_150;
    iVar4 = (int)local_160;
  }
  else {
    local_c0 = (byte *)0x0;
    local_f0 = local_168;
    uStack_d8 = local_150;
    iVar4 = (int)local_160;
  }
  pbVar14 = local_c0;
  local_168 = (byte *)0x0;
  local_150 = 0;
  local_d0 = local_148;
  uStack_c8 = local_140;
  local_e8 = iVar4;
  local_e0 = local_158;
  FUN__text__003dd6cc(&local_168);
  if (iVar4 != 0) goto LAB__text__00347ef0;
  memset(__s_00,0,10000000);
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uVar9 = FUN__text__00317e00(param_1,&local_b0,0x710fb3,pbVar14);
  if ((uVar9 & 1) == 0) goto LAB__text__00347ef0;
  iVar3 = atoi((char *)&local_b0);
  lVar7 = FUN__text__00321ac0();
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uVar9 = FUN__text__00317e00(param_1,&local_b0,*(undefined8 *)(param_1 + 0x50),pbVar14);
  if ((uVar9 & 1) != 0) {
    iVar4 = atoi((char *)&local_b0);
    *(int *)(lVar7 + 0x7a878) = iVar4;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uVar9 = FUN__text__00317e00(param_1,&local_b0,*(undefined8 *)(param_1 + 0x38),pbVar14);
  if ((uVar9 & 1) != 0) {
    iVar4 = atoi((char *)&local_b0);
    *(int *)(param_1 + 0x31270b8) = iVar4;
  }
  lVar7 = FUN__text__00321ac0();
  FUN__text__00317e00(param_1,lVar7 + 0x934dd,*(undefined8 *)(param_1 + 0x40),pbVar14);
  lVar7 = FUN__text__00321ac0();
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uVar9 = FUN__text__00317e00(param_1,&local_b0,*(undefined8 *)(param_1 + 0x48),pbVar14);
  if ((uVar9 & 1) != 0) {
    lVar10 = atoll((char *)&local_b0);
    *(longlong *)(lVar7 + 0x93520) = lVar10;
  }
  __s = (char *)(param_1 + 0x68);
  uVar9 = FUN__text__00318020(param_1,__s,0x711c24,pbVar14);
  if ((uVar9 & 1) == 0) goto LAB__text__00347ef0;
  lVar7 = FUN__text__00321ac0();
  uVar2 = *(undefined1 *)(lVar7 + 0x1935b0);
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x1935b0) = 1;
  FUN__text__00318240(param_1,__s);
  lVar7 = FUN__text__00321ac0();
  *(undefined1 *)(lVar7 + 0x1935b0) = uVar2;
  local_88 = 0;
  local_80 = 0;
  local_90 = 1;
  local_b0 = 0x1e00000;
  uStack_a8 = 0x1e00000;
  local_a0 = 0x1e00000;
  uStack_98 = 0x400;
  sVar8 = strlen(__s);
  local_168 = (byte *)0x0;
  local_160 = local_160 & 0xffffffff00000000;
  local_150 = 0;
  local_158 = 0xffffffff;
  local_148 = 0;
  local_140 = 0;
  iVar4 = FUN__text__003dd89c(&local_168,&local_b0);
  local_128 = local_168;
  if (iVar4 == 0) {
    iVar4 = FUN__text__003ddea8(&local_168,__s,__s + sVar8);
    if (iVar4 == 0) {
      FUN__text__003dd208(local_70,&local_168,0);
      local_128 = local_168;
      local_f8 = local_70[0];
      uStack_110 = local_150;
      iVar4 = (int)local_160;
    }
    else {
      local_f8 = (byte *)0x0;
      local_128 = local_168;
      uStack_110 = local_150;
      iVar4 = (int)local_160;
    }
    pbVar14 = local_f8;
    local_168 = (byte *)0x0;
    local_150 = 0;
    local_108 = local_148;
    uStack_100 = local_140;
    local_120 = iVar4;
    local_118 = local_158;
    FUN__text__003dd6cc(&local_168);
    if (iVar4 == 0) {
      FUN__text__00318020(param_1,__s_00,0x70c59d,pbVar14);
      if (*__s_00 != '\0') {
        FUN__text__00319cf0(param_1);
        memset(__s_00,0,10000000);
      }
      FUN__text__00318020(param_1,__s_00,0x71f537,pbVar14);
      if (*__s_00 != '\0') {
        lVar7 = 0x1ae778;
        uVar9 = 1;
        do {
          uVar15 = 0;
          lVar13 = lVar7;
          do {
            lVar11 = FUN__text__00321ac0();
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            local_140 = 0;
            local_158 = 0;
            local_150 = 0;
            local_168 = (byte *)0x0;
            local_160 = 0;
            snprintf((char *)&local_168,0x40,(char *)0x717ea2,uVar9 & 0xffffffff,uVar15 & 0xffffffff
                    );
            local_80 = 0;
            uStack_78 = 0;
            local_90 = 0;
            local_88 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            uVar12 = FUN__text__00317e00(param_1,&local_b0,&local_168,pbVar14);
            if ((uVar12 & 1) != 0) {
              iVar4 = atoi((char *)&local_b0);
              puVar1 = (undefined1 *)(lVar11 + lVar13);
              *(int *)(puVar1 + 4) = iVar4;
              *puVar1 = 1;
              snprintf((char *)&local_168,0x40,(char *)0x717eb1,uVar9 & 0xffffffff,
                       uVar15 & 0xffffffff);
              local_80 = 0;
              uStack_78 = 0;
              local_90 = 0;
              local_88 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              uVar12 = FUN__text__00317e00(param_1,&local_b0,&local_168,pbVar14);
              if ((uVar12 & 1) != 0) {
                iVar4 = atoi((char *)&local_b0);
                *puVar1 = 1;
                *(int *)(puVar1 + 8) = iVar4;
              }
            }
            uVar15 = uVar15 + 1;
            lVar13 = lVar13 + 0xc;
          } while (uVar15 != 0x1c);
          uVar9 = uVar9 + 1;
          lVar7 = lVar7 + 0x150;
        } while (uVar9 != 0x404);
      }
      memset(__s_00,0,10000000);
      uVar9 = FUN__text__00318020(param_1,__s_00,0x70c5e5,pbVar14);
      if ((uVar9 & 1) == 0) {
LAB__text__00347e8c:
        uVar9 = FUN__text__0031a614(param_1,pbVar14);
        if ((uVar9 & 1) != 0) goto LAB__text__00347eb8;
        uVar5 = 30000;
      }
      else {
        sVar8 = strlen(__s_00);
        FUN__text__003d5a80(&local_b0,&DAT_009cca20 + param_1,&DAT_00989680,__s_00,sVar8,0);
        memset(__s_00,0,10000000);
        local_b0 = *(undefined8 *)(&DAT_009cca20 + param_1);
        uVar5 = (**(code **)(**(long **)(param_1 + 0x462b338) + 0x58))();
        uVar9 = FUN__text__00213f40(param_1 + 0x462af38,&local_b0,uVar5);
        if (((uVar9 & 1) == 0) ||
           (uVar9 = FUN__text__002140e0(param_1 + 0x462af20,1,
                                        *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8)), (uVar9 & 1) != 0))
        goto LAB__text__00347e8c;
        uVar5 = 0x4e21;
      }
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0x3941474) = uVar5;
    }
  }
  else {
    local_160 = CONCAT44(local_160._4_4_,0xe);
    local_120 = 0xe;
    local_168 = (byte *)0x0;
    local_f8 = (byte *)0x0;
    local_118 = local_158;
    uStack_110 = local_150;
    local_150 = 0;
    local_108 = local_148;
    uStack_100 = local_140;
    FUN__text__003dd6cc(&local_168);
  }
LAB__text__00347eb8:
  pbVar14 = local_f8;
  local_f8 = (byte *)0x0;
  if (pbVar14 != (byte *)0x0) {
    if (*pbVar14 - 6 < 5) {
      FUN__text__0031d370(pbVar14);
    }
    operator_delete(pbVar14);
  }
  FUN__text__003dd6cc(&local_128);
  pbVar14 = local_c0;
LAB__text__00347ef0:
  local_c0 = (byte *)0x0;
  if (pbVar14 != (byte *)0x0) {
    if (*pbVar14 - 6 < 5) {
      FUN__text__0031d370(pbVar14);
    }
    operator_delete(pbVar14);
  }
  FUN__text__003dd6cc(&local_f0);
  FUN__text__005f5690(&uStack_b1);
  return iVar3;
}


