/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066748c; name: FUN_.text__0066748c
 */


undefined8 FUN__text__0066748c(long *param_1,uint param_2,char *param_3,size_t param_4)

{
  byte *pbVar1;
  short *psVar2;
  ulong uVar3;
  byte bVar4;
  short *psVar5;
  undefined8 uVar6;
  ulong uVar7;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  code *pcVar11;
  short *psVar12;
  long lVar13;
  code *pcVar14;
  
  lVar13 = *param_1;
  if (param_4 == 0) {
    param_4 = strlen(param_3);
  }
  if (((((param_2 & 1) != 0) && ((*(byte *)(param_1[0x84] + 0x80) & 0xc) != 0)) &&
      (*(char *)((long)param_1 + 0x5fc) == 'A')) && ((param_3 != (char *)0x0 && (param_4 != 0)))) {
    pbVar1 = (byte *)(lVar13 + 0x14e4);
    bVar4 = *pbVar1;
    if ((bVar4 & 1) != 0) {
      if (*param_3 == '\n') {
        param_4 = param_4 - 1;
        memmove(param_3,param_3 + 1,param_4);
        *(long *)(lVar13 + 0x14e8) = *(long *)(lVar13 + 0x14e8) + 1;
        bVar4 = *pbVar1;
      }
      *pbVar1 = bVar4 & 0xfe;
    }
    psVar5 = memchr(param_3,0xd,param_4);
    if (psVar5 != (short *)0x0) {
      psVar2 = (short *)(param_3 + param_4);
      psVar12 = psVar5;
      if (psVar5 < (short *)((long)psVar2 + -1)) {
        do {
          if (*psVar12 == 0xa0d) {
            psVar12 = (short *)((long)psVar12 + 1);
            *(char *)psVar5 = *(char *)psVar12;
            *(long *)(lVar13 + 0x14e8) = *(long *)(lVar13 + 0x14e8) + 1;
          }
          else if ((char)*psVar12 == '\r') {
            *(char *)psVar5 = '\n';
          }
          else {
            *(char *)psVar5 = (char)*psVar12;
          }
          psVar12 = (short *)((long)psVar12 + 1);
          psVar5 = (short *)((long)psVar5 + 1);
        } while (psVar12 < (short *)((long)psVar2 + -1));
      }
      if (psVar12 < psVar2) {
        if ((char)*psVar12 == '\r') {
          *(char *)psVar5 = '\n';
          *pbVar1 = *pbVar1 | 1;
        }
        else {
          *(char *)psVar5 = (char)*psVar12;
        }
        psVar5 = (short *)((long)psVar5 + 1);
      }
      if (psVar5 < psVar2) {
        *(char *)psVar5 = '\0';
      }
      param_4 = (long)psVar5 - (long)param_3;
    }
  }
  if (param_4 == 0) {
    return 0;
  }
  lVar13 = *param_1;
  if ((*(byte *)(lVar13 + 0x1c0) >> 4 & 1) != 0) goto LAB__text__0066764c;
  if ((param_2 & 1) == 0) {
    pcVar14 = (code *)0x0;
    if ((param_2 >> 1 & 1) != 0) goto LAB__text__00667628;
LAB__text__00667678:
    pcVar11 = (code *)0x0;
  }
  else {
    pcVar14 = *(code **)(lVar13 + 0x708);
    if ((param_2 >> 1 & 1) == 0) goto LAB__text__00667678;
LAB__text__00667628:
    pcVar11 = *(code **)(lVar13 + 0x710);
    if ((pcVar11 == (code *)0x0) && (pcVar11 = (code *)0x0, *(long *)(lVar13 + 0x698) != 0)) {
      pcVar11 = *(code **)(lVar13 + 0x708);
    }
  }
  uVar10 = param_4;
  pcVar9 = param_3;
  do {
    uVar3 = uVar10;
    if (0x3fff < uVar10) {
      uVar3 = 0x4000;
    }
    if (pcVar14 != (code *)0x0) {
      uVar7 = (*pcVar14)(pcVar9,1,uVar3,*(undefined8 *)(lVar13 + 0x688));
      if (uVar7 == 0x10000001) {
        if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) goto LAB__text__00667650;
        uVar6 = 0x71569e;
        goto LAB__text__00667780;
      }
      if (uVar7 != uVar3) {
        FUN__text__0066713c(lVar13,0x70bce9,uVar7,uVar3);
        return 0x17;
      }
    }
    pcVar9 = pcVar9 + uVar3;
    uVar10 = uVar10 - uVar3;
  } while (uVar10 != 0);
  if (pcVar11 != (code *)0x0) {
    FUN__text__0065cab0(lVar13,1);
    sVar8 = (*pcVar11)(param_3,1,param_4,*(undefined8 *)(lVar13 + 0x698));
    FUN__text__0065cab0(lVar13,0);
    if (sVar8 == 0x10000001) {
      param_2 = 2;
LAB__text__0066764c:
      pcVar9 = param_3;
      uVar10 = param_4;
LAB__text__00667650:
      uVar6 = FUN__text__0066795c(lVar13,param_2,pcVar9,uVar10);
      return uVar6;
    }
    if (sVar8 != param_4) {
      uVar6 = 0x712088;
LAB__text__00667780:
      FUN__text__0066713c(lVar13,uVar6);
      return 0x17;
    }
  }
  return 0;
}


