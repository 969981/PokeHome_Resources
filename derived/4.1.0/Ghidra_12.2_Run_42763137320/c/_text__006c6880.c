/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6880; name: FUN_.text__006c6880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c6880(long param_1,long param_2,float *param_3,long param_4,undefined4 *param_5,
                        undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  void *__src;
  undefined8 uVar9;
  long lVar10;
  void *__dest;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  float local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  bVar7 = true;
  if ((((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
        (*(char *)(param_1 + 0xea) == -1)) &&
       ((bVar7 = true, *(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)))) &&
      (((*(char *)(param_1 + 0xed) == -1 &&
        ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))) &&
       (*(char *)(param_1 + 0xf0) == -1)))) &&
     ((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
       (*(char *)(param_1 + 0xf3) == -1)) &&
      (((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)) &&
       ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
    bVar7 = *(char *)(param_1 + 0x5a) != -1;
  }
  bVar3 = *(byte *)(param_1 + 0x10a);
  uVar11 = 0x40000503;
  lVar12 = 0;
  bVar6 = true;
  if ((bVar3 & 1) != 0) {
    uVar11 = 0x503;
  }
  do {
    pbVar1 = (byte *)(param_4 + lVar12 * 0x10);
    plVar13 = *(long **)(pbVar1 + 8);
    if ((bVar7) || ((*(byte *)((long)plVar13 + 0x12) >> 1 & 1) != 0)) {
      uVar9 = FUN__text__006b4698(param_1);
      uVar8 = FUN__text__006b4670(param_1);
      (**(code **)(*plVar13 + 0x20))
                (plVar13,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar9,
                 uVar8);
      if ((bVar3 & 1) != 0) {
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
        *(undefined4 *)(lVar10 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar10 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(lVar10 + 0x1a0) = *param_5;
        *(undefined4 *)(lVar10 + 0x1a4) = param_5[1];
        *(undefined4 *)(lVar10 + 0x1a8) = param_5[2];
        *(undefined4 *)(lVar10 + 0x1ac) = param_5[3];
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
        *(undefined4 *)(lVar10 + 0x1d0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
        *(undefined4 *)(lVar10 + 0x1d4) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
        *(undefined4 *)(lVar10 + 0x1d8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
        *(undefined4 *)(lVar10 + 0x1dc) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
        *(undefined4 *)(lVar10 + 0x1e0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
        *(undefined4 *)(lVar10 + 0x1e4) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
        *(undefined4 *)(lVar10 + 0x1e8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
        *(undefined4 *)(lVar10 + 0x1ec) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
        *(undefined4 *)(lVar10 + 0x1f0) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
        *(undefined4 *)(lVar10 + 500) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
        *(undefined4 *)(lVar10 + 0x1f8) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
        *(undefined4 *)(lVar10 + 0x1fc) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
        *(undefined4 *)(lVar10 + 0x200) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
        *(undefined4 *)(lVar10 + 0x204) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
        *(undefined4 *)(lVar10 + 0x208) = uVar14;
        uVar14 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
        *(undefined4 *)(lVar10 + 0x20c) = uVar14;
      }
    }
    else {
      uVar9 = FUN__text__006b4698(param_1);
      uVar8 = FUN__text__006b4670(param_1);
      (**(code **)(*plVar13 + 0x20))
                (plVar13,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,param_1 + 0x48,uVar9,
                 uVar8);
      if ((bVar3 & 1) != 0) {
        lVar10 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
        *(undefined4 *)(lVar10 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar10 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(lVar10 + 0x1a0) = *param_5;
        *(undefined4 *)(lVar10 + 0x1a4) = param_5[1];
        *(undefined4 *)(lVar10 + 0x1a8) = param_5[2];
        *(undefined4 *)(lVar10 + 0x1ac) = param_5[3];
      }
    }
    if (bVar6) {
      _local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x54),*param_5);
      local_68 = *(undefined8 *)param_3;
LAB__text__006c6c9c:
      uVar4 = *(uint *)(_DAT_008a6ab8 + (ulong)*pbVar1 * 4) | *(uint *)(_DAT_008a6ac0 + lVar12 * 4);
      uVar2 = uVar4 | 0x40000000;
      if ((bVar3 & 1) != 0) {
        uVar2 = uVar4;
      }
      lVar12 = FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
      *(uint *)(lVar12 + 0x22c) = uVar2;
      __dest = (void *)FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
    }
    else {
      _local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x54),param_5[1]);
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - (float)param_5[1]);
      if ((*(byte *)(param_1 + 0x10a) >> 1 & 1) == 0) goto LAB__text__006c6c9c;
      __dest = (void *)FUN__text__006add38(*(undefined8 *)(pbVar1 + 8),param_2);
      __src = (void *)FUN__text__006add38(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(__dest,__src,0x230);
      *(uint *)((long)__dest + 0x22c) = *(uint *)(_DAT_008a6ab8 + (ulong)*pbVar1 * 4) | uVar11;
    }
    FUN__text__0069d930(param_2,__dest,&local_68,&local_70);
    lVar12 = 1;
    *(byte *)(*(long *)(pbVar1 + 8) + 0x48) =
         *(byte *)(*(long *)(pbVar1 + 8) + 0x48) & 0xf0 | *(byte *)(param_2 + 0x193) & 0xf;
    bVar5 = !bVar6;
    bVar6 = false;
    if (bVar5) {
      return;
    }
  } while( true );
}


