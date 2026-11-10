/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d8f10; name: FUN_.text__002d8f10
 */


void FUN__text__002d8f10(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x70);
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x70);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if ((uVar4 != 0) && ((uVar4 & 0xf) != 0)) {
      puVar5 = puVar1;
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 <= puVar1 + (uVar4 >> 4));
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = uVar4 + lVar3 >> 4;
    uVar10 = (long)puVar5 - (long)puVar1;
    uVar7 = (uVar10 & 0x7fffffffffffffff) >> 3;
    if ((uVar4 + lVar3 != uVar10 * 2 && (uVar10 & 7) != 0) && uVar8 <= uVar7) {
      puVar9 = puVar1 + uVar8;
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 <= puVar1 + uVar7);
    }
  }
  if (puVar5 != puVar1) {
    plVar11 = puVar1 + (uVar4 >> 4);
    lVar12 = *plVar11 + (uVar4 & 0xf) * 0x120;
    lVar3 = *(long *)((long)puVar1 + (uVar4 + lVar3 >> 1 & 0x7ffffffffffffff8)) +
            (uVar4 + lVar3 & 0xf) * 0x120;
    if (lVar12 != lVar3) {
      do {
        pcVar2 = *(code **)(lVar12 + 0xa8);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar12 + 0xb0) = 0;
          *(undefined8 *)(lVar12 + 0xb8) = 0;
          *(undefined8 *)(lVar12 + 0xa0) = 0;
          *(undefined8 *)(lVar12 + 0xa8) = 0;
          (*pcVar2)(lVar12 + 0xc0);
        }
        pcVar2 = *(code **)(lVar12 + 0x28);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x20) = 0;
          *(undefined8 *)(lVar12 + 0x28) = 0;
          (*pcVar2)(lVar12 + 0x40);
        }
        if (*(long *)(lVar12 + 0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar12 + 0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar12 + 0x18) = 0;
        }
        lVar12 = lVar12 + 0x120;
        if (lVar12 - *plVar11 == 0x1200) {
          plVar11 = plVar11 + 1;
          lVar12 = *plVar11;
        }
      } while (lVar12 != lVar3);
      puVar1 = *(undefined8 **)(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  while (0x10 < uVar4) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),*puVar1,0x1200,0x10);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  uVar7 = uVar4 >> 3;
  if (uVar7 == 1) {
    uVar6 = 8;
  }
  else {
    if (uVar7 != 2) goto LAB__text__002d90d8;
    uVar6 = 0x10;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar6;
LAB__text__002d90d8:
  if ((uVar4 != 0) && ((uVar4 & 7) != 0)) {
    puVar5 = puVar1 + uVar7;
    do {
      puVar1 = puVar1 + 1;
    } while (puVar1 <= puVar5);
  }
  return;
}


