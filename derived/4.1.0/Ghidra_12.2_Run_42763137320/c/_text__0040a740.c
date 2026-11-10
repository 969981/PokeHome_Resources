/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040a740; name: FUN_.text__0040a740
 */


long FUN__text__0040a740(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (DAT_00ae99f8 != 0) {
      lVar7 = DAT_00ae99f8;
      do {
        if (*(long *)(lVar7 + 0x28) == param_1[1]) {
          return lVar7;
        }
        lVar7 = *(long *)(lVar7 + 0x20);
        lVar8 = DAT_00ae99f8;
      } while (lVar7 != 0);
      do {
        if (*(char *)(lVar8 + 0x555) != '\0') {
          return lVar8;
        }
        plVar1 = (long *)(lVar8 + 0x20);
        lVar8 = *plVar1;
      } while (*plVar1 != 0);
    }
    return 0;
  }
  iVar9 = *(int *)(lVar7 + 0x198);
  lVar8 = DAT_00ae99f8;
  iVar12 = iVar9;
  if (iVar9 == -1) {
    lVar10 = lVar7;
    do {
      lVar10 = *(long *)(lVar10 + 0x80);
      iVar12 = iVar9;
      if (lVar10 == 0) goto joined_r0x0040a798;
      iVar12 = *(int *)(lVar10 + 0x198);
    } while (iVar12 == -1);
    *(int *)(lVar7 + 0x198) = iVar12;
    lVar8 = DAT_00ae99f8;
  }
joined_r0x0040a798:
  do {
    if (lVar8 == 0) {
      return 0;
    }
    if (*(int *)(lVar8 + 100) == iVar12) {
      cVar3 = *(char *)(lVar8 + 0x556);
      uVar5 = FUN__text__0045cdec(param_1);
      uVar6 = *(uint *)(lVar8 + 0x58);
      if (cVar3 == '\0') {
        if (uVar6 == 0) {
          uVar5 = FUN__text__0045cdec(param_1);
          if (DAT_00ae9a18 == 0) {
            return lVar8;
          }
          iVar9 = 0;
          uVar6 = DAT_00ae9a18;
          while( true ) {
            iVar2 = iVar9 + (uVar6 >> 1);
            uVar11 = *(ulong *)(DAT_00ae9a10 + (long)iVar2 * 8);
            if (uVar11 == uVar5) break;
            if (uVar11 < uVar5) {
              iVar9 = iVar2 + 1;
            }
            uVar4 = uVar6 - (uVar11 < uVar5);
            uVar6 = uVar4 >> 1;
            if (uVar4 < 2) {
              return lVar8;
            }
          }
        }
        else {
          iVar9 = 0;
          do {
            iVar2 = iVar9 + (uVar6 >> 1);
            uVar11 = *(ulong *)(*(long *)(lVar8 + 0x50) + (long)iVar2 * 8);
            if (uVar11 == uVar5) {
              return lVar8;
            }
            if (uVar11 < uVar5) {
              iVar9 = iVar2 + 1;
            }
            uVar4 = uVar6 - (uVar11 < uVar5);
            uVar6 = uVar4 >> 1;
          } while (1 < uVar4);
        }
      }
      else if (uVar6 != 0) {
        iVar9 = 0;
        do {
          iVar2 = iVar9 + (uVar6 >> 1);
          uVar11 = *(ulong *)(*(long *)(lVar8 + 0x50) + (long)iVar2 * 8);
          if (uVar11 == uVar5) {
            return lVar8;
          }
          if (uVar11 < uVar5) {
            iVar9 = iVar2 + 1;
          }
          uVar4 = uVar6 - (uVar11 < uVar5);
          uVar6 = uVar4 >> 1;
        } while (1 < uVar4);
      }
    }
    lVar8 = *(long *)(lVar8 + 0x20);
  } while( true );
}


