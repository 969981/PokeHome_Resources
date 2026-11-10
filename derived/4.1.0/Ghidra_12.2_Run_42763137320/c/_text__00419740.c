/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419740; name: FUN_.text__00419740
 */


void FUN__text__00419740(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) | 1;
  iVar2 = (int)param_3[2];
  if ((int)param_3[2] <= param_2) {
    iVar2 = param_2;
  }
  *(int *)(param_3 + 2) = iVar2;
  *(int *)(param_1 + 0x1b8) = param_2;
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 != 0) {
    do {
      lVar11 = *(long *)(lVar13 + 0x150);
      if ((*(byte *)(lVar11 + 0x58) >> 2 & 1) != 0) {
        uVar6 = *(uint *)(param_3 + 1);
        uVar14 = (ulong)uVar6;
        uVar7 = *(uint *)((long)param_3 + 0xc);
        lVar12 = *param_3;
        if (uVar6 < uVar7) {
          *(uint *)(param_3 + 1) = uVar6 + 1;
          if (lVar12 == 0) goto LAB__text__00419914;
LAB__text__0041990c:
          plVar1 = (long *)(lVar12 + uVar14 * 0x10);
          *plVar1 = param_1;
          plVar1[1] = lVar11;
        }
        else {
          iVar2 = uVar7 + (uVar7 >> 1);
          if (uVar7 == 0) {
            iVar2 = 1;
          }
          uVar7 = iVar2 + uVar7;
          if (lVar12 == 0) {
            lVar12 = FUN__text__00400f80(5,(ulong)uVar7 << 4);
            if (lVar12 != 0) {
              lVar9 = *param_3;
              if ((lVar9 != 0) && (lVar9 != lVar12)) {
                if (uVar6 != 0) {
                  if (uVar6 < 4) {
                    lVar10 = 0;
                  }
                  else {
                    lVar9 = 0;
                    lVar10 = 0;
                    do {
                      puVar4 = (undefined8 *)(lVar12 + lVar9);
                      lVar10 = lVar10 + -4;
                      uVar8 = ((undefined8 *)(*param_3 + lVar9))[1];
                      *puVar4 = *(undefined8 *)(*param_3 + lVar9);
                      puVar4[1] = uVar8;
                      uVar8 = *(undefined8 *)(*param_3 + lVar9 + 0x18);
                      puVar4[2] = *(undefined8 *)(*param_3 + lVar9 + 0x10);
                      puVar4[3] = uVar8;
                      uVar8 = *(undefined8 *)(*param_3 + lVar9 + 0x28);
                      puVar4[4] = *(undefined8 *)(*param_3 + lVar9 + 0x20);
                      puVar4[5] = uVar8;
                      lVar3 = *param_3 + lVar9;
                      lVar9 = lVar9 + 0x40;
                      uVar8 = *(undefined8 *)(lVar3 + 0x38);
                      puVar4[6] = *(undefined8 *)(lVar3 + 0x30);
                      puVar4[7] = uVar8;
                    } while (-lVar10 != (uVar14 & 0xfffffffc));
                    lVar10 = -lVar10;
                  }
                  if ((uVar6 & 3) != 0) {
                    uVar14 = uVar14 & 3;
                    lVar10 = lVar10 << 4;
                    do {
                      puVar4 = (undefined8 *)(lVar12 + lVar10);
                      uVar14 = uVar14 - 1;
                      puVar5 = (undefined8 *)(*param_3 + lVar10);
                      lVar10 = lVar10 + 0x10;
                      uVar8 = puVar5[1];
                      *puVar4 = *puVar5;
                      puVar4[1] = uVar8;
                    } while (uVar14 != 0);
                  }
                  lVar9 = *param_3;
                }
                FUN__text__00400fc0(5,lVar9);
              }
              goto LAB__text__004198f0;
            }
          }
          else {
            lVar12 = FUN__text__00400fa0(5,lVar12);
            if (lVar12 != 0) {
LAB__text__004198f0:
              *param_3 = lVar12;
              *(uint *)((long)param_3 + 0xc) = uVar7;
              if (uVar6 < uVar7) {
                uVar14 = (ulong)*(uint *)(param_3 + 1);
                *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) + 1;
                goto LAB__text__0041990c;
              }
            }
          }
        }
LAB__text__00419914:
        *(byte *)(lVar13 + 0x198) =
             *(byte *)(lVar13 + 0x198) & 0xfb | (*(byte *)(lVar11 + 0x1bc) & 1) << 2;
        if ((*(byte *)(lVar11 + 0x1bc) & 1) == 0) {
          if (*(int *)(lVar11 + 0x1b8) <= param_2) {
            FUN__text__00419740(lVar11,param_2 + 1,param_3);
          }
        }
        else {
          *(undefined1 *)((long)param_3 + 0x14) = 1;
        }
      }
      lVar13 = *(long *)(lVar13 + 0x18);
    } while (lVar13 != 0);
  }
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xfe;
  return;
}


