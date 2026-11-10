/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060933c; name: FUN_.text__0060933c
 */


void FUN__text__0060933c(ushort param_1,short *param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  long lVar11;
  uint uVar12;
  
  if (param_1 < 6) {
    uVar12 = *(uint *)((ulong)param_1 * 4 + 0x75a460);
    if (uVar12 == 0) {
      bVar9 = true;
      if (param_1 != 1) goto LAB__text__00609348;
      goto LAB__text__006093e0;
    }
    sVar3 = (short)uVar12;
    if (param_1 == 1) {
LAB__text__006096a8:
      if (*param_2 == 0x38) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609720;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609720;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609720;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609730;
            lVar11 = 5;
          }
LAB__text__00609720:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609730:
        *param_2 = sVar3;
        *param_4 = 0;
        *param_3 = uVar10;
      }
      if (param_1 != 3) goto LAB__text__00609748;
LAB__text__006097e8:
      if (*param_2 == 0x193) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609860;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609860;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609860;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609870;
            lVar11 = 5;
          }
LAB__text__00609860:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609870:
        *param_2 = sVar3;
        *param_4 = 0;
        *param_3 = uVar10;
      }
      if (param_1 != 5) goto LAB__text__00609888;
    }
    else {
      if (*param_2 == 0x13b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609680;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609680;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609680;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609690;
            lVar11 = 5;
          }
LAB__text__00609680:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609690:
        *param_2 = sVar3;
        *param_4 = 0;
        *param_3 = uVar10;
      }
      if (param_1 != 2) goto LAB__text__006096a8;
LAB__text__00609748:
      if (*param_2 == 0x3b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__006097c0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__006097c0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__006097c0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__006097d0;
            lVar11 = 5;
          }
LAB__text__006097c0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__006097d0:
        *param_2 = sVar3;
        *param_4 = 0;
        *param_3 = uVar10;
      }
      if (param_1 != 4) goto LAB__text__006097e8;
LAB__text__00609888:
      if (*param_2 == 0x1b5) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609900;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609900;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609900;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609910;
            lVar11 = 5;
          }
LAB__text__00609900:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609910:
        *param_2 = sVar3;
        *param_4 = 0;
        *param_3 = uVar10;
      }
    }
    if (param_1 == 1) {
LAB__text__006099c8:
      if (param_2[1] == 0x38) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609a40;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609a40;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609a40;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609a50;
            lVar11 = 5;
          }
LAB__text__00609a40:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609a50:
        param_2[1] = sVar3;
        param_4[1] = 0;
        param_3[1] = uVar10;
      }
      if (param_1 != 3) goto LAB__text__00609a68;
LAB__text__00609b08:
      if (param_2[1] == 0x193) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609b80;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609b80;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609b80;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609b90;
            lVar11 = 5;
          }
LAB__text__00609b80:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609b90:
        param_2[1] = sVar3;
        param_4[1] = 0;
        param_3[1] = uVar10;
      }
      if (param_1 != 5) goto LAB__text__00609ba8;
    }
    else {
      if (param_2[1] == 0x13b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__006099a0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__006099a0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__006099a0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__006099b0;
            lVar11 = 5;
          }
LAB__text__006099a0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__006099b0:
        param_2[1] = sVar3;
        param_4[1] = 0;
        param_3[1] = uVar10;
      }
      if (param_1 != 2) goto LAB__text__006099c8;
LAB__text__00609a68:
      if (param_2[1] == 0x3b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609ae0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609ae0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609ae0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609af0;
            lVar11 = 5;
          }
LAB__text__00609ae0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609af0:
        param_2[1] = sVar3;
        param_4[1] = 0;
        param_3[1] = uVar10;
      }
      if (param_1 != 4) goto LAB__text__00609b08;
LAB__text__00609ba8:
      if (param_2[1] == 0x1b5) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609c20;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609c20;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609c20;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609c30;
            lVar11 = 5;
          }
