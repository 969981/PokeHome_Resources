/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ac80; name: FUN_.text__0041ac80
 */


void FUN__text__0041ac80(undefined4 param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                        uint param_5)

{
  short *psVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  size_t __n;
  int iVar6;
  long lVar7;
  ulong uVar8;
  void *__dest;
  float fVar9;
  float afStack_240 [128];
  float fStack_34;
  
  bVar3 = *(byte *)(param_2 + 0x6d);
  __n = (ulong)bVar3 << 2;
  __dest = (void *)((long)afStack_240 + (0x200 - ((ulong)((int)__n + 0xf) & 0x7f0)));
  if (*(byte *)(param_2 + 0x6c) - 3 < 3) {
    if (bVar3 != 0) {
      memcpy(__dest,*(void **)(param_2 + 0x20),__n);
    }
  }
  else if ((*(byte *)(param_2 + 0x6c) < 3) && (bVar3 != 0)) {
    lVar7 = *(long *)(param_2 + 0x20);
    if (bVar3 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        psVar1 = (short *)(lVar7 + uVar8 * 2);
        sVar5 = psVar1[1];
        pfVar2 = (float *)((long)__dest + uVar8 * 4);
        uVar8 = uVar8 + 2;
        *pfVar2 = (float)(int)*psVar1 * 3.0517578e-05;
        pfVar2[1] = (float)(int)sVar5 * 3.0517578e-05;
      } while (((ulong)bVar3 & 0xfe) != uVar8);
    }
    if ((bVar3 & 1) != 0) {
      *(float *)((long)__dest + uVar8 * 4) =
           (float)(int)*(short *)(lVar7 + uVar8 * 2) * 3.0517578e-05;
    }
  }
  fVar9 = (float)NEON_ucvtf(*param_3);
  if (*(float *)(param_2 + 100) != fVar9 / (float)param_5) {
    *(float *)(param_2 + 100) = fVar9 / (float)param_5;
    *(undefined1 *)(param_2 + 0x6e) = 1;
  }
  FUN__text__0041aeb4(param_1,param_2,1);
  if ((*(ushort *)(param_3 + 2) & 0x3f) == 0x10) {
    cVar4 = *(char *)(param_2 + 0x6d);
    iVar6 = 1;
    if (cVar4 != '\x02') {
      iVar6 = 2;
    }
    if (cVar4 != '\x01') goto LAB__text__0041ae0c;
    *(undefined1 *)(param_2 + 0x6c) = 0;
LAB__text__0041ae30:
    uVar8 = 0;
    do {
      fVar9 = (float)NEON_fminnm(*(float *)((long)__dest + uVar8 * 4) * 32767.0,0x46fffe00);
      if (fVar9 <= -32768.0) {
        fVar9 = -32768.0;
      }
      *(short *)(*(long *)(param_2 + 0x20) + uVar8 * 2) = (short)(int)fVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(byte *)(param_2 + 0x6d));
  }
  else {
    if ((*(ushort *)(param_3 + 2) & 0x3f) != 0x20) {
      *(undefined1 *)(param_2 + 0x6c) = 0xff;
      return;
    }
    cVar4 = *(char *)(param_2 + 0x6d);
    iVar6 = 4;
    if (cVar4 != '\x02') {
      iVar6 = 5;
    }
    if (cVar4 == '\x01') {
      *(undefined1 *)(param_2 + 0x6c) = 3;
    }
    else {
LAB__text__0041ae0c:
      *(char *)(param_2 + 0x6c) = (char)iVar6;
      if (1 < iVar6 - 4U) {
        if (1 < iVar6 - 1U) {
          return;
        }
        if (cVar4 == '\0') {
          return;
        }
        goto LAB__text__0041ae30;
      }
      if (cVar4 == '\0') {
        return;
      }
    }
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x20) + lVar7) = *(undefined4 *)((long)__dest + lVar7);
    } while (uVar8 < *(byte *)(param_2 + 0x6d));
  }
  return;
}


