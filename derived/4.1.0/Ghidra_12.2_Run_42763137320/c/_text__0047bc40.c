/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047bc40; name: FUN_.text__0047bc40
 */


undefined8 FUN__text__0047bc40(long *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  
  plVar6 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar7 = plVar6;
  if (uVar2 == 0) {
LAB__text__0047bc90:
    if (plVar7 != plVar6 + uVar2 && plVar7 != (long *)0x0) {
      plVar6 = *(long **)(param_2 + 0x30);
      uVar2 = *(uint *)(param_2 + 0x38);
      uVar10 = (ulong)uVar2;
      plVar7 = plVar6;
      if (uVar2 == 0) {
LAB__text__0047bcec:
        if ((plVar7 != plVar6 + uVar10) && (plVar7 != (long *)0x0)) {
          return 0x28;
        }
      }
      else {
        lVar9 = uVar10 << 3;
        do {
          if (*plVar7 == param_3) goto LAB__text__0047bcec;
          plVar7 = plVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (*(short *)(param_2 + 0x42) != -1) {
        uVar3 = *(uint *)(param_2 + 0x3c);
        if (uVar2 < uVar3) {
          *(uint *)(param_2 + 0x38) = uVar2 + 1;
          if (plVar6 == (long *)0x0) {
            return 2;
          }
          plVar6[uVar10] = param_3;
          *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + 1;
          cVar4 = *(char *)(param_2 + 0x2c);
        }
        else {
          iVar1 = uVar3 + (uVar3 >> 1);
          if (uVar3 == 0) {
            iVar1 = 1;
          }
          uVar3 = iVar1 + uVar3;
          if (plVar6 == (long *)0x0) {
            lVar9 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
            if (lVar9 == 0) {
              return 2;
            }
            lVar5 = *(long *)(param_2 + 0x30);
            if ((lVar5 != 0) && (lVar5 != lVar9)) {
              if (uVar2 != 0) {
                if (uVar2 == 1) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = 0;
                  do {
                    lVar5 = uVar8 * 8;
                    uVar8 = uVar8 + 2;
                    *(undefined8 *)(lVar9 + lVar5) =
                         *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar5);
                    ((undefined8 *)(lVar9 + lVar5))[1] =
                         *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar5 + 8);
                  } while ((uVar10 & 0xfffffffe) != uVar8);
                }
                if ((uVar2 & 1) != 0) {
                  *(undefined8 *)(lVar9 + uVar8 * 8) =
                       *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 8);
                }
                lVar5 = *(long *)(param_2 + 0x30);
              }
              FUN__text__00400fc0(0,lVar5);
            }
          }
          else {
            lVar9 = FUN__text__00400fa0(0,plVar6);
            if (lVar9 == 0) {
              return 2;
            }
          }
          *(long *)(param_2 + 0x30) = lVar9;
          *(uint *)(param_2 + 0x3c) = uVar3;
          if (uVar3 <= uVar2) {
            return 2;
          }
          uVar2 = *(uint *)(param_2 + 0x38);
          *(uint *)(param_2 + 0x38) = uVar2 + 1;
          *(long *)(lVar9 + (ulong)uVar2 * 8) = param_3;
          *(short *)(param_2 + 0x42) = *(short *)(param_2 + 0x42) + 1;
          cVar4 = *(char *)(param_2 + 0x2c);
        }
        if (cVar4 != '\0') {
          lVar9 = *(long *)(param_3 + 0x1c8);
          fVar11 = *(float *)(param_2 + 0x74);
          fVar12 = *(float *)(param_2 + 0x78);
          *(float *)(lVar9 + 4) = *(float *)(param_2 + 0x70) + *(float *)(lVar9 + 4);
          *(float *)(lVar9 + 8) = fVar11 + *(float *)(lVar9 + 8);
          *(float *)(lVar9 + 0xc) = fVar12 + *(float *)(lVar9 + 0xc);
          FUN__text__0047cd50(param_2,*(int *)(DAT_00ae9a40 + 0x88) + 1);
        }
        return 1;
      }
    }
  }
  else {
    lVar9 = (ulong)uVar2 << 3;
    do {
      if (*plVar7 == param_2) goto LAB__text__0047bc90;
      plVar7 = plVar7 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return 2;
}


