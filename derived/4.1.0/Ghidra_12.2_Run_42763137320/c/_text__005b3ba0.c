/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3ba0; name: FUN_.text__005b3ba0
 */


long FUN__text__005b3ba0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar5 = 0;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    uVar5 = (*(long *)(param_1 + 0x10) - lVar2 >> 3) * 0x38 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
  if (uVar5 == uVar4) {
    FUN__text__005b3d60(param_1);
    uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 8);
  }
  uVar7 = (uVar4 + 1) / 0x38;
  uVar5 = uVar4 / 0x38;
  if (uVar5 <= uVar7 && (uVar4 + 1) % 0x38 != 0) {
    uVar9 = lVar2 + uVar5 * 8;
    do {
      uVar9 = uVar9 + 8;
    } while (uVar9 <= lVar2 + uVar7 * 8);
  }
  if (*(long *)(param_1 + 0x10) == lVar2) {
    puVar3 = (undefined8 *)0x0;
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    lVar2 = *(long *)(uVar5 + 0x98);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(lVar2 + uVar5 * 8) + (uVar4 % 0x38) * 0x48);
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    lVar2 = *(long *)(uVar5 + 0x98);
  }
  if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar5 + lVar2 * 8 + 0x18) = *(undefined8 *)(param_1 + 0x48);
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  uVar6 = *param_2;
  uVar8 = *param_3;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[6] = uVar6;
  puVar3[7] = uVar8;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  *(long *)(param_1 + 0x40) = lVar2;
  uVar5 = *(long *)(param_1 + 0x38) + lVar2;
  plVar1 = (long *)(*(long *)(param_1 + 8) + (uVar5 / 0x38) * 8);
  lVar10 = *plVar1;
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar2 = lVar10 + (uVar5 % 0x38) * 0x48;
  }
  if (lVar2 == lVar10) {
    return plVar1[-1] + 0xf78;
  }
  return lVar2 + -0x48;
}


