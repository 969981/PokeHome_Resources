/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9c20; name: FUN_.text__003b9c20
 */


void FUN__text__003b9c20(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  lVar3 = (long)(int)uVar1;
  if (uVar1 < 5) {
    puVar2 = (uint *)(param_1 + 0x10);
    if (*puVar2 == param_2) {
      lVar3 = 0;
LAB__text__003b9cc4:
      *(undefined8 *)(puVar2 + lVar3 * 0xc + 6) = param_3[1];
      *(undefined8 *)(puVar2 + lVar3 * 0xc + 4) = *param_3;
      *(undefined8 *)(puVar2 + lVar3 * 0xc + 10) = param_4[1];
      *(undefined8 *)(puVar2 + lVar3 * 0xc + 8) = *param_4;
      return;
    }
    if (param_2 < *puVar2) {
      uVar4 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x40) == param_2) {
        lVar3 = 1;
        goto LAB__text__003b9cc4;
      }
      if (param_2 < *(uint *)(param_1 + 0x40)) {
        uVar4 = 1;
      }
      else {
        if (*(uint *)(param_1 + 0x70) == param_2) {
          lVar3 = 2;
          goto LAB__text__003b9cc4;
        }
        if (param_2 < *(uint *)(param_1 + 0x70)) {
          uVar4 = 2;
        }
        else {
          if (*(uint *)(param_1 + 0xa0) == param_2) {
            lVar3 = 3;
            goto LAB__text__003b9cc4;
          }
          if (param_2 < *(uint *)(param_1 + 0xa0)) {
            uVar4 = 3;
          }
          else {
            if (*(uint *)(param_1 + 0xd0) == param_2) {
              lVar3 = 4;
              goto LAB__text__003b9cc4;
            }
            if (*(uint *)(param_1 + 0xd0) <= param_2) {
              return;
            }
            uVar4 = 4;
          }
        }
      }
    }
    if ((int)uVar4 < (int)uVar1) {
      puVar5 = (undefined8 *)(param_1 + (long)(int)uVar1 * 0x30 + -0x20);
      do {
        if ((int)lVar3 < 5) {
          uVar7 = puVar5[5];
          puVar6 = puVar2 + (long)(int)lVar3 * 0xc;
          *(undefined8 *)(puVar6 + 6) = puVar5[3];
          *(undefined8 *)(puVar6 + 10) = uVar7;
          *(undefined8 *)(puVar6 + 2) = puVar5[1];
          *(undefined8 *)puVar6 = *puVar5;
          uVar7 = puVar5[2];
          *(undefined8 *)(puVar6 + 8) = puVar5[4];
          *(undefined8 *)(puVar6 + 4) = uVar7;
        }
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + -6;
      } while ((long)(ulong)uVar4 < lVar3);
    }
    puVar2 = puVar2 + (ulong)uVar4 * 0xc;
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 6) = param_3[1];
    *(undefined8 *)(puVar2 + 4) = *param_3;
    *(undefined8 *)(puVar2 + 10) = param_4[1];
    *(undefined8 *)(puVar2 + 8) = *param_4;
    if (*(uint *)(param_1 + 0x100) < 5) {
      *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) + 1;
      return;
    }
  }
  return;
}


