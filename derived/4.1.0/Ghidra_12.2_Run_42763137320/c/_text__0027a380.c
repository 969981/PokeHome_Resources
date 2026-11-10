/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a380; name: FUN_.text__0027a380
 */


long FUN__text__0027a380(long param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ulong local_10 [2];
  
  param_1 = param_1 + (ulong)param_2 * 0x10;
  uVar1 = *(uint *)(param_1 + 0x7b238);
  uVar3 = (ulong)uVar1;
  lVar2 = *(long *)(param_1 + 0x7b240);
  local_10[0] = *(ulong *)(param_1 + 0x86db8);
  local_10[1] = *(undefined8 *)(param_1 + 0x86dc0);
  if ((int)uVar1 < 1) {
    iVar5 = 0;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    pcVar7 = (char *)(lVar2 + 6);
    do {
      if ((((local_10[uVar4 >> 6 & 0x3ff] >> (uVar4 & 0x3f) & 1) != 0) && (*pcVar7 == '\0')) &&
         (pcVar7[-2] == '\0')) {
        if (iVar5 == param_3) goto LAB__text__0027a404;
        iVar5 = iVar5 + 1;
      }
      uVar4 = uVar4 + 1;
      pcVar7 = pcVar7 + 0x18;
    } while (uVar3 != uVar4);
    uVar4 = 0;
LAB__text__0027a404:
    iVar5 = (int)uVar4;
    if ((0 < (int)uVar1) && ((param_4 & 1) != 0)) {
      uVar6 = 0;
      lVar8 = lVar2 + (uVar4 & 0xffffffff) * 0x18;
      pcVar7 = (char *)(lVar2 + 3);
      do {
        if ((((local_10[uVar6 >> 6 & 0x3ff] >> (uVar6 & 0x3f) & 1) != 0) && (pcVar7[3] != '\0')) &&
           ((*(char *)(lVar8 + 2) == pcVar7[-1] &&
            (((*(char *)(lVar8 + 3) == *pcVar7 && (*(char *)(lVar8 + 4) == pcVar7[1])) &&
             (*(char *)(lVar8 + 5) == pcVar7[2])))))) {
          iVar5 = (int)uVar6;
          break;
        }
        uVar6 = uVar6 + 1;
        pcVar7 = pcVar7 + 0x18;
      } while (uVar3 != uVar6);
    }
  }
  if ((0 < (int)uVar1) && ((param_5 & 1) != 0)) {
    uVar4 = 0;
    lVar8 = lVar2 + (long)iVar5 * 0x18;
    pcVar7 = (char *)(lVar2 + 3);
    do {
      if ((((local_10[uVar4 >> 6 & 0x3ff] >> (uVar4 & 0x3f) & 1) != 0) && (pcVar7[1] != '\0')) &&
         ((*(char *)(lVar8 + 2) == pcVar7[-1] &&
          (((*(char *)(lVar8 + 3) == *pcVar7 && (*(char *)(lVar8 + 6) == pcVar7[3])) &&
           (*(char *)(lVar8 + 5) == pcVar7[2])))))) {
        iVar5 = (int)uVar4;
        break;
      }
      uVar4 = uVar4 + 1;
      pcVar7 = pcVar7 + 0x18;
    } while (uVar3 != uVar4);
  }
  return lVar2 + (long)iVar5 * 0x18;
}


