/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d46f0; name: FUN_.text__004d46f0
 */


void FUN__text__004d46f0(long param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  char cVar13;
  long *plVar14;
  bool bVar15;
  undefined8 uVar16;
  
  uVar9 = FUN__text__00414e54();
  if ((uVar9 & 1) != 0) {
    nn::os::LockMutex((MutexType *)&DAT_00aea250);
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    bVar11 = *(byte *)(param_1 + 0x1ac);
    uVar7 = 0;
    uVar6 = 0;
    if (*(short *)(param_1 + 0x1a8) != 0) goto LAB__text__004d47f4;
LAB__text__004d4758:
    *(ushort *)(param_1 + 0x1a8) = uVar6;
    if ((bVar11 >> 1 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 8);
      goto joined_r0x004d4764;
    }
  }
  else {
    uVar6 = FUN__text__0046697c(*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78));
    bVar11 = *(byte *)(param_1 + 0x1ac);
    uVar7 = uVar6;
    if ((uVar6 != 0) != (*(short *)(param_1 + 0x1a8) == 0)) goto LAB__text__004d4758;
LAB__text__004d47f4:
    *(ushort *)(param_1 + 0x1a8) = uVar7;
    *(byte *)(param_1 + 0x1ac) = bVar11 | 2;
    lVar10 = *(long *)(param_1 + 8);
    uVar6 = uVar7;
joined_r0x004d4764:
    if (lVar10 != 0) {
      *(undefined4 *)(lVar10 + 0x174) = 0x42ca0000;
      uVar6 = *(ushort *)(param_1 + 0x1a8);
    }
  }
  plVar12 = (long *)(param_1 + 0x168);
  uVar6 = *(ushort *)(param_1 + 0x1aa) ^ uVar6;
  uVar2 = *(uint *)(param_1 + 0x160) & 0xf00;
  bVar5 = uVar2 == 0x300;
  if ((param_2 & 1) == 0) {
    if ((*(char *)(param_1 + 199) == '\0') &&
       ((0 < (short)uVar6 ||
        (0 < (short)(*(ushort *)(param_1 + 0xcc) ^ *(ushort *)(param_1 + 0xca)))))) {
      if (*(short *)(param_1 + 0xcc) == 0 && *(short *)(param_1 + 0x1a8) == 0) {
        if ('\0' < *(char *)(param_1 + 0x178)) {
          *(undefined1 *)(param_1 + 0x178) = 0xff;
        }
        if (*(char *)(param_1 + 0xc4) == '\0') goto LAB__text__004d47d8;
      }
      else {
        if (*(char *)(param_1 + 0x178) == '\0') {
          *(undefined1 *)(param_1 + 0x178) = 0xff;
        }
        *(undefined1 *)(param_1 + 0x179) = 0;
      }
      bVar15 = true;
LAB__text__004d4874:
      if (*(char *)(param_1 + 199) != '\0') goto LAB__text__004d4908;
LAB__text__004d487c:
      if (*(short *)(param_1 + 0xcc) != 0 || *(short *)(param_1 + 0x1a8) != 0)
      goto LAB__text__004d4908;
      cVar13 = '\0';
      bVar5 = *(char *)(param_1 + 0xc5) != '\0';
      plVar14 = (long *)(param_1 + 0xb0);
      if (bVar15) goto LAB__text__004d4914;
    }
    else {
      bVar15 = false;
      if (*(char *)(param_1 + 199) == '\0') goto LAB__text__004d487c;
LAB__text__004d4908:
      cVar13 = -1;
      plVar14 = plVar12;
      if (bVar15) {
LAB__text__004d4914:
        uVar16 = 1;
        goto LAB__text__004d4a7c;
      }
    }
    if ((param_2 >> 1 & 1) != 0) {
      uVar16 = 1;
      if ((*(char *)(param_1 + 0xf7) != '\0') &&
         (iVar8 = FUN__text__004d4c40(param_1,1,plVar14,bVar5), iVar8 != 4))
      goto LAB__text__004d4940;
      goto LAB__text__004d4a7c;
    }
    if ((*(char *)(param_1 + 0xf7) == '\0') &&
       ((0 < (short)uVar6 ||
        (0 < (short)(*(ushort *)(param_1 + 0xfc) ^ *(ushort *)(param_1 + 0xfa)))))) {
      pcVar1 = (char *)(param_1 + cVar13 + 0x179);
      cVar4 = *(char *)(param_1 + cVar13 + 0x179);
      if (*(short *)(param_1 + 0xfc) == 0 && *(short *)(param_1 + 0x1a8) == 0) {
        if ('\x01' < cVar4) {
          *pcVar1 = cVar13;
        }
        uVar16 = 1;
        if (*(char *)(param_1 + 0xf4) == '\0') goto LAB__text__004d4a7c;
      }
      else {
        if (cVar4 == '\x01') {
          *pcVar1 = cVar13;
        }
        *(undefined1 *)(param_1 + 0x17a) = 1;
      }
      bVar15 = true;
      cVar4 = *(char *)(param_1 + 0xf7);
    }
    else {
LAB__text__004d4940:
      bVar15 = false;
      cVar4 = *(char *)(param_1 + 0xf7);
    }
    if ((cVar4 == '\0') && (*(short *)(param_1 + 0xfc) == 0 && *(short *)(param_1 + 0x1a8) == 0)) {
      plVar14 = (long *)(param_1 + 0xe0);
      cVar13 = '\x01';
      bVar5 = *(char *)(param_1 + 0xf5) != '\0';
    }
    if (bVar15) {
LAB__text__004d4994:
      uVar16 = 2;
      goto LAB__text__004d4a7c;
    }
    if ((param_2 >> 2 & 1) != 0) {
      uVar16 = 2;
      if ((*(char *)(param_1 + 0x127) != '\0') &&
         (iVar8 = FUN__text__004d4c40(param_1,2,plVar14,bVar5), iVar8 != 4))
      goto LAB__text__004d4a20;
      goto LAB__text__004d4a7c;
    }
    if ((*(char *)(param_1 + 0x127) == '\0') &&
       ((0 < (short)uVar6 ||
        (0 < (short)(*(ushort *)(param_1 + 300) ^ *(ushort *)(param_1 + 0x12a)))))) {
      pcVar1 = (char *)(param_1 + cVar13 + 0x179);
      cVar4 = *(char *)(param_1 + cVar13 + 0x179);
      if (*(short *)(param_1 + 300) == 0 && *(short *)(param_1 + 0x1a8) == 0) {
        if ('\x02' < cVar4) {
          *pcVar1 = cVar13;
        }
        if (*(char *)(param_1 + 0x124) == '\0') goto LAB__text__004d4994;
      }
      else {
        if (cVar4 == '\x02') {
          *pcVar1 = cVar13;
        }
        *(undefined1 *)(param_1 + 0x17b) = 2;
      }
      bVar15 = true;
      cVar4 = *(char *)(param_1 + 0x127);
    }
    else {
LAB__text__004d4a20:
      bVar15 = false;
      cVar4 = *(char *)(param_1 + 0x127);
    }
    if ((cVar4 == '\0') && (*(short *)(param_1 + 300) == 0 && *(short *)(param_1 + 0x1a8) == 0)) {
      plVar14 = (long *)(param_1 + 0x110);
      cVar13 = '\x02';
      bVar5 = *(char *)(param_1 + 0x125) != '\0';
    }
    if (bVar15) {
LAB__text__004d4a78:
      uVar16 = 3;
      goto LAB__text__004d4a7c;
    }
    if ((param_2 >> 3 & 1) == 0) {
      if ((*(char *)(param_1 + 0x157) == '\0') &&
         ((0 < (short)uVar6 ||
          (0 < (short)(*(ushort *)(param_1 + 0x15c) ^ *(ushort *)(param_1 + 0x15a)))))) {
        pcVar1 = (char *)(param_1 + cVar13 + 0x179);
        cVar4 = *(char *)(param_1 + cVar13 + 0x179);
        if (*(short *)(param_1 + 0x15c) == 0 && *(short *)(param_1 + 0x1a8) == 0) {
          if ('\x03' < cVar4) {
            *pcVar1 = cVar13;
          }
          if (*(char *)(param_1 + 0x154) == '\0') goto LAB__text__004d4a78;
        }
        else {
          if (cVar4 == '\x03') {
            *pcVar1 = cVar13;
          }
          *(undefined1 *)(param_1 + 0x17c) = 3;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x157) == '\0') goto LAB__text__004d4a78;
      uVar16 = 3;
      iVar8 = FUN__text__004d4c40(param_1,3,plVar14,bVar5);
      if (iVar8 == 4) goto LAB__text__004d4a7c;
    }
  }
  else {
    if (*(char *)(param_1 + 199) != '\0') {
      iVar8 = FUN__text__004d4c40(param_1,0,plVar12,uVar2 == 0x300);
      bVar15 = false;
      if (iVar8 != 4) goto LAB__text__004d4874;
    }
LAB__text__004d47d8:
    uVar16 = 0;
    cVar13 = -1;
LAB__text__004d4a7c:
    FUN__text__004d1710(param_1,uVar16,cVar13);
  }
  *(byte *)(param_1 + 0x1ac) = *(byte *)(param_1 + 0x1ac) & 0xfc | 1;
  if (*(short *)(param_1 + 0x1a8) == 0) {
    if ((*(char *)(param_1 + 0x157) == '\0') && (*(short *)(param_1 + 0x15c) == 0)) {
      lVar10 = 3;
    }
    else if ((*(char *)(param_1 + 0x127) == '\0') && (*(short *)(param_1 + 300) == 0)) {
      lVar10 = 2;
    }
    else if ((*(char *)(param_1 + 0xf7) == '\0') && (*(short *)(param_1 + 0xfc) == 0)) {
      lVar10 = 1;
    }
    else {
      if ((*(char *)(param_1 + 199) != '\0') || (*(short *)(param_1 + 0xcc) != 0))
      goto LAB__text__004d4b0c;
      lVar10 = 0;
    }
    plVar12 = (long *)(param_1 + lVar10 * 0x30 + 0xb0);
  }
LAB__text__004d4b0c:
  if ((int)plVar12[1] != 0) {
    bVar11 = *(byte *)(param_1 + 0x90);
    bVar3 = *(byte *)(param_1 + 0x91);
    lVar10 = *plVar12;
    do {
      *(byte *)(lVar10 + 0x20) = (bVar3 | bVar11 >> 2) & 0x1f;
      *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(lVar10 + 8);
      lVar10 = lVar10 + 0x30;
    } while (lVar10 != *plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30);
  }
  uVar9 = FUN__text__00414e54();
  if ((uVar9 & 1) == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_00aea250);
  return;
}


