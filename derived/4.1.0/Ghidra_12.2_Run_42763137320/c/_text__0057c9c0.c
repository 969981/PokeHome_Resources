/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057c9c0; name: FUN_.text__0057c9c0
 */


void FUN__text__0057c9c0(uint *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_4 != 0) {
    uVar5 = (ulong)param_1[4];
    uVar6 = *param_1;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + uVar5 * 4);
    do {
      uVar6 = uVar6 - (int)uVar5;
      uVar2 = param_4;
      if (uVar6 <= param_4) {
        uVar2 = uVar6;
      }
      if (3 < uVar2) {
        if (2 < (uVar2 >> 2) - 1) {
          uVar6 = uVar2 >> 2 & 0x3ffffffc;
          do {
            uVar12 = puVar3[1];
            uVar11 = *puVar3;
            uVar6 = uVar6 - 4;
            uVar13 = *param_2;
            puVar3[1] = param_2[1];
            *puVar3 = uVar13;
            param_3[1] = uVar12;
            *param_3 = uVar11;
            uVar12 = puVar3[3];
            uVar11 = puVar3[2];
            uVar13 = param_2[2];
            puVar3[3] = param_2[3];
            puVar3[2] = uVar13;
            param_3[3] = uVar12;
            param_3[2] = uVar11;
            uVar12 = puVar3[5];
            uVar11 = puVar3[4];
            uVar13 = param_2[4];
            puVar3[5] = param_2[5];
            puVar3[4] = uVar13;
            param_3[5] = uVar12;
            param_3[4] = uVar11;
            uVar12 = puVar3[7];
            uVar11 = puVar3[6];
            puVar7 = param_2 + 7;
            uVar13 = param_2[6];
            param_2 = param_2 + 8;
            puVar3[7] = *puVar7;
            puVar3[6] = uVar13;
            param_3[7] = uVar12;
            param_3[6] = uVar11;
            puVar3 = puVar3 + 8;
            param_3 = param_3 + 8;
          } while (uVar6 != 0);
        }
        uVar6 = uVar2 >> 2 & 3;
        if (uVar6 != 0) {
          iVar4 = uVar6 << 4;
          puVar7 = param_2;
          puVar8 = param_3;
          puVar9 = puVar3;
          do {
            uVar12 = puVar9[1];
            uVar11 = *puVar9;
            iVar4 = iVar4 + -0x10;
            param_2 = puVar7 + 2;
            uVar13 = *puVar7;
            puVar3 = puVar9 + 2;
            puVar9[1] = puVar7[1];
            *puVar9 = uVar13;
            param_3 = puVar8 + 2;
            puVar8[1] = uVar12;
            *puVar8 = uVar11;
            puVar7 = param_2;
            puVar8 = param_3;
            puVar9 = puVar3;
          } while (iVar4 != 0);
        }
      }
      uVar6 = uVar2 & 3;
      puVar7 = param_2;
      puVar9 = param_3;
      puVar8 = puVar3;
      if (uVar6 == 0) {
LAB__text__0057cb04:
        uVar1 = param_1[4] + uVar2;
        uVar5 = (ulong)uVar1;
        uVar6 = *param_1;
        param_1[4] = uVar1;
        if (uVar1 == uVar6) {
LAB__text__0057cb1c:
          puVar8 = *(undefined8 **)(param_1 + 2);
          uVar5 = 0;
          param_1[4] = 0;
        }
      }
      else {
        uVar10 = *(undefined4 *)puVar3;
        puVar7 = (undefined8 *)((long)param_2 + 4);
        puVar8 = (undefined8 *)((long)puVar3 + 4);
        *(undefined4 *)puVar3 = *(undefined4 *)param_2;
        puVar9 = (undefined8 *)((long)param_3 + 4);
        *(undefined4 *)param_3 = uVar10;
        if (uVar6 == 1) {
          uVar1 = param_1[4] + uVar2;
          uVar5 = (ulong)uVar1;
          uVar6 = *param_1;
          param_1[4] = uVar1;
          if (uVar1 == uVar6) goto LAB__text__0057cb1c;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar3 + 4);
          *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)((long)param_2 + 4);
          *(undefined4 *)((long)param_3 + 4) = uVar10;
          if (uVar6 == 2) {
            puVar7 = param_2 + 1;
            puVar8 = puVar3 + 1;
            puVar9 = param_3 + 1;
            goto LAB__text__0057cb04;
          }
          uVar10 = *(undefined4 *)(puVar3 + 1);
          puVar7 = (undefined8 *)((long)param_2 + 0xc);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
          puVar8 = (undefined8 *)((long)puVar3 + 0xc);
          *(undefined4 *)(param_3 + 1) = uVar10;
          puVar9 = (undefined8 *)((long)param_3 + 0xc);
          uVar1 = param_1[4] + uVar2;
          uVar5 = (ulong)uVar1;
          uVar6 = *param_1;
          param_1[4] = uVar1;
          if (uVar1 == uVar6) goto LAB__text__0057cb1c;
        }
      }
      param_4 = param_4 - uVar2;
      param_2 = puVar7;
      param_3 = puVar9;
      puVar3 = puVar8;
    } while (param_4 != 0);
  }
  return;
}


