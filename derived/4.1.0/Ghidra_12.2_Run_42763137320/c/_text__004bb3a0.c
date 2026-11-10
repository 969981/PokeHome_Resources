/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bb3a0; name: FUN_.text__004bb3a0
 */


undefined8 FUN__text__004bb3a0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  
  pbVar13 = (byte *)*param_2;
  bVar5 = *pbVar13;
  *param_2 = (long)(pbVar13 + 1);
  uVar10 = bVar5 & 0x7f;
  if ((char)bVar5 < '\0') {
    pbVar13 = pbVar13 + 2;
    do {
      bVar5 = pbVar13[-1];
      *param_2 = (long)pbVar13;
      pbVar13 = pbVar13 + 1;
      uVar10 = bVar5 & 0x7f | uVar10 << 7;
    } while ((char)bVar5 < '\0');
  }
  if (*(uint *)(param_1 + 0x44) < uVar10) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar15 = *(uint *)(param_1 + 0x40);
      lVar7 = FUN__text__00400f80(0,(ulong)uVar10 << 3);
      if (lVar7 != 0) {
        lVar9 = *(long *)(param_1 + 0x38);
        if ((lVar9 != 0) && (lVar9 != lVar7)) {
          if (uVar15 != 0) {
            if (uVar15 == 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              do {
                lVar9 = uVar16 * 8;
                uVar16 = uVar16 + 2;
                *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9);
                ((undefined8 *)(lVar7 + lVar9))[1] =
                     *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 8);
              } while (((ulong)uVar15 & 0xfffffffe) != uVar16);
            }
            if ((uVar15 & 1) != 0) {
              *(undefined8 *)(lVar7 + uVar16 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar16 * 8);
            }
            lVar9 = *(long *)(param_1 + 0x38);
          }
          FUN__text__00400fc0(0,lVar9);
        }
        goto LAB__text__004bb4d4;
      }
    }
    else {
      lVar7 = FUN__text__00400fa0(0);
      if (lVar7 != 0) {
LAB__text__004bb4d4:
        *(long *)(param_1 + 0x38) = lVar7;
        *(uint *)(param_1 + 0x44) = uVar10;
        goto LAB__text__004bb4dc;
      }
    }
    uVar8 = 2;
  }
  else {
LAB__text__004bb4dc:
    if (uVar10 != 0) {
      uVar15 = 0;
      do {
        puVar11 = (undefined4 *)*param_2;
        uVar4 = *puVar11;
        *param_2 = (long)(puVar11 + 1);
        cVar6 = *(char *)(puVar11 + 1);
        *param_2 = (long)puVar11 + 5;
        uVar2 = *(uint *)(param_1 + 0x40);
        uVar16 = (ulong)uVar2;
        uVar3 = *(uint *)(param_1 + 0x44);
        lVar7 = *(long *)(param_1 + 0x38);
        if (uVar2 < uVar3) {
          *(uint *)(param_1 + 0x40) = uVar2 + 1;
          if (lVar7 == 0) goto LAB__text__004bb50c;
LAB__text__004bb4fc:
          *(ulong *)(lVar7 + uVar16 * 8) = (ulong)CONCAT14(cVar6 != '\0',uVar4);
        }
        else {
          iVar1 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar1 = 1;
          }
          uVar3 = iVar1 + uVar3;
          if (lVar7 == 0) {
            lVar7 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
            if (lVar7 != 0) {
              lVar9 = *(long *)(param_1 + 0x38);
              if ((lVar9 != 0) && (lVar9 != lVar7)) {
                if (uVar2 != 0) {
                  if (uVar2 < 4) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    puVar14 = (undefined8 *)(lVar7 + 0x10);
                    do {
                      lVar9 = uVar12 * 8;
                      uVar12 = uVar12 + 4;
                      puVar14[-2] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9);
                      puVar14[-1] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 8);
                      *puVar14 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 0x10);
                      puVar14[1] = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9 + 0x18);
                      puVar14 = puVar14 + 4;
                    } while ((uVar16 & 0xfffffffc) != uVar12);
                  }
                  uVar16 = uVar16 & 3;
                  if ((uVar2 & 3) != 0) {
                    lVar9 = uVar12 << 3;
                    do {
                      uVar16 = uVar16 - 1;
                      *(undefined8 *)(lVar7 + lVar9) =
                           *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar9);
                      lVar9 = lVar9 + 8;
                    } while (uVar16 != 0);
                  }
                  lVar9 = *(long *)(param_1 + 0x38);
                }
                FUN__text__00400fc0(0,lVar9);
              }
              goto LAB__text__004bb634;
            }
          }
          else {
            lVar7 = FUN__text__00400fa0(0,lVar7);
            if (lVar7 != 0) {
LAB__text__004bb634:
              *(long *)(param_1 + 0x38) = lVar7;
              *(uint *)(param_1 + 0x44) = uVar3;
              if (uVar2 < uVar3) {
                uVar16 = (ulong)*(uint *)(param_1 + 0x40);
                *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) + 1;
                goto LAB__text__004bb4fc;
              }
            }
          }
        }
LAB__text__004bb50c:
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar10);
    }
    uVar8 = 1;
  }
  return uVar8;
}


