/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005143c0; name: FUN_.text__005143c0
 */


bool FUN__text__005143c0(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                        int *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *__s;
  long lVar5;
  long lVar6;
  int local_3c8 [17];
  int local_384;
  undefined8 local_374;
  undefined8 local_36c;
  undefined8 local_364;
  undefined8 local_35c;
  undefined8 local_354;
  undefined8 local_34c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  long local_70 [2];
  
  iVar1 = *(int *)(param_3 + 0x200);
  if (iVar1 < 0x10) {
    uVar4 = *param_2;
    uVar3 = param_2[2];
    puVar2 = (undefined8 *)(param_3 + (long)iVar1 * 0x18);
    puVar2[1] = param_2[1];
    puVar2[2] = uVar3;
    *puVar2 = uVar4;
    puVar2 = param_2 + 3;
    if (*(int *)(param_3 + 0x204) < 1) {
      puVar2 = param_2 + 4;
    }
    *(undefined8 *)(param_3 + (long)iVar1 * 8 + 0x180) = *puVar2;
    *(int *)(param_3 + 0x200) = *(int *)(param_3 + 0x200) + 1;
    return false;
  }
  local_34c = 0;
  local_354 = 0;
  local_35c = 0;
  local_364 = 0;
  local_36c = 0;
  local_374 = 0;
  local_328 = 0;
  local_300 = 0;
  local_2d8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_270 = 0;
  local_238 = 0;
  local_220 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_8c = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_84 = 0;
  uStack_7c = 0;
  FUN__text__00514850(param_1,param_3,param_2,local_3c8);
  FUN__text__00514c20(param_1,local_3c8,4);
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)puVar2[0x1c7]) {
    if (puVar2[0x1c9] != 0) goto LAB__text__005145b8;
  }
  puVar2 = (undefined8 *)FUN__text__00400f90(10,0xe50,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x1c7] = 0;
    puVar2[0xc3] = puVar2 + 0x82;
    puVar2[0x82] = puVar2 + 0x41;
    puVar2[0x145] = puVar2 + 0x104;
    puVar2[0x104] = puVar2 + 0xc3;
    puVar2[0x1c9] = puVar2 + 0x186;
    *puVar2 = 0;
    puVar2[0x41] = puVar2;
    puVar2[0x186] = puVar2 + 0x145;
    *(undefined4 *)(puVar2 + 0x1c8) = 7;
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      puVar2[0x1c7] = 0;
      __s = (undefined8 *)puVar2[0x1c9];
    }
    else {
      puVar2[0x1c7] = *(long *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar2;
LAB__text__005145b8:
      __s = (undefined8 *)puVar2[0x1c9];
    }
    if (__s != (undefined8 *)0x0) {
      puVar2[0x1c9] = *__s;
      *__s = 0;
      *(int *)(puVar2 + 0x1c8) = *(int *)(puVar2 + 0x1c8) + -1;
      memset(__s,0,0x180);
      __s[0x40] = 0xffffffff00000000;
      *param_4 = __s;
      iVar1 = *param_5;
      goto joined_r0x00514634;
    }
  }
  __s = (undefined8 *)0x0;
  *param_5 = 0x34;
  *param_4 = 0;
  iVar1 = *param_5;
joined_r0x00514634:
  if (iVar1 == 1) {
    *(undefined4 *)((long)__s + 0x204) = *(undefined4 *)(param_3 + 0x204);
    *(undefined4 *)(param_3 + 0x200) = 0;
    if (0 < local_384) {
      uVar4 = *param_4;
      lVar5 = 0;
      lVar6 = 0x90;
      do {
        local_70[0] = param_3;
        local_70[1] = uVar4;
        FUN__text__005143c0(param_1,(long)local_3c8 + lVar6,local_70[local_3c8[lVar5]],0,param_5);
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (lVar5 < local_384);
    }
  }
  return iVar1 == 1;
}


