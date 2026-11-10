/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665284; name: FUN_.text__00665284
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00665284(char *param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  int local_98;
  int local_94;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  undefined8 local_68;
  
  lVar1 = _DAT_008a65d8;
  uVar16 = 0xffffffff;
  local_68 = 0xffffffffffffffff;
  local_6c = -1;
  if (*param_1 != '\0') {
    bVar6 = false;
    uVar11 = 0;
    uVar16 = 0xffffffff;
    iVar18 = -1;
    uVar14 = 0xffffffff;
    local_98 = -1;
    lVar12 = 0xffffffff;
    pcVar15 = param_1;
LAB__text__006652f0:
    do {
      iVar8 = FUN__text__00656854();
      if (iVar8 == 0) {
        pcVar15 = pcVar15 + 1;
        if (*pcVar15 != '\0') goto LAB__text__006652f0;
        cVar7 = '\0';
      }
      else {
        cVar7 = *pcVar15;
      }
      iVar8 = FUN__text__006568cc(cVar7);
      if (iVar8 == 0) {
        iVar8 = FUN__text__00656830(*pcVar15);
        if (iVar8 != 0) {
          local_90 = (char *)0x0;
          local_94 = 0;
          if (local_6c == -1) {
            iVar8 = sscanf(pcVar15,(char *)0x71a4e3,(long)&local_68 + 4,&local_68,&local_6c,
                           &local_94);
            if (iVar8 != 3) {
              if ((local_6c != -1) ||
                 (iVar8 = sscanf(pcVar15,(char *)0x7109ae,(long)&local_68 + 4,&local_68,&local_94),
                 iVar8 != 2)) goto LAB__text__00665360;
              local_6c = 0;
            }
            pcVar15 = pcVar15 + local_94;
          }
          else {
LAB__text__00665360:
            piVar10 = __errno_location();
            iVar8 = *piVar10;
            *piVar10 = 0;
            lVar17 = strtol(pcVar15,&local_90,10);
            iVar2 = *piVar10;
            if (iVar2 != iVar8) {
              *piVar10 = iVar8;
            }
            if (iVar2 != 0) {
              return -1;
            }
            if (lVar17 - 0x80000000U < 0xffffffff00000000) {
              return -1;
            }
            iVar8 = FUN__text__00678270();
            lVar17 = (long)local_90 - (long)pcVar15;
            if (uVar16 == 0xffffffff) {
              bVar4 = 0;
              if ((param_1 < pcVar15) && (lVar17 == 4)) {
                uVar16 = 0xffffffff;
                if (iVar8 < 0x579) {
                  cVar7 = pcVar15[-1];
                  if ((cVar7 == '-') || (cVar7 == '+')) {
                    bVar4 = 1;
                    iVar2 = iVar8 + (iVar8 / 100) * -0x28;
                    uVar16 = iVar2 * -0x3c;
                    if (cVar7 != '+') {
                      uVar16 = iVar2 * 0x3c;
                    }
                  }
                  else {
                    bVar4 = 0;
                  }
                  lVar17 = 4;
                }
              }
              else {
                uVar16 = 0xffffffff;
              }
            }
            else {
              bVar4 = 0;
            }
            if ((((lVar17 == 8) && (iVar18 == -1)) && ((int)uVar14 == -1)) && (local_98 == -1)) {
              iVar18 = iVar8 / 10000;
              uVar14 = (ulong)((int)(short)((short)iVar8 + (short)iVar18 * -10000) / 100 - 1);
              local_98 = iVar8 % 100;
              bVar4 = 1;
            }
            bVar5 = iVar8 - 1U < 0x1f;
            iVar2 = iVar8;
            if (!bVar5) {
              iVar2 = -1;
            }
            bVar3 = (bool)(!bVar6 & (bVar4 ^ 1) & local_98 == -1);
            if (!bVar3) {
              iVar2 = local_98;
            }
            bVar5 = (bool)(bVar4 | bVar3 & bVar5);
            if (bVar3) {
              bVar6 = true;
            }
            pcVar15 = local_90;
            local_98 = iVar2;
            if (((bVar5) || (!bVar6)) || (iVar18 != -1)) {
              if (!bVar5) {
                return -1;
              }
            }
            else {
              iVar18 = iVar8;
              if (iVar8 < 100) {
                if (iVar8 < 0x47) {
                  iVar18 = iVar8 + 2000;
                }
                else {
                  iVar18 = iVar8 + 0x76c;
                }
              }
              bVar6 = iVar2 != -1;
            }
          }
        }
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_90 = (char *)0x0;
        uStack_88 = 0;
        iVar8 = sscanf(pcVar15,(char *)0x7176ba,&local_90);
        if (iVar8 == 0) {
          sVar9 = 0;
        }
        else {
          sVar9 = strlen((char *)&local_90);
        }
        if ((int)lVar12 == -1) {
          lVar12 = 0;
          lVar17 = 0x89a230;
          if (sVar9 < 4) {
            lVar17 = _DAT_008a65d0;
          }
          do {
            iVar8 = FUN__text__0066c234(&local_90,*(undefined8 *)(lVar17 + lVar12 * 8));
            if (iVar8 != 0) goto LAB__text__0066547c;
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 != 7);
          lVar12 = 0xffffffff;
        }
        if ((int)uVar14 == -1) {
          uVar14 = 0;
          do {
            iVar8 = FUN__text__0066c234(&local_90,*(undefined8 *)(lVar1 + uVar14 * 8));
            if (iVar8 != 0) goto LAB__text__0066547c;
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 != 0xc);
          uVar14 = 0xffffffff;
        }
        if (uVar16 != 0xffffffff) {
          return -1;
        }
        lVar17 = 0;
        while (iVar8 = FUN__text__0066c234(&local_90,lVar17 + 0x7602dc), iVar8 == 0) {
          lVar17 = lVar17 + 0xc;
          if ((int)lVar17 == 0x33c) {
            return -1;
          }
        }
        uVar16 = *(int *)(lVar17 + 0x7602e4) * 0x3c;
LAB__text__0066547c:
        pcVar15 = pcVar15 + sVar9;
      }
      uVar13 = (uint)uVar14;
      if ((*pcVar15 == '\0') || (bVar5 = 4 < uVar11, uVar11 = uVar11 + 1, bVar5))
      goto LAB__text__006656a8;
    } while( true );
  }
  iVar18 = -1;
  local_98 = -1;
  uVar13 = 0xffffffff;
LAB__text__006656c8:
  local_6c = 0;
  local_68 = 0;
LAB__text__006656d0:
  if ((((((local_98 != -1) && (uVar13 != 0xffffffff)) && (iVar18 != -1)) &&
       ((iVar18 < 0x7f6 && (0x76e < iVar18)))) &&
      ((local_6c < 0x3d && ((local_98 < 0x20 && ((int)uVar13 < 0xc)))))) &&
     ((local_68._4_4_ < 0x18 && ((int)local_68 < 0x3c)))) {
    uVar11 = uVar13;
    if ((int)uVar13 < 0) {
      uVar11 = (0xb - uVar13) / 0xc;
      iVar18 = uVar11 + iVar18;
      uVar11 = (uVar11 * 0xc - (0xb - uVar13)) + 0xb;
    }
    uVar13 = iVar18 - (uint)((int)uVar13 < 2);
    lVar1 = ((long)(int)local_68 +
             ((long)local_68._4_4_ +
             ((long)*(int *)((ulong)uVar11 * 4 + 0x760618) + (long)local_98 +
              (long)(iVar18 + -0x7b2) * 0x16d +
             (long)(int)((uVar13 / 400 - uVar13 / 100) + (uVar13 >> 2) + -0x1dd)) * 0x18) * 0x3c +
            -0x5a0) * 0x3c + (long)local_6c;
    uVar11 = 0;
    if (uVar16 != 0xffffffff) {
      uVar11 = uVar16;
    }
    if (((int)uVar11 < 1) || (lVar1 <= (long)(ulong)(uVar11 ^ 0x7fffffff))) {
      lVar1 = lVar1 + (int)uVar11;
      lVar12 = 0;
      if (lVar1 != -1) {
        lVar12 = lVar1;
      }
      return lVar12;
    }
  }
  return -1;
LAB__text__006656a8:
  if (local_6c != -1) goto LAB__text__006656d0;
  goto LAB__text__006656c8;
}


