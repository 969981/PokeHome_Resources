/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ad870; name: FUN_.text__006ad870
 */


void FUN__text__006ad870(long param_1,long param_2,byte param_3,int param_4,ulong param_5,
                        undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                        undefined2 param_10)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint local_54;
  
  bVar2 = *(byte *)(param_1 + 0x49);
  if ((bVar2 >> 1 & 1) == 0) {
    *(byte *)(param_2 + 0x193) = *(byte *)(param_1 + 0x14) & 3;
  }
  *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
  bVar5 = *(byte *)(param_1 + 0x48) >> 4;
  if (bVar5 == 0xf) {
    *(ushort *)(param_1 + 0x4a) =
         (*(ushort *)(param_1 + 0x4a) + (short)param_4) - *(ushort *)(param_1 + 0x4a) % 3;
    lVar8 = *(long *)(param_1 + 0x20);
  }
  else {
    *(ushort *)(param_1 + 0x4a) = (ushort)bVar5 + (short)param_4 * 0xe;
    lVar8 = *(long *)(param_1 + 0x20);
  }
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xb8);
  }
  lVar9 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar8 = 0;
  if (lVar9 != 0) {
    lVar8 = lVar9 + (ulong)*(uint *)(param_1 + 0x30);
  }
  if (param_4 == 1) {
    *(undefined8 *)(lVar8 + 0x200) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1d0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1d8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x208) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1e0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1e8) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1f0) = 0x437f0000437f0000;
    *(undefined8 *)(lVar8 + 0x1f8) = 0x437f0000437f0000;
  }
  *(undefined8 *)(lVar8 + 0xd0) = 0x3b8080813b808081;
  *(undefined4 *)(lVar8 + 0xd8) = 0x3b808081;
  *(float *)(lVar8 + 0xdc) = (float)param_3 * 1.5378702e-05;
  FUN__text__0069df20(param_2,lVar8);
  if ((param_5 & 1) != 0) {
    *(undefined4 *)(lVar8 + 0x22c) = 0;
  }
  FUN__text__006add60(param_1,param_2,param_6,param_7);
  if ((((*(byte *)(param_1 + 0x14) & 3) != 0) && ('\0' < *(char *)(param_2 + 0x193))) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x18) + 8), plVar6 != (long *)0x0)) {
    local_54 = 0;
    lVar9 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    lVar8 = 0;
    if (lVar9 != 0) {
      lVar8 = lVar9 + (ulong)*(uint *)(param_1 + 0x30);
    }
    (**(code **)(*plVar6 + 0x20))(&local_54);
    *(undefined8 *)(lVar8 + 0x1c8) = 0;
    fVar3 = (float)NEON_ucvtf(local_54 & 0xffff);
    fVar4 = (float)NEON_ucvtf(local_54 >> 0x10);
    *(float *)(lVar8 + 0x1c0) = 1.0 / fVar3;
    *(float *)(lVar8 + 0x1c4) = 1.0 / fVar4;
  }
  if ((bVar2 >> 1 & 1) == 0) {
    FUN__text__006ae05c(param_1,param_2,param_9,param_10,param_7,param_8);
  }
  uVar7 = *(uint *)(param_1 + 0x14);
  if ((uVar7 & 0xc0000) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18) +
            (((ulong)uVar1 & 3) * 0x10 + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
            ((ulong)(uVar1 >> 8) & 0xc) + ((ulong)(uVar1 >> 4) & 0x1c) +
            ((ulong)(uVar1 >> 0xc) & 8) + (ulong)(-(uVar1 >> 0xc & 1) & 0xc) +
            (ulong)(-(uVar1 >> 0x10 & 1) & 0x1c) +
            ((ulong)(uVar1 >> 0xc) & 0x10) * ((ulong)(uVar1 >> 6) & 7) +
            (ulong)((int)(uVar1 << 0xe) >> 0x1f & 0x74) +
            (((ulong)(uVar1 >> 0xd) & 3) + ((ulong)(uVar1 >> 2) & 3)) * 0x14;
    if (*(long *)(lVar8 + 0x18) != 0) {
      uVar7 = *(uint *)(param_1 + 0x10);
      FUN__text__006d4950((short)*(undefined4 *)
                                  (*(long *)(param_1 + 0x18) +
                                  (((ulong)uVar7 & 3) * 0x10 + ((ulong)uVar7 & 0x30) |
                                  (ulong)(uVar7 >> 6) & 8) +
                                  ((ulong)(uVar7 >> 8) & 0xc) + ((ulong)(uVar7 >> 4) & 0x1c) +
                                  ((ulong)(uVar7 >> 0xc) & 8) + (ulong)(-(uVar7 >> 0xc & 1) & 0xc) +
                                  (ulong)(-(uVar7 >> 0x10 & 1) & 0x1c) +
                                  ((ulong)(uVar7 >> 0xc) & 0x10) * ((ulong)(uVar7 >> 6) & 7) +
                                  (ulong)((int)(uVar7 << 0xe) >> 0x1f & 0x74) +
                                  (((ulong)(uVar7 >> 0xd) & 3) + ((ulong)(uVar7 >> 2) & 3)) * 0x14))
      ;
      *(byte *)(*(long *)(lVar8 + 0x18) + 0x158) = *(byte *)(*(long *)(lVar8 + 0x18) + 0x158) | 2;
      uVar7 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      if (*(long *)(lVar8 + 0x38) != 0) {
        uVar7 = *(uint *)(param_1 + 0x10);
        FUN__text__006d4950((short)*(undefined4 *)
                                    (*(long *)(param_1 + 0x18) +
                                     (((ulong)uVar7 & 3) * 0x10 + ((ulong)uVar7 & 0x30) |
                                     (ulong)(uVar7 >> 6) & 8) +
                                     ((ulong)(uVar7 >> 8) & 0xc) + ((ulong)(uVar7 >> 4) & 0x1c) +
                                     ((ulong)(uVar7 >> 0xc) & 8) +
                                     (ulong)(-(uVar7 >> 0xc & 1) & 0xc) +
                                     (ulong)(-(uVar7 >> 0x10 & 1) & 0x1c) +
                                     ((ulong)(uVar7 >> 0xc) & 0x10) * ((ulong)(uVar7 >> 6) & 7) +
                                     (ulong)((int)(uVar7 << 0xe) >> 0x1f & 0x74) +
                                     (((ulong)(uVar7 >> 0xd) & 3) + ((ulong)(uVar7 >> 2) & 3)) *
                                     0x14 + 0x20));
        *(byte *)(*(long *)(lVar8 + 0x38) + 0x158) = *(byte *)(*(long *)(lVar8 + 0x38) + 0x158) | 2;
        uVar7 = *(uint *)(param_1 + 0x14);
      }
      if ((((uVar7 ^ 0xffffffff) & 0xc0000) == 0) && (*(long *)(lVar8 + 0x58) != 0)) {
        uVar7 = *(uint *)(param_1 + 0x10);
        FUN__text__006d4950((short)*(undefined4 *)
                                    (*(long *)(param_1 + 0x18) +
                                     (((ulong)uVar7 & 3) * 0x10 + ((ulong)uVar7 & 0x30) |
                                     (ulong)(uVar7 >> 6) & 8) +
                                     ((ulong)(uVar7 >> 8) & 0xc) + ((ulong)(uVar7 >> 4) & 0x1c) +
                                     ((ulong)(uVar7 >> 0xc) & 8) +
                                     (ulong)(-(uVar7 >> 0xc & 1) & 0xc) +
                                     (ulong)(-(uVar7 >> 0x10 & 1) & 0x1c) +
                                     ((ulong)(uVar7 >> 0xc) & 0x10) * ((ulong)(uVar7 >> 6) & 7) +
                                     (ulong)((int)(uVar7 << 0xe) >> 0x1f & 0x74) +
                                     (((ulong)(uVar7 >> 0xd) & 3) + ((ulong)(uVar7 >> 2) & 3)) *
                                     0x14 + 0x40));
        *(byte *)(*(long *)(lVar8 + 0x58) + 0x158) = *(byte *)(*(long *)(lVar8 + 0x58) + 0x158) | 2;
      }
    }
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf0 | *(byte *)(param_2 + 0x193) & 0xf;
  return;
}


