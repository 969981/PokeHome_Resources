/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c55b0; name: FUN_.text__006c55b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c55b0(long param_1,undefined8 param_2,float *param_3,long param_4,float *param_5,
                        undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  long lVar8;
  void *__dest;
  void *__src;
  float *pfVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8 [34];
  
  local_e8[0] = *param_3;
  local_e8[1] = param_3[1];
  pfVar9 = (float *)(param_1 + 0x50);
  local_e8[2] = *param_5;
  local_e8[6] = param_5[1];
  local_e8[3] = param_5[2];
  local_e8[0xb] = param_5[3];
  local_e8[0x11] = local_e8[1] - local_e8[3];
  local_e8[0x18] = local_e8[0] + local_e8[2];
  bVar3 = *(byte *)(param_1 + 0x10a);
  bVar5 = true;
  local_e8[4] = (local_e8[0] + *pfVar9) - local_e8[6];
  local_e8[0x1a] = (*pfVar9 - local_e8[2]) - local_e8[6];
  local_e8[0x13] = (*(float *)(param_1 + 0x54) - local_e8[3]) - local_e8[0xb];
  local_e8[9] = (local_e8[1] - *(float *)(param_1 + 0x54)) + local_e8[0xb];
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
        (*(char *)(param_1 + 0xea) == -1)) &&
       ((bVar5 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
      (((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)))) &&
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
       (*(char *)(param_1 + 0xf3) == -1)) &&
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar5 = *(char *)(param_1 + 0x5a) != -1;
  }
  lVar10 = 0;
  puVar11 = _DAT_008a6a98;
  local_e8[5] = local_e8[1];
  local_e8[7] = local_e8[3];
  local_e8[8] = local_e8[0];
  local_e8[10] = local_e8[2];
  local_e8[0xc] = local_e8[4];
  local_e8[0xd] = local_e8[9];
  local_e8[0xe] = local_e8[6];
  local_e8[0xf] = local_e8[0xb];
  local_e8[0x10] = local_e8[0];
  local_e8[0x12] = local_e8[2];
  local_e8[0x14] = local_e8[4];
  local_e8[0x15] = local_e8[0x11];
  local_e8[0x16] = local_e8[6];
  local_e8[0x17] = local_e8[0x13];
  local_e8[0x19] = local_e8[1];
  local_e8[0x1b] = local_e8[3];
  local_e8[0x1c] = local_e8[0x18];
  local_e8[0x1d] = local_e8[9];
  local_e8[0x1e] = local_e8[0x1a];
  local_e8[0x1f] = local_e8[0xb];
  do {
    pbVar1 = (byte *)(param_4 + lVar10);
    plVar12 = *(long **)(pbVar1 + 8);
    if ((*(byte *)((long)plVar12 + 0x14) & 3) != 0) {
      if ((bVar5) || ((*(byte *)((long)plVar12 + 0x12) >> 1 & 1) != 0)) {
        uVar7 = FUN__text__006b4698(param_1);
        uVar6 = FUN__text__006b4670(param_1);
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,param_2,param_6,0,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6);
        if ((bVar3 & 1) != 0) {
          lVar8 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
          lVar8 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
          *(undefined4 *)(lVar8 + 0x1d0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
          *(undefined4 *)(lVar8 + 0x1d4) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
          *(undefined4 *)(lVar8 + 0x1d8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
          *(undefined4 *)(lVar8 + 0x1dc) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
          *(undefined4 *)(lVar8 + 0x1e0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
          *(undefined4 *)(lVar8 + 0x1e4) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
          *(undefined4 *)(lVar8 + 0x1e8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
          *(undefined4 *)(lVar8 + 0x1ec) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
          *(undefined4 *)(lVar8 + 0x1f0) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
          *(undefined4 *)(lVar8 + 500) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
          *(undefined4 *)(lVar8 + 0x1f8) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
          *(undefined4 *)(lVar8 + 0x1fc) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
          *(undefined4 *)(lVar8 + 0x200) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
          *(undefined4 *)(lVar8 + 0x204) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
          *(undefined4 *)(lVar8 + 0x208) = uVar13;
          uVar13 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
          *(undefined4 *)(lVar8 + 0x20c) = uVar13;
        }
      }
      else {
        uVar7 = FUN__text__006b4698(param_1);
        uVar6 = FUN__text__006b4670(param_1);
        (**(code **)(*plVar12 + 0x20))
                  (plVar12,param_2,param_6,1,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6);
        if ((bVar3 & 1) != 0) {
          lVar8 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
        }
      }
      if ((lVar10 == 0) || ((bVar3 >> 1 & 1) == 0)) {
        uVar4 = *(uint *)(_DAT_008a6aa0 + (ulong)*pbVar1 * 4) | *puVar11;
        uVar2 = uVar4 | 0x40000000;
        if ((bVar3 & 1) != 0) {
          uVar2 = uVar4;
        }
        lVar8 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
        *(uint *)(lVar8 + 0x22c) = uVar2;
      }
      else {
        __dest = (void *)FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
        local_f8 = *(undefined8 *)((long)__dest + 0x1c0);
        uStack_f0 = *(undefined8 *)((long)__dest + 0x1c8);
        __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2);
        memcpy(__dest,__src,0x230);
        *(undefined8 *)((long)__dest + 0x1c0) = local_f8;
        *(undefined8 *)((long)__dest + 0x1c8) = uStack_f0;
        uVar4 = *(uint *)(_DAT_008a6aa0 + (ulong)*pbVar1 * 4) | *puVar11;
        uVar2 = uVar4 | 0x40000000;
        if ((bVar3 & 1) != 0) {
          uVar2 = uVar4;
        }
        *(uint *)((long)__dest + 0x22c) = uVar2;
      }
      uVar7 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
      local_100 = *(undefined4 *)((long)local_e8 + lVar10 + 8);
      local_f8 = CONCAT44(*(undefined4 *)((long)local_e8 + lVar10 + 4),
                          *(undefined4 *)((long)local_e8 + lVar10));
      uStack_fc = *(undefined4 *)((long)local_e8 + lVar10 + 0xc);
      FUN__text__0069d930(param_2,uVar7,&local_f8,&local_100);
    }
    lVar10 = lVar10 + 0x10;
    puVar11 = puVar11 + 1;
  } while (lVar10 != 0x80);
  return;
}


