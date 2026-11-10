/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e980; name: FUN_.text__0051e980
 */


undefined8 FUN__text__0051e980(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  
  uVar3 = FUN__text__0050f10c(*(undefined8 *)(param_1 + 8));
  uVar4 = *(uint *)(param_1 + 0x68);
  uVar3 = uVar3 & 0xffff;
  if (uVar4 != 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar3 / uVar4;
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x60) + (ulong)(uVar3 - uVar2 * uVar4) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[2]) {
      if (*(uint *)(plVar9 + 3) == uVar3) goto LAB__text__0051ea70;
    }
  }
  plVar9 = (long *)FUN__text__00400f80(10,0x20);
  if (plVar9 != (long *)0x0) {
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = 0;
    *(uint *)(plVar9 + 3) = uVar3;
    uVar4 = *(uint *)(param_1 + 0x68);
    if ((uVar4 == 0) ||
       (fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x70)), 0.9 < fVar12 / (float)uVar4)) {
      FUN__text__0051fce0((long *)(param_1 + 0x60));
      uVar4 = *(uint *)(param_1 + 0x68);
      if (uVar4 == 0) {
        if (*plVar9 != 0) {
          *(undefined4 *)(plVar9 + 1) = 0;
          FUN__text__00400fc0(9);
          *plVar9 = 0;
          *(undefined4 *)((long)plVar9 + 0xc) = 0;
        }
        FUN__text__00400fc0(10,plVar9);
        return 2;
      }
      uVar3 = *(uint *)(plVar9 + 3);
    }
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar3 / uVar4;
    }
    lVar8 = (ulong)(uVar3 - uVar2 * uVar4) * 8;
    plVar9[2] = *(long *)(*(long *)(param_1 + 0x60) + lVar8);
    *(long **)(*(long *)(param_1 + 0x60) + lVar8) = plVar9;
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
LAB__text__0051ea70:
    plVar10 = (long *)*plVar9;
    uVar3 = *(uint *)(plVar9 + 1);
    uVar11 = (ulong)uVar3;
    plVar5 = plVar10;
    if (uVar3 == 0) {
LAB__text__0051eaac:
      if (plVar5 != plVar10 + uVar11) {
        return 1;
      }
    }
    else {
      lVar8 = uVar11 << 3;
      do {
        if (*plVar5 == param_3) goto LAB__text__0051eaac;
        plVar5 = plVar5 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar4 = *(uint *)((long)plVar9 + 0xc);
    if (uVar3 < uVar4) {
      *(uint *)(plVar9 + 1) = uVar3 + 1;
      if (plVar10 != (long *)0x0) {
LAB__text__0051ec18:
        plVar10[uVar11] = param_3;
        return 1;
      }
    }
    else {
      iVar1 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar1 = 1;
      }
      uVar4 = iVar1 + uVar4;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)FUN__text__00400f80(9,(ulong)uVar4 << 3);
        if (plVar10 == (long *)0x0) {
          return 2;
        }
        plVar5 = (long *)*plVar9;
        if ((plVar5 != (long *)0x0) && (plVar5 != plVar10)) {
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              uVar6 = 0;
            }
            else {
              uVar7 = 0;
              do {
                uVar6 = uVar7 + 2;
                plVar10[uVar7] = *(long *)(*plVar9 + uVar7 * 8);
                (plVar10 + uVar7)[1] = *(long *)(*plVar9 + uVar7 * 8 + 8);
                uVar7 = uVar6;
              } while ((uVar11 & 0xfffffffe) != uVar6);
            }
            if ((uVar3 & 1) != 0) {
              plVar10[uVar6] = *(long *)(*plVar9 + uVar6 * 8);
            }
            plVar5 = (long *)*plVar9;
          }
          FUN__text__00400fc0(9,plVar5);
        }
      }
      else {
        plVar10 = (long *)FUN__text__00400fa0(9,plVar10);
        if (plVar10 == (long *)0x0) {
          return 2;
        }
      }
      *plVar9 = (long)plVar10;
      *(uint *)((long)plVar9 + 0xc) = uVar4;
      if (uVar3 < uVar4) {
        uVar11 = (ulong)*(uint *)(plVar9 + 1);
        *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) + 1;
        goto LAB__text__0051ec18;
      }
    }
  }
  return 2;
}


