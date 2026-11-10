/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006de6d0; name: FUN_.text__006de6d0
 */


long FUN__text__006de6d0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (0 < iVar4) {
    lVar14 = *(long *)(param_1 + 0x30);
    iVar11 = *(int *)(param_1 + 0x28);
    iVar9 = iVar4;
    do {
      pcVar15 = (char *)(lVar14 + (long)iVar11 * 0xa0 + 0x90);
      if (*pcVar15 == '\0') {
        lVar13 = lVar14 + (long)iVar11 * 0xa0;
        uVar16 = (uint)*(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x18);
        lVar7 = (**(code **)(*(long *)(param_2 + 0x828) + 0x10))
                          (param_2 + 0x828,(ulong)uVar16 * 0x70,0x80);
        plVar8 = (long *)(lVar13 + 0x50);
        *plVar8 = lVar7;
        if (lVar7 != 0) {
          uVar5 = uVar16 - 1;
          if (uVar5 != 0) {
            if (uVar5 == 1) {
              uVar10 = 0;
            }
            else {
              lVar7 = 0;
              uVar10 = 0;
              do {
                uVar10 = uVar10 + 2;
                *(long *)(*plVar8 + lVar7 + 0x58) = *plVar8 + lVar7 + 0x70;
                lVar2 = *plVar8 + lVar7;
                lVar7 = lVar7 + 0xe0;
                *(long *)(lVar2 + 200) = lVar2 + 0xe0;
              } while (((ulong)uVar5 & 0xfffffffe) != uVar10);
            }
            if ((uVar5 & 1) != 0) {
              lVar7 = *plVar8 + uVar10 * 0x70;
              *(long *)(lVar7 + 0x58) = lVar7 + 0x70;
            }
            if (1 < uVar16) {
              uVar10 = (ulong)uVar16 - 1;
              if (uVar16 == 2) {
                lVar7 = 1;
              }
              else {
                lVar7 = 0;
                uVar1 = 0;
                do {
                  uVar12 = uVar1;
                  uVar1 = uVar12 + 2;
                  *(long *)(*plVar8 + lVar7 + 0xd0) = *plVar8 + lVar7;
                  lVar2 = *plVar8 + lVar7;
                  lVar7 = lVar7 + 0xe0;
                  *(long *)(lVar2 + 0x140) = lVar2 + 0x70;
                } while ((uVar10 & 0xfffffffffffffffe) != uVar1);
                lVar7 = uVar12 + 3;
              }
              if ((uVar10 & 1) != 0) {
                lVar7 = *plVar8 + lVar7 * 0x70;
                *(long *)(lVar7 + 0x60) = lVar7 + -0x70;
              }
            }
          }
          *(long *)(*plVar8 + (ulong)uVar5 * 0x70 + 0x58) = *plVar8;
          *(ulong *)(*plVar8 + 0x60) = *plVar8 + (ulong)uVar5 * 0x70;
          lVar7 = *plVar8;
          lVar14 = lVar14 + (long)iVar11 * 0xa0;
          *(undefined4 *)(lVar14 + 0x80) = 0;
          *(undefined4 *)(lVar14 + 0x70) = 0;
          *(undefined4 *)(lVar14 + 0x78) = 0;
          *(undefined8 *)(lVar14 + 0x68) = 0;
          *(long *)(lVar14 + 0x58) = lVar7;
          *(long *)(lVar14 + 0x60) = lVar7;
          *pcVar15 = '\x01';
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          return lVar13;
        }
        FUN__text__006d84a0(param_2,0x4000);
        uVar6 = 0x70dff2;
        goto LAB__text__006de74c;
      }
      iVar3 = 0;
      if (iVar11 + 1 < iVar4) {
        iVar3 = iVar11 + 1;
      }
      iVar9 = iVar9 + -1;
      *(int *)(param_1 + 0x28) = iVar3;
      iVar11 = iVar3;
    } while (iVar9 != 0);
  }
  FUN__text__006d84a0(param_2,0x2000);
  uVar6 = 0x70e01b;
LAB__text__006de74c:
  FUN__text__006d84b0(uVar6);
  return 0;
}