LAB__text__00609c20:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609c30:
        param_2[1] = sVar3;
        param_4[1] = 0;
        param_3[1] = uVar10;
      }
    }
    if (param_1 == 1) {
LAB__text__00609ce8:
      if (param_2[2] == 0x38) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609d60;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609d60;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609d60;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609d70;
            lVar11 = 5;
          }
LAB__text__00609d60:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609d70:
        param_2[2] = sVar3;
        param_4[2] = 0;
        param_3[2] = uVar10;
      }
      if (param_1 != 3) goto LAB__text__00609d88;
LAB__text__00609e28:
      if (param_2[2] == 0x193) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609ea0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609ea0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609ea0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609eb0;
            lVar11 = 5;
          }
LAB__text__00609ea0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609eb0:
        param_2[2] = sVar3;
        param_4[2] = 0;
        param_3[2] = uVar10;
      }
      if (param_1 != 5) goto LAB__text__00609ec8;
    }
    else {
      if (param_2[2] == 0x13b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609cc0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609cc0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609cc0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609cd0;
            lVar11 = 5;
          }
LAB__text__00609cc0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609cd0:
        param_2[2] = sVar3;
        param_4[2] = 0;
        param_3[2] = uVar10;
      }
      if (param_1 != 2) goto LAB__text__00609ce8;
LAB__text__00609d88:
      if (param_2[2] == 0x3b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609e00;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609e00;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609e00;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609e10;
            lVar11 = 5;
          }
LAB__text__00609e00:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609e10:
        param_2[2] = sVar3;
        param_4[2] = 0;
        param_3[2] = uVar10;
      }
      if (param_1 != 4) goto LAB__text__00609e28;
LAB__text__00609ec8:
      if (param_2[2] == 0x1b5) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609f40;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609f40;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609f40;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609f50;
            lVar11 = 5;
          }
LAB__text__00609f40:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609f50:
        param_2[2] = sVar3;
        param_4[2] = 0;
        param_3[2] = uVar10;
      }
    }
    if (param_1 == 1) {
LAB__text__0060a008:
      if (param_2[3] == 0x38) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__0060a080;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__0060a080;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__0060a080;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__0060a090;
            lVar11 = 5;
          }
LAB__text__0060a080:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__0060a090:
        param_2[3] = sVar3;
        param_4[3] = 0;
        param_3[3] = uVar10;
      }
      if (param_1 != 3) goto LAB__text__0060a0a8;
LAB__text__0060a148:
      if (param_2[3] == 0x193) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__0060a1c0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__0060a1c0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__0060a1c0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__0060a1d0;
            lVar11 = 5;
          }
LAB__text__0060a1c0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__0060a1d0:
        param_2[3] = sVar3;
        param_4[3] = 0;
        param_3[3] = uVar10;
      }
      if (param_1 == 5) goto LAB__text__0060a27c;
    }
    else {
      if (param_2[3] == 0x13b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__00609fe0;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__00609fe0;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__00609fe0;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__00609ff0;
            lVar11 = 5;
          }
LAB__text__00609fe0:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__00609ff0:
        param_2[3] = sVar3;
        param_4[3] = 0;
        param_3[3] = uVar10;
      }
      if (param_1 != 2) goto LAB__text__0060a008;
