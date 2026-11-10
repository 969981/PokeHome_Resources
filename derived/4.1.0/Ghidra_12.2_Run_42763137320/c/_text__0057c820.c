/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057c820; name: FUN_.text__0057c820
 */


void FUN__text__0057c820(uint *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 != 0) {
    uVar5 = (ulong)param_1[4];
    uVar6 = *param_1;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + uVar5 * 4);
    do {
      uVar6 = uVar6 - (int)uVar5;
      uVar2 = param_3;
      if (uVar6 <= param_3) {
        uVar2 = uVar6;
      }
      if (3 < uVar2) {
        if (2 < (uVar2 >> 2) - 1) {
          uVar6 = uVar2 >> 2 & 0x3ffffffc;
          do {
            uVar11 = puVar3[1];
            uVar10 = *puVar3;
            uVar6 = uVar6 - 4;
            uVar12 = *param_2;
            puVar3[1] = param_2[1];
            *puVar3 = uVar12;
            param_2[1] = uVar11;
            *param_2 = uVar10;
            uVar11 = puVar3[3];
            uVar10 = puVar3[2];
            uVar12 = param_2[2];
            puVar3[3] = param_2[3];
            puVar3[2] = uVar12;
            param_2[3] = uVar11;
            param_2[2] = uVar10;
            uVar11 = puVar3[5];
            uVar10 = puVar3[4];
            uVar12 = param_2[4];
            puVar3[5] = param_2[5];
            puVar3[4] = uVar12;
            param_2[5] = uVar11;
            param_2[4] = uVar10;
            uVar11 = puVar3[7];
            uVar10 = puVar3[6];
            uVar12 = param_2[6];
            puVar3[7] = param_2[7];
            puVar3[6] = uVar12;
            param_2[7] = uVar11;
            param_2[6] = uVar10;
            puVar3 = puVar3 + 8;
            param_2 = param_2 + 8;
          } while (uVar6 != 0);
        }
        uVar6 = uVar2 >> 2 & 3;
        if (uVar6 != 0) {
          iVar4 = uVar6 << 4;
          puVar7 = param_2;
          puVar8 = puVar3;
          do {
            uVar11 = puVar8[1];
            uVar10 = *puVar8;
            iVar4 = iVar4 + -0x10;
            uVar12 = *puVar7;
            puVar3 = puVar8 + 2;
            puVar8[1] = puVar7[1];
            *puVar8 = uVar12;
            param_2 = puVar7 + 2;
            puVar7[1] = uVar11;
            *puVar7 = uVar10;
            puVar7 = param_2;
            puVar8 = puVar3;
          } while (iVar4 != 0);
        }
      }
      uVar6 = uVar2 & 3;
      puVar8 = param_2;
      puVar7 = puVar3;
      if (uVar6 == 0) {
LAB__text__0057c954:
        uVar1 = param_1[4] + uVar2;
        uVar5 = (ulong)uVar1;
        uVar6 = *param_1;
        param_1[4] = uVar1;
        if (uVar1 == uVar6) {
LAB__text__0057c96c:
          puVar7 = *(undefined8 **)(param_1 + 2);
          uVar5 = 0;
          param_1[4] = 0;
        }
      }
      else {
        uVar9 = *(undefined4 *)puVar3;
        puVar7 = (undefined8 *)((long)puVar3 + 4);
        *(undefined4 *)puVar3 = *(undefined4 *)param_2;
        puVar8 = (undefined8 *)((long)param_2 + 4);
        *(undefined4 *)param_2 = uVar9;
        if (uVar6 == 1) {
          uVar1 = param_1[4] + uVar2;
          uVar5 = (ulong)uVar1;
          uVar6 = *param_1;
          param_1[4] = uVar1;
          if (uVar1 == uVar6) goto LAB__text__0057c96c;
        }
        else {
          uVar9 = *(undefined4 *)((long)puVar3 + 4);
          *(undefined4 *)((long)puVar3 + 4) = *(undefined4 *)((long)param_2 + 4);
          *(undefined4 *)((long)param_2 + 4) = uVar9;
          if (uVar6 == 2) {
            puVar7 = puVar3 + 1;
            puVar8 = param_2 + 1;
            goto LAB__text__0057c954;
          }
          uVar9 = *(undefined4 *)(puVar3 + 1);
          *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
          puVar7 = (undefined8 *)((long)puVar3 + 0xc);
          *(undefined4 *)(param_2 + 1) = uVar9;
          puVar8 = (undefined8 *)((long)param_2 + 0xc);
          uVar1 = param_1[4] + uVar2;
          uVar5 = (ulong)uVar1;
          uVar6 = *param_1;
          param_1[4] = uVar1;
          if (uVar1 == uVar6) goto LAB__text__0057c96c;
        }
      }
      param_3 = param_3 - uVar2;
      param_2 = puVar8;
      puVar3 = puVar7;
    } while (param_3 != 0);
  }
  return;
}


