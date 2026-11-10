/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e5010; name: FUN_.text__005e5010
 */


undefined8 *
FUN__text__005e5010(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  size_t __n;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (param_5 < 1) {
    return param_2;
  }
  puVar1 = (undefined8 *)param_1[1];
  if (param_5 <= param_1[2] - (long)puVar1 >> 3) {
    lVar6 = (long)puVar1 - (long)param_2 >> 3;
    puVar5 = puVar1;
    if (lVar6 < param_5) {
      puVar11 = param_3 + lVar6;
      if (puVar11 == param_4) {
        param_1[1] = (long)puVar1;
      }
      else {
        uVar8 = tpidr_el0;
        uVar8 = uVar8 & 0xffffffffffffe000;
        lVar6 = *(long *)(uVar8 + 0x98);
        puVar12 = puVar11;
        puVar13 = puVar1;
        do {
          if (lVar6 == 0x10) goto LAB__text__005e5370;
          puVar5 = puVar5 + 1;
          *(long *)((uVar8 | 0x18) + lVar6 * 8) = param_1[3];
          *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
          puVar14 = puVar12 + 1;
          *puVar13 = *puVar12;
          lVar6 = *(long *)(uVar8 + 0x98) + -1;
          *(long *)(uVar8 + 0x98) = lVar6;
          puVar12 = puVar14;
          puVar13 = puVar13 + 1;
        } while (puVar14 != param_4);
        param_1[1] = (long)puVar5;
      }
      if ((long)puVar1 - (long)param_2 < 1) {
        return param_2;
      }
      puVar12 = puVar5 + -param_5;
    }
    else {
      puVar11 = param_3 + param_5;
      puVar12 = puVar1 + -param_5;
    }
    puVar13 = puVar5;
    if (puVar12 < puVar1) {
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      lVar6 = *(long *)(uVar8 + 0x98);
      puVar14 = puVar5;
      do {
        if (lVar6 == 0x10) goto LAB__text__005e5370;
        *(long *)((uVar8 | 0x18) + lVar6 * 8) = param_1[3];
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
        puVar9 = puVar12 + 1;
        *puVar14 = *puVar12;
        lVar6 = *(long *)(uVar8 + 0x98) + -1;
        *(long *)(uVar8 + 0x98) = lVar6;
        puVar12 = puVar9;
        puVar13 = puVar14 + 1;
        puVar14 = puVar14 + 1;
      } while (puVar9 < puVar1);
    }
    param_1[1] = (long)puVar13;
    if (puVar5 != param_2 + param_5) {
      __n = (long)puVar5 - (long)(param_2 + param_5);
      memmove(puVar5 + -((long)__n >> 3),param_2,__n);
    }
    if ((long)puVar11 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar11 - (long)param_3);
    return param_2;
  }
  lVar6 = *param_1;
  uVar8 = param_5 + ((long)puVar1 - lVar6 >> 3);
  if (uVar8 >> 0x3d != 0) {
    FUN__text__005e4ff4(param_1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x5e537c);
    (*pcVar2)();
  }
  uVar4 = param_1[2] - lVar6;
  uVar7 = (long)uVar4 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 != 0) {
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 << 3,8);
    if (lVar3 != 0) goto LAB__text__005e50bc;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar3 = 0;
LAB__text__005e50bc:
  uVar8 = tpidr_el0;
  puVar1 = (undefined8 *)(lVar3 + ((long)param_2 - lVar6 >> 3) * 8);
  lVar6 = param_5 * 8;
  uVar8 = uVar8 & 0xffffffffffffe000;
  lVar10 = *(long *)(uVar8 + 0x98);
  puVar5 = puVar1 + param_5;
  uVar4 = uVar8 | 0x18;
  puVar11 = puVar1;
  do {
    if (lVar10 == 0x10) goto LAB__text__005e5370;
    lVar6 = lVar6 + -8;
    *(long *)(uVar4 + lVar10 * 8) = param_1[3];
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *puVar11 = *param_3;
    lVar10 = *(long *)(uVar8 + 0x98) + -1;
    *(long *)(uVar8 + 0x98) = lVar10;
    puVar11 = puVar11 + 1;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  puVar12 = (undefined8 *)*param_1;
  puVar11 = puVar1;
  if (puVar12 == param_2) {
    puVar12 = (undefined8 *)param_1[1];
  }
  else {
    puVar13 = param_2;
    do {
      if (lVar10 == 0x10) goto LAB__text__005e5370;
      *(long *)(uVar4 + lVar10 * 8) = param_1[3];
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      puVar13 = puVar13 + -1;
      puVar11 = puVar11 + -1;
      *puVar11 = *puVar13;
      lVar10 = *(long *)(uVar8 + 0x98) + -1;
      *(long *)(uVar8 + 0x98) = lVar10;
    } while (puVar13 != puVar12);
    puVar12 = (undefined8 *)param_1[1];
  }
  while( true ) {
    if (puVar12 == param_2) {
      lVar6 = *param_1;
      *param_1 = (long)puVar11;
      param_1[1] = (long)puVar5;
      lVar10 = param_1[2];
      param_1[2] = lVar3 + uVar7 * 8;
      if (lVar6 != 0) {
        (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar6,lVar10 - lVar6,8);
      }
      return puVar1;
    }
    if (lVar10 == 0x10) break;
    *(long *)(uVar4 + lVar10 * 8) = param_1[3];
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    *puVar5 = *param_2;
    lVar10 = *(long *)(uVar8 + 0x98) + -1;
    *(long *)(uVar8 + 0x98) = lVar10;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
LAB__text__005e5370:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


