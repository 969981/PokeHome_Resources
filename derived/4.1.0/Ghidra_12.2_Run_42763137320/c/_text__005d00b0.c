/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d00b0; name: FUN_.text__005d00b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005d00b0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  
  puVar8 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar8 >> 5)) {
    puVar9 = puVar8;
    if (param_2 != 0) {
      uVar17 = tpidr_el0;
      puVar9 = puVar8 + param_2 * 4;
      uVar17 = uVar17 & 0xffffffffffffe000;
      lVar14 = *(long *)(uVar17 + 0x98);
      do {
        if (lVar14 == 0x10) goto LAB__text__005d0364;
        *(long *)((uVar17 | 0x18) + lVar14 * 8) = param_1[3];
        *(long *)(uVar17 + 0x98) = *(long *)(uVar17 + 0x98) + 1;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0xffffffffffffffff;
        puVar8[3] = 0;
        puVar8 = puVar8 + 4;
        lVar14 = *(long *)(uVar17 + 0x98) + -1;
        *(long *)(uVar17 + 0x98) = lVar14;
      } while (puVar8 != puVar9);
    }
    param_1[1] = (long)puVar9;
    return param_1;
  }
  lVar14 = (long)puVar8 - *param_1 >> 5;
  uVar17 = lVar14 + param_2;
  if (uVar17 >> 0x3b != 0) {
    FUN__text__005a0bf0(param_1);
    if ((*_DAT_008a5978 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(_DAT_008a5978);
      plVar7 = _DAT_008a5980;
      puVar8 = _DAT_008a5200;
      if (iVar6 != 0) {
        if ((*_DAT_008a51f8 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(_DAT_008a51f8);
          puVar9 = _DAT_0089f788;
          if (iVar6 != 0) {
            if ((*_DAT_0089f780 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(_DAT_0089f780);
              puVar5 = _DAT_0089f798;
              if (iVar6 != 0) {
                if ((*_DAT_0089f790 & 1) == 0) {
                  iVar6 = __cxa_guard_acquire(_DAT_0089f790);
                  puVar4 = _DAT_0089f4a0;
                  if (iVar6 != 0) {
                    if (((*_DAT_0089f498 & 1) == 0) &&
                       (iVar6 = __cxa_guard_acquire(_DAT_0089f498), iVar6 != 0)) {
                      *puVar4 = 0;
                      __cxa_guard_release(_DAT_0089f498);
                    }
                    *puVar5 = puVar4;
                    __cxa_guard_release(_DAT_0089f790);
                  }
                }
                *puVar9 = puVar5;
                __cxa_guard_release(_DAT_0089f780);
              }
            }
            *puVar8 = puVar9;
            __cxa_guard_release(_DAT_008a51f8);
          }
        }
        *plVar7 = (long)puVar8;
        __cxa_guard_release(_DAT_008a5978);
      }
    }
    return _DAT_008a5980;
  }
  uVar10 = param_1[2] - *param_1;
  uVar12 = (long)uVar10 >> 4;
  if (uVar12 <= uVar17) {
    uVar12 = uVar17;
  }
  if (0x7fffffffffffffdf < uVar10) {
    uVar12 = 0x7ffffffffffffff;
  }
  if (uVar12 != 0) {
    plVar7 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 5,8);
    if (plVar7 != (long *)0x0) goto LAB__text__005d0150;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  plVar7 = (long *)0x0;
LAB__text__005d0150:
  uVar17 = tpidr_el0;
  plVar16 = plVar7 + lVar14 * 4;
  uVar17 = uVar17 & 0xffffffffffffe000;
  plVar1 = plVar7 + uVar12 * 4;
  lVar14 = *(long *)(uVar17 + 0x98);
  plVar2 = plVar16 + param_2 * 4;
  plVar11 = plVar16;
  do {
    if (lVar14 == 0x10) goto LAB__text__005d0364;
    *(long *)((uVar17 | 0x18) + lVar14 * 8) = param_1[3];
    *(long *)(uVar17 + 0x98) = *(long *)(uVar17 + 0x98) + 1;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = -1;
    plVar11[3] = 0;
    plVar11 = plVar11 + 4;
    lVar14 = *(long *)(uVar17 + 0x98) + -1;
    *(long *)(uVar17 + 0x98) = lVar14;
  } while (plVar11 != plVar2);
  lVar15 = *param_1;
  lVar13 = param_1[1];
  if (lVar13 == lVar15) {
    *param_1 = (long)plVar16;
    param_1[1] = (long)plVar2;
    lVar15 = param_1[2];
    param_1[2] = (long)plVar1;
  }
  else {
    do {
      if (lVar14 == 0x10) {
LAB__text__005d0364:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long *)((uVar17 | 0x18) + lVar14 * 8) = param_1[3];
      *(long *)(uVar17 + 0x98) = *(long *)(uVar17 + 0x98) + 1;
      plVar16[-4] = *(long *)(lVar13 + -0x20);
      lVar14 = *(long *)(lVar13 + -0x18);
      *(undefined8 *)(lVar13 + -0x18) = 0;
      plVar16[-3] = lVar14;
      plVar16[-2] = *(long *)(lVar13 + -0x10);
      plVar16[-1] = *(long *)(lVar13 + -8);
      lVar14 = *(long *)(lVar13 + -0x18);
      *(undefined8 *)(lVar13 + -0x20) = 0;
      *(undefined8 *)(lVar13 + -0x18) = 0;
      plVar7 = (long *)0x0;
      if (lVar14 != 0) {
        plVar7 = (long *)(**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar13 + -0x10) = 0xffffffffffffffff;
      *(undefined8 *)(lVar13 + -8) = 0;
      lVar13 = lVar13 + -0x20;
      plVar16 = plVar16 + -4;
      lVar14 = *(long *)(uVar17 + 0x98) + -1;
      *(long *)(uVar17 + 0x98) = lVar14;
    } while (lVar13 != lVar15);
    lVar13 = *param_1;
    lVar14 = param_1[1];
    *param_1 = (long)plVar16;
    param_1[1] = (long)plVar2;
    lVar15 = param_1[2];
    param_1[2] = (long)plVar1;
    while (lVar3 = lVar14, lVar3 != lVar13) {
      lVar14 = lVar3 + -0x20;
      FUN__text__005b509c(lVar14);
      plVar7 = (long *)0x0;
      if (*(long *)(lVar3 + -0x18) != 0) {
        plVar7 = (long *)(**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + -0x18) = 0;
      }
    }
  }
  if (lVar13 == 0) {
    return plVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x005d0344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar7 = (long *)(**(code **)(*(long *)param_1[3] + 0x18))
                             ((long *)param_1[3],lVar13,lVar15 - lVar13,8);
  return plVar7;
}


