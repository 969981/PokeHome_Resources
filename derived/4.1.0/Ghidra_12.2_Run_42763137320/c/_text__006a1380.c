/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1380; name: FUN_.text__006a1380
 */


void FUN__text__006a1380(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 8);
  if (lVar6 != lVar5) {
    do {
      lVar7 = *(long *)(lVar6 + 8);
      if (0 < *(int *)(lVar6 + 0x48)) {
        lVar5 = *(long *)(lVar6 + 0x10);
        uVar8 = 0;
        do {
          lVar9 = *(long *)(lVar6 + 0x40);
          if (uVar8 != 0) {
            if (7 < uVar8) {
              uVar4 = uVar8 & 0xfffffff8;
              do {
                uVar4 = uVar4 - 8;
                lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long
                                                                                                *)(
                                                  lVar9 + 8) + 8) + 8) + 8) + 8) + 8) + 8) + 8);
              } while (uVar4 != 0);
            }
            for (uVar4 = uVar8 & 7; uVar4 != 0; uVar4 = uVar4 - 1) {
              lVar9 = *(long *)(lVar9 + 8);
            }
          }
          lVar1 = (**(code **)(**(long **)(lVar5 + 0x18) + 0x78))
                            (*(long **)(lVar5 + 0x18),*(undefined8 *)(lVar9 + -8),1);
          lVar2 = *(long *)(lVar9 + -0x20);
          if (*(long *)(lVar2 + 0x38) == 0) {
            if (*(long *)(lVar9 + -0x18) == 0) {
              if (*(long *)(lVar9 + -0x10) != 0) {
                FUN__text__006a0404(lVar2,param_2,lVar5,*(long *)(lVar9 + -0x10),lVar1);
              }
            }
            else {
              FUN__text__006a01e4(lVar2,param_2,lVar5,*(long *)(lVar9 + -0x18),lVar1,
                                  *(undefined1 *)(lVar6 + 100));
              if (*(char *)(lVar6 + 0x65) != '\0') {
                *(ushort *)(*(long *)(lVar9 + -0x20) + 0x60) =
                     *(ushort *)(*(long *)(lVar9 + -0x20) + 0x60) & 0xfffb;
                *(ushort *)(*(long *)(lVar9 + -0x20) + 0x60) =
                     *(ushort *)(*(long *)(lVar9 + -0x20) + 0x60) & 0xfffd;
              }
            }
          }
          if ((*(byte *)(lVar1 + 0x62) >> 1 & 1) != 0) {
            uVar10 = *(undefined4 *)(*(long *)(lVar9 + -0x20) + 0x28);
            uVar3 = FUN__text__006b44cc(lVar1);
            FUN__text__006b8c8c(uVar10,uVar3,param_2,lVar5);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < *(int *)(lVar6 + 0x48));
        lVar5 = *(long *)(param_1 + 0x10);
      }
      lVar6 = lVar7;
    } while (lVar7 != lVar5);
  }
  return;
}


