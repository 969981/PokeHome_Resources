/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0032c524; name: FUN_.text__0032c524
 */


int FUN__text__0032c524(long param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  undefined1 uStack_c9;
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  byte *local_88;
  byte *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar2 = FUN__text__0064baec(param_1 + 0x2ff2420);
  uVar4 = FUN__text__0064c260();
  FUN__text__005f559c(&uStack_c9,uVar4,1,1);
  lVar5 = FUN__text__0064bad0(param_1 + 0x2ff2420);
  FUN__text__00317c34(param_1,*(undefined8 *)(lVar5 + 8));
  pcVar1 = (char *)(param_1 + 0x13560a0);
  local_a8 = 1;
  local_a0 = 0;
  local_98 = 0;
  local_c8 = (byte *)0x1e00000;
  local_c0 = 0x1e00000;
  local_b8 = 0x1e00000;
  uStack_b0 = 0x400;
  sVar6 = strlen(pcVar1);
  local_140 = 0;
  local_138 = (ulong)local_138._4_4_ << 0x20;
  local_128 = 0;
  local_130 = 0xffffffff;
  local_120 = 0;
  local_118 = 0;
  iVar3 = FUN__text__003dd89c(&local_140,&local_c8);
  local_108 = local_140;
  if (iVar3 != 0) {
    local_138 = CONCAT44(local_138._4_4_,0xe);
    local_100 = 0xe;
    local_140 = 0;
    local_d8 = (byte *)0x0;
    local_f8 = local_130;
    uStack_f0 = local_128;
    local_128 = 0;
    local_e8 = local_120;
    uStack_e0 = local_118;
    FUN__text__003dd6cc(&local_140);
    pbVar9 = (byte *)0x0;
    goto LAB__text__0032c8d0;
  }
  iVar3 = FUN__text__003ddea8(&local_140,pcVar1,pcVar1 + sVar6);
  if (iVar3 == 0) {
    FUN__text__003dd208(&local_80,&local_140,0);
    local_108 = local_140;
    local_d8 = local_80;
    uStack_f0 = local_128;
    iVar3 = (int)local_138;
  }
  else {
    local_d8 = (byte *)0x0;
    local_108 = local_140;
    uStack_f0 = local_128;
    iVar3 = (int)local_138;
  }
  pbVar9 = local_d8;
  local_140 = 0;
  local_128 = 0;
  local_e8 = local_120;
  uStack_e0 = local_118;
  local_100 = iVar3;
  local_f8 = local_130;
  FUN__text__003dd6cc(&local_140);
  if (iVar3 != 0) goto LAB__text__0032c8d0;
  memset(pcVar1,0,10000000);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (byte *)0x0;
  local_c0 = 0;
  uVar7 = FUN__text__00317e00(param_1,&local_c8,0x710fb3,pbVar9);
  if ((uVar7 & 1) == 0) goto LAB__text__0032c8d0;
  iVar2 = atoi((char *)&local_c8);
  lVar5 = FUN__text__00321ac0();
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (byte *)0x0;
  local_c0 = 0;
  uVar7 = FUN__text__00317e00(param_1,&local_c8,*(undefined8 *)(param_1 + 0x50),pbVar9);
  if ((uVar7 & 1) != 0) {
    iVar3 = atoi((char *)&local_c8);
    *(int *)(lVar5 + 0x7a878) = iVar3;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (byte *)0x0;
  local_c0 = 0;
  uVar7 = FUN__text__00317e00(param_1,&local_c8,*(undefined8 *)(param_1 + 0x38),pbVar9);
  if ((uVar7 & 1) != 0) {
    iVar3 = atoi((char *)&local_c8);
    *(int *)(param_1 + 0x31270b8) = iVar3;
  }
  lVar5 = FUN__text__00321ac0();
  FUN__text__00317e00(param_1,lVar5 + 0x934dd,*(undefined8 *)(param_1 + 0x40),pbVar9);
  lVar5 = FUN__text__00321ac0();
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (byte *)0x0;
  local_c0 = 0;
  uVar7 = FUN__text__00317e00(param_1,&local_c8,*(undefined8 *)(param_1 + 0x48),pbVar9);
  if ((uVar7 & 1) != 0) {
    lVar8 = atoll((char *)&local_c8);
    *(longlong *)(lVar5 + 0x93520) = lVar8;
  }
  pcVar1 = (char *)(param_1 + 0x68);
  uVar7 = FUN__text__00318020(param_1,pcVar1,0x711c24,pbVar9);
  if ((uVar7 & 1) == 0) goto LAB__text__0032c8d0;
  FUN__text__00318240(param_1,pcVar1);
  local_120 = 1;
  local_118 = 0;
  uStack_110 = 0;
  local_140 = 0x1e00000;
  local_138 = 0x1e00000;
  local_130 = 0x1e00000;
  local_128 = 0x400;
  sVar6 = strlen(pcVar1);
  local_80 = (byte *)0x0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0xffffffff;
  local_60 = 0;
  local_58 = 0;
  iVar3 = FUN__text__003dd89c(&local_80,&local_140);
  if (iVar3 == 0) {
    iVar3 = FUN__text__003ddea8(&local_80,pcVar1,pcVar1 + sVar6);
    if (iVar3 != 0) {
      local_c8 = local_80;
      goto LAB__text__0032c8a0;
    }
    FUN__text__003dd208(&local_88,&local_80,0);
    local_c8 = local_80;
    local_80 = (byte *)0x0;
    local_c0 = CONCAT44(local_c0._4_4_,local_78);
    local_b8 = local_70;
    uStack_b0 = local_68;
    local_68 = 0;
    local_a8 = local_60;
    local_a0 = local_58;
    FUN__text__003dd6cc(&local_80);
    local_98 = 0;
    if (local_88 != (byte *)0x0) {
      if (*local_88 - 6 < 5) {
        FUN__text__0031d370(local_88);
      }
      operator_delete(local_88);
    }
  }
  else {
    local_78 = 0xe;
    local_c8 = local_80;
LAB__text__0032c8a0:
    local_c0 = CONCAT44(local_c0._4_4_,local_78);
    local_80 = (byte *)0x0;
    local_b8 = local_70;
    uStack_b0 = local_68;
    local_68 = 0;
    local_a8 = local_60;
    local_a0 = local_58;
    FUN__text__003dd6cc(&local_80);
    local_98 = 0;
  }
  FUN__text__003dd6cc(&local_c8);
LAB__text__0032c8d0:
  local_d8 = (byte *)0x0;
  if (pbVar9 != (byte *)0x0) {
    if (*pbVar9 - 6 < 5) {
      FUN__text__0031d370(pbVar9);
    }
    operator_delete(pbVar9);
  }
  FUN__text__003dd6cc(&local_108);
  FUN__text__005f5690(&uStack_c9);
  return iVar2;
}


