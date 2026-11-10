/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00319cf0; name: FUN_.text__00319cf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00319cf0(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar1 = FUN__text__0031c760();
  if ((uVar1 & 1) == 0) {
    FUN__text__00304fc8(*_DAT_008a1478,1);
  }
  else {
    uVar2 = FUN__text__00305984();
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN__text__00304b90();
      lVar5 = 0;
      lVar7 = 0x41ce8;
      pcVar6 = (char *)((long)&DWORD_007f7130 + lVar3);
      lVar3 = 0x9a48;
      do {
        lVar8 = 0;
        pcVar9 = pcVar6;
        do {
          if (*pcVar9 == '\x01') {
            if (pcVar9[2] != '\0') {
              uVar10 = *(undefined8 *)(pcVar9 + 0x10);
              lVar4 = FUN__text__00321ac0();
              *(undefined8 *)(lVar4 + lVar7 + lVar8) = uVar10;
            }
            uVar10 = *(undefined8 *)(pcVar9 + 8);
            lVar4 = FUN__text__00321ac0();
            *(undefined8 *)(lVar4 + lVar3 + lVar8) = uVar10;
          }
          lVar8 = lVar8 + 8;
          pcVar9 = pcVar9 + 0x18;
        } while (lVar8 != 0xe0);
        lVar5 = lVar5 + 1;
        pcVar6 = pcVar6 + 0x2a0;
        lVar7 = lVar7 + 0xe0;
        lVar3 = lVar3 + 0xe0;
      } while (lVar5 != 0x403);
    }
    lVar5 = FUN__text__00321ac0();
    *(undefined4 *)(lVar5 + 0x9a28) = 0;
    FUN__text__00321ac0();
    FUN__text__00321ac0();
    lVar5 = 0;
    lVar7 = 0x9a48;
    do {
      lVar3 = FUN__text__00321ac0();
      if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a48) & 0x8001) == 0) {
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a50) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a58) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a60) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a68) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a70) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a78) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a80) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a88) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a90) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9a98) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9aa0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9aa8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ab0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ab8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ac0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ac8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ad0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ad8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ae0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9ae8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9af0) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9af8) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b00) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b08) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b10) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b18) & 0x8001) != 0) goto LAB__text__0031a0e0;
        lVar3 = FUN__text__00321ac0();
        if ((*(ushort *)(lVar3 + lVar5 * 0xe0 + 0x9b20) & 0x8001) != 0) goto LAB__text__0031a0e0;
      }
      else {
LAB__text__0031a0e0:
        lVar3 = FUN__text__00321ac0();
        *(int *)(lVar3 + 0x9a28) = *(int *)(lVar3 + 0x9a28) + 1;
        lVar3 = FUN__text__0030d5f0();
        if (*(char *)(lVar3 + lVar5 + 0xa4d) == '\0') {
          lVar3 = FUN__text__0030d5f0();
          *(undefined1 *)(lVar3 + lVar5 + 0xa4d) = 1;
          lVar3 = FUN__text__00321ac0();
          *(undefined1 *)(lVar3 + lVar5 + 0x7a87c) = 1;
        }
        lVar3 = 0;
        do {
          lVar8 = FUN__text__00321ac0();
          if (*(long *)(lVar8 + lVar7 + lVar3) != 0) {
            lVar8 = FUN__text__00321ac0();
            *(ulong *)(lVar8 + lVar7 + lVar3) = *(ulong *)(lVar8 + lVar7 + lVar3) | 1;
          }
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0xe0);
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0xe0;
    } while (lVar5 != 0x403);
  }
  return uVar1 & 1;
}


