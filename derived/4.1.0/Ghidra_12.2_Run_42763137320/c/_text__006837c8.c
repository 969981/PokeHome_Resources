/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006837c8; name: FUN_.text__006837c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__006837c8(long param_1,byte *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar6 = _DAT_008a6608;
  if (param_3 == 0) {
    return 0;
  }
  uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20);
  uVar11 = 8;
  do {
    bVar4 = *param_2;
    if (uVar11 == 8) {
      if (uVar13 == 0) {
        uVar13 = FUN__text__00683670(param_1,0);
        if ((int)uVar13 != 0) {
          return uVar13;
        }
        uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20)
        ;
      }
      else {
        **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = 0;
      }
    }
    puVar1 = (uint *)(lVar6 + (ulong)bVar4 * 8);
    uVar14 = (ulong)*puVar1;
    uVar3 = puVar1[1];
    uVar12 = uVar11 - uVar14;
    if (uVar11 < uVar14 || uVar12 == 0) {
      lVar8 = *(long *)(param_1 + 8);
      pbVar10 = *(byte **)(lVar8 + 0x20);
      if (uVar11 == uVar14) {
        uVar13 = uVar13 - 1;
        *pbVar10 = *pbVar10 | (byte)uVar3;
        uVar12 = 8;
        *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
      }
      else {
        uVar14 = uVar14 - uVar11;
        uVar13 = uVar13 - 1;
        *pbVar10 = *pbVar10 | (byte)(uVar3 >> (ulong)((uint)uVar14 & 0x1f));
        uVar2 = 0;
        if ((uVar14 & 7) != 0) {
          uVar2 = 8 - ((uint)uVar14 & 7);
        }
        uVar3 = uVar3 << (ulong)(uVar2 & 0x1f);
        *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
        if (uVar13 < uVar14 + 7 >> 3) {
          if (uVar14 < 0x19) {
            if (uVar14 < 0x11) {
              if (8 < uVar14) goto LAB__text__00683990;
LAB__text__006839a4:
              if (uVar14 != 8) {
                iVar7 = FUN__text__00683670(param_1,uVar3);
                if (iVar7 != 0) goto LAB__text__00683a6c;
                lVar8 = *(long *)(param_1 + 8);
                uVar12 = 8 - uVar14;
                goto LAB__text__00683a18;
              }
              iVar7 = FUN__text__00683614();
              if (iVar7 != 0) goto LAB__text__00683a6c;
              goto LAB__text__00683a44;
            }
LAB__text__00683948:
            iVar7 = FUN__text__00683614(param_1,uVar3 >> 0x10);
            if (iVar7 == 0) {
              uVar14 = uVar14 - 8;
LAB__text__00683990:
              iVar7 = FUN__text__00683614(param_1,uVar3 >> 8);
              if (iVar7 == 0) {
                uVar14 = uVar14 - 8;
                goto LAB__text__006839a4;
              }
            }
          }
          else {
            iVar7 = FUN__text__00683614(param_1,uVar3 >> 0x18);
            if (iVar7 == 0) {
              uVar14 = uVar14 - 8;
              goto LAB__text__00683948;
            }
          }
LAB__text__00683a6c:
          uVar12 = (ulong)iVar7;
          goto LAB__text__00683884;
        }
        uVar5 = (undefined1)uVar3;
        if (uVar14 < 8) {
          **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar5;
          uVar12 = 8 - uVar14;
          lVar8 = *(long *)(param_1 + 8);
        }
        else {
          if (uVar14 < 0x19) {
            if (0x10 < uVar14) goto LAB__text__006839c8;
            if (8 < uVar14) goto LAB__text__006839e4;
          }
          else {
            uVar14 = uVar14 - 8;
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar3 >> 0x18);
LAB__text__006839c8:
            uVar14 = uVar14 - 8;
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar3 >> 0x10);
LAB__text__006839e4:
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar3 >> 8);
            if (uVar14 != 0x10) {
              **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar5;
              uVar12 = 0x10 - uVar14;
              lVar8 = *(long *)(param_1 + 8);
LAB__text__00683a18:
              uVar13 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 0x20);
              goto LAB__text__00683884;
            }
          }
          puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
          *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
          *puVar9 = uVar5;
LAB__text__00683a44:
          lVar8 = *(long *)(param_1 + 8);
          uVar12 = 8;
        }
        uVar13 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 0x20);
      }
    }
    else {
      pbVar10 = *(byte **)(*(long *)(param_1 + 8) + 0x20);
      *pbVar10 = *pbVar10 | (byte)(uVar3 << (ulong)((uint)uVar12 & 0x1f));
LAB__text__00683884:
      if ((long)uVar12 < 0) {
        return uVar12 & 0xffffffff;
      }
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    uVar11 = uVar12;
    if (param_3 == 0) {
      if (uVar12 < 8) {
        lVar8 = *(long *)(param_1 + 8);
        **(byte **)(lVar8 + 0x20) =
             **(byte **)(lVar8 + 0x20) |
             (byte)(*(uint *)(lVar6 + 0x804) >>
                   (ulong)(*(int *)(lVar6 + 0x800) - (int)uVar12 & 0x1f));
        *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
      }
      return 0;
    }
  } while( true );
}


