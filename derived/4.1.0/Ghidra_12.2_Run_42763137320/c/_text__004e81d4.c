/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e81d4; name: FUN_.text__004e81d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004e81d4(undefined4 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                       long param_5,undefined8 param_6,undefined8 *param_7,ulong param_8,
                       undefined8 param_9,undefined4 param_10,undefined4 param_11,ulong *param_12)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_400;
  undefined2 local_3f8;
  undefined8 local_3e8;
  long lStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  ulong local_3d0;
  char local_3c4 [4];
  undefined1 local_3c0 [8];
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  ulong local_3a8;
  undefined8 local_3a0;
  long lStack_398;
  int *local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_364;
  undefined4 local_32c;
  undefined4 local_324;
  undefined8 local_318;
  undefined2 local_310;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined5 uStack_a8;
  undefined3 local_a3;
  undefined5 uStack_a0;
  byte local_98;
  undefined4 local_90 [2];
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c [3];
  int local_68;
  undefined4 local_64;
  
  *param_12 = 0;
  uVar2 = FUN__text__004715c8(param_3,0,&local_68);
  FUN__text__00471290(local_90,param_3,param_5,local_7c);
  iVar3 = FUN__text__00471db0(local_90[0],&local_64);
  iVar4 = 3;
  if (iVar3 == 2) {
    uVar6 = 0;
  }
  else {
    local_310 = 0xff00;
    local_258 = 0xf000000006000018;
    uStack_250 = 0x3f;
    local_280 = 0x3f800000;
    uStack_a0 = 0;
    local_388 = (int *)*param_7;
    uStack_380 = param_7[1];
    local_318 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_274 = 0;
    local_27c = 0;
    local_26c = 0;
    local_238 = 0;
    local_210 = 0;
    local_218 = 0;
    local_220 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a3 = 0;
    local_378 = *(undefined4 *)(param_7 + 2);
    uStack_374 = *(undefined4 *)((long)param_7 + 0x14);
    local_290 = 0;
    uStack_288 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_3a0 = 0;
    if (local_388 != (int *)0x0) {
      *local_388 = *local_388 + 1;
    }
    local_98 = 4;
    if ((param_8 & 1) == 0) {
      local_98 = 0;
    }
    local_370 = 0;
    local_98 = local_98 | 3;
    local_32c = 0;
    local_324 = param_11;
    lStack_398 = param_5;
    uVar5 = FUN__text__00400f80(0,0x3c8);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar6 = 0;
      *param_12 = 0;
      iVar4 = 2;
      FUN__text__00446c60(&uStack_2f8);
    }
    else {
      uStack_3b8 = uStack_88;
      local_3b0 = local_80;
      FUN__text__004f15dc(param_1,uVar5,&local_3a8,param_2,param_3,param_4,param_9,local_3c0,
                          param_10);
      *param_12 = uVar5;
      local_3c4[0] = '\0';
      iVar4 = FUN__text__00477cb0(local_7c[0],uVar5 + 0x18,0,uVar2 & 1,&local_64,&uStack_2f8,
                                  local_3c4);
      if (iVar4 == 1) {
        iVar4 = FUN__text__00471658(local_90[0],param_3,param_5,iVar3,uVar2 & 1,&local_64,*param_12,
                                    local_3c4[0] == '\0' || local_68 == 0);
        bVar1 = iVar4 == 1;
        if (bVar1) {
          local_3d0 = *param_12;
          local_3f8 = 0xff00;
          local_3e8 = 0;
          local_3d8 = param_11;
          uStack_3d4 = 0;
          lStack_3e0 = (ulong)*(uint *)(local_3d0 + 0x280) << 0x20;
          local_400 = param_5;
          (**(code **)(*param_3 + 0x148))(param_3,&local_400,local_3d0 + 0x90,1);
          uVar5 = *param_12;
          FUN__text__00471dbc(uVar5);
          FUN__text__004743b0(uVar5);
          FUN__text__00474788(uVar5,param_6,0,1);
        }
        uVar6 = 1;
        FUN__text__00446c60(&uStack_2f8);
      }
      else {
        bVar1 = false;
        uVar6 = 0;
        FUN__text__00446c60(&uStack_2f8);
      }
    }
    if (local_388 != (int *)0x0) {
      FUN__text__0040c060();
    }
    if (iVar4 == 1) {
      return 1;
    }
    if (bVar1) goto LAB__text__004e851c;
  }
  if (*(int *)((long)param_7 + 0x14) != 0) {
    FUN__text__0048de00(*_DAT_008a45d8,*(int *)((long)param_7 + 0x14),*param_12,param_5,&local_3a8);
  }
LAB__text__004e851c:
  local_3a8 = *param_12;
  FUN__text__00471740(param_3,&local_3a8,uVar6,param_5);
  *param_12 = 0;
  if (iVar4 != 3) {
    local_64 = 0x1e;
  }
  local_364 = 0;
  local_3a8 = local_3a8 & 0xffffffff00000000;
  FUN__text__004c7008(param_3,local_64,*(undefined8 *)(param_5 + 0x58),param_7,&local_3a8);
  return iVar4;
}


