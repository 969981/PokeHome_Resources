/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f50e0; name: FUN_.text__003f50e0
 */


int FUN__text__003f50e0(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  byte *pbVar4;
  byte *__dest;
  int iVar5;
  int iVar6;
  byte abStack_c0 [128];
  
  sVar3 = strlen(param_2);
  __dest = abStack_c0 + (0x80 - (sVar3 + 0x10 & 0xfffffffffffffff0));
  if (sVar3 + 1 <= sVar3) {
    sVar3 = sVar3 + 1;
  }
  __s = strncpy((char *)__dest,param_2,sVar3);
  __dest[sVar3] = 0;
  sVar3 = strlen(__s);
  if (sVar3 != 0) {
    pbVar4 = __dest;
    do {
      if (*pbVar4 - 0x41 < 0x1a) {
        *pbVar4 = *pbVar4 + 0x20;
      }
      sVar3 = sVar3 - 1;
      pbVar4 = pbVar4 + 1;
    } while (sVar3 != 0);
  }
  iVar5 = 0;
  iVar6 = *param_1 + -1;
  while( true ) {
    iVar2 = iVar6 - iVar5;
    if (iVar6 < iVar5) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = iVar5 + (iVar2 >> 1);
    iVar2 = strcmp((char *)((long)param_1 +
                           (ulong)*(uint *)((long)param_1 +
                                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                           (ulong)uVar1 << 3) + 4)),(char *)__dest);
    if (iVar2 == 0) break;
    if (iVar2 < 1) {
      iVar5 = uVar1 + 1;
    }
    else {
      iVar6 = uVar1 - 1;
    }
    if (iVar6 < iVar5) {
      return 0;
    }
  }
  return param_1[(long)(int)uVar1 * 2 + 2];
}


