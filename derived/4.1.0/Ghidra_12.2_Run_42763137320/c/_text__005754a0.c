/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005754a0; name: FUN_.text__005754a0
 */


undefined8 FUN__text__005754a0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  size_t __nmemb;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_3d0 [16];
  float local_390 [16];
  uint local_350 [63];
  uint auStack_254 [65];
  float local_150 [64];
  
  lVar3 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)*(uint *)(param_1 + 0x128) * 0xa8,0x715356,0x1c1);
  *(long *)(param_1 + 0x140) = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0x34;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x128);
    fVar15 = 1.0;
    if (uVar5 != 0) {
      lVar3 = 0;
      uVar8 = 0;
      do {
        if (*(long *)(param_1 + 0x140) != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x140) + lVar3);
          puVar1[0x13] = 0;
          puVar1[0x14] = 0;
          *puVar1 = 0;
          puVar1[0x11] = 0;
          puVar1[0x12] = 0;
          puVar1[0xf] = 0;
          puVar1[0x10] = 0;
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0xb] = 0;
          puVar1[0xc] = 0;
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          puVar1[3] = 0;
          puVar1[4] = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          uVar5 = *(uint *)(param_1 + 0x128);
        }
        uVar8 = uVar8 + 1;
        lVar3 = lVar3 + 0xa8;
      } while (uVar8 < uVar5);
      if (1 < uVar5) {
        fVar15 = 1.0 / SQRT((float)uVar5);
      }
    }
    uVar5 = uVar5 * 4;
    __nmemb = (size_t)uVar5;
    *(float *)(param_1 + 0x124) = fVar15;
    if (uVar5 == 0) {
      __nmemb = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x158);
      uVar8 = 0;
      fVar16 = *(float *)(lVar3 + 0x9c) +
               (*(float *)(lVar3 + 0xa0) - *(float *)(lVar3 + 0x9c)) *
               *(float *)(lVar3 + 0x6c) * 0.01;
      fVar15 = (*(float *)(lVar3 + 0xa8) +
               (*(float *)(lVar3 + 0xac) - *(float *)(lVar3 + 0xa8)) *
               *(float *)(lVar3 + 0x70) * 0.01) * fVar16;
      fVar16 = fVar16 - fVar15;
      uVar11 = 0x6b4cc7;
      do {
        uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
        fVar17 = fVar15 + (1.0 / (float)(uVar5 - 1)) *
                          (fVar16 + fVar16) * (float)(uVar8 & 0xffffffff);
        local_150[uVar8] =
             fVar17 + fVar17 * *(float *)(lVar3 + 0xa4) * 2.3283064e-12 * (float)uVar11;
        uVar8 = uVar8 + 1;
      } while (__nmemb != uVar8);
    }
    qsort(local_150,__nmemb,4,FUN__text__0057bf00);
    uVar5 = *(uint *)(param_1 + 0x128);
    uVar8 = (ulong)uVar5;
    uVar11 = *(uint *)(param_1 + 0x130);
    if (uVar5 << 2 != 0) {
      uVar10 = 0;
      do {
        uVar12 = (uint)((float)uVar11 * 0.001 * local_150[uVar10]);
        auStack_254[uVar10 + 1] = uVar12;
        if (uVar10 == 0) {
          if ((uVar12 & 1) == 0) {
            uVar12 = uVar12 + 1;
            auStack_254[1] = uVar12;
          }
          uVar6 = (ulong)uVar12;
          if (2 < (int)SQRT((double)uVar6)) {
            uVar13 = 3;
            do {
              while( true ) {
                uVar14 = 0;
                if (uVar13 != 0) {
                  uVar14 = uVar12 / uVar13;
                }
                if (uVar12 != uVar14 * uVar13) break;
                uVar12 = uVar12 + 2;
                uVar13 = 3;
                auStack_254[1] = uVar12;
              }
              uVar13 = uVar13 + 2;
            } while ((int)uVar13 <= (int)SQRT((double)uVar6));
          }
        }
        else {
          if ((uVar12 & 1) == 0) {
            uVar12 = uVar12 + 1;
            auStack_254[uVar10 + 1] = uVar12;
          }
          uVar6 = (ulong)uVar12;
          uVar13 = auStack_254[uVar10];
          if ((int)SQRT((double)uVar6) < 3) {
            if (uVar12 == uVar13) {
              auStack_254[uVar10 + 1] = uVar13 + 2;
            }
          }
          else {
            while( true ) {
              uVar14 = 3;
              do {
                uVar2 = 0;
                if (uVar14 != 0) {
                  uVar2 = uVar12 / uVar14;
                }
                if (uVar12 == uVar2 * uVar14) goto LAB__text__005756f0;
                uVar14 = uVar14 + 2;
              } while ((int)uVar14 <= (int)SQRT((double)uVar6));
              if (uVar12 != uVar13) break;
LAB__text__005756f0:
              uVar12 = uVar12 + 2;
              auStack_254[uVar10 + 1] = uVar12;
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5 << 2);
    }
    if (uVar5 != 0) {
      iVar7 = 0;
      uVar10 = 0;
      do {
        iVar9 = (int)uVar10;
        local_350[iVar9 + 1] = auStack_254[(ulong)(uVar5 + iVar7) + 1];
        uVar12 = auStack_254[(ulong)(uVar5 * 2 + iVar7) + 1];
        local_350[uVar10 & 0xffffffff] = *(uint *)((long)auStack_254 + uVar10 + 4);
        local_350[iVar9 + 2] = uVar12;
        uVar12 = uVar5 * 3 + iVar7;
        uVar10 = uVar10 + 4;
        iVar7 = iVar7 + 1;
        local_350[iVar9 + 3] = auStack_254[(ulong)uVar12 + 1];
      } while (uVar8 * 4 != uVar10);
      if (uVar5 != 0) {
        uVar10 = 0;
        fVar15 = *(float *)(*(long *)(param_1 + 0x158) + 0xc0) / (float)uVar8;
        fVar16 = *(float *)(*(long *)(param_1 + 0x158) + 0xc4) * 2.3283064e-12 * fVar15;
        if (uVar8 == 1) {
          fVar17 = 8.483689e+07;
        }
        else {
          uVar12 = 0x1bc0f99;
          uVar6 = uVar10;
          do {
            uVar13 = uVar12 * 0xbb38435 + 0x3619636b;
            uVar12 = uVar13 * 0xbb38435 + 0x3619636b;
            uVar10 = uVar6 + 2;
            local_390[uVar6] = fVar15 + (float)uVar13 * fVar16;
            local_390[uVar6 + 1] = fVar15 + (float)uVar12 * fVar16;
            uVar6 = uVar10;
          } while ((uVar8 & 0xfffffffe) != uVar10);
          fVar17 = (float)(uVar12 * 0xbb38435 + 0x3619636b);
        }
        if ((uVar5 & 1) != 0) {
          local_390[uVar10] = fVar16 * fVar17 + fVar15;
        }
        if (uVar5 != 0) {
          uVar10 = 0;
          fVar15 = (float)uVar11 * 0.001;
          if (uVar8 != 1) {
            uVar6 = uVar10;
            do {
              uVar10 = uVar6 + 2;
              fVar16 = local_390[uVar6 + 1];
              local_3d0[uVar6] = (int)(fVar15 * local_390[uVar6]);
              local_3d0[uVar6 + 1] = (int)(fVar15 * fVar16);
              uVar6 = uVar10;
            } while ((uVar8 & 0xfffffffe) != uVar10);
          }
          if ((uVar5 & 1) != 0) {
            local_3d0[uVar10] = (int)(fVar15 * local_390[uVar10]);
          }
          if (uVar5 != 0) {
            lVar3 = 0;
            uVar10 = 0;
            uVar8 = 0;
            do {
              uVar4 = FUN__text__0057d354(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                                          *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),
                                          *(long *)(param_1 + 0x140) + lVar3,param_2,
                                          local_350 + (uVar10 & 0xfffffffc),
                                          *(undefined4 *)(param_1 + 0x130));
              if ((int)uVar4 != 1) {
                return uVar4;
              }
              uVar4 = FUN__text__0057c744(*(long *)(param_1 + 0x140) + lVar3 + 0x90,param_2,
                                          *(undefined4 *)((long)local_3d0 + uVar10));
              if ((int)uVar4 != 1) {
                return uVar4;
              }
              uVar8 = uVar8 + 1;
              uVar10 = uVar10 + 4;
              lVar3 = lVar3 + 0xa8;
            } while (uVar8 < *(uint *)(param_1 + 0x128));
          }
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


