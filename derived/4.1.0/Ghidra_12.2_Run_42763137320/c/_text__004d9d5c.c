/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d9d5c; name: FUN_.text__004d9d5c
 */


void FUN__text__004d9d5c(long param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (lVar3 == 0 || *(long *)(param_1 + 0x218) == 0) {
    return;
  }
  sVar1 = FUN__text__00468bb0(lVar3,0,*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x218);
  if ((sVar1 != 0) == (*(short *)(lVar2 + 0xcc) == 0)) {
    *(short *)(lVar2 + 0xcc) = sVar1;
    *(byte *)(lVar2 + 0x1ac) = *(byte *)(lVar2 + 0x1ac) | 2;
    lVar2 = *(long *)(lVar2 + 8);
joined_r0x004d9f04:
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x174) = 0x42ca0000;
    }
  }
  else {
    *(short *)(lVar2 + 0xcc) = sVar1;
    if ((*(byte *)(lVar2 + 0x1ac) >> 1 & 1) != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      goto joined_r0x004d9f04;
    }
  }
  sVar1 = FUN__text__00468bb0(lVar3,1,*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x218);
  if ((sVar1 != 0) == (*(short *)(lVar2 + 0xfc) == 0)) {
    *(short *)(lVar2 + 0xfc) = sVar1;
    *(byte *)(lVar2 + 0x1ac) = *(byte *)(lVar2 + 0x1ac) | 2;
    lVar2 = *(long *)(lVar2 + 8);
joined_r0x004d9f1c:
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x174) = 0x42ca0000;
    }
  }
  else {
    *(short *)(lVar2 + 0xfc) = sVar1;
    if ((*(byte *)(lVar2 + 0x1ac) >> 1 & 1) != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      goto joined_r0x004d9f1c;
    }
  }
  sVar1 = FUN__text__00468bb0(lVar3,2,*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x218);
  if ((sVar1 != 0) == (*(short *)(lVar2 + 300) == 0)) {
    *(short *)(lVar2 + 300) = sVar1;
    *(byte *)(lVar2 + 0x1ac) = *(byte *)(lVar2 + 0x1ac) | 2;
    lVar2 = *(long *)(lVar2 + 8);
joined_r0x004d9f34:
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x174) = 0x42ca0000;
    }
  }
  else {
    *(short *)(lVar2 + 300) = sVar1;
    if ((*(byte *)(lVar2 + 0x1ac) >> 1 & 1) != 0) {
      lVar2 = *(long *)(lVar2 + 8);
      goto joined_r0x004d9f34;
    }
  }
  sVar1 = FUN__text__00468bb0(lVar3,3,*(undefined8 *)(param_1 + 8));
  lVar2 = *(long *)(param_1 + 0x218);
  if ((sVar1 != 0) == (*(short *)(lVar2 + 0x15c) == 0)) {
    *(short *)(lVar2 + 0x15c) = sVar1;
    *(byte *)(lVar2 + 0x1ac) = *(byte *)(lVar2 + 0x1ac) | 2;
    lVar2 = *(long *)(lVar2 + 8);
  }
  else {
    *(short *)(lVar2 + 0x15c) = sVar1;
    if ((*(byte *)(lVar2 + 0x1ac) >> 1 & 1) == 0) goto LAB__text__004d9eb0;
    lVar2 = *(long *)(lVar2 + 8);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x174) = 0x42ca0000;
  }
LAB__text__004d9eb0:
  sVar1 = FUN__text__0046697c(lVar3,*(undefined8 *)(param_1 + 8));
  lVar3 = *(long *)(param_1 + 0x218);
  if ((sVar1 != 0) == (*(short *)(lVar3 + 0x1a8) == 0)) {
    *(short *)(lVar3 + 0x1a8) = sVar1;
    *(byte *)(lVar3 + 0x1ac) = *(byte *)(lVar3 + 0x1ac) | 2;
  }
  else {
    *(short *)(lVar3 + 0x1a8) = sVar1;
    if ((*(byte *)(lVar3 + 0x1ac) >> 1 & 1) == 0) {
      return;
    }
  }
  if (*(long *)(lVar3 + 8) == 0) {
    return;
  }
  *(undefined4 *)(*(long *)(lVar3 + 8) + 0x174) = 0x42ca0000;
  return;
}


