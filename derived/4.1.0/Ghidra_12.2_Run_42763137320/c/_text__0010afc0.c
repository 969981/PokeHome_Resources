/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010afc0; name: FUN_.text__0010afc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0010afc0(long *param_1,ulong param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar15 = param_1[1];
  if ((uVar15 != 0) && ((float)(param_1[9] + 1) <= *(float *)(param_1 + 10) * (float)uVar15))
  goto LAB__text__0010b118;
  uVar10 = 1;
  if (2 < uVar15) {
    uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
  }
  uVar10 = uVar10 | uVar15 << 1;
  uVar11 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
  if (uVar10 <= uVar11) {
    uVar10 = uVar11;
  }
  if (uVar10 - 1 == 0) {
    uVar10 = 2;
  }
  else if ((uVar10 & uVar10 - 1) != 0) {
    uVar10 = std::__next_prime(uVar10);
    uVar15 = param_1[1];
  }
  if (uVar10 < uVar15 || uVar10 == uVar15) {
    if (uVar10 < uVar15) {
      uVar11 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
      if ((uVar15 < 3) ||
         (uVar14 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333),
         1 < (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar11 = std::__next_prime(uVar11);
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
      }
      else {
        if (1 < uVar11) {
          uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
        }
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
      }
      if (uVar10 < uVar15) goto LAB__text__0010b068;
    }
  }
  else {
LAB__text__0010b068:
    FUN__text__0010b420(param_1,uVar10);
  }
  uVar15 = param_1[1];
LAB__text__0010b118:
  uVar10 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar11 = uVar15 - 1 & param_2;
  }
  else {
    uVar11 = param_2;
    if (uVar15 <= param_2) {
      uVar11 = 0;
      if (uVar15 != 0) {
        uVar11 = param_2 / uVar15;
      }
      uVar11 = param_2 - uVar11 * uVar15;
    }
  }
  plVar12 = *(long **)(*param_1 + uVar11 * 8);
  if (plVar12 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    lVar13 = param_3[3];
    lVar5 = *param_3;
    iVar6 = (int)param_3[5];
    lVar2 = lVar5;
    if (lVar13 != 0) {
      lVar2 = param_3[1];
    }
    plVar4 = _DAT_0089f5c8;
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0x58);
    }
    if (uVar10 < 2) {
      if (lVar13 == 0) {
        bVar8 = false;
        do {
          while( true ) {
            plVar9 = plVar12;
            plVar12 = (long *)*plVar9;
            if (plVar12 == (long *)0x0) {
              return plVar9;
            }
            if ((plVar12[1] & uVar15 - 1) != uVar11) {
              return plVar9;
            }
            if ((plVar12[1] != param_2) || ((int)plVar12[7] != iVar6)) break;
            plVar4 = plVar12 + 2;
            if (plVar12[5] != 0) {
              plVar4 = plVar12 + 3;
            }
            bVar1 = (bool)(bVar8 & *plVar4 != lVar2);
            bVar8 = (bool)(bVar8 | *plVar4 == lVar2);
            if (bVar1) {
              return plVar9;
            }
          }
        } while (!bVar8);
      }
      else {
        bVar7 = 0;
        do {
          plVar9 = plVar12;
          plVar12 = (long *)*plVar9;
          if (plVar12 == (long *)0x0) {
            return plVar9;
          }
          if ((plVar12[1] & uVar15 - 1) != uVar11) {
            return plVar9;
          }
          if ((plVar12[1] == param_2) && (*(int *)(plVar12 + 7) == iVar6)) {
            lVar13 = plVar12[2];
            lVar5 = lVar13;
            if (plVar12[5] != 0) {
              lVar5 = plVar12[3];
            }
            bVar8 = lVar5 == lVar2;
            if ((plVar12[5] != 0) && (bVar8)) {
              plVar3 = _DAT_0089f5c8;
              if (lVar13 != 0) {
                plVar3 = (long *)(lVar13 + 0x58);
              }
              bVar8 = *plVar3 == *plVar4;
            }
          }
          else {
            bVar8 = false;
          }
          bVar1 = (bool)(bVar7 & (bVar8 ^ 1U));
          bVar7 = bVar7 | bVar8;
        } while (!bVar1);
      }
    }
    else if (lVar13 == 0) {
      bVar8 = false;
      do {
        while( true ) {
          plVar9 = plVar12;
          plVar12 = (long *)*plVar9;
          if (plVar12 == (long *)0x0) {
            return plVar9;
          }
          uVar14 = plVar12[1];
          uVar10 = uVar14;
          if (uVar15 <= uVar14) {
            uVar10 = 0;
            if (uVar15 != 0) {
              uVar10 = uVar14 / uVar15;
            }
            uVar10 = uVar14 - uVar10 * uVar15;
          }
          if (uVar10 != uVar11) {
            return plVar9;
          }
          if ((uVar14 != param_2) || ((int)plVar12[7] != iVar6)) break;
          plVar4 = plVar12 + 2;
          if (plVar12[5] != 0) {
            plVar4 = plVar12 + 3;
          }
          bVar1 = (bool)(bVar8 & *plVar4 != lVar2);
          bVar8 = (bool)(bVar8 | *plVar4 == lVar2);
          if (bVar1) {
            return plVar9;
          }
        }
      } while (!bVar8);
    }
    else {
      bVar7 = 0;
      do {
        plVar9 = plVar12;
        plVar12 = (long *)*plVar9;
        if (plVar12 == (long *)0x0) {
          return plVar9;
        }
        uVar14 = plVar12[1];
        uVar10 = uVar14;
        if (uVar15 <= uVar14) {
          uVar10 = 0;
          if (uVar15 != 0) {
            uVar10 = uVar14 / uVar15;
          }
          uVar10 = uVar14 - uVar10 * uVar15;
        }
        if (uVar10 != uVar11) {
          return plVar9;
        }
        if ((uVar14 == param_2) && ((int)plVar12[7] == iVar6)) {
          lVar13 = plVar12[2];
          lVar5 = lVar13;
          if (plVar12[5] != 0) {
            lVar5 = plVar12[3];
          }
          bVar8 = lVar5 == lVar2;
          if ((plVar12[5] != 0) && (bVar8)) {
            plVar3 = _DAT_0089f5c8;
            if (lVar13 != 0) {
              plVar3 = (long *)(lVar13 + 0x58);
            }
            bVar8 = *plVar3 == *plVar4;
          }
        }
        else {
          bVar8 = false;
        }
        bVar1 = (bool)(bVar7 & (bVar8 ^ 1U));
        bVar7 = bVar7 | bVar8;
      } while (!bVar1);
    }
  }
  return plVar9;
}


