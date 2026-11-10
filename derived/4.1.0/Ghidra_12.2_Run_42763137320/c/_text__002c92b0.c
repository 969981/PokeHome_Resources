/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c92b0; name: FUN_.text__002c92b0
 */


undefined8 * FUN__text__002c92b0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long *local_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    if (param_2 != puVar2) {
      puVar9 = puVar2 + -4;
      if (puVar9 < puVar2) {
        uVar10 = tpidr_el0;
        uVar10 = uVar10 & 0xffffffffffffe000;
        lVar13 = *(long *)(uVar10 + 0x98);
        puVar6 = puVar2;
        do {
          if (lVar13 == 0x10) goto LAB__text__002c95e4;
          *(long *)((uVar10 | 0x18) + lVar13 * 8) = param_1[3];
          *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
          uVar3 = *puVar9;
          uVar4 = puVar9[1];
          puVar12 = puVar9 + 2;
          uVar5 = puVar9[3];
          puVar9 = puVar9 + 4;
          puVar6[2] = *puVar12;
          puVar6[3] = uVar5;
          puVar12 = puVar6 + 4;
          *puVar6 = uVar3;
          puVar6[1] = uVar4;
          lVar13 = *(long *)(uVar10 + 0x98) + -1;
          *(long *)(uVar10 + 0x98) = lVar13;
          puVar6 = puVar12;
        } while (puVar9 < puVar2);
        param_1[1] = (long)puVar12;
      }
      else {
        param_1[1] = (long)puVar2;
      }
      if (puVar2 != param_2 + 4) {
        memmove(puVar2 + ((long)puVar2 - (long)(param_2 + 4) >> 5) * -4,param_2,
                (long)puVar2 - (long)(param_2 + 4));
      }
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar5;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      return param_2;
    }
    uVar10 = tpidr_el0;
    uVar10 = uVar10 & 0xffffffffffffe000;
    if (*(long *)(uVar10 + 0x98) != 0x10) {
      *(long *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = param_1[3];
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar5;
      *param_2 = uVar3;
      param_2[1] = uVar4;
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
      param_1[1] = (long)(param_2 + 4);
      return param_2;
    }
LAB__text__002c95e4:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar13 = *param_1;
  uVar10 = ((long)puVar2 - lVar13 >> 5) + 1;
  if (uVar10 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN__text__002c9298(param_1);
  }
  uVar8 = param_1[2] - lVar13;
  plVar1 = param_1 + 3;
  uVar11 = (long)uVar8 >> 4;
  if (uVar11 <= uVar10) {
    uVar11 = uVar10;
  }
  if (0x7fffffffffffffdf < uVar8) {
    uVar11 = 0x7ffffffffffffff;
  }
  local_48 = plVar1;
  if (uVar11 != 0) {
    local_68 = (undefined8 *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar11 << 5,8);
    if (local_68 != (undefined8 *)0x0) goto LAB__text__002c9408;
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
  local_68 = (undefined8 *)0x0;
LAB__text__002c9408:
  local_60 = local_68 + ((long)param_2 - lVar13 >> 5) * 4;
  local_50 = local_68 + uVar11 * 4;
  local_58 = local_60;
  FUN__text__002c95f0(&local_68,param_3);
  puVar2 = local_60;
  puVar6 = (undefined8 *)*param_1;
  uVar10 = tpidr_el0;
  puVar9 = local_60;
  if (puVar6 != param_2) {
    uVar11 = uVar10 & 0xffffffffffffe000;
    lVar13 = *(long *)(uVar11 + 0x98);
    puVar12 = local_60;
    puVar7 = param_2;
    do {
      if (lVar13 == 0x10) goto LAB__text__002c95e4;
      *(long *)((uVar11 | 0x18) + lVar13 * 8) = *plVar1;
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar14 = puVar7 + -4;
      uVar4 = puVar7[-3];
      uVar3 = puVar7[-2];
      uVar5 = puVar7[-1];
      puVar9 = puVar12 + -4;
      *puVar9 = *puVar14;
      puVar12[-2] = uVar3;
      puVar12[-1] = uVar5;
      puVar12[-3] = uVar4;
      lVar13 = *(long *)(uVar11 + 0x98) + -1;
      *(long *)(uVar11 + 0x98) = lVar13;
      puVar12 = puVar9;
      puVar7 = puVar14;
    } while (puVar14 != puVar6);
  }
  puVar12 = (undefined8 *)param_1[1];
  puVar6 = local_58;
  if (puVar12 != param_2) {
    uVar10 = uVar10 & 0xffffffffffffe000;
    lVar13 = *(long *)(uVar10 + 0x98);
    puVar7 = local_58;
    do {
      local_60 = puVar9;
      if (lVar13 == 0x10) goto LAB__text__002c95e4;
      *(long *)((uVar10 | 0x18) + lVar13 * 8) = *plVar1;
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
      uVar3 = *param_2;
      uVar4 = param_2[1];
      puVar6 = param_2 + 2;
      uVar5 = param_2[3];
      param_2 = param_2 + 4;
      puVar7[2] = *puVar6;
      puVar7[3] = uVar5;
      puVar6 = puVar7 + 4;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      lVar13 = *(long *)(uVar10 + 0x98) + -1;
      *(long *)(uVar10 + 0x98) = lVar13;
      puVar7 = puVar6;
    } while (param_2 != puVar12);
    param_2 = (undefined8 *)param_1[1];
  }
  local_68 = (undefined8 *)*param_1;
  *param_1 = (long)puVar9;
  param_1[1] = (long)puVar6;
  lVar13 = param_1[2];
  param_1[2] = (long)local_50;
  local_58 = param_2;
  if (param_2 != local_68) {
    local_58 = (undefined8 *)
               ((long)param_2 + ((long)local_68 + (0x1f - (long)param_2) & 0xffffffffffffffe0U));
  }
  if (local_68 != (undefined8 *)0x0) {
    local_60 = local_68;
    local_50 = (undefined8 *)lVar13;
    (**(code **)(*(long *)*local_48 + 0x18))((long *)*local_48,local_68,lVar13 - (long)local_68,8);
  }
  return puVar2;
}


