/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1980; name: FUN_.text__006a1980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a1980(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)param_1[0x28];
  iVar9 = *(int *)(param_1 + 0x27);
  iVar2 = *piVar8;
  *(int *)(param_1 + 0x2a) = iVar2;
  if (iVar2 < 0x316c7874) {
    if (iVar2 < 0x31696c61) {
      if (iVar2 < 0x31646e77) {
        if (iVar2 != 0x31636970) {
          iVar7 = 0x31646e62;
          goto LAB__text__006a1b88;
        }
      }
      else if (iVar2 != 0x31646e77) {
        if (iVar2 == 0x31656170) {
          if (0 < *(int *)(param_1 + 0x24)) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          }
          lVar5 = param_1[0x1b];
          param_1[0x2c] = lVar5;
          uVar6 = 0;
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
          }
          param_1[0x1b] = uVar6;
        }
        else if (iVar2 == 0x31657267) {
          *(int *)(param_1 + 0x2d) = *(int *)(param_1 + 0x2d) + -1;
        }
        goto LAB__text__006a1c00;
      }
    }
    else {
      if (0x316c6775 < iVar2) {
        if (iVar2 == 0x316c6776) {
          param_1[5] = piVar8;
        }
        else if (iVar2 == 0x316c6e66) {
          param_1[1] = piVar8;
        }
        else if (iVar2 == 0x316c7463) {
          param_1[4] = piVar8;
        }
        goto LAB__text__006a1c00;
      }
      if (iVar2 != 0x31696c61) {
        if (iVar2 == 0x31697073) {
          param_1[3] = piVar8;
        }
        goto LAB__text__006a1c00;
      }
    }
LAB__text__006a1bbc:
    if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
LAB__text__006a1bcc:
      piVar1 = (int *)((long)piVar8 + (ulong)(uint)piVar8[1]);
      if (*piVar1 == 0x31647375) {
        param_1[0x29] = piVar1;
        piVar8 = piVar1;
        iVar9 = iVar9 + 1;
        goto LAB__text__006a1c00;
      }
    }
  }
  else {
    if (iVar2 < 0x3174616d) {
      if (iVar2 < 0x31726373) {
        if (iVar2 == 0x316c7874) {
          *param_1 = piVar8;
          goto LAB__text__006a1c00;
        }
        iVar7 = 0x316e6170;
LAB__text__006a1b88:
        if (iVar2 != iVar7) goto LAB__text__006a1c00;
      }
      else if (iVar2 != 0x31726373) {
        if (iVar2 != 0x31736170) {
          if (iVar2 == 0x31737267) {
            *(int *)(param_1 + 0x2d) = *(int *)(param_1 + 0x2d) + 1;
          }
          goto LAB__text__006a1c00;
        }
        plVar3 = (long *)param_1[0x2c];
        param_1[0x1b] = plVar3;
        if (((*_DAT_008a6888 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(_DAT_008a6888), puVar4 = _DAT_0089f8a0, iVar2 != 0)) {
          if (((*_DAT_0089f898 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(_DAT_0089f898), iVar2 != 0)) {
            *puVar4 = 0;
            __cxa_guard_release(_DAT_0089f898);
          }
          *_DAT_008a6890 = puVar4;
          __cxa_guard_release(_DAT_008a6888);
        }
        if (plVar3 == (long *)0x0) {
LAB__text__006a1ce8:
          iVar2 = *(int *)(param_1 + 0x24);
          if (iVar2 < 1) goto LAB__text__006a1c00;
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))();
          if (puVar4 != _DAT_008a6890) {
            do {
              puVar4 = (undefined8 *)*puVar4;
            } while (puVar4 != _DAT_008a6890 && puVar4 != (undefined8 *)0x0);
            if (puVar4 == (undefined8 *)0x0) goto LAB__text__006a1ce8;
          }
          iVar2 = *(int *)(param_1 + 0x24);
        }
        *(int *)(param_1 + 0x24) = iVar2 + 1;
        goto LAB__text__006a1c00;
      }
      goto LAB__text__006a1bbc;
    }
    if (iVar2 < 0x31747270) {
      if (iVar2 == 0x3174616d) {
        param_1[2] = piVar8;
        goto LAB__text__006a1c00;
      }
      if (iVar2 != 0x31746e63) {
        iVar7 = 0x31747063;
        goto LAB__text__006a1b88;
      }
      goto LAB__text__006a1bbc;
    }
    if ((iVar2 == 0x31747270) || (iVar2 == 0x31747874)) goto LAB__text__006a1bbc;
    if (iVar2 != 0x3174796c) goto LAB__text__006a1c00;
    *(int *)(param_1 + 9) = piVar8[5];
    *(int *)((long)param_1 + 0x4c) = piVar8[6];
    if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) goto LAB__text__006a1bcc;
  }
  param_1[0x29] = 0;
LAB__text__006a1c00:
  *(int *)((long)param_1 + 0x154) = iVar9 + 1;
  if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
    param_1[0x2b] = (long)piVar8 + (ulong)(uint)piVar8[1];
    return;
  }
  param_1[0x2b] = 0;
  return;
}


