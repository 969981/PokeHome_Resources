/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00125f90; name: FUN_.text__00125f90
 */


void FUN__text__00125f90(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x70);
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x70);
    puVar2 = *(undefined8 **)(param_1 + 8);
    if ((uVar4 != 0) && ((uVar4 & 0x1ff) != 0)) {
      puVar5 = puVar2;
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 <= puVar2 + (uVar4 >> 9));
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = uVar4 + lVar3 >> 9;
    uVar10 = (long)puVar5 - (long)puVar2;
    uVar7 = (uVar10 & 0x3ffffffffffffff) >> 3;
    if ((uVar4 + lVar3 != uVar10 * 0x40 && (uVar10 & 7) != 0) && uVar8 <= uVar7) {
      puVar9 = puVar2 + uVar8;
      do {
        puVar9 = puVar9 + 1;
      } while (puVar9 <= puVar2 + uVar7);
    }
  }
  if (puVar5 == puVar2) {
LAB__text__00126064:
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  else {
    plVar11 = puVar2 + (uVar4 >> 9);
    plVar12 = (long *)(*plVar11 + (uVar4 & 0x1ff) * 8);
    plVar1 = (long *)(*(long *)((long)puVar2 + (uVar4 + lVar3 >> 6 & 0x3fffffffffffff8)) +
                     (uVar4 + lVar3 & 0x1ff) * 8);
    if (plVar12 == plVar1) goto LAB__text__00126064;
    do {
      if (*plVar12 != 0) {
        (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
        *plVar12 = 0;
      }
      plVar12 = plVar12 + 1;
      if ((long)plVar12 - *plVar11 == 0x1000) {
        plVar11 = plVar11 + 1;
        plVar12 = (long *)*plVar11;
      }
    } while (plVar12 != plVar1);
    puVar2 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  while (0x10 < uVar4) {
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),*puVar2,0x1000,8);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  uVar7 = uVar4 >> 3;
  if (uVar7 == 1) {
    uVar6 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB__text__0012612c;
    uVar6 = 0x200;
  }
  *(undefined8 *)(param_1 + 0x70) = uVar6;
LAB__text__0012612c:
  if ((uVar4 != 0) && ((uVar4 & 7) != 0)) {
    puVar5 = puVar2 + uVar7;
    do {
      puVar2 = puVar2 + 1;
    } while (puVar2 <= puVar5);
  }
  return;
}


