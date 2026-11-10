/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e45d0; name: FUN_.text__003e45d0
 */


undefined4 FUN__text__003e45d0(undefined8 *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if ((long)param_4 < 1) {
    *param_1 = 0;
    return 0x16;
  }
  bVar6 = *param_3;
  cVar3 = *(char *)((ulong)bVar6 + 0x73ae18);
  uVar8 = (uint)bVar6;
  if (cVar3 == '\x01') {
    *param_2 = uVar8;
    *param_1 = 1;
    return 0;
  }
  uVar9 = (uint)bVar6;
  if (cVar3 == '\x02') {
    if (param_4 == 1) {
LAB__text__003e4788:
      *param_1 = 1;
      *param_2 = 0xfffd;
      return 0x22;
    }
    if ((param_3[1] & 0xc0) == 0x80) {
      *param_1 = 2;
      *param_2 = param_3[1] & 0x3f | (uVar9 & 0x1f) << 6;
      return 0;
    }
    goto LAB__text__003e466c;
  }
  if (cVar3 == '\x03') {
    if (2 < param_4) {
      bVar6 = param_3[1];
      if ((bVar6 & 0xc0) == 0x80) {
        bVar1 = param_3[2];
        if ((bVar1 & 0xc0) == 0x80) {
          uVar4 = (uVar8 & 0xf) << 0xc;
          uVar9 = (bVar6 & 0x3f) << 6;
          uVar8 = uVar4 | uVar9 & 0xf800;
          if ((uVar8 != 0) && (uVar8 != 0xd800)) {
            *param_1 = 3;
            *param_2 = bVar1 & 0x3f | uVar4 | uVar9;
            return 0;
          }
        }
        else if (uVar9 == 0xed) {
          if (bVar6 < 0xa0) goto LAB__text__003e4830;
        }
        else if ((uVar8 != 0xe0) || (0x9f < bVar6)) {
LAB__text__003e4830:
          *param_1 = 2;
          *param_2 = 0xfffd;
          return 0x54;
        }
      }
      goto LAB__text__003e466c;
    }
    if (param_4 == 1) goto LAB__text__003e4788;
    bVar6 = param_3[1];
    if (uVar9 == 0xed) {
      bVar6 = bVar6 & 0xe0;
    }
    else {
      if (uVar9 == 0xe0) {
        if ((bVar6 & 0xe0) != 0xa0) goto LAB__text__003e466c;
        goto LAB__text__003e487c;
      }
      bVar6 = bVar6 & 0xc0;
    }
    if (bVar6 != 0x80) goto LAB__text__003e466c;
    goto LAB__text__003e487c;
  }
  if (cVar3 != '\x04') goto LAB__text__003e466c;
  if (3 < param_4) {
    bVar6 = param_3[1];
    if ((bVar6 & 0xc0) == 0x80) {
      bVar1 = param_3[2];
      if ((bVar1 & 0xc0) == 0x80) {
        bVar2 = param_3[3];
        if ((bVar2 & 0xc0) == 0x80) {
          uVar8 = (uVar8 & 7) << 0x12 | (bVar6 & 0x3f) << 0xc;
          if (0xffefffff < uVar8 - 0x110000) {
            *param_1 = 4;
            *param_2 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6 | uVar8;
            return 0;
          }
          goto LAB__text__003e466c;
        }
        uVar10 = 3;
      }
      else {
        uVar10 = 2;
      }
      if (uVar8 == 0xf4) {
        if (bVar6 < 0x90) goto LAB__text__003e47ec;
      }
      else if ((uVar8 != 0xf0) || (0x8f < bVar6)) {
LAB__text__003e47ec:
        *param_1 = uVar10;
        *param_2 = 0xfffd;
        return 0x54;
      }
    }
    goto LAB__text__003e466c;
  }
  if (param_4 == 1) goto LAB__text__003e4788;
  bVar6 = param_3[1];
  if (uVar9 == 0xf4) {
    bVar6 = bVar6 & 0xf0;
LAB__text__003e486c:
    if (bVar6 != 0x80) {
LAB__text__003e466c:
      *param_1 = 1;
      *param_2 = 0xfffd;
      return 0x54;
    }
  }
  else {
    if (uVar9 != 0xf0) {
      bVar6 = bVar6 & 0xc0;
      goto LAB__text__003e486c;
    }
    if (0x2f < (byte)(bVar6 + 0x70)) goto LAB__text__003e466c;
  }
  if (param_4 != 2) {
    bVar5 = (param_3[2] & 0xc0) == 0x80;
    uVar10 = 2;
    if (bVar5) {
      uVar10 = 3;
    }
    uVar7 = 0x22;
    if (!bVar5) {
      uVar7 = 0x54;
    }
    *param_1 = uVar10;
    *param_2 = 0xfffd;
    return uVar7;
  }
LAB__text__003e487c:
  *param_1 = 2;
  *param_2 = 0xfffd;
  return 0x22;
}


