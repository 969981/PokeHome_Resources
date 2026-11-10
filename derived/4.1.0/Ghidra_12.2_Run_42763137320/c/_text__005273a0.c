/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005273a0; name: FUN_.text__005273a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005273a0(double param_1,double param_2,double param_3,float param_4,long param_5,
                        long param_6,long param_7,uint param_8,long param_9,undefined8 param_10)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  uVar11 = FUN__text__0052163c(param_7,param_5);
  lVar7 = param_7 + (uVar11 & 0xffffffff) * 0x40;
  uVar11 = (ulong)*(uint *)(lVar7 + 200);
  if (*(uint *)(lVar7 + 200) == 0) {
    uVar30 = 0;
  }
  else {
    puVar15 = *(uint **)(lVar7 + 0xc0);
    dVar29 = (double)param_4;
    uVar30 = 0x7f7fffff;
    dVar18 = (double)(1.0 - param_4);
    puVar17 = puVar15;
    do {
      bVar9 = false;
      bVar10 = false;
      if ((float)puVar17[0x3f] < 1.0) {
        bVar9 = false;
        bVar10 = true;
        if (!NAN((float)puVar17[0x41]) && !NAN(*(float *)(lVar7 + 0xb4))) {
          bVar9 = (float)puVar17[0x41] < *(float *)(lVar7 + 0xb4);
          bVar10 = false;
        }
      }
      if (bVar9 != bVar10) {
        uVar13 = 4;
        if ((float)puVar17[0x3f] < 0.001) {
          uVar13 = 1;
        }
        puVar15 = (uint *)FUN__text__00492bb0(param_10,uVar13,1);
        if (puVar15 != (uint *)0x0) {
          if (*(char *)(_DAT_008a40c0 + 0x25) == '\0') {
            dVar19 = *(double *)(puVar17 + 0x3c);
            dVar21 = *(double *)(puVar17 + 0x3a);
            dVar22 = *(double *)(puVar17 + 0x38);
            puVar1 = (uint *)(param_5 + 0x30);
            puVar2 = (uint *)(param_5 + 0x34);
            puVar3 = (uint *)(param_5 + 0x38);
            puVar4 = (uint *)(param_5 + 0x24);
            puVar5 = (uint *)(param_5 + 0x28);
            puVar6 = (uint *)(param_5 + 0x2c);
          }
          else {
            puVar1 = puVar17 + 0x6e;
            puVar2 = puVar17 + 0x6f;
            puVar3 = puVar17 + 0x70;
            puVar4 = puVar17 + 0x71;
            puVar5 = puVar17 + 0x72;
            puVar6 = puVar17 + 0x73;
            dVar19 = *(double *)(puVar17 + 0x78);
            dVar21 = *(double *)(puVar17 + 0x76);
            dVar22 = *(double *)(puVar17 + 0x74);
          }
          if (0.0 < param_4) {
            dVar19 = param_3 * dVar18 + dVar29 * dVar19;
            dVar22 = param_1 * dVar18 + dVar29 * dVar22;
            dVar21 = param_2 * dVar18 + dVar29 * dVar21;
          }
          uVar28 = *puVar2;
          uVar8 = *puVar17;
          uVar27 = *puVar3;
          fVar34 = (float)puVar17[0x42];
          fVar35 = *(float *)(param_7 + 0x11c);
          uVar31 = *puVar1;
          uVar24 = *puVar6;
          uVar25 = *puVar5;
          uVar26 = *puVar4;
          uVar32 = puVar17[0x44];
          fVar33 = *(float *)(param_7 + 0x120);
          fVar36 = (float)puVar17[0x3f];
          uVar14 = *(undefined8 *)(*(long *)(param_9 + 8) + 0x58);
          *(double *)(puVar15 + 6) = dVar22;
          if (fVar34 <= fVar35) {
            fVar34 = fVar35;
          }
          *(double *)(puVar15 + 10) = dVar19;
          *(double *)(puVar15 + 8) = dVar21;
          *(undefined8 *)(puVar15 + 0x1c) = uVar14;
          *puVar15 = uVar31;
          puVar15[1] = uVar28;
          puVar15[2] = uVar27;
          puVar15[3] = uVar26;
          puVar15[4] = uVar25;
          puVar15[5] = uVar24;
          puVar15[0x16] = uVar32;
          puVar15[0x17] = uVar32;
          puVar15[0x19] = 0xffffffff;
          puVar15[0x1a] = uVar8 & 0xff000000 ^ uVar8 << 8 | param_8 & 0xff;
          puVar15[0x15] = 0;
          uVar11 = (ulong)(uint)(fVar34 * 100.0);
          fVar33 = fVar33 * 100.0;
          uVar23 = (ulong)(uint)fVar33;
          puVar15[0x13] = (uint)(fVar34 * 100.0);
          puVar15[0x12] = (uint)fVar33;
          puVar15[0x14] = (uint)(fVar36 * 100.0);
          uVar14 = *(undefined8 *)(param_6 + 8);
          FUN__text__00480e64(param_9,uVar14,puVar15);
          if (*(long *)(param_9 + 0x98) != 0) {
            if (puVar17[0x3e] < 2) {
              lVar16 = *(long *)(*(long *)(param_9 + 8) + 0x48);
              uVar20 = FUN__text__0047da2c(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x20));
              lVar12 = FUN__text__0047da58(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x20));
              if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x38), lVar12 == 0)) {
                lVar12 = *(long *)(*(long *)(lVar16 + 8) + 0x38);
              }
              uVar11 = FUN__text__00526f60(uVar20,uVar11,uVar23,param_5,param_7,
                                           *(undefined8 *)(lVar12 + 0x68));
            }
            else {
              uVar11 = (ulong)puVar17[0x41];
            }
            FUN__text__00480e30(uVar11,param_9,uVar14,puVar15);
          }
          FUN__text__00527200(0,param_5,param_6,uVar13 | 8,param_10);
        }
        uVar30 = NEON_fminnm(puVar17[0x3f],uVar30);
        puVar15 = *(uint **)(lVar7 + 0xc0);
        uVar11 = (ulong)*(uint *)(lVar7 + 200);
      }
      puVar17 = puVar17 + 0x7a;
    } while (puVar17 != puVar15 + uVar11 * 0x7a);
  }
  *(undefined4 *)(param_7 + 0x118) = uVar30;
  return;
}


