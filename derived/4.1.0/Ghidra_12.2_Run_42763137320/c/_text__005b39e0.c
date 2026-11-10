/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b39e0; name: FUN_.text__005b39e0
 */


void FUN__text__005b39e0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x38);
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    uVar6 = *(ulong *)(param_1 + 0x38);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if ((uVar6 != 0) && (uVar6 % 0x38 != 0)) {
      puVar8 = puVar2;
      do {
        puVar8 = puVar8 + 1;
      } while (puVar8 <= puVar2 + uVar6 / 0x38);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar1 = ((long)puVar8 - (long)puVar2) * 7;
    if (uVar6 + lVar4 != uVar1) {
      uVar10 = (uVar6 + lVar4) / 0x38;
      if (uVar10 <= uVar1 / 0x38 && uVar1 % 0x38 != 0) {
        puVar11 = puVar2 + uVar10;
        do {
          puVar11 = puVar11 + 1;
        } while (puVar11 <= puVar2 + uVar1 / 0x38);
      }
    }
  }
  if (puVar8 != puVar2) {
    lVar9 = puVar2[uVar6 / 0x38] + (uVar6 % 0x38) * 0x48;
    lVar4 = puVar2[(uVar6 + lVar4) / 0x38] + ((uVar6 + lVar4) % 0x38) * 0x48;
    if (lVar9 != lVar4) {
      plVar5 = puVar2 + uVar6 / 0x38;
      lVar7 = *plVar5;
      do {
        lVar9 = lVar9 + 0x48;
        if (lVar9 - lVar7 == 0xfc0) {
          plVar5 = plVar5 + 1;
          lVar7 = *plVar5;
          lVar9 = lVar7;
        }
      } while (lVar9 != lVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
  while (0x10 < uVar6) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))(*(long **)(param_1 + 0x48),*puVar2,0xfc0,8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    uVar6 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar6 >> 3 == 1) {
    uVar3 = 0x1c;
  }
  else {
    if (uVar6 >> 3 != 2) {
      return;
    }
    uVar3 = 0x38;
  }
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  return;
}


