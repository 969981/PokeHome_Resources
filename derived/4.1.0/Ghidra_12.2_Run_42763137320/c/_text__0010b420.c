/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010b420; name: FUN_.text__0010b420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010b420(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar4,param_1[1] << 3,8);
    }
    param_1[1] = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar5,param_1[1] << 3,8);
    }
    uVar6 = param_2 & 3;
    param_1[1] = param_2;
    if (param_2 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        lVar4 = uVar9 * 8;
        uVar9 = uVar9 + 4;
        *(undefined8 *)(*param_1 + lVar4) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
      } while ((param_2 & 0xfffffffffffffffc) != uVar9);
    }
    if (uVar6 != 0) {
      lVar4 = uVar9 << 3;
      do {
        uVar6 = uVar6 - 1;
        *(undefined8 *)(*param_1 + lVar4) = 0;
        lVar4 = lVar4 + 8;
      } while (uVar6 != 0);
    }
    plVar7 = (long *)param_1[5];
    if (plVar7 != (long *)0x0) {
      uVar9 = plVar7[1];
      uVar6 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar9 = uVar9 & param_2 - 1;
      }
      else if (param_2 <= uVar9) {
        uVar11 = 0;
        if (param_2 != 0) {
          uVar11 = uVar9 / param_2;
        }
        uVar9 = uVar9 - uVar11 * param_2;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 5;
      plVar3 = _DAT_0089f5c8;
      if ((long *)*plVar7 != (long *)0x0) {
        plVar8 = (long *)*plVar7;
        do {
          uVar11 = plVar8[1];
          if (uVar6 < 2) {
            uVar11 = uVar11 & param_2 - 1;
          }
          else if (param_2 <= uVar11) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = uVar11 / param_2;
            }
            uVar11 = uVar11 - uVar2 * param_2;
          }
          if (uVar11 != uVar9) {
            if (*(long *)(*param_1 + uVar11 * 8) == 0) {
              *(long **)(*param_1 + uVar11 * 8) = plVar7;
              uVar9 = uVar11;
            }
            else {
              plVar12 = (long *)*plVar8;
              plVar10 = plVar8;
              if ((plVar12 != (long *)0x0) && ((int)plVar8[7] == (int)plVar12[7])) {
                lVar5 = plVar8[2];
                lVar4 = lVar5;
                if (plVar8[5] != 0) {
                  lVar4 = plVar8[3];
                }
                plVar13 = plVar12;
                plVar1 = plVar3;
                if (lVar5 != 0) {
                  plVar1 = (long *)(lVar5 + 0x58);
                }
                do {
                  lVar14 = plVar13[2];
                  lVar5 = lVar14;
                  if (plVar13[5] != 0) {
                    lVar5 = plVar13[3];
                  }
                  if ((plVar13[5] != 0 && plVar8[5] != 0) && lVar4 == lVar5) {
                    plVar12 = plVar3;
                    if (lVar14 != 0) {
                      plVar12 = (long *)(lVar14 + 0x58);
                    }
                    if (*plVar1 != *plVar12) goto LAB__text__0010b6ec;
                  }
                  else if (lVar4 != lVar5) {
LAB__text__0010b6ec:
                    plVar12 = plVar13;
                    break;
                  }
                  plVar12 = (long *)*plVar13;
                  plVar10 = plVar13;
                  if (plVar12 == (long *)0x0) break;
                  plVar13 = plVar12;
                } while ((int)plVar8[7] == (int)plVar12[7]);
              }
              *plVar7 = (long)plVar12;
              *plVar10 = **(long **)(*param_1 + uVar11 * 8);
              **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
              plVar8 = plVar7;
            }
          }
          plVar10 = (long *)*plVar8;
          plVar7 = plVar8;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


