/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488610; name: FUN_.text__00488610
 */


void FUN__text__00488610(ulong param_1,ulong param_2,long param_3,int param_4,long param_5,
                        uint param_6,long param_7)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float *pfVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  void *__s;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_d8 [2];
  float afStack_d0 [3];
  int local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  int local_94;
  long local_90;
  size_t local_88;
  ulong local_80;
  long local_78;
  
  uVar25 = param_2 & 0xff;
  cVar4 = *(char *)(uVar25 + 0x73b748);
  local_94 = param_4;
  local_90 = param_5;
  lVar10 = FUN__text__00482470((int)cVar4);
  if (lVar10 != 0) {
    iVar23 = (int)cVar4;
    uVar3 = *(uint *)((long)iVar23 * 4 + 0x73b734);
    uVar24 = (uint)param_2;
    __s = (void *)((long)afStack_d0 - ((ulong)(uVar3 * 4 + 0xc) & 0xfffffff0));
    uVar13 = (ulong)((uVar24 & 0xff) * 4 + 0xc) & 0x7f0;
    uVar11 = param_1 & 0xff;
    if (uVar11 != 0) {
      local_88 = (ulong)uVar3 << 2;
      if (param_6 == 0) {
        param_1 = param_1 & 0xff;
        do {
          memset(__s,0,local_88);
          FUN__text__004826c0(iVar23,__s,param_7);
          param_7 = param_7 + ((ulong)((uVar24 & 0xff) * 4 + 0xc) & 0x7f0);
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
      else if ((param_2 & 0xff) == 0) {
        do {
          memset(__s,0,local_88);
          FUN__text__004826c0(iVar23,__s,param_7);
          param_7 = param_7 + ((ulong)((uVar24 & 0xff) * 4 + 0xc) & 0x7f0);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      else {
        local_a0 = (ulong)((uVar24 & 0xff) + 3 & 0x1fc);
        local_a8 = param_1 & 0xff;
        local_b0 = (ulong)param_6;
        uVar11 = param_2 & 3;
        local_80 = 0;
        local_78 = uVar25 - uVar11;
        uVar24 = uVar3;
        if (uVar3 < 2) {
          uVar24 = 1;
        }
        local_b8 = (ulong)((int)uVar25 * 4 + 0xc) & 0x7f0;
        fVar29 = 1.0 / (float)uVar3;
        local_c4 = iVar23;
        local_c0 = param_7;
        do {
          memset(__s,0,local_88);
          lVar9 = local_90;
          iVar8 = local_94;
          uVar7 = local_b0;
          lVar6 = local_c0;
          iVar23 = local_c4;
          uVar14 = 0;
          uVar15 = 0;
          lVar12 = local_80 * local_a0;
          do {
            lVar19 = local_78;
            fVar26 = *(float *)(lVar9 + uVar15 * 4);
            if (uVar25 - 1 < 3) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              lVar2 = param_3 + uVar14 * 4;
              lVar22 = 8;
              do {
                pfVar18 = (float *)(lVar2 + lVar22);
                lVar1 = lVar17 * 4;
                pfVar5 = (float *)((long)__s + (lVar22 - uVar13));
                fVar28 = pfVar18[1];
                fVar27 = pfVar18[-2];
                lVar17 = lVar17 + 4;
                lVar22 = lVar22 + 0x10;
                *pfVar5 = *pfVar18 * fVar26;
                pfVar5[1] = fVar28 * fVar26;
                fVar28 = *(float *)(lVar2 + lVar1 + 4);
                pfVar5[-2] = fVar27 * fVar26;
                pfVar5[-1] = fVar28 * fVar26;
              } while (lVar19 != lVar17);
            }
            if (uVar11 != 0) {
              lVar19 = lVar17 * 4 + uVar14 * 4;
              pfVar18 = (float *)((long)__s + (lVar17 * 4 - uVar13));
              uVar16 = uVar11;
              do {
                pfVar5 = (float *)(param_3 + lVar19);
                lVar19 = lVar19 + 4;
                uVar16 = uVar16 - 1;
                *pfVar18 = *pfVar5 * fVar26;
                pfVar18 = pfVar18 + 1;
              } while (uVar16 != 0);
            }
            uVar16 = 0;
            do {
              fVar26 = 0.0;
              lVar19 = 0;
              if (uVar25 != 1) {
                uVar21 = uVar16 & 0xffffffff;
                do {
                  lVar17 = uVar21 * 4;
                  pfVar18 = (float *)((long)__s + (lVar19 * 4 - uVar13));
                  lVar19 = lVar19 + 2;
                  iVar20 = (int)uVar21;
                  uVar21 = (ulong)(iVar20 + uVar3 * 2);
                  fVar26 = fVar26 + *(float *)(lVar10 + lVar17) * fVar29 * *pfVar18 +
                           *(float *)(lVar10 + (ulong)(uVar3 + iVar20) * 4) * fVar29 * pfVar18[1];
                } while (uVar25 - (param_2 & 1) != lVar19);
              }
              if ((param_2 & 1) == 0) {
                if (ABS(*(float *)((long)__s + uVar16 * 4)) < ABS(fVar26)) {
LAB__text__004888f8:
                  *(float *)((long)__s + uVar16 * 4) = fVar26;
                }
              }
              else {
                fVar26 = fVar26 + fVar29 * *(float *)((long)__s + (lVar19 * 4 - uVar13)) *
                                           *(float *)(lVar10 + (ulong)((int)uVar16 +
                                                                      uVar3 * (int)lVar19) * 4);
                if (ABS(*(float *)((long)__s + uVar16 * 4)) < ABS(fVar26)) goto LAB__text__004888f8;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar24);
            uVar15 = uVar15 + 1;
            uVar14 = (ulong)(uint)((int)uVar14 + iVar8);
          } while (uVar15 != uVar7);
          FUN__text__004826c0(iVar23,__s,lVar6 + lVar12 * 4);
          param_3 = param_3 + local_b8;
          local_80 = local_80 + 1;
        } while (local_80 != local_a8);
      }
    }
  }
  return;
}