LAB__text__0060a0a8:
      if (param_2[3] == 0x3b) {
        uVar1 = uVar12 & 0xffff;
        uVar10 = 0;
        if (uVar1 < 0x13b) {
          if (uVar1 == 0x38) {
            lVar11 = 2;
            goto LAB__text__0060a120;
          }
          if (uVar1 == 0x3b) {
            lVar11 = 3;
            goto LAB__text__0060a120;
          }
          if (uVar1 == 0x54) {
            lVar11 = 0;
            goto LAB__text__0060a120;
          }
        }
        else {
          if (uVar1 == 0x13b) {
            lVar11 = 1;
          }
          else if (uVar1 == 0x193) {
            lVar11 = 4;
          }
          else {
            if (uVar1 != 0x1b5) goto LAB__text__0060a130;
            lVar11 = 5;
          }
LAB__text__0060a120:
          uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
        }
LAB__text__0060a130:
        param_2[3] = sVar3;
        param_4[3] = 0;
        param_3[3] = uVar10;
      }
      if (param_1 != 4) goto LAB__text__0060a148;
    }
    if (param_2[3] != 0x1b5) goto LAB__text__0060a27c;
    uVar12 = uVar12 & 0xffff;
    uVar10 = 0;
    if (uVar12 < 0x13b) {
      if (uVar12 == 0x38) {
        lVar11 = 2;
        goto LAB__text__0060a260;
      }
      if (uVar12 == 0x3b) {
        lVar11 = 3;
        goto LAB__text__0060a260;
      }
      if (uVar12 == 0x54) {
        lVar11 = 0;
        goto LAB__text__0060a260;
      }
    }
    else {
      if (uVar12 == 0x13b) {
        lVar11 = 1;
      }
      else if (uVar12 == 0x193) {
        lVar11 = 4;
      }
      else {
        if (uVar12 != 0x1b5) goto LAB__text__0060a270;
        lVar11 = 5;
      }
LAB__text__0060a260:
      uVar10 = *(undefined1 *)(lVar11 * 8 + 0x75a47c);
    }
LAB__text__0060a270:
    param_2[3] = sVar3;
    param_4[3] = 0;
    param_3[3] = uVar10;
    goto LAB__text__0060a27c;
  }
LAB__text__00609348:
  if (*param_2 == 0x13b) {
    *param_2 = 0;
    *param_4 = 0;
    *param_3 = 0;
  }
  bVar9 = false;
  if (param_1 == 2) {
    bVar5 = true;
LAB__text__00609410:
    if (*param_2 == 0x3b) {
      *param_2 = 0;
      *param_4 = 0;
      *param_3 = 0;
    }
    bVar6 = false;
    if (param_1 != 4) goto LAB__text__00609440;
    bVar7 = true;
LAB__text__00609474:
    if (*param_2 == 0x1b5) {
      bVar8 = false;
      *param_2 = 0;
      *param_4 = 0;
      *param_3 = 0;
    }
    else {
      bVar8 = false;
    }
  }
  else {
LAB__text__006093e0:
    if (*param_2 == 0x38) {
      *param_2 = 0;
      *param_4 = 0;
      *param_3 = 0;
    }
    bVar5 = false;
    if (param_1 != 3) goto LAB__text__00609410;
    bVar6 = true;
LAB__text__00609440:
    if (*param_2 == 0x193) {
      *param_2 = 0;
      *param_4 = 0;
      *param_3 = 0;
    }
    bVar7 = false;
    if (param_1 != 5) goto LAB__text__00609474;
    bVar8 = true;
  }
  if ((!bVar9) && (param_2[1] == 0x13b)) {
    param_2[1] = 0;
    param_4[1] = 0;
    param_3[1] = 0;
  }
  if ((!bVar5) && (param_2[1] == 0x38)) {
    param_2[1] = 0;
    param_4[1] = 0;
    param_3[1] = 0;
  }
  if ((!bVar6) && (param_2[1] == 0x3b)) {
    param_2[1] = 0;
    param_4[1] = 0;
    param_3[1] = 0;
  }
  if ((!bVar7) && (param_2[1] == 0x193)) {
    param_2[1] = 0;
    param_4[1] = 0;
    param_3[1] = 0;
  }
  if ((!bVar8) && (param_2[1] == 0x1b5)) {
    param_2[1] = 0;
    param_4[1] = 0;
    param_3[1] = 0;
  }
  if ((!bVar9) && (param_2[2] == 0x13b)) {
    param_2[2] = 0;
    param_4[2] = 0;
    param_3[2] = 0;
  }
  if ((!bVar5) && (param_2[2] == 0x38)) {
    param_2[2] = 0;
    param_4[2] = 0;
    param_3[2] = 0;
  }
  if ((!bVar6) && (param_2[2] == 0x3b)) {
    param_2[2] = 0;
    param_4[2] = 0;
    param_3[2] = 0;
  }
  if ((!bVar7) && (param_2[2] == 0x193)) {
    param_2[2] = 0;
    param_4[2] = 0;
    param_3[2] = 0;
  }
  if ((!bVar8) && (param_2[2] == 0x1b5)) {
    param_2[2] = 0;
    param_4[2] = 0;
    param_3[2] = 0;
  }
  if ((!bVar9) && (param_2[3] == 0x13b)) {
    param_2[3] = 0;
    param_4[3] = 0;
    param_3[3] = 0;
  }
  if ((!bVar5) && (param_2[3] == 0x38)) {
    param_2[3] = 0;
    param_4[3] = 0;
    param_3[3] = 0;
  }
  if ((!bVar6) && (param_2[3] == 0x3b)) {
    param_2[3] = 0;
    param_4[3] = 0;
    param_3[3] = 0;
  }
  if ((!bVar7) && (param_2[3] == 0x193)) {
    param_2[3] = 0;
    param_4[3] = 0;
    param_3[3] = 0;
  }
  if ((!bVar8) && (param_2[3] == 0x1b5)) {
    param_2[3] = 0;
    param_4[3] = 0;
    param_3[3] = 0;
  }
