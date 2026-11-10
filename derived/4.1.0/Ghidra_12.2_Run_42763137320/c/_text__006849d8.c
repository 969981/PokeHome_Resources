/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006849d8; name: FUN_.text__006849d8
 */


undefined8 FUN__text__006849d8(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  byte *pbVar5;
  void *__dest;
  size_t *psVar6;
  size_t *psVar7;
  
  if (param_3 == 0) {
    uVar1 = 0;
    *param_1 = 0;
  }
  else {
    lVar2 = 0;
    lVar4 = param_3;
    pbVar5 = (byte *)(param_2 + 0x20);
    do {
      if ((*pbVar5 >> 1 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar5 + -0x10) + 1;
      }
      if ((*pbVar5 >> 2 & 1) == 0) {
        lVar2 = lVar2 + *(long *)(pbVar5 + -8) + 1;
      }
      lVar4 = lVar4 + -1;
      pbVar5 = pbVar5 + 0x28;
    } while (lVar4 != 0);
    lVar2 = FUN__text__006809d4(param_4,lVar2 + param_3 * 0x28);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffc7b;
    }
    else {
      psVar7 = (size_t *)(lVar2 + 0x10);
      psVar6 = (size_t *)(param_2 + 0x10);
      __dest = (void *)(lVar2 + param_3 * 0x28);
      do {
        *(char *)(psVar7 + 2) = (char)psVar6[2];
        if (((byte)psVar6[2] >> 1 & 1) == 0) {
          if (*psVar6 != 0) {
            memcpy(__dest,(void *)psVar6[-2],*psVar6);
          }
          psVar7[-2] = (size_t)__dest;
          sVar3 = *psVar6;
          *psVar7 = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          FUN__text__006799d4(psVar7[-2],*psVar7);
          __dest = (void *)((long)__dest + *psVar6 + 1);
        }
        else {
          psVar7[-2] = psVar6[-2];
          *psVar7 = *psVar6;
        }
        if (((byte)psVar6[2] >> 2 & 1) == 0) {
          if (psVar6[1] != 0) {
            memcpy(__dest,(void *)psVar6[-1],psVar6[1]);
          }
          psVar7[-1] = (size_t)__dest;
          sVar3 = psVar6[1];
          psVar7[1] = sVar3;
          *(undefined1 *)((long)__dest + sVar3) = 0;
          __dest = (void *)((long)__dest + psVar6[1] + 1);
        }
        else {
          psVar7[-1] = psVar6[-1];
          psVar7[1] = psVar6[1];
        }
        psVar7 = psVar7 + 5;
        psVar6 = psVar6 + 5;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


