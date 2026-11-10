/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002dd250; name: FUN_.text__002dd250
 */


long FUN__text__002dd250(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar8 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x70);
  uVar4 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar4 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x19 - 1;
  }
  if (uVar4 == uVar8) {
    FUN__text__002dd490(param_1);
    uVar8 = *(long *)(param_1 + 0x80) + *(long *)(param_1 + 0x70);
    lVar2 = *(long *)(param_1 + 8);
  }
  uVar4 = uVar8 / 0x19;
  uVar5 = (uVar8 + 1) / 0x19;
  if (uVar4 <= uVar5 && (uVar8 + 1) % 0x19 != 0) {
    uVar6 = lVar2 + uVar4 * 8;
    do {
      uVar6 = uVar6 + 8;
    } while (uVar6 <= lVar2 + uVar5 * 8);
  }
  if (*(long *)(param_1 + 0x10) == lVar2) {
    puVar9 = (undefined8 *)0x0;
    uVar8 = tpidr_el0;
    uVar8 = uVar8 & 0xffffffffffffe000;
    lVar2 = *(long *)(uVar8 + 0x98);
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(lVar2 + uVar4 * 8) + (uVar8 % 0x19) * 0xa0);
    uVar8 = tpidr_el0;
    uVar8 = uVar8 & 0xffffffffffffe000;
    lVar2 = *(long *)(uVar8 + 0x98);
  }
  if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar8 + lVar2 * 8 + 0x18) = *(undefined8 *)(param_1 + 0x90);
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  *puVar9 = *param_2;
  puVar9[1] = param_2[1];
  puVar9[2] = param_2[2];
  lVar2 = param_2[3];
  puVar9[3] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  puVar9[4] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[5] = 0;
  if ((code *)param_2[6] != (code *)0x0) {
    (*(code *)param_2[6])(param_2 + 8,puVar9 + 8);
    uVar3 = param_2[7];
    puVar9[5] = param_2[5];
    puVar9[7] = uVar3;
    uVar3 = param_2[4];
    puVar9[6] = param_2[6];
    puVar9[4] = uVar3;
  }
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  lVar2 = *(long *)(param_1 + 0x80) + 1;
  uVar8 = *(long *)(param_1 + 0x70) + lVar2;
  *(long *)(param_1 + 0x80) = lVar2;
  plVar1 = (long *)(*(long *)(param_1 + 8) + (uVar8 / 0x19) * 8);
  lVar7 = *plVar1;
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar2 = lVar7 + (uVar8 % 0x19) * 0xa0;
  }
  if (lVar2 == lVar7) {
    return plVar1[-1] + 0xf00;
  }
  return lVar2 + -0xa0;
}


