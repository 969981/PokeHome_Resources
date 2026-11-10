/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a830; name: FUN_.text__0027a830
 */


bool FUN__text__0027a830(long param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  ulong local_10 [2];
  
  lVar10 = param_1 + (ulong)*(uint *)(param_1 + (long)param_2 * 0x18 + 0x698d8) * 0x10;
  uVar1 = *(uint *)(lVar10 + 0x7b238);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    return false;
  }
  lVar4 = *(long *)(lVar10 + 0x7b240);
  iVar7 = 0;
  uVar6 = 0;
  do {
    uVar5 = (uint)uVar6;
    if ((*(ulong *)(param_1 + (long)param_2 * 0x18 + 0x698e0 + (ulong)(uVar5 >> 6 & 0x3ff) * 8) >>
         (uVar6 & 0x3f) & 1) != 0) {
      if (iVar7 == param_3) goto LAB__text__0027a8b8;
      iVar7 = iVar7 + 1;
    }
    uVar6 = (ulong)(uVar5 + 1);
  } while (uVar1 != uVar5 + 1);
  uVar5 = 0;
LAB__text__0027a8b8:
  local_10[0] = *(ulong *)(lVar10 + 0x86db8);
  local_10[1] = *(undefined8 *)(lVar10 + 0x86dc0);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    uVar8 = 0;
    pcVar9 = (char *)(lVar4 + 6);
    do {
      if ((((local_10[uVar6 >> 6 & 0x3ff] >> (uVar6 & 0x3f) & 1) != 0) && (*pcVar9 == '\0')) &&
         (pcVar9[-2] == '\0')) {
        if (uVar8 == uVar5) goto LAB__text__0027a928;
        uVar8 = uVar8 + 1;
      }
      uVar6 = uVar6 + 1;
      pcVar9 = pcVar9 + 0x18;
    } while (uVar3 != uVar6);
    uVar6 = 0;
LAB__text__0027a928:
    if (0 < (int)uVar1) {
      lVar10 = lVar4 + (uVar6 & 0xffffffff) * 0x18;
      uVar6 = 0;
      pcVar9 = (char *)(lVar4 + 6);
      bVar2 = true;
      while (((((local_10[uVar6 >> 6 & 0x3ff] >> (uVar6 & 0x3f) & 1) == 0 || (pcVar9[-2] == '\0'))
              || ((*(char *)(lVar10 + 2) != pcVar9[-4] ||
                  ((*(char *)(lVar10 + 3) != pcVar9[-3] || (*(char *)(lVar10 + 6) != *pcVar9))))))
             || (*(char *)(lVar10 + 5) != pcVar9[-1]))) {
        uVar6 = uVar6 + 1;
        pcVar9 = pcVar9 + 0x18;
        bVar2 = uVar6 < uVar3;
        if (uVar3 == uVar6) {
          return bVar2;
        }
      }
      return bVar2;
    }
  }
  return false;
}