LAB__text__0060a27c:
  sVar3 = *param_2;
  sVar4 = param_2[1];
  uVar12 = (uint)(sVar3 != 0);
  if (sVar4 != 0) {
    uVar12 = uVar12 + 1;
  }
  if (param_2[2] != 0) {
    uVar12 = uVar12 + 1;
  }
  if (uVar12 == -(uint)(param_2[3] != 0)) {
    *param_2 = 0x54;
    *param_4 = 0;
    *param_3 = 0x1e;
    sVar3 = *param_2;
    sVar4 = param_2[1];
  }
  if (sVar3 == 0) {
    uVar10 = *param_3;
    uVar2 = *param_4;
    *param_2 = sVar4;
    *param_3 = param_3[1];
    *param_4 = param_4[1];
    param_2[1] = 0;
    param_4[1] = uVar2;
    param_3[1] = uVar10;
    sVar3 = param_2[1];
    uVar2 = param_4[1];
    param_2[1] = param_2[2];
    param_3[1] = param_3[2];
    param_4[1] = param_4[2];
    param_2[2] = sVar3;
    param_4[2] = uVar2;
    param_3[2] = uVar10;
    sVar3 = param_2[2];
    uVar2 = param_4[2];
    param_2[2] = param_2[3];
    param_3[2] = param_3[3];
    param_4[2] = param_4[3];
    param_2[3] = sVar3;
    param_4[3] = uVar2;
    param_3[3] = uVar10;
    sVar4 = param_2[1];
    sVar3 = param_2[2];
  }
  else {
    sVar3 = param_2[2];
  }
  if (sVar4 == 0) {
    uVar10 = param_3[1];
    uVar2 = param_4[1];
    param_2[1] = sVar3;
    param_3[1] = param_3[2];
    param_4[1] = param_4[2];
    param_2[2] = 0;
    param_4[2] = uVar2;
    param_3[2] = uVar10;
    sVar3 = param_2[2];
    uVar2 = param_4[2];
    param_2[2] = param_2[3];
    param_3[2] = param_3[3];
    param_4[2] = param_4[3];
    param_2[3] = sVar3;
    param_4[3] = uVar2;
    param_3[3] = uVar10;
    sVar3 = param_2[2];
  }
  if (sVar3 == 0) {
    uVar10 = param_3[2];
    uVar2 = param_4[2];
    param_2[2] = param_2[3];
    param_3[2] = param_3[3];
    param_4[2] = param_4[3];
    param_2[3] = 0;
    param_4[3] = uVar2;
    param_3[3] = uVar10;
    return;
  }
  return;
}


