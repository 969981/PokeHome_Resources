/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f7ad0; name: FUN_.text__004f7ad0
 */


undefined8 *
FUN__text__004f7ad0(long param_1,long param_2,uint param_3,long param_4,uint param_5,long param_6)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ulong uVar15;
  
  puVar7 = *(undefined8 **)(param_1 + 0x128);
  if ((int)*(uint *)(param_1 + 0x130) < 1) {
    return puVar7;
  }
  uVar8 = (ulong)*(uint *)(param_1 + 0x130);
  do {
    uVar9 = uVar8 - 1 & 0xffffffff;
    puVar3 = puVar7 + uVar9 * 0xc;
    uVar4 = *(uint *)(puVar3 + 1);
    uVar11 = (ulong)uVar4;
    if (uVar4 != 0) {
      uVar12 = *(uint *)(puVar7 + uVar9 * 0xc + 3);
      uVar10 = (ulong)uVar12;
      if (uVar12 != 0) {
        puVar13 = (uint *)*puVar3;
        if (*puVar13 != 0xffffffff) {
          puVar5 = puVar13;
          do {
            puVar6 = puVar5 + (uVar4 >> 1);
            uVar2 = *puVar6;
            if (uVar2 == param_3) goto LAB__text__004f7b88;
            puVar6 = puVar6 + 1;
            if (uVar2 >= param_3) {
              puVar6 = puVar5;
            }
            uVar2 = uVar4 - (uVar2 < param_3);
            uVar4 = uVar2 >> 1;
            puVar5 = puVar6;
          } while (1 < uVar2);
          puVar6 = puVar13 + uVar11;
LAB__text__004f7b88:
          if (puVar6 == puVar13 + uVar11) {
            if (param_4 != 0 && param_4 != param_2) {
              lVar14 = param_4;
              do {
                uVar4 = *(uint *)(lVar14 + 0x20);
                puVar5 = puVar13;
                uVar15 = uVar11;
                do {
                  puVar6 = puVar5 + (uVar15 >> 1);
                  uVar2 = *puVar6;
                  if (uVar2 == uVar4) {
                    if (puVar6 != puVar13 + uVar11) {
                      if (lVar14 == 0) goto LAB__text__004f7b10;
                      goto LAB__text__004f7b94;
                    }
                    break;
                  }
                  puVar6 = puVar6 + 1;
                  if (uVar2 >= uVar4) {
                    puVar6 = puVar5;
                  }
                  uVar2 = (int)uVar15 - (uint)(uVar2 < uVar4);
                  uVar15 = (ulong)(uVar2 >> 1);
                  puVar5 = puVar6;
                } while (1 < uVar2);
                lVar14 = *(long *)(lVar14 + 0x78);
              } while ((lVar14 != 0) && (lVar14 != param_2));
            }
            goto LAB__text__004f7b10;
          }
        }
LAB__text__004f7b94:
        puVar13 = (uint *)puVar7[uVar9 * 0xc + 2];
        if (*puVar13 == 0xffffffff) {
          return puVar3;
        }
        puVar5 = puVar13;
        do {
          puVar6 = puVar5 + (uVar12 >> 1);
          uVar4 = *puVar6;
          if (uVar4 == param_5) goto LAB__text__004f7be4;
          puVar6 = puVar6 + 1;
          if (uVar4 >= param_5) {
            puVar6 = puVar5;
          }
          uVar4 = uVar12 - (uVar4 < param_5);
          uVar12 = uVar4 >> 1;
          puVar5 = puVar6;
        } while (1 < uVar4);
        puVar6 = puVar13 + uVar10;
LAB__text__004f7be4:
        if (puVar6 != puVar13 + uVar10) {
          return puVar3;
        }
        if (param_6 != 0 && param_6 != param_2) {
          lVar14 = param_6;
          do {
            uVar4 = *(uint *)(lVar14 + 0x20);
            puVar5 = puVar13;
            uVar9 = uVar10;
            do {
              puVar6 = puVar5 + (uVar9 >> 1);
              uVar12 = *puVar6;
              if (uVar12 == uVar4) {
                if (puVar6 != puVar13 + uVar10) {
                  if (lVar14 != 0) {
                    return puVar3;
                  }
                  goto LAB__text__004f7b10;
                }
                break;
              }
              puVar6 = puVar6 + 1;
              if (uVar12 >= uVar4) {
                puVar6 = puVar5;
              }
              uVar12 = (int)uVar9 - (uint)(uVar12 < uVar4);
              uVar9 = (ulong)(uVar12 >> 1);
              puVar5 = puVar6;
            } while (1 < uVar12);
            lVar14 = *(long *)(lVar14 + 0x78);
          } while ((lVar14 != 0) && (lVar14 != param_2));
        }
      }
    }
LAB__text__004f7b10:
    bVar1 = (long)uVar8 < 2;
    uVar8 = uVar8 - 1;
    if (bVar1) {
      return puVar7;
    }
  } while( true );
}


