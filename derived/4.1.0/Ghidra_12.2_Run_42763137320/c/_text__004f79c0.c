/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f79c0; name: FUN_.text__004f79c0
 */


undefined8 * FUN__text__004f79c0(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x130);
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  if (0 < (int)*(uint *)(param_1 + 0x130)) {
    do {
      uVar7 = uVar6 - 1 & 0xffffffff;
      puVar4 = puVar5 + uVar7 * 0xc;
      uVar2 = *(uint *)(puVar4 + 1);
      if (uVar2 != 0) {
        puVar8 = (uint *)*puVar4;
        if (*puVar8 != 0xffffffff) {
          puVar9 = puVar8;
          uVar10 = uVar2;
          do {
            puVar11 = puVar9 + (uVar10 >> 1);
            uVar3 = *puVar11;
            if (uVar3 == param_2) goto LAB__text__004f7a58;
            puVar11 = puVar11 + 1;
            if (uVar3 >= param_2) {
              puVar11 = puVar9;
            }
            uVar3 = uVar10 - (uVar3 < param_2);
            uVar10 = uVar3 >> 1;
            puVar9 = puVar11;
          } while (1 < uVar3);
          puVar11 = puVar8 + uVar2;
LAB__text__004f7a58:
          if (puVar11 == puVar8 + uVar2) goto LAB__text__004f79ec;
        }
        uVar2 = *(uint *)(puVar5 + uVar7 * 0xc + 3);
        if (uVar2 != 0) {
          puVar8 = (uint *)puVar5[uVar7 * 0xc + 2];
          if (*puVar8 == 0xffffffff) {
            return puVar4;
          }
          puVar9 = puVar8;
          uVar10 = uVar2;
          do {
            puVar11 = puVar9 + (uVar10 >> 1);
            uVar3 = *puVar11;
            if (uVar3 == param_3) goto LAB__text__004f79e0;
            puVar11 = puVar11 + 1;
            if (uVar3 >= param_3) {
              puVar11 = puVar9;
            }
            uVar3 = uVar10 - (uVar3 < param_3);
            uVar10 = uVar3 >> 1;
            puVar9 = puVar11;
          } while (1 < uVar3);
          puVar11 = puVar8 + uVar2;
LAB__text__004f79e0:
          if (puVar11 != puVar8 + uVar2) {
            return puVar4;
          }
        }
      }
LAB__text__004f79ec:
      bVar1 = 1 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return puVar5;
}


