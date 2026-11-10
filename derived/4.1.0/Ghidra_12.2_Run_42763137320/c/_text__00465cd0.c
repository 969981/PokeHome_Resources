/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00465cd0; name: FUN_.text__00465cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00465cd0(undefined8 param_1,long *param_2,undefined4 *param_3,void *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_154;
  float afStack_150 [26];
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ulong auStack_c0 [6];
  ushort local_8e;
  float local_88;
  uint local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 2;
  uVar2 = *(undefined4 *)((long)param_4 + 0x70);
  uVar3 = *(undefined4 *)((long)param_4 + 0x74);
  plVar11 = (long *)((long)param_4 + 0x68);
  lVar9 = *plVar11;
  memcpy(afStack_150,param_4,200);
  *plVar11 = 0;
  *(undefined8 *)((long)param_4 + 0x70) = 0;
  local_e8 = lVar9;
  local_e0 = uVar2;
  uStack_dc = uVar3;
  if ((int)param_2[1] != 0) {
    plVar12 = (long *)*param_2;
    do {
      puVar7 = (undefined4 *)*plVar12;
      if ((*(char *)((long)puVar7 + 0xd) == '\x04') && (puVar7[2] == 7 || puVar7[2] == 0)) {
        uVar6 = FUN__text__0046d6c0(*puVar7);
        if ((uVar6 & 1) == 0) {
          puVar7 = (undefined4 *)*plVar12;
          goto LAB__text__00465de0;
        }
      }
      else {
LAB__text__00465de0:
        if ((0x4003fe718700U >> ((ulong)(uint)puVar7[2] & 0x3f) & 1) == 0) {
          uVar4 = *(uint *)((ulong)(uint)puVar7[2] * 4 + 0x73b3d8);
          uVar10 = (ulong)(uVar4 >> 6);
          uVar6 = 1L << ((ulong)uVar4 & 0x3f);
          if ((auStack_c0[uVar10] & uVar6) != 0) {
            local_154 = 0.0;
            FUN__text__00434be0(*_DAT_008a45f0,
                                (ulong)CONCAT14(*(undefined1 *)((long)puVar7 + 0xd),*puVar7),param_1
                                ,&local_154,0);
            fVar13 = local_154;
            lVar9 = *plVar12;
            if (*(float *)(lVar9 + 0x30) == local_154) {
              fVar15 = *(float *)(lVar9 + 0x38);
joined_r0x00465e8c:
              if (fVar15 == 3.4028235e+38) goto LAB__text__00465e90;
            }
            else {
              if (*(float *)(lVar9 + 0x34) == local_154) {
                fVar15 = *(float *)(lVar9 + 0x3c);
                goto joined_r0x00465e8c;
              }
LAB__text__00465e90:
              if (*(long *)(lVar9 + 0x18) == 0) {
                fVar15 = 0.0;
              }
              else {
                local_84 = *(uint *)(lVar9 + 0x28);
                local_88 = 0.0;
                FUN__text__0041a060(local_154,(long *)(lVar9 + 0x18),&local_84,&local_88);
                *(uint *)(lVar9 + 0x28) = local_84;
                fVar15 = local_88;
              }
              lVar1 = lVar9 + (ulong)*(byte *)(lVar9 + 0x14) * 4;
              *(byte *)(lVar9 + 0x14) = *(byte *)(lVar9 + 0x14) ^ 1;
              *(float *)(lVar1 + 0x30) = fVar13;
              *(float *)(lVar1 + 0x38) = fVar15;
              lVar9 = *plVar12;
            }
            uVar2 = *(undefined4 *)(lVar9 + 4);
            *param_3 = uVar2;
            uVar5 = *(uint *)(_DAT_008a4a70 + (ulong)uVar4 * 4);
            if (uVar5 != 0x1a) {
              if ((DAT_00ae9aa8 == 1) && ((auStack_c0[uVar10 + 2] & uVar6) != 0)) {
                if (fVar15 != 0.0) {
                  local_88 = (float)((uint)local_88 & 0xffffff00);
                  uVar8 = (uint)*(byte *)(param_3 + 1);
                  local_84 = 0;
                  if (uVar8 != 2) {
                    local_84 = (uint)*(byte *)((long)param_3 + 5) << 0x10;
                  }
                  local_84 = uVar4 & 0xff | uVar8 << 8 | local_84;
                  local_7c = 0;
                  if (uVar8 != 2) {
                    local_7c = param_3[2];
                  }
                  uStack_80 = uVar2;
                  lVar9 = FUN__text__004626a0(&local_e8,&local_84,&local_88);
                  if (lVar9 == 0) {
                    fVar15 = 0.0;
                    fVar13 = 0.0;
                    uVar10 = auStack_c0[uVar10 + 4];
                  }
                  else {
                    if (local_88._0_1_ == '\0') {
                      fVar13 = 0.0;
                    }
                    else {
                      fVar13 = *(float *)(lVar9 + 0xc);
                    }
                    fVar15 = fVar13 + fVar15;
                    *(float *)(lVar9 + 0xc) = fVar15;
                    uVar10 = auStack_c0[uVar10 + 4];
                  }
                  if (((uVar10 & uVar6) != 0) ||
                     ((fVar14 = afStack_150[uVar5], fVar13 == fVar14 && (fVar15 < fVar14)))) {
                    local_8e = local_8e | 0x400;
                  }
                  else if (fVar14 < fVar15) {
                    afStack_150[uVar5] = fVar15;
                  }
                }
              }
              else {
                afStack_150[uVar5] = afStack_150[uVar5] + fVar15;
              }
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8));
    if (*plVar11 != 0) {
      *(undefined4 *)((long)param_4 + 0x70) = 0;
      FUN__text__00400fc0(0);
    }
  }
  memcpy(param_4,afStack_150,200);
  *(long *)((long)param_4 + 0x68) = local_e8;
  *(undefined4 *)((long)param_4 + 0x70) = local_e0;
  *(undefined4 *)((long)param_4 + 0x74) = uStack_dc;
  return;
}


