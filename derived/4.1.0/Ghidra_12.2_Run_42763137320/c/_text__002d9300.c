/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9300; name: FUN_.text__002d9300
 */


void FUN__text__002d9300(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  
  lVar4 = *(long *)(param_1 + 0x80);
  if (lVar4 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x70);
    puVar1 = *(undefined8 **)(param_1 + 8);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x70);
    puVar1 = *(undefined8 **)(param_1 + 8);
    if ((uVar5 != 0) && (uVar5 % 0x19 != 0)) {
      puVar6 = puVar1;
      do {
        puVar6 = puVar6 + 1;
      } while (puVar6 <= puVar1 + uVar5 / 0x19);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = ((long)puVar6 - (long)puVar1 >> 3) * 0x19;
    if (uVar5 + lVar4 != uVar7) {
      uVar8 = (uVar5 + lVar4) / 0x19;
      if (uVar8 <= uVar7 / 0x19 && uVar7 % 0x19 != 0) {
        puVar9 = puVar1 + uVar8;
        do {
          puVar9 = puVar9 + 1;
        } while (puVar9 <= puVar1 + uVar7 / 0x19);
      }
    }
  }
  if (puVar6 != puVar1) {
    plVar10 = puVar1 + uVar5 / 0x19;
    lVar11 = *plVar10 + (uVar5 % 0x19) * 0xa0;
    lVar4 = puVar1[(uVar5 + lVar4) / 0x19] + ((uVar5 + lVar4) % 0x19) * 0xa0;
    if (lVar11 != lVar4) {
      do {
        pcVar2 = *(code **)(lVar11 + 0x28);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar11 + 0x30) = 0;
          *(undefined8 *)(lVar11 + 0x38) = 0;
          *(undefined8 *)(lVar11 + 0x20) = 0;
          *(undefined8 *)(lVar11 + 0x28) = 0;
          (*pcVar2)(lVar11 + 0x40);
        }
        if (*(long *)(lVar11 + 0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar11 + 0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar11 + 0x18) = 0;
        }
        lVar11 = lVar11 + 0xa0;
        if (lVar11 - *plVar10 == 4000) {
          plVar10 = plVar10 + 1;
          lVar11 = *plVar10;
        }
      } while (lVar11 != lVar4);
      puVar1 = *(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x80) = 0;
      uVar5 = *(long *)(param_1 + 0x10) - (long)puVar1;
      goto joined_r0x002d94c4;
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar5 = *(long *)(param_1 + 0x10) - (long)puVar1;
joined_r0x002d94c4:
  while (0x10 < uVar5) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),*puVar1,4000,0x10);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar1;
    uVar5 = *(long *)(param_1 + 0x10) - (long)puVar1;
  }
  if (uVar5 >> 3 == 1) {
    uVar3 = 0xc;
  }
  else {
    if (uVar5 >> 3 != 2) {
      return;
    }
    uVar3 = 0x19;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  return;
}


