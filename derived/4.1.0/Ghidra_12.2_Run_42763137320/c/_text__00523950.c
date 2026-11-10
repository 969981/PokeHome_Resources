/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00523950; name: FUN_.text__00523950
 */


void FUN__text__00523950(long param_1,float *param_2,undefined8 param_3,char *param_4)

{
  size_t sVar1;
  void *__dest;
  ulong __n;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_4 != (char *)0x0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(char **)(param_1 + 0x48) = param_4;
      if (*(char *)(param_1 + 0x50) != '\0') goto LAB__text__005239e4;
    }
    else {
      if (*(char *)(param_1 + 0x50) != '\0') {
        FUN__text__00400fc0(9);
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      *(char **)(param_1 + 0x48) = param_4;
    }
    sVar1 = strlen(param_4);
    if ((int)sVar1 == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      __n = (ulong)((int)sVar1 + 1);
      __dest = (void *)FUN__text__00400f80(9,__n);
      *(void **)(param_1 + 0x48) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,__n);
        *(undefined1 *)(param_1 + 0x50) = 1;
      }
    }
  }
LAB__text__005239e4:
  *(float *)(param_1 + 0x98) = param_2[6];
  *(float *)(param_1 + 0x9c) = param_2[7];
  *(float *)(param_1 + 0xa4) = param_2[8];
  fVar4 = param_2[2];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  *(float *)(param_1 + 0x34) = fVar3;
  *(float *)(param_1 + 0x30) = fVar2;
  *(float *)(param_1 + 0x38) = fVar4;
  fVar7 = param_2[5];
  fVar5 = param_2[3];
  fVar6 = param_2[4];
  *(float *)(param_1 + 0x28) = fVar6;
  *(float *)(param_1 + 0x24) = fVar5;
  *(float *)(param_1 + 0x2c) = fVar7;
  *(float *)(param_1 + 0x18) = fVar4 * fVar6 - fVar3 * fVar7;
  *(float *)(param_1 + 0x1c) = fVar7 * fVar2 - fVar4 * fVar5;
  *(float *)(param_1 + 0x20) = fVar3 * fVar5 - fVar6 * fVar2;
  *(float *)(param_1 + 0xac) = param_2[9];
  FUN__text__00523780(param_1,*(undefined1 *)(param_2 + 10),param_3);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xc);
  return;
}


