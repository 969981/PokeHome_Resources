/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6b40; name: FUN_.text__004e6b40
 */


undefined8 FUN__text__004e6b40(long param_1)

{
  byte bVar1;
  byte *__dest;
  byte *__src;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  size_t __n;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
    return 0;
  }
  pbVar5 = *(byte **)(param_1 + 0x38);
  if (((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0) && (pbVar5 == (byte *)0x0)) {
    return 0;
  }
  if (pbVar5 == (byte *)0x0) {
LAB__text__004e6d88:
    if ((*(byte *)(param_1 + 0x6c) >> 2 & 1) == 0) goto LAB__text__004e6e6c;
    pbVar5 = *(byte **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(byte **)(param_1 + 0x38) = pbVar5;
    if (pbVar5 == (byte *)0x0) goto LAB__text__004e6e6c;
    __src = pbVar5 + 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(byte **)(param_1 + 0x38) = __src;
    bVar4 = *pbVar5;
    uVar2 = bVar4 & 0x7f;
    *(uint *)(param_1 + 0x40) = uVar2;
    if ((char)bVar4 < '\0') {
      __src = pbVar5 + 2;
      *(uint *)(param_1 + 0x40) = uVar2 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar4 = pbVar5[1];
      uVar2 = bVar4 & 0x7f | uVar2 << 7;
      *(uint *)(param_1 + 0x40) = uVar2;
      if ((char)bVar4 < '\0') {
        __src = pbVar5 + 3;
        *(uint *)(param_1 + 0x40) = uVar2 << 7;
        *(byte **)(param_1 + 0x38) = __src;
        bVar4 = pbVar5[2];
        uVar2 = bVar4 & 0x7f | uVar2 << 7;
        *(uint *)(param_1 + 0x40) = uVar2;
        if ((char)bVar4 < '\0') {
          __src = pbVar5 + 4;
          *(uint *)(param_1 + 0x40) = uVar2 << 7;
          *(byte **)(param_1 + 0x38) = __src;
          bVar4 = pbVar5[3];
          uVar2 = bVar4 & 0x7f | uVar2 << 7;
          if ((char)bVar4 < '\0') {
            uVar2 = 0xffffffff;
          }
          *(uint *)(param_1 + 0x40) = uVar2;
          if ((char)bVar4 < '\0') goto LAB__text__004e6e6c;
        }
      }
    }
    pbVar5 = *(byte **)(param_1 + 0x30);
    if (pbVar5 <= __src) goto LAB__text__004e6e6c;
    __dest = (byte *)(param_1 + 0x44);
    __dest[0] = 0;
    __dest[1] = 0;
    __dest[2] = 0;
    __dest[3] = 0;
    __n = (ulong)(uint)((int)pbVar5 - (int)__src) & 0xff;
    *(undefined2 *)(param_1 + 0x48) = 0;
    if (__src + 6 <= pbVar5) {
      __n = 6;
    }
  }
  else {
    __dest = (byte *)(param_1 + 0x44);
    bVar4 = *__dest;
    if (-0x11 < (char)bVar4) {
      if (bVar4 == 0xf0) {
LAB__text__004e6bf8:
        pbVar6 = (byte *)(param_1 + 0x45);
        iVar7 = (int)param_1 + 0x46;
        bVar4 = *pbVar6;
      }
      else {
        if (bVar4 != 0xff) {
          if (bVar4 != 0xf7) goto LAB__text__004e6d74;
          goto LAB__text__004e6bf8;
        }
        pbVar6 = (byte *)(param_1 + 0x46);
        iVar7 = (int)param_1 + 0x47;
        bVar4 = *pbVar6;
      }
      uVar2 = bVar4 & 0x7f;
      if ((char)bVar4 < '\0') {
        uVar2 = pbVar6[1] & 0x7f | uVar2 << 7;
        iVar7 = (int)pbVar6;
        if ((char)pbVar6[1] < '\0') {
          uVar2 = pbVar6[2] & 0x7f | uVar2 << 7;
          if ((char)pbVar6[2] < '\0') {
            if ((char)pbVar6[3] < '\0') goto LAB__text__004e6d74;
            iVar7 = iVar7 + 4;
            uVar2 = pbVar6[3] & 0x7f | uVar2 << 7;
          }
          else {
            iVar7 = iVar7 + 3;
          }
        }
        else {
          iVar7 = iVar7 + 2;
        }
      }
      uVar2 = uVar2 + (iVar7 - (int)__dest);
      if (uVar2 != 0xffffffff) {
        pbVar5 = pbVar5 + uVar2;
        pbVar6 = *(byte **)(param_1 + 0x30);
        if (pbVar5 <= pbVar6) {
          bVar4 = 0;
          goto LAB__text__004e6c8c;
        }
      }
LAB__text__004e6d74:
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB__text__004e6d7c:
      *(undefined4 *)(param_1 + 0x47) = 0;
      __dest[0] = 0;
      __dest[1] = 0;
      __dest[2] = 0;
      __dest[3] = 0;
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      goto LAB__text__004e6d88;
    }
    if (((bVar4 & 0xf0) == 0xb0) && (*(char *)(param_1 + 0x45) < '\0')) goto LAB__text__004e6d74;
    lVar3 = 2;
    if ((bVar4 & 0xe0) != 0xc0) {
      lVar3 = 3;
    }
    pbVar5 = pbVar5 + (lVar3 - (ulong)(*pbVar5 >> 7 ^ 1));
    pbVar6 = *(byte **)(param_1 + 0x30);
    if (pbVar6 < pbVar5) goto LAB__text__004e6d74;
LAB__text__004e6c8c:
    *(byte *)(param_1 + 0x4a) = bVar4;
    if (pbVar5 == pbVar6) goto LAB__text__004e6d74;
    __src = pbVar5 + 1;
    *(uint *)(param_1 + 0x40) = 0;
    *(byte **)(param_1 + 0x38) = __src;
    bVar1 = *pbVar5;
    uVar2 = bVar1 & 0x7f;
    *(uint *)(param_1 + 0x40) = uVar2;
    if ((char)bVar1 < '\0') {
      __src = pbVar5 + 2;
      *(uint *)(param_1 + 0x40) = uVar2 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar1 = pbVar5[1];
      uVar2 = bVar1 & 0x7f | uVar2 << 7;
      *(uint *)(param_1 + 0x40) = uVar2;
      if (-1 < (char)bVar1) goto LAB__text__004e6d30;
      __src = pbVar5 + 3;
      *(uint *)(param_1 + 0x40) = uVar2 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar1 = pbVar5[2];
      uVar2 = bVar1 & 0x7f | uVar2 << 7;
      *(uint *)(param_1 + 0x40) = uVar2;
      if (-1 < (char)bVar1) goto LAB__text__004e6d30;
      __src = pbVar5 + 4;
      *(uint *)(param_1 + 0x40) = uVar2 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar1 = pbVar5[3];
      uVar2 = bVar1 & 0x7f | uVar2 << 7;
      if ((char)bVar1 < '\0') {
        uVar2 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x40) = uVar2;
      if (-1 < (char)bVar1) goto LAB__text__004e6d30;
LAB__text__004e6e90:
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB__text__004e6d7c;
    }
LAB__text__004e6d30:
    if (pbVar6 <= __src) goto LAB__text__004e6e90;
    lVar3 = 6;
    *(undefined2 *)(param_1 + 0x48) = 0;
    __dest[0] = 0;
    __dest[1] = 0;
    __dest[2] = 0;
    __dest[3] = 0;
    if ((bVar4 != 0) && (-1 < (char)*__src)) {
      __dest = (byte *)(param_1 + 0x45);
      lVar3 = 5;
      *(byte *)(param_1 + 0x44) = bVar4;
    }
    uVar2 = (int)pbVar6 - (int)__src;
    if (__src + lVar3 <= pbVar6) {
      uVar2 = (uint)lVar3;
    }
    __n = (ulong)uVar2 & 0xff;
  }
  memcpy(__dest,__src,__n);
LAB__text__004e6e6c:
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
  return 1;
}


