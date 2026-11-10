/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00481ed0; name: FUN_.text__00481ed0
 */


void FUN__text__00481ed0(float param_1,float param_2,float param_3,uint param_4,uint param_5,
                        undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float afStack_88 [6];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float afStack_54 [6];
  float local_3c [5];
  float local_28 [6];
  
  *param_6 = 0x3f800000;
  pfVar5 = (float *)(param_6 + param_5);
  *pfVar5 = -param_1;
  pfVar5 = pfVar5 + param_5;
  *pfVar5 = param_2;
  pfVar5[param_5] = param_3;
  if (1 < param_4) {
    pfVar5 = pfVar5 + param_5 + param_5;
    fVar15 = param_2 * param_2;
    if (0.99 <= fVar15) {
      param_4 = param_4 + 1;
      if (2 < param_4) {
        uVar10 = 2;
        fVar15 = param_2;
        do {
          iVar8 = (int)uVar10;
          uVar10 = uVar10 + 1;
          do {
            *pfVar5 = 0.0;
            pfVar5 = pfVar5 + param_5;
          } while (pfVar5 < param_6 + iVar8 * param_5 * (int)uVar10);
          fVar15 = fVar15 * param_2;
          *pfVar5 = fVar15;
          pfVar5 = pfVar5 + param_5;
        } while (uVar10 != param_4);
      }
      do {
        *pfVar5 = 0.0;
        pfVar5 = pfVar5 + param_5;
      } while (pfVar5 < param_6 + param_4 * param_4 * param_5);
    }
    else {
      fVar14 = 1.0 - fVar15;
      fVar13 = SQRT(fVar14);
      param_3 = (1.0 / fVar13) * param_3;
      local_3c[0] = (1.0 / fVar13) * -param_1;
      if (param_4 < 4) {
        fVar17 = param_3 * param_3;
        fVar18 = local_3c[0] * local_3c[0];
        fVar16 = (param_3 + param_3) * local_3c[0];
        *pfVar5 = fVar14 * 0.8660254 * fVar16;
        pfVar5 = pfVar5 + param_5;
        *pfVar5 = param_2 * 1.7320508 * fVar13 * local_3c[0];
        pfVar5 = pfVar5 + param_5;
        *pfVar5 = fVar15 * 1.5 + -0.5;
        pfVar5 = pfVar5 + param_5;
        *pfVar5 = param_2 * 0.8660254 * fVar13 * (param_3 + param_3);
        pfVar5 = pfVar5 + param_5;
        *pfVar5 = fVar14 * 0.8660254 * (fVar17 - fVar18);
        if (param_4 == 3) {
          pfVar5 = pfVar5 + param_5;
          fVar19 = fVar13 * fVar14 * 0.7905694;
          fVar14 = param_2 * 1.9364917 * fVar14;
          fVar13 = (fVar15 * 5.0 * fVar13 - fVar13) * 0.61237246;
          *pfVar5 = fVar19 * local_3c[0] * (fVar17 * 3.0 - fVar18);
          pfVar5 = pfVar5 + param_5;
          pfVar6 = pfVar5 + param_5;
          *pfVar5 = fVar14 * fVar16;
          pfVar5 = pfVar6 + param_5;
          *pfVar6 = fVar13 * local_3c[0];
          pfVar6 = pfVar5 + param_5;
          *pfVar5 = param_2 * 0.5 * (fVar15 * 5.0 + -3.0);
          *pfVar6 = fVar13 * param_3;
          pfVar6[param_5] = fVar14 * (fVar17 - fVar18);
          (pfVar6 + param_5)[param_5] = fVar19 * param_3 * (fVar17 + fVar18 * -3.0);
        }
      }
      else {
        local_28[1] = param_3;
        local_28[0] = 1.0;
        if (2 < param_4 + 1) {
          pfVar5 = local_3c;
          lVar7 = (ulong)(param_4 + 1) - 2;
          pfVar6 = local_28 + 2;
          fVar15 = local_3c[0];
          fVar14 = param_3;
          do {
            pfVar5 = pfVar5 + 1;
            fVar15 = fVar14 * local_3c[0] + param_3 * fVar15;
            lVar7 = lVar7 + -1;
            fVar14 = (param_3 + param_3) * fVar14 - pfVar6[-2];
            *pfVar5 = fVar15;
            *pfVar6 = fVar14;
            pfVar6 = pfVar6 + 1;
          } while (lVar7 != 0);
        }
        uVar9 = param_5 * 5;
        local_58 = 1.0;
        iVar8 = param_5 * 6;
        afStack_54[0] = 0.0;
        afStack_54[1] = 0.0;
        afStack_54[2] = 0.0;
        afStack_54[3] = 0.0;
        afStack_54[4] = 0.0;
        uVar11 = param_5 * 7;
        afStack_88[4] = 0.0;
        local_70 = CONCAT44(fVar13,param_2);
        lVar7 = 0x73b6cc;
        local_68 = 0;
        local_60 = 0;
        afStack_88[0] = 0.0;
        afStack_88[1] = 0.0;
        afStack_88[2] = 0.0;
        afStack_88[3] = 0.0;
        uVar10 = 1;
        do {
          uVar1 = (int)uVar10 + 2;
          fVar15 = (float)((int)uVar10 << 1 | 1);
          uVar2 = uVar10 + 1;
          fVar14 = (fVar15 * param_2 * (float)local_70 - local_58 * (float)(uVar10 & 0xffffffff)) /
                   (float)(uVar2 & 0xffffffff);
          param_6[uVar1 * (int)uVar2 * param_5] = fVar14;
          if (uVar10 < 0xfffffffe) {
            lVar3 = 0;
            uVar4 = uVar11;
            uVar12 = uVar9;
            do {
              fVar16 = afStack_54[lVar3] + afStack_88[lVar3 + 6] * fVar13 * fVar15;
              fVar17 = *(float *)(lVar7 + lVar3 * 4);
              afStack_88[lVar3] = fVar16;
              fVar17 = fVar17 * fVar16;
              param_6[uVar4] = fVar17 * local_28[lVar3 + 1];
              pfVar5 = local_3c + lVar3;
              uVar10 = lVar3 + 2;
              uVar4 = uVar4 + param_5;
              lVar3 = lVar3 + 1;
              param_6[uVar12] = *pfVar5 * fVar17;
              uVar12 = uVar12 - param_5;
            } while (uVar10 < uVar1);
          }
          uVar9 = uVar9 + iVar8;
          uVar11 = uVar11 + iVar8;
          iVar8 = iVar8 + param_5 * 2;
          lVar7 = lVar7 + 0x14;
          afStack_54[3] = (float)local_60;
          afStack_54[4] = (float)((ulong)local_60 >> 0x20);
          local_58 = (float)local_70;
          afStack_54[0] = (float)((ulong)local_70 >> 0x20);
          afStack_54[1] = (float)local_68;
          afStack_54[2] = (float)((ulong)local_68 >> 0x20);
          local_70 = CONCAT44(afStack_88[0],fVar14);
          local_68 = CONCAT44(afStack_88[2],afStack_88[1]);
          local_60 = CONCAT44(afStack_88[4],afStack_88[3]);
          uVar10 = uVar2;
        } while (uVar2 != param_4);
      }
    }
  }
  return;
}


