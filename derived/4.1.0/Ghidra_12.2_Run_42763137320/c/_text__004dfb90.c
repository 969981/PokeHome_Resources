/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dfb90; name: FUN_.text__004dfb90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN__text__004dfb90(long *param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,
                           long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  ulong local_a0;
  ulong local_98 [4];
  undefined4 local_78;
  
  puVar12 = (ulong *)*param_2;
  if (*(int *)(param_2 + 1) == 3) {
    uVar14 = (uint)param_3[1];
    if ((uVar14 & 0xff) == 1 || *(char *)(param_5 + 0xd) != '\0') {
      if ((puVar12 != (ulong *)0x0) ||
         (puVar12 = (ulong *)FUN__text__004df44c(param_1,*param_4,0,3), puVar12 != (ulong *)0x0)) {
        uVar7 = *param_3;
        uVar9 = param_3[1];
        *(int *)(puVar12 + 0x15) = (int)param_3[2];
        puVar12[0x13] = uVar7;
        puVar12[0x14] = uVar9;
        *puVar12 = *param_4;
        puVar12[1] = param_4[1];
        uVar7 = param_4[2];
        uVar9 = param_4[3];
        uVar15 = param_4[5];
        puVar12[4] = param_4[4];
        puVar12[5] = uVar15;
        puVar12[2] = uVar7;
        puVar12[3] = uVar9;
        uVar7 = param_4[6];
        uVar9 = param_4[7];
        uVar15 = param_4[9];
        puVar12[8] = param_4[8];
        puVar12[9] = uVar15;
        puVar12[6] = uVar7;
        puVar12[7] = uVar9;
        puVar12[10] = param_4[10];
        if (puVar12[0xc] != 0) {
          *(undefined4 *)(puVar12 + 0xd) = 0;
          (**(code **)(*(long *)puVar12[0xb] + 0x18))();
          puVar12[0xc] = 0;
          *(undefined4 *)((long)puVar12 + 0x6c) = 0;
        }
        puVar12[0xc] = param_4[0xc];
        puVar12[0xb] = param_4[0xb];
        *(int *)(puVar12 + 0xd) = (int)param_4[0xd];
        *(undefined4 *)((long)puVar12 + 0x6c) = *(undefined4 *)((long)param_4 + 0x6c);
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        *(int *)(puVar12 + 0xe) = (int)param_4[0xe];
        if ((puVar12[0x10] != 0) && ((char)puVar12[0x11] != '\0')) {
          (**(code **)(*(long *)puVar12[0xf] + 0x18))();
          *(undefined1 *)(puVar12 + 0x11) = 0;
        }
        puVar12[0x10] = 0;
        puVar12[0x10] = param_4[0x10];
        puVar12[0xf] = param_4[0xf];
        param_4[0x10] = 0;
        *(char *)(puVar12 + 0x11) = (char)param_4[0x11];
        *(undefined1 *)(param_4 + 0x11) = 0;
        *(char *)(puVar12 + 0x12) = (char)param_4[0x12];
      }
    }
    else {
      uVar9 = (ulong)(uVar14 + ((int)(uVar14 << 0x10) >> 0x1f));
      uVar7 = (ulong)(uVar14 >> 0xc) & 0x637;
      uVar15 = uVar9 & 0xff;
      uVar14 = (uint)uVar15;
      puVar13 = (ulong *)((long)local_98 + -(ulong)(uVar14 << 4) + -8);
      puVar16 = (undefined4 *)((long)puVar13 - ((ulong)(uVar14 * 4 + 0xf) & 0x7f0));
      local_98[2] = param_4[3];
      local_98[3] = param_4[4];
      local_78 = (undefined4)param_4[5];
      local_98[0] = param_4[1];
      local_98[1] = param_4[2];
      FUN__text__004889c0(*(undefined4 *)((long)param_4 + 0x2c),local_98,
                          *(undefined1 *)((long)param_4 + 0x4c),
                          (ulong)((int)uVar7 != 0) << 8 | uVar7 << 0xc | uVar9 & 0xff,puVar13,
                          puVar16);
      auVar19._0_4_ = (float)uVar15;
      auVar19._4_4_ = auVar19._0_4_;
      auVar19._8_4_ = auVar19._0_4_;
      auVar19._12_4_ = auVar19._0_4_;
      uVar4 = (undefined1)param_4[0x12];
      auVar19 = NEON_frsqrte(auVar19,4);
      fVar20 = *(float *)(param_4 + 10) * auVar19._0_4_;
      fVar21 = *(float *)((long)param_4 + 0x54) * auVar19._0_4_;
      if (puVar12 == (ulong *)0x0) {
        if (uVar14 != 0) {
          uVar7 = 0;
          local_a0 = uVar15;
          do {
            lVar10 = FUN__text__004df44c(param_1,*param_4,uVar7 & 0xffffffff,3);
            if (lVar10 != 0) {
              if ((int)param_4[0xd] == 0) goto LAB__text__004dff40;
              *(undefined4 *)(lVar10 + 0x68) = 0;
              *(undefined1 **)(lVar10 + 0x58) = &DAT_008ab078;
              uVar14 = (uint)param_4[0xd];
              if (*(uint *)(lVar10 + 0x6c) < uVar14) {
                if (*(long *)(lVar10 + 0x60) == 0) {
                  lVar6 = (**(code **)(_DAT_008ab078 + 0x10))
                                    (&DAT_008ab078,(ulong)uVar14 * 0x18,0x70d345,0xcc);
                  if (lVar6 != 0) {
                    if ((*(long *)(lVar10 + 0x60) != 0) && (*(long *)(lVar10 + 0x60) != lVar6)) {
                      (**(code **)(**(long **)(lVar10 + 0x58) + 0x18))();
                    }
                    goto LAB__text__004e0070;
                  }
                }
                else {
                  lVar6 = (**(code **)(_DAT_008ab078 + 0x28))();
                  if (lVar6 != 0) {
LAB__text__004e0070:
                    *(long *)(lVar10 + 0x60) = lVar6;
                    *(uint *)(lVar10 + 0x6c) = uVar14;
                    goto LAB__text__004e0078;
                  }
                }
              }
              else {
LAB__text__004e0078:
                *(uint *)(lVar10 + 0x68) = uVar14;
                if ((int)param_4[0xd] != 0) {
                  lVar6 = 0;
                  uVar9 = 0;
                  do {
                    uVar9 = uVar9 + 1;
                    puVar1 = (undefined8 *)(param_4[0xc] + lVar6);
                    puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x60) + lVar6);
                    lVar6 = lVar6 + 0x18;
                    uVar3 = *puVar1;
                    uVar11 = puVar1[2];
                    puVar2[1] = puVar1[1];
                    puVar2[2] = uVar11;
                    *puVar2 = uVar3;
                  } while (uVar9 < (uint)param_4[0xd]);
                }
              }
LAB__text__004dff40:
              uVar15 = *param_3;
              uVar9 = param_3[2];
              uVar18 = puVar16[uVar7];
              uVar5 = *(undefined2 *)((long)param_3 + 0x12);
              *(undefined4 *)(lVar10 + 0xa0) = 0x4101;
              *(ushort *)(lVar10 + 0xa8) = (ushort)uVar9;
              *(undefined2 *)(lVar10 + 0xaa) = uVar5;
              *(ulong *)(lVar10 + 0x98) = uVar15 + uVar7 * 4 * (ulong)(ushort)uVar9;
              *(undefined4 *)(lVar10 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
              uVar9 = (puVar13 + uVar7 * 2)[1];
              uVar15 = puVar13[uVar7 * 2];
              *(float *)(lVar10 + 0x50) = fVar20;
              *(float *)(lVar10 + 0x54) = fVar21;
              *(undefined1 *)(lVar10 + 0x90) = uVar4;
              *(ulong *)(lVar10 + 0x20) = uVar15;
              *(int *)(lVar10 + 0x28) = (int)uVar9;
              *(undefined4 *)(lVar10 + 0x2c) = uVar18;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != local_a0);
        }
        if (*(uint *)(param_1 + 1) != 0) {
          lVar10 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
          puVar12 = (ulong *)*param_1;
          do {
            if (*puVar12 == *param_4) goto LAB__text__004e00fc;
            puVar12 = puVar12 + 0x18;
            lVar10 = lVar10 + -0xc0;
          } while (lVar10 != 0);
        }
        puVar12 = (ulong *)0x0;
LAB__text__004e00fc:
        if (param_4[0xc] != 0) {
          *(undefined4 *)(param_4 + 0xd) = 0;
          (**(code **)(*(long *)param_4[0xb] + 0x18))();
          param_4[0xc] = 0;
          *(undefined4 *)((long)param_4 + 0x6c) = 0;
        }
      }
      else {
        uVar9 = *param_3;
        uVar7 = param_3[2];
        *(undefined4 *)(puVar12 + 0x14) = 0x4101;
        puVar12[0x13] = uVar9;
        *(int *)(puVar12 + 0x15) = (int)uVar7;
        uVar17 = *puVar16;
        uVar7 = *puVar13;
        uVar18 = *(undefined4 *)((long)param_3 + 0xc);
        *(undefined4 *)(puVar12 + 5) = *(undefined4 *)((long)local_98 + -(ulong)(uVar14 << 4));
        *(undefined4 *)((long)puVar12 + 0x2c) = uVar17;
        *(float *)(puVar12 + 10) = fVar20;
        *(float *)((long)puVar12 + 0x54) = fVar21;
        *(undefined1 *)(puVar12 + 0x12) = uVar4;
        puVar12[4] = uVar7;
        *(undefined4 *)((long)puVar12 + 0xa4) = uVar18;
        if (puVar12[0xc] != 0) {
          *(undefined4 *)(puVar12 + 0xd) = 0;
          (**(code **)(*(long *)puVar12[0xb] + 0x18))();
          puVar12[0xc] = 0;
          *(undefined4 *)((long)puVar12 + 0x6c) = 0;
        }
        puVar12[0xc] = param_4[0xc];
        puVar12[0xb] = param_4[0xb];
        *(int *)(puVar12 + 0xd) = (int)param_4[0xd];
        *(undefined4 *)((long)puVar12 + 0x6c) = *(undefined4 *)((long)param_4 + 0x6c);
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        if ((1 < uVar14) && (uVar14 = *(uint *)(param_1 + 1), uVar14 != 0)) {
          uVar7 = 1;
          do {
            if ((ulong)uVar14 != 0) {
              lVar10 = 0;
              do {
                if (*(ulong *)(*param_1 + lVar10) == (*param_4 | uVar7 << 0x38)) {
                  lVar10 = *param_1 + lVar10;
                  if ((int)puVar12[0xd] != 0) {
                    *(undefined8 *)(lVar10 + 0x58) = _DAT_008a47f0;
                    FUN__text__0044f220(lVar10,puVar12);
                  }
                  uVar8 = *param_3;
                  uVar9 = param_3[2];
                  uVar18 = puVar16[uVar7];
                  uVar5 = *(undefined2 *)((long)param_3 + 0x12);
                  *(undefined4 *)(lVar10 + 0xa0) = 0x4101;
                  *(ushort *)(lVar10 + 0xa8) = (ushort)uVar9;
                  *(undefined2 *)(lVar10 + 0xaa) = uVar5;
                  *(ulong *)(lVar10 + 0x98) = uVar8 + uVar7 * 4 * (ulong)(ushort)uVar9;
                  *(undefined4 *)(lVar10 + 0xa4) = *(undefined4 *)((long)param_3 + 0xc);
                  uVar9 = (puVar13 + uVar7 * 2)[1];
                  uVar8 = puVar13[uVar7 * 2];
                  *(float *)(lVar10 + 0x50) = fVar20;
                  *(float *)(lVar10 + 0x54) = fVar21;
                  *(undefined1 *)(lVar10 + 0x90) = uVar4;
                  *(ulong *)(lVar10 + 0x20) = uVar8;
                  *(int *)(lVar10 + 0x28) = (int)uVar9;
                  *(undefined4 *)(lVar10 + 0x2c) = uVar18;
                  break;
                }
                lVar10 = lVar10 + 0xc0;
              } while ((ulong)uVar14 * 0xc0 != lVar10);
            }
            uVar7 = uVar7 + 1;
            if (uVar7 == uVar15) {
              return puVar12;
            }
            uVar14 = *(uint *)(param_1 + 1);
          } while( true );
        }
      }
    }
  }
  else {
    if (puVar12 == (ulong *)0x0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
        puVar12 = (ulong *)FUN__text__004df570(param_1,*param_4,*(int *)(param_2 + 1));
      }
      else {
        puVar12 = (ulong *)FUN__text__004df44c(param_1,*param_4,0);
      }
      if (puVar12 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
    }
    uVar7 = *param_3;
    uVar9 = param_3[1];
    *(int *)(puVar12 + 0x15) = (int)param_3[2];
    puVar12[0x13] = uVar7;
    puVar12[0x14] = uVar9;
    uVar9 = param_4[5];
    uVar7 = param_4[2];
    uVar15 = param_4[3];
    puVar12[4] = param_4[4];
    puVar12[5] = uVar9;
    puVar12[2] = uVar7;
    puVar12[3] = uVar15;
    uVar9 = param_4[9];
    uVar7 = param_4[6];
    uVar15 = param_4[7];
    puVar12[8] = param_4[8];
    puVar12[9] = uVar9;
    puVar12[6] = uVar7;
    puVar12[7] = uVar15;
    puVar12[1] = param_4[1];
    puVar12[10] = param_4[10];
  }
  return puVar12;
}


