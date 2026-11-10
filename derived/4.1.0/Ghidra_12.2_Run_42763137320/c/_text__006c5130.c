/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c5130; name: FUN_.text__006c5130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c5130(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                        float *param_5,undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
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
  undefined8 *puVar11;
  uint *puVar12;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  
  local_80 = *param_3;
  fStack_9c = param_5[2];
  fStack_84 = param_5[3];
  local_90 = *param_5;
  local_98 = param_5[1];
  pfVar9 = (float *)(param_1 + 0x50);
  local_88 = *pfVar9;
  fVar15 = *(float *)(param_1 + 0x54);
  fStack_70 = (float)local_80;
  local_74 = (float)((ulong)local_80 >> 0x20);
  bVar5 = true;
  bVar3 = *(byte *)(param_1 + 0x10a);
  fStack_68 = local_90 + fStack_70;
  local_6c = local_74 - fStack_9c;
  local_78 = (local_88 + fStack_70) - local_98;
  local_a0 = local_88 - local_98;
  local_88 = local_88 - local_90;
  fStack_8c = fVar15 - fStack_9c;
  fStack_94 = fVar15 - fStack_84;
  local_64 = (local_74 - fVar15) + fStack_84;
  if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
       (*(char *)(param_1 + 0xea) == -1)) &&
      ((bVar5 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
     ((((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)) &&
      ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
        (*(char *)(param_1 + 0xf3) == -1)) &&
       (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
        ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))))) {
    bVar5 = *(char *)(param_1 + 0x5a) != -1;
  }
  lVar10 = 0;
  puVar11 = (undefined8 *)(param_4 + 8);
  puVar12 = _DAT_008a6a88;
  do {
    plVar13 = (long *)*puVar11;
    if ((plVar13 != (long *)0x0) && ((*(byte *)((long)plVar13 + 0x14) & 3) != 0)) {
      if ((bVar5) || ((*(byte *)((long)plVar13 + 0x12) >> 1 & 1) != 0)) {
        uVar7 = FUN__text__006b4698(param_1);
        uVar6 = FUN__text__006b4670(param_1);
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,param_2,param_6,0,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6);
        if ((bVar3 & 1) != 0) {
          lVar8 = FUN__text__006add38(*puVar11,param_2);
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
          lVar8 = FUN__text__006add38(*puVar11,param_2);
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
          *(undefined4 *)(lVar8 + 0x1d0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
          *(undefined4 *)(lVar8 + 0x1d4) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
          *(undefined4 *)(lVar8 + 0x1d8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
          *(undefined4 *)(lVar8 + 0x1dc) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
          *(undefined4 *)(lVar8 + 0x1e0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
          *(undefined4 *)(lVar8 + 0x1e4) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
          *(undefined4 *)(lVar8 + 0x1e8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
          *(undefined4 *)(lVar8 + 0x1ec) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
          *(undefined4 *)(lVar8 + 0x1f0) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
          *(undefined4 *)(lVar8 + 500) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
          *(undefined4 *)(lVar8 + 0x1f8) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
          *(undefined4 *)(lVar8 + 0x1fc) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
          *(undefined4 *)(lVar8 + 0x200) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
          *(undefined4 *)(lVar8 + 0x204) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
          *(undefined4 *)(lVar8 + 0x208) = uVar14;
          uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
          *(undefined4 *)(lVar8 + 0x20c) = uVar14;
        }
      }
      else {
        uVar7 = FUN__text__006b4698(param_1);
        uVar6 = FUN__text__006b4670(param_1);
        (**(code **)(*plVar13 + 0x20))
                  (plVar13,param_2,param_6,1,0,param_1 + 0x70,pfVar9,param_1 + 0x48,uVar7,uVar6);
        if ((bVar3 & 1) != 0) {
          lVar8 = FUN__text__006add38(*puVar11,param_2);
          *(undefined4 *)(lVar8 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
          *(undefined4 *)(lVar8 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
          *(float *)(lVar8 + 0x1a0) = *param_5;
          *(float *)(lVar8 + 0x1a4) = param_5[1];
          *(float *)(lVar8 + 0x1a8) = param_5[2];
          *(float *)(lVar8 + 0x1ac) = param_5[3];
        }
      }
      uVar7 = *puVar11;
      if ((lVar10 != 0) && ((bVar3 >> 1 & 1) != 0)) {
        __dest = (void *)FUN__text__006add38(uVar7,param_2);
        uVar7 = *(undefined8 *)((long)__dest + 0x1c0);
        uVar2 = *(undefined8 *)((long)__dest + 0x1c8);
        __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2);
        memcpy(__dest,__src,0x230);
        *(undefined8 *)((long)__dest + 0x1c0) = uVar7;
        *(undefined8 *)((long)__dest + 0x1c8) = uVar2;
        uVar7 = *puVar11;
      }
      uVar4 = *(uint *)(_DAT_008a6a90 + (ulong)*(byte *)(puVar11 + -1) * 4) | *puVar12;
      uVar1 = uVar4 | 0x40000000;
      if ((bVar3 & 1) != 0) {
        uVar1 = uVar4;
      }
      lVar8 = FUN__text__006add38(uVar7,param_2);
      *(uint *)(lVar8 + 0x22c) = uVar1;
      uVar7 = FUN__text__006add38(*puVar11,param_2);
      FUN__text__0069d930(param_2,uVar7,(long)&local_80 + lVar10,(long)&local_a0 + lVar10);
    }
    lVar10 = lVar10 + 8;
    puVar11 = puVar11 + 2;
    puVar12 = puVar12 + 1;
  } while (lVar10 != 0x20);
  return;
}


