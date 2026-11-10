/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052ba80; name: FUN_.text__0052ba80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0052ba80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint *puVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8 [8];
  long local_b8 [9];
  
  uVar4 = FUN__text__00506a00();
  if (*(int *)(param_1 + 0xf8) != 0) {
    uVar10 = 0;
    uVar9 = 0;
    fVar14 = *(float *)(_DAT_008a45b0 + 0x84);
    do {
      if ((*(long *)(param_1 + 0x178 + uVar10 * 8) != -1) &&
         (lVar5 = FUN__text__0050c360(uVar4), lVar5 != 0)) {
        local_b8[uVar9] = lVar5;
        local_d8[uVar9] = (uint)uVar10;
        uVar9 = (ulong)((int)uVar9 + 1);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0xf8));
    uVar8 = (uint)uVar9;
    if (uVar8 != 0) {
      if (*(uint *)(param_1 + 0xf8) == uVar8) {
        lVar5 = 0;
        uVar11 = 1;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        plVar12 = local_b8;
        do {
          uVar3 = FUN__text__00520ce4(*plVar12,param_2,param_3,(long)&local_198 + lVar5);
          lVar5 = lVar5 + 0x18;
          uVar11 = uVar11 & (uVar3 ^ 1);
          plVar12 = plVar12 + 1;
        } while (uVar9 * 0x18 != lVar5);
        if (uVar11 != 0) {
          memcpy((void *)(param_1 + 0x20),&local_198,uVar9 * 0x18);
          return;
        }
      }
      iVar7 = 0;
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      do {
        fVar2 = 0.0;
        plVar12 = local_b8;
        puVar13 = local_d8;
        uVar10 = (ulong)uVar8;
        do {
          uVar11 = *puVar13;
          lVar5 = param_1 + 0x20;
          local_1c0 = 0.0;
          local_1b8 = 0.0;
          local_1c8 = 0.0;
          puVar1 = param_2;
          if (uVar11 != 0) {
            puVar1 = (undefined8 *)(lVar5 + (ulong)(uVar11 - 1) * 0x18);
          }
          local_198 = *puVar1;
          uStack_190 = puVar1[1];
          local_188 = puVar1[2];
          puVar1 = param_3;
          if (uVar11 != *(int *)(param_1 + 0xf8) - 1U) {
            puVar1 = (undefined8 *)(lVar5 + (ulong)(uVar11 + 1) * 0x18);
          }
          local_1b0 = *puVar1;
          uStack_1a8 = puVar1[1];
          local_1a0 = puVar1[2];
          FUN__text__00520ce4(*plVar12,&local_198,&local_1b0,&local_1c8);
          pdVar6 = (double *)(lVar5 + (ulong)uVar11 * 0x18);
          uVar10 = uVar10 - 1;
          dVar15 = *pdVar6;
          dVar16 = pdVar6[1];
          dVar17 = pdVar6[2];
          *pdVar6 = local_1c8;
          pdVar6[1] = local_1c0;
          pdVar6[2] = local_1b8;
          fVar2 = fVar2 + (float)((dVar15 - local_1c8) * (dVar15 - local_1c8) +
                                  (dVar16 - local_1c0) * (dVar16 - local_1c0) +
                                 (dVar17 - local_1b8) * (dVar17 - local_1b8));
          plVar12 = plVar12 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar10 != 0);
        iVar7 = iVar7 + 1;
      } while (fVar14 * 0.1 <= fVar2 && iVar7 != 8);
    }
  }
  return;
}


