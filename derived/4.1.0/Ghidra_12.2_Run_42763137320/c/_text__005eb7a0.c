/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005eb7a0; name: FUN_.text__005eb7a0
 */


void FUN__text__005eb7a0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 7)) {
    return;
  }
  if (param_2 >> 0x39 != 0) {
    FUN__text__001187a4(param_1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x5eb9b8);
    (*pcVar3)();
  }
  lVar6 = param_1[1] - *param_1 >> 7;
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 7,0x10);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
    puVar7 = (undefined8 *)(lVar6 * 0x80);
    lVar1 = param_2 * 0x80;
    puVar8 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == puVar8) goto LAB__text__005eb980;
  }
  else {
    puVar7 = (undefined8 *)(lVar1 + lVar6 * 0x80);
    lVar1 = lVar1 + param_2 * 0x80;
    puVar8 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == puVar8) {
LAB__text__005eb980:
      lVar6 = param_1[2];
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar7;
      param_1[2] = lVar1;
      goto joined_r0x005eb98c;
    }
  }
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  lVar6 = *(long *)(uVar9 + 0x98);
  puVar10 = puVar7;
  do {
    if (lVar6 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    puVar11 = puVar10 + -0x10;
    puVar12 = puVar5 + -0x10;
    *(long *)((uVar9 | 0x18) + lVar6 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    puVar10[-0xe] = 0;
    puVar10[-0xd] = 0;
    *puVar11 = 0;
    puVar10[-0xf] = 0;
    if ((code *)puVar5[-0xd] != (code *)0x0) {
      (*(code *)puVar5[-0xd])(puVar5 + -0xc,puVar10 + -0xc);
      uVar2 = puVar5[-0xf];
      puVar10[-0xd] = puVar5[-0xd];
      uVar4 = puVar5[-0xe];
      *puVar11 = *puVar12;
      puVar10[-0xf] = uVar2;
      puVar10[-0xe] = uVar4;
      pcVar3 = (code *)puVar5[-0xf];
      if (pcVar3 != (code *)0x0) {
        puVar5[-0xe] = 0;
        puVar5[-0xd] = 0;
        *puVar12 = 0;
        puVar5[-0xf] = 0;
        (*pcVar3)(puVar5 + -0xc);
      }
    }
    lVar6 = *(long *)(uVar9 + 0x98) + -1;
    *(long *)(uVar9 + 0x98) = lVar6;
    puVar5 = puVar12;
    puVar10 = puVar11;
  } while (puVar12 != puVar8);
  puVar5 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar6 = param_1[2];
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar7;
  param_1[2] = lVar1;
  while (puVar7 = puVar8, puVar7 != puVar5) {
    pcVar3 = (code *)puVar7[-0xf];
    puVar8 = puVar7 + -0x10;
    if (pcVar3 != (code *)0x0) {
      puVar7[-0xe] = 0;
      puVar7[-0xd] = 0;
      *puVar8 = 0;
      puVar7[-0xf] = 0;
      (*pcVar3)(puVar7 + -0xc);
    }
  }
joined_r0x005eb98c:
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005eb924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar5,lVar6 - (long)puVar5,0x10);
  return;
}


