/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e3f40; name: FUN_.text__003e3f40
 */


size_t FUN__text__003e3f40(void *param_1,long param_2,byte *param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  size_t __n;
  size_t sVar5;
  
  __n = param_4 - (long)param_3;
  if (param_2 - (long)param_1 < (long)__n) {
    do {
      sVar5 = __n;
      if (0 < (long)__n) {
        do {
          __n = sVar5 - 1;
          bVar3 = (param_3[sVar5 - 1] & 0xc0) != 0x80;
          bVar2 = sVar5 != 0;
          bVar4 = sVar5 != 1;
          sVar5 = __n;
        } while ((!bVar3 && bVar2) && (bVar3 || bVar4));
      }
    } while (param_2 - (long)param_1 < (long)__n);
  }
  if ((long)__n < 1) {
    if ((*param_3 & 0xc0) != 0x80) {
      return 0;
    }
    sVar5 = __n;
    do {
      __n = sVar5 - 1;
      lVar1 = sVar5 - 1;
      sVar5 = __n;
    } while ((*(byte *)((long)param_1 + lVar1) & 0xc0) == 0x80);
  }
  else {
    memcpy(param_1,param_3,__n);
  }
  return __n;
}


