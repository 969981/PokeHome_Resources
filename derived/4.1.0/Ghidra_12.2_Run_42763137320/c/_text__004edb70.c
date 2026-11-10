/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edb70; name: FUN_.text__004edb70
 */


void FUN__text__004edb70(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  int *piVar10;
  ulong uVar11;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x50) + 0x138);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
    piVar10 = *(int **)(lVar8 + 0x10);
    sVar9 = 0;
    do {
      if (*(int *)(param_1 + 0x68) == *piVar10) {
        uVar2 = *(uint *)(param_1 + 0x60);
        uVar11 = (ulong)uVar2;
        uVar3 = *(uint *)(param_1 + 100);
        lVar7 = *(long *)(param_1 + 0x58);
        if (uVar2 < uVar3) {
          *(uint *)(param_1 + 0x60) = uVar2 + 1;
          if (lVar7 != 0) {
LAB__text__004edbdc:
            *(short *)(lVar7 + uVar11 * 2) = sVar9;
          }
        }
        else {
          iVar1 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar1 = 1;
          }
          uVar3 = iVar1 + uVar3;
          if (lVar7 == 0) {
            lVar7 = FUN__text__00400f80(0,(ulong)uVar3 << 1);
            if (lVar7 != 0) {
              lVar4 = *(long *)(param_1 + 0x58);
              if ((lVar4 != 0) && (lVar4 != lVar7)) {
                if (uVar2 != 0) {
                  if (uVar2 < 4) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = 0;
                    puVar6 = (undefined2 *)(lVar7 + 4);
                    do {
                      lVar4 = uVar5 * 2;
                      uVar5 = uVar5 + 4;
                      puVar6[-2] = *(undefined2 *)(*(long *)(param_1 + 0x58) + lVar4);
                      puVar6[-1] = *(undefined2 *)(*(long *)(param_1 + 0x58) + lVar4 + 2);
                      *puVar6 = *(undefined2 *)(*(long *)(param_1 + 0x58) + lVar4 + 4);
                      puVar6[1] = *(undefined2 *)(*(long *)(param_1 + 0x58) + lVar4 + 6);
                      puVar6 = puVar6 + 4;
                    } while ((uVar11 & 0xfffffffc) != uVar5);
                  }
                  uVar11 = uVar11 & 3;
                  if ((uVar2 & 3) != 0) {
                    lVar4 = uVar5 << 1;
                    do {
                      uVar11 = uVar11 - 1;
                      *(undefined2 *)(lVar7 + lVar4) =
                           *(undefined2 *)(*(long *)(param_1 + 0x58) + lVar4);
                      lVar4 = lVar4 + 2;
                    } while (uVar11 != 0);
                  }
                  lVar4 = *(long *)(param_1 + 0x58);
                }
                FUN__text__00400fc0(0,lVar4);
              }
              goto LAB__text__004edd14;
            }
          }
          else {
            lVar7 = FUN__text__00400fa0(0,lVar7);
            if (lVar7 != 0) {
LAB__text__004edd14:
              *(long *)(param_1 + 0x58) = lVar7;
              *(uint *)(param_1 + 100) = uVar3;
              if (uVar2 < uVar3) {
                uVar11 = (ulong)*(uint *)(param_1 + 0x60);
                *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) + 1;
                goto LAB__text__004edbdc;
              }
            }
          }
        }
      }
      piVar10 = piVar10 + 1;
      sVar9 = sVar9 + 1;
    } while (piVar10 != (int *)(*(long *)(lVar8 + 0x10) + (ulong)*(uint *)(lVar8 + 0x18) * 4));
  }
  return;
}


