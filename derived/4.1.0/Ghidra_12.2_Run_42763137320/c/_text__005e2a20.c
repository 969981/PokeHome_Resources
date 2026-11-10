/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e2a20; name: FUN_.text__005e2a20
 */


void FUN__text__005e2a20(byte *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((*param_1 & 1) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (puVar9 != puVar7) {
      do {
        uVar2 = (*(code *)*puVar9)(puVar9 + 4,param_2);
        if ((uVar2 & 1) != 0) {
          puVar10 = puVar9;
          if (puVar9 != puVar7) {
            while (puVar1 = puVar10, puVar10 = puVar1 + 0x10, puVar10 != puVar7) {
              puVar8 = puVar1 + 0x14;
              uVar2 = (*(code *)*puVar10)(puVar8,param_2);
              if ((uVar2 & 1) == 0) {
                pcVar4 = (code *)puVar9[1];
                if (pcVar4 != (code *)0x0) {
                  puVar9[2] = 0;
                  puVar9[3] = 0;
                  *puVar9 = 0;
                  puVar9[1] = 0;
                  (*pcVar4)(puVar9 + 4);
                }
                if ((code *)puVar1[0x13] != (code *)0x0) {
                  (*(code *)puVar1[0x13])(puVar8,puVar9 + 4);
                  uVar5 = puVar1[0x11];
                  puVar9[3] = puVar1[0x13];
                  uVar6 = puVar1[0x12];
                  *puVar9 = *puVar10;
                  puVar9[1] = uVar5;
                  puVar9[2] = uVar6;
                  pcVar4 = (code *)puVar1[0x11];
                  if (pcVar4 != (code *)0x0) {
                    puVar1[0x12] = 0;
                    puVar1[0x13] = 0;
                    *puVar10 = 0;
                    puVar1[0x11] = 0;
                    (*pcVar4)(puVar8);
                  }
                }
                puVar9 = puVar9 + 0x10;
              }
            }
          }
          goto LAB__text__005e2a74;
        }
        puVar9 = puVar9 + 0x10;
      } while (puVar9 != puVar7);
      puVar9 = puVar7;
    }
LAB__text__005e2a74:
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    if (puVar9 != puVar7) {
      if ((undefined8 *)((long)puVar9 + ((long)puVar7 - (long)puVar9)) != puVar7) {
        lVar3 = (long)puVar7 - (long)puVar9 >> 7;
        do {
          pcVar4 = (code *)puVar9[1];
          if (pcVar4 != (code *)0x0) {
            puVar9[2] = 0;
            puVar9[3] = 0;
            *puVar9 = 0;
            puVar9[1] = 0;
            (*pcVar4)(puVar9 + 4);
          }
          puVar10 = puVar9 + lVar3 * 0x10;
          if ((code *)puVar10[3] != (code *)0x0) {
            (*(code *)puVar10[3])(puVar10 + 4,puVar9 + 4);
            uVar5 = puVar10[1];
            puVar9[3] = puVar10[3];
            uVar6 = puVar10[2];
            *puVar9 = *puVar10;
            puVar9[1] = uVar5;
            puVar9[2] = uVar6;
            pcVar4 = (code *)puVar10[1];
            if (pcVar4 != (code *)0x0) {
              puVar10[2] = 0;
              puVar10[3] = 0;
              *puVar10 = 0;
              puVar10[1] = 0;
              (*pcVar4)(puVar10 + 4);
            }
          }
          puVar9 = puVar9 + 0x10;
        } while (puVar9 + lVar3 * 0x10 != puVar7);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
      }
      while (puVar10 = puVar7, puVar10 != puVar9) {
        pcVar4 = (code *)puVar10[-0xf];
        puVar7 = puVar10 + -0x10;
        if (pcVar4 != (code *)0x0) {
          puVar10[-0xe] = 0;
          puVar10[-0xd] = 0;
          *puVar7 = 0;
          puVar10[-0xf] = 0;
          (*pcVar4)(puVar10 + -0xc);
        }
      }
      *(undefined8 **)(param_1 + 0x10) = puVar9;
    }
    if (*(undefined8 **)(param_1 + 8) == puVar9) {
      *param_1 = 0;
    }
  }
  return;
}


