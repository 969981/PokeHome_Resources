/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2c20; name: FUN_.text__005e2c20
 */


long FUN__text__005e2c20(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                        long param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  lVar10 = *param_1;
  lVar2 = lVar10 + (param_2 - lVar10 & 0xffffffffffffff80U);
  if (param_5 < 1) {
    return lVar2;
  }
  lVar14 = param_2 - lVar10 >> 7;
  lVar4 = param_1[1];
  if (param_5 <= param_1[2] - lVar4 >> 7) {
    lVar6 = lVar4 - lVar2 >> 7;
    if (lVar6 < param_5) {
      puVar11 = param_3 + lVar6 * 0x10;
      lVar6 = lVar4;
      if (puVar11 != param_4) {
        uVar12 = tpidr_el0;
        lVar13 = lVar4 + 0x20;
        uVar12 = uVar12 & 0xffffffffffffe000;
        lVar7 = *(long *)(uVar12 + 0x98);
        puVar15 = puVar11;
        do {
          if (lVar7 == 0x10) goto LAB__text__005e2fc8;
          *(long *)((uVar12 | 0x18) + lVar7 * 8) = param_1[3];
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          *(undefined8 *)(lVar13 + -0x10) = 0;
          *(undefined8 *)(lVar13 + -8) = 0;
          *(undefined8 *)(lVar13 + -0x20) = 0;
          *(undefined8 *)(lVar13 + -0x18) = 0;
          if ((code *)puVar15[2] != (code *)0x0) {
            (*(code *)puVar15[2])(puVar15 + 4,lVar13);
            uVar5 = puVar15[3];
            *(undefined8 *)(lVar13 + -0x18) = puVar15[1];
            *(undefined8 *)(lVar13 + -8) = uVar5;
            uVar5 = *puVar15;
            *(undefined8 *)(lVar13 + -0x10) = puVar15[2];
            *(undefined8 *)(lVar13 + -0x20) = uVar5;
          }
          puVar15 = puVar15 + 0x10;
          lVar13 = lVar13 + 0x80;
          lVar6 = lVar6 + 0x80;
          lVar7 = *(long *)(uVar12 + 0x98) + -1;
          *(long *)(uVar12 + 0x98) = lVar7;
        } while (puVar15 != param_4);
      }
      param_1[1] = lVar6;
      if (lVar4 - lVar2 < 1) {
        return lVar2;
      }
    }
    else {
      puVar11 = param_3 + param_5 * 0x10;
    }
    FUN__text__005e2fe0(param_1,lVar2,lVar4,lVar2 + param_5 * 0x80);
    if (puVar11 == param_3) {
      return lVar2;
    }
    lVar10 = lVar10 + lVar14 * 0x80 + 0x20;
    do {
      pcVar9 = *(code **)(lVar10 + -0x18);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar10 + -0x10) = 0;
        *(undefined8 *)(lVar10 + -8) = 0;
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)(lVar10 + -0x18) = 0;
        (*pcVar9)(lVar10);
      }
      if ((code *)param_3[2] != (code *)0x0) {
        (*(code *)param_3[2])(param_3 + 4,lVar10);
        uVar5 = param_3[3];
        *(undefined8 *)(lVar10 + -0x18) = param_3[1];
        *(undefined8 *)(lVar10 + -8) = uVar5;
        uVar5 = *param_3;
        *(undefined8 *)(lVar10 + -0x10) = param_3[2];
        *(undefined8 *)(lVar10 + -0x20) = uVar5;
      }
      param_3 = param_3 + 0x10;
      lVar10 = lVar10 + 0x80;
    } while (param_3 != puVar11);
    return lVar2;
  }
  uVar12 = param_5 + (lVar4 - lVar10 >> 7);
  if (uVar12 >> 0x39 != 0) {
    FUN__text__001187a4(param_1);
                    /* WARNING: Does not return */
    pcVar9 = (code *)UndefinedInstructionException(0,0x5e2fd4);
    (*pcVar9)();
  }
  uVar3 = param_1[2] - lVar10;
  plVar1 = param_1 + 3;
  uVar8 = (long)uVar3 >> 6;
  if (uVar8 <= uVar12) {
    uVar8 = uVar12;
  }
  if (0x7fffffffffffff7f < uVar3) {
    uVar8 = 0x1ffffffffffffff;
  }
  local_68 = plVar1;
  if (uVar8 != 0) {
    local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar8 << 7,0x10);
    if (local_88 != 0) goto LAB__text__005e2ce4;
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
  local_88 = 0;
LAB__text__005e2ce4:
  local_80 = (undefined8 *)(local_88 + lVar14 * 0x80);
  lVar10 = param_5 * 0x80;
  param_3 = param_3 + 4;
  local_70 = local_88 + uVar8 * 0x80;
  uVar12 = tpidr_el0;
  puVar15 = local_80 + param_5 * 0x10;
  uVar12 = uVar12 & 0xffffffffffffe000;
  puVar11 = local_80 + 4;
  lVar4 = *(long *)(uVar12 + 0x98);
  while (lVar4 != 0x10) {
    *(long *)((uVar12 | 0x18) + lVar4 * 8) = *local_68;
    *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
    puVar11[-2] = 0;
    puVar11[-1] = 0;
    puVar11[-4] = 0;
    puVar11[-3] = 0;
    if ((code *)param_3[-2] != (code *)0x0) {
      (*(code *)param_3[-2])(param_3,puVar11);
      uVar5 = param_3[-1];
      puVar11[-3] = param_3[-3];
      puVar11[-1] = uVar5;
      uVar5 = param_3[-4];
      puVar11[-2] = param_3[-2];
      puVar11[-4] = uVar5;
    }
    lVar10 = lVar10 + -0x80;
    puVar11 = puVar11 + 0x10;
    param_3 = param_3 + 0x10;
    lVar4 = *(long *)(uVar12 + 0x98) + -1;
    *(long *)(uVar12 + 0x98) = lVar4;
    if (lVar10 == 0) {
      local_78 = puVar15;
      lVar2 = FUN__text__005e31a0(param_1,&local_88,lVar2);
      puVar11 = local_80;
      while (puVar15 = local_78, puVar15 != puVar11) {
        local_78 = puVar15 + -0x10;
        pcVar9 = (code *)puVar15[-0xf];
        if (pcVar9 != (code *)0x0) {
          puVar15[-0xe] = 0;
          puVar15[-0xd] = 0;
          *local_78 = 0;
          puVar15[-0xf] = 0;
          (*pcVar9)(puVar15 + -0xc);
        }
      }
      if (local_88 != 0) {
        local_78 = puVar15;
        (**(code **)(*(long *)*local_68 + 0x18))
                  ((long *)*local_68,local_88,local_70 - local_88,0x10);
      }
      return lVar2;
    }
  }
LAB__text__005e2fc8:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


