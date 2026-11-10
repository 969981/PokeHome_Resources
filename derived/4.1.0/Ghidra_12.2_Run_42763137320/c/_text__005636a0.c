/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005636a0; name: FUN_.text__005636a0
 */


void FUN__text__005636a0(uint *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar5 = param_1[4];
    uVar7 = (ulong)uVar5;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 4);
    uVar8 = *param_1;
    uVar6 = uVar8 - uVar5;
    if (param_3 < uVar6) {
      if (3 < param_3) {
        if (param_3 >> 2 != 1) {
          uVar5 = param_3 >> 2 & 0x3ffffffe;
          do {
            uVar9 = *param_2;
            uVar5 = uVar5 - 2;
            uVar11 = puVar4[1];
            uVar10 = *puVar4;
            puVar4[1] = param_2[1];
            *puVar4 = uVar9;
            param_2[1] = uVar11;
            *param_2 = uVar10;
            uVar9 = param_2[2];
            uVar11 = puVar4[3];
            uVar10 = puVar4[2];
            puVar4[3] = param_2[3];
            puVar4[2] = uVar9;
            param_2[3] = uVar11;
            param_2[2] = uVar10;
            puVar4 = puVar4 + 4;
            param_2 = param_2 + 4;
          } while (uVar5 != 0);
        }
        if ((param_3 >> 2 & 1) != 0) {
          uVar9 = *param_2;
          uVar11 = puVar4[1];
          uVar10 = *puVar4;
          puVar4[1] = param_2[1];
          *puVar4 = uVar9;
          param_2[1] = uVar11;
          *param_2 = uVar10;
        }
        uVar5 = param_1[4];
      }
      param_1[4] = uVar5 + param_3;
      return;
    }
    if (3 < param_3) {
      param_3 = param_3 >> 2;
      do {
        uVar5 = (uint)uVar7;
        uVar1 = param_3;
        if (uVar6 >> 2 <= param_3) {
          uVar1 = uVar6 >> 2;
        }
        if (uVar1 != 0) {
          uVar8 = uVar1 & 3;
          uVar5 = uVar1;
          if (uVar8 != 0) {
            uVar5 = uVar1 & 0xfffffffc;
            puVar2 = param_2;
            puVar3 = puVar4;
            do {
              uVar9 = *puVar2;
              uVar8 = uVar8 - 1;
              uVar11 = puVar3[1];
              uVar10 = *puVar3;
              puVar4 = puVar3 + 2;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar9;
              param_2 = puVar2 + 2;
              puVar2[1] = uVar11;
              *puVar2 = uVar10;
              puVar2 = param_2;
              puVar3 = puVar4;
            } while (uVar8 != 0);
          }
          if (3 < uVar1) {
            do {
              uVar9 = *param_2;
              uVar5 = uVar5 - 4;
              uVar11 = puVar4[1];
              uVar10 = *puVar4;
              puVar4[1] = param_2[1];
              *puVar4 = uVar9;
              param_2[1] = uVar11;
              *param_2 = uVar10;
              uVar9 = param_2[2];
              uVar11 = puVar4[3];
              uVar10 = puVar4[2];
              puVar4[3] = param_2[3];
              puVar4[2] = uVar9;
              param_2[3] = uVar11;
              param_2[2] = uVar10;
              uVar9 = param_2[4];
              uVar11 = puVar4[5];
              uVar10 = puVar4[4];
              puVar4[5] = param_2[5];
              puVar4[4] = uVar9;
              param_2[5] = uVar11;
              param_2[4] = uVar10;
              uVar9 = param_2[6];
              uVar11 = puVar4[7];
              uVar10 = puVar4[6];
              puVar4[7] = param_2[7];
              puVar4[6] = uVar9;
              param_2[7] = uVar11;
              param_2[6] = uVar10;
              puVar4 = puVar4 + 8;
              param_2 = param_2 + 8;
            } while (uVar5 != 0);
          }
          uVar5 = param_1[4];
          uVar8 = *param_1;
        }
        uVar5 = uVar5 + uVar1 * 4;
        uVar7 = (ulong)uVar5;
        param_1[4] = uVar5;
        if (uVar5 == uVar8) {
          puVar4 = *(undefined8 **)(param_1 + 2);
          uVar7 = 0;
          param_1[4] = 0;
        }
        param_3 = param_3 - uVar1;
        uVar6 = uVar8 - (int)uVar7;
      } while (param_3 != 0);
    }
  }
  return;
}


