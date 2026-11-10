/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00565bd0; name: FUN_.text__00565bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00565bd0(long *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  size_t __nmemb;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  float fVar14;
  
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[6] = 0;
  }
  lVar5 = param_1[3];
  if ((*(int *)(lVar5 + 0x24) == 0) && (*(int *)(lVar5 + 0x18) != 0)) {
    uVar8 = 0;
    do {
      lVar9 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar5 + lVar9 + 0x28) = *(undefined4 *)(lVar9 + 0x73e890);
      lVar5 = param_1[3];
    } while (uVar8 < *(uint *)(lVar5 + 0x18));
  }
  uVar7 = (uint)param_2;
  if (*(int *)(lVar5 + 0x20) == 0) {
    uVar6 = (uVar7 & 0xffff7f00) >> 0xc;
    *(uint *)((long)param_1 + 0x264) = uVar7 + ((int)(uVar7 << 0x10) >> 0x1f) & 0xff;
    if (uVar6 < 0x607) goto LAB__text__00565ce0;
LAB__text__00565d58:
    if (uVar6 == 0x607) {
      uVar8 = CONCAT44(*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x18) + -4) >> 2;
      if ((uint)uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00565e50 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&UNK__text__00565e5c +
                          (ulong)*(byte *)((uVar8 & 0xffffffff) + 0x73e438) * 4))();
        return uVar4;
      }
      goto LAB__text__00565ee0;
    }
    if (uVar6 == 0x60f) {
      uVar8 = CONCAT44(*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x18) + -4) >> 2;
      if ((uint)uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00565d90 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&UNK__text__00565d9c +
                          (ulong)*(byte *)((uVar8 & 0xffffffff) + 0x73e434) * 4))();
        return uVar4;
      }
      goto LAB__text__00565ee0;
    }
  }
  else {
    uVar6 = (uint)(param_2 >> 0xc) & 0xfffff;
    *(uint *)((long)param_1 + 0x264) = uVar7 & 0xff;
    if (0x606 < uVar6) goto LAB__text__00565d58;
LAB__text__00565ce0:
    if (uVar6 == 3) {
      uVar8 = CONCAT44(*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x18) + -4) >> 2;
      if ((uint)uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00565e10 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&UNK__text__00565e1c +
                          (ulong)*(byte *)((uVar8 & 0xffffffff) + 0x73e43c) * 4))();
        return uVar4;
      }
      goto LAB__text__00565ee0;
    }
    if (uVar6 == 4) {
      uVar8 = CONCAT44(*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x18) + -4) >> 2;
      if ((uint)uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00565d18 */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&UNK__text__00565d24 +
                          (ulong)*(byte *)((uVar8 & 0xffffffff) + 0x73e440) * 4))();
        return uVar4;
      }
      goto LAB__text__00565ee0;
    }
  }
  uVar8 = CONCAT44(*(int *)(lVar5 + 0x18),*(int *)(lVar5 + 0x18) + -4) >> 2;
  if ((uint)uVar8 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00565dd0 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__00565ddc + (ulong)*(byte *)((uVar8 & 0xffffffff) + 0x73e444) * 4)
            )();
    return uVar4;
  }
LAB__text__00565ee0:
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
  uVar7 = (uint)(*(float *)(lVar5 + 0x1c) * fVar14);
  *(uint *)(param_1 + 9) = uVar7;
  if (uVar7 != 0) {
    lVar5 = (**(code **)(*(long *)param_1[4] + 0x10))
                      ((long *)param_1[4],(ulong)uVar7 << 2,0x7204b6,0x191);
    param_1[6] = lVar5;
    if (lVar5 == 0) {
      return 0x34;
    }
    param_1[7] = lVar5;
    param_1[8] = lVar5 + (ulong)*(uint *)(param_1 + 9) * 4;
    lVar5 = param_1[3];
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
    __nmemb = 0;
  }
  else {
    uVar8 = 0;
    do {
      fVar14 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x25c));
      uVar7 = (int)(*(float *)(lVar5 + 0x28 + uVar8 * 4) * 0.001 * fVar14) | 1;
      uVar3 = (ulong)uVar7;
      puVar10 = (uint *)((long)param_1 + uVar8 * 4 + 0x58);
      *puVar10 = uVar7;
      if (2 < (int)SQRT((double)uVar3)) {
        uVar6 = 3;
        do {
          while( true ) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar7 / uVar6;
            }
            if (uVar7 != uVar2 * uVar6) break;
            uVar7 = uVar7 + 2;
            uVar6 = 3;
            *puVar10 = uVar7;
          }
          uVar6 = uVar6 + 2;
        } while ((int)uVar6 <= (int)SQRT((double)uVar3));
      }
      __nmemb = (size_t)*(uint *)(lVar5 + 0x18);
      uVar8 = uVar8 + 1;
    } while (uVar8 < __nmemb);
  }
  qsort(param_1 + 0xb,__nmemb,4,(__compar_fn_t)&LAB__text__0056cc80);
  if (3 < *(uint *)(param_1[3] + 0x18)) {
    uVar8 = 0;
    plVar11 = param_1 + 0x16;
    plVar12 = param_1 + 0x23;
    piVar13 = (int *)((long)param_1 + 100);
    do {
      iVar1 = *piVar13;
      lVar5 = (**(code **)(*(long *)param_1[4] + 0x10))
                        ((long *)param_1[4],(ulong)(uint)(iVar1 << 2) << 2,0x7204b6,0x1bd);
      *plVar12 = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      plVar12[4] = lVar5;
      uVar8 = uVar8 + 1;
      plVar12[8] = lVar5 + (ulong)(uint)(iVar1 << 2) * 4;
      plVar11[-3] = lVar5 + (ulong)(uint)((iVar1 - piVar13[-3]) * 4) * 4;
      plVar11[-2] = *plVar12 + (ulong)((iVar1 - piVar13[-2]) * 4 | 1) * 4;
      plVar11[-1] = *plVar12 + (ulong)((iVar1 - piVar13[-1]) * 4 | 2) * 4;
      *plVar11 = *plVar12 + 0xc;
      plVar11 = plVar11 + 4;
      plVar12 = plVar12 + 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 < *(uint *)(param_1[3] + 0x18) >> 2);
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined1 *)(param_1[3] + 0x68) = 0;
  return 1;
}


