/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052a010; name: FUN_.text__0052a010
 */


void FUN__text__0052a010(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  while( true ) {
    if (uVar6 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        FUN__text__00400fc0(9);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      return;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x18);
    puVar12 = (undefined8 *)puVar9[1];
    if (uVar6 - 1 != 0) break;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar6 = 0;
LAB__text__0052a134:
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12);
      FUN__text__00400fc0(9,puVar12);
      uVar6 = *(uint *)(param_1 + 0x20);
    }
  }
  uVar7 = 0;
  uVar3 = (puVar9 + (ulong)(uVar6 - 1) * 2)[1];
  *puVar9 = puVar9[(ulong)(uVar6 - 1) * 2];
  puVar9[1] = uVar3;
  uVar6 = *(int *)(param_1 + 0x20) - 1;
  *(uint *)(param_1 + 0x20) = uVar6;
  uVar10 = 1;
  uVar8 = uVar7;
  uVar11 = 0;
  if (uVar6 < 2) goto LAB__text__0052a0a8;
  do {
    uVar8 = uVar7;
    uVar11 = uVar10;
    if (*(uint *)(*(long *)(param_1 + 0x18) + uVar7 * 0x10) <=
        *(uint *)(*(long *)(param_1 + 0x18) + uVar10 * 0x10)) {
      uVar11 = uVar7;
    }
LAB__text__0052a0a8:
    do {
      uVar1 = (int)uVar8 * 2 + 2;
      if ((uVar6 <= uVar1) ||
         (uVar7 = (ulong)uVar1,
         *(uint *)(*(long *)(param_1 + 0x18) + uVar11 * 0x10) <=
         *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar1 * 0x10))) {
        uVar7 = uVar11;
      }
      if ((int)uVar7 == (int)uVar8) goto LAB__text__0052a134;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 * 0x10);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar7 * 0x10);
      uVar4 = puVar2[1];
      uVar3 = *puVar9;
      uVar5 = puVar9[1];
      *puVar9 = *puVar2;
      puVar9[1] = uVar4;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + uVar7 * 0x10);
      *puVar9 = uVar3;
      puVar9[1] = uVar5;
      uVar6 = *(uint *)(param_1 + 0x20);
      uVar1 = (int)uVar7 << 1 | 1;
      uVar10 = (ulong)uVar1;
      uVar8 = uVar7;
      uVar11 = uVar7;
    } while (uVar6 <= uVar1);
  } while( true );
}


