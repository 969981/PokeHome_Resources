/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012d020; name: FUN_.text__0012d020
 */


void FUN__text__0012d020(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_60 [8];
  long local_58;
  undefined8 *local_38;
  
  *(undefined1 *)(param_1 + 0x4f8) = 1;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x4b8) + 0x80);
  lVar7 = *(long *)(*(long *)(param_1 + 0x4b8) + 0x88);
  puVar11 = puVar10 + lVar7 * 0x22;
  if (lVar7 == 0) {
LAB__text__0012d09c:
    local_38 = puVar10;
    if (puVar10 != puVar11 && puVar10 + 0x22 != puVar11) {
      puVar8 = puVar10 + 0x38;
      do {
        puVar12 = puVar8 + -0x14;
        puVar1 = puVar8 + -0x10;
        uVar2 = (*(code *)*puVar12)(puVar1);
        if (((uVar2 & 1) == 0) || (uVar2 = (*(code *)puVar8[-4])(puVar8), (uVar2 & 1) == 0)) {
          *puVar10 = puVar8[-0x16];
          pcVar3 = (code *)puVar10[3];
          if (pcVar3 != (code *)0x0) {
            puVar10[4] = 0;
            puVar10[5] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            (*pcVar3)(puVar10 + 6);
          }
          if ((code *)puVar8[-0x11] != (code *)0x0) {
            (*(code *)puVar8[-0x11])(puVar1,puVar10 + 6);
            uVar4 = puVar8[-0x13];
            puVar10[5] = puVar8[-0x11];
            uVar5 = puVar8[-0x12];
            puVar10[2] = *puVar12;
            puVar10[3] = uVar4;
            puVar10[4] = uVar5;
            pcVar3 = (code *)puVar8[-0x13];
            if (pcVar3 != (code *)0x0) {
              puVar8[-0x12] = 0;
              puVar8[-0x11] = 0;
              *puVar12 = 0;
              puVar8[-0x13] = 0;
              (*pcVar3)(puVar1);
            }
          }
          pcVar3 = (code *)puVar10[0x13];
          if (pcVar3 != (code *)0x0) {
            puVar10[0x14] = 0;
            puVar10[0x15] = 0;
            puVar10[0x12] = 0;
            puVar10[0x13] = 0;
            (*pcVar3)(puVar10 + 0x16);
          }
          if ((code *)puVar8[-1] != (code *)0x0) {
            (*(code *)puVar8[-1])(puVar8,puVar10 + 0x16);
            uVar4 = puVar8[-3];
            puVar10[0x15] = puVar8[-1];
            uVar5 = puVar8[-2];
            puVar10[0x12] = puVar8[-4];
            puVar10[0x13] = uVar4;
            puVar10[0x14] = uVar5;
            pcVar3 = (code *)puVar8[-3];
            if (pcVar3 != (code *)0x0) {
              puVar8[-2] = 0;
              puVar8[-1] = 0;
              puVar8[-4] = 0;
              puVar8[-3] = 0;
              (*pcVar3)(puVar8);
            }
          }
          puVar10 = puVar10 + 0x22;
        }
        puVar1 = puVar8 + 0xc;
        puVar8 = puVar8 + 0x22;
        local_38 = puVar10;
      } while (puVar1 != puVar11);
    }
  }
  else {
    lVar7 = lVar7 * 0x110;
    do {
      uVar2 = (*(code *)puVar10[2])(puVar10 + 6);
      if (((uVar2 & 1) != 0) && (uVar2 = (*(code *)puVar10[0x12])(puVar10 + 0x16), (uVar2 & 1) != 0)
         ) goto LAB__text__0012d09c;
      puVar10 = puVar10 + 0x22;
      lVar7 = lVar7 + -0x110;
    } while (lVar7 != 0);
    local_38 = puVar11;
  }
  lVar7 = *(long *)(param_1 + 0x4b8);
  local_58 = *(long *)(lVar7 + 0x80) + *(long *)(lVar7 + 0x88) * 0x110;
  FUN__text__0012d2b0(auStack_60,lVar7 + 0x40,&local_38,&local_58);
  lVar7 = *(long *)(param_1 + 0x4d8);
  *(undefined1 *)(param_1 + 0x4f8) = 0;
  if (*(long *)(lVar7 + 0x88) != 0) {
    lVar9 = *(long *)(lVar7 + 0x80);
    lVar7 = *(long *)(lVar7 + 0x88) * 0x110;
    do {
      FUN__text__0012c684(param_1,lVar9);
      lVar9 = lVar9 + 0x110;
      lVar7 = lVar7 + -0x110;
    } while (lVar7 != 0);
    lVar7 = *(long *)(param_1 + 0x4d8);
    lVar9 = *(long *)(lVar7 + 0x88);
    if (lVar9 != 0) {
      lVar6 = *(long *)(lVar7 + 0x80) + 0xb0;
      do {
        pcVar3 = *(code **)(lVar6 + -0x18);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0x10) = 0;
          *(undefined8 *)(lVar6 + -8) = 0;
          *(undefined8 *)(lVar6 + -0x20) = 0;
          *(undefined8 *)(lVar6 + -0x18) = 0;
          (*pcVar3)(lVar6);
        }
        pcVar3 = *(code **)(lVar6 + -0x98);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar6 + -0x90) = 0;
          *(undefined8 *)(lVar6 + -0x88) = 0;
          *(undefined8 *)(lVar6 + -0xa0) = 0;
          *(undefined8 *)(lVar6 + -0x98) = 0;
          (*pcVar3)(lVar6 + -0x80);
        }
        lVar9 = lVar9 + -1;
        lVar6 = lVar6 + 0x110;
      } while (lVar9 != 0);
    }
  }
  *(undefined8 *)(lVar7 + 0x88) = 0;
  return;
}


