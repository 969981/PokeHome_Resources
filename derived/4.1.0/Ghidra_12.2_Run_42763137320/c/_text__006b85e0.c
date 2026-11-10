/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b85e0; name: FUN_.text__006b85e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b85e0(undefined1 param_1 [16],float param_2,long param_3,long param_4,int param_5
                        ,float *param_6,float *param_7,float *param_8,float *param_9,float *param_10
                        )

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  
  lVar6 = *(long *)(*(long *)(param_4 + 200) + 0x38);
  fVar7 = (float)FUN__text__006b7a20(param_3,param_8);
  fVar8 = 0.0;
  fVar12 = 0.0;
  local_88 = fVar7;
  fStack_84 = param_2;
  if (0.0 < param_6[1]) {
    fVar12 = *param_6 * (*_DAT_008a02c8 / *_DAT_008a02d0);
    fVar8 = cosf(fVar12);
    fVar8 = fVar8 * param_6[1];
    fVar12 = sinf(fVar12);
    fVar12 = fVar12 * param_6[1];
    local_88 = fVar7 - fVar8;
    fStack_84 = param_2 - fVar12;
  }
  local_c0 = 0x3f80000000000000;
  uStack_b8 = 0x3f8000003f800000;
  local_d0 = 0;
  uStack_c8 = 0x3f800000;
  puVar1 = (ulong *)(lVar6 + param_5);
  fStack_9c = (fVar12 / param_8[1]) * param_9[1];
  local_a8 = (fVar8 / *param_8) * *param_9;
  fVar7 = *param_10;
  fVar8 = param_10[1];
  *(undefined2 *)(param_4 + 400) = 0x100;
  local_b0 = (0.0 - fVar7) - local_a8;
  local_a8 = (fVar7 + 1.0) - local_a8;
  fStack_ac = fStack_9c + (0.0 - fVar8);
  fStack_9c = fStack_9c + fVar8 + 1.0;
  fStack_a4 = fStack_ac;
  local_a0 = local_b0;
  local_98 = local_a8;
  fStack_94 = fStack_9c;
  if (((*(long *)(param_3 + 0x58) == 0) || ((*(byte *)(param_3 + 0x228) >> 2 & 1) != 0)) ||
     ((*(byte *)(*(long *)(param_3 + 0x58) + 8) >> 5 & 1) == 0)) {
    FUN__text__0069d960(param_4,puVar1,&local_88,param_8,2,&local_d0);
  }
  else {
    FUN__text__0069d960(param_4,puVar1,param_7,param_8,2,&local_d0);
    fVar7 = *param_7;
    fVar8 = param_7[1];
    fVar12 = *param_8;
    fVar9 = param_8[1];
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    fVar11 = 1.0 / ((fVar8 - fVar9) - fVar8);
    fVar10 = 1.0 / ((fVar7 + fVar12) - fVar7);
    FUN__text__006c1910(&local_100,param_4);
    uVar5 = uRam0000000000724ae8;
    uVar4 = _DAT_00724ae0;
    uVar3 = uRam0000000000724938;
    uVar2 = _DAT_00724930;
    puVar1[1] = (ulong)(uint)-((fVar7 + fVar7 + fVar12) * fVar10) << 0x20;
    *puVar1 = (ulong)(uint)(fVar10 + fVar10);
    puVar1[3] = (ulong)(uint)-((fVar8 + (fVar8 - fVar9)) * fVar11) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar11 + fVar11) << 0x20;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
    puVar1[7] = uVar3;
    puVar1[6] = uVar2;
    puVar1[0xd] = uStack_d8;
    puVar1[0xc] = local_e0;
    puVar1[9] = uStack_f8;
    puVar1[8] = local_100;
    puVar1[0xb] = uStack_e8;
    puVar1[10] = local_f0;
  }
  return;
}


