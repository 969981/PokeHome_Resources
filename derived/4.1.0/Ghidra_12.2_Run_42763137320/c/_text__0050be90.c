/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050be90; name: FUN_.text__0050be90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0050be90(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  
  if ((int)param_1[1] != 0) {
    plVar11 = *(long **)*param_1;
    if (plVar11 == (long *)0x0) {
      uVar10 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar10) goto LAB__text__0050c0a0;
        plVar11 = (long *)((undefined8 *)*param_1)[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (plVar11 == (long *)0x0);
    }
    else {
      uVar10 = 0;
    }
    do {
      plVar6 = (long *)plVar11[0x10];
      uVar5 = uVar10 & 0xffffffff;
      plVar12 = plVar6;
      if (plVar6 == (long *)0x0) {
        uVar2 = *(uint *)(param_1 + 1);
        uVar8 = uVar10 & 0xffffffff;
        if (uVar2 <= (int)uVar10 + 1U) {
          uVar2 = (int)uVar10 + 1;
        }
        uVar10 = (ulong)uVar2;
        do {
          if (uVar2 - 1 == (int)uVar8) {
            plVar12 = (long *)0x0;
            goto LAB__text__0050bf54;
          }
          uVar8 = (ulong)((int)uVar8 + 1);
          plVar12 = *(long **)(*param_1 + uVar8 * 8);
        } while (plVar12 == (long *)0x0);
        uVar10 = uVar8;
      }
LAB__text__0050bf54:
      lVar9 = plVar11[0x16];
      *(long **)(*param_1 + uVar5 * 8) = plVar6;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      FUN__text__005235f0(plVar11);
      plVar6 = (long *)param_1[0xb];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        plVar3 = (long *)0x0;
joined_r0x0050bfb0:
        lVar7 = lRam0000000000003210;
        if (lRam0000000000003210 == 0) goto LAB__text__0050c080;
LAB__text__0050c008:
        *plVar11 = lVar7;
        plVar3[0x642] = (long)plVar11;
        iVar1 = (int)plVar3[0x641] + 1;
        *(int *)(plVar3 + 0x641) = iVar1;
      }
      else {
        if ((plVar11 < plVar6) || (plVar6 + 0x640 <= plVar11)) {
          plVar3 = (long *)plVar6[0x640];
          plVar4 = plVar3;
          if (plVar3 == (long *)0x0) goto joined_r0x0050bfb0;
          do {
            if ((plVar4 <= plVar11) && (plVar3 = plVar4, plVar11 < plVar4 + 0x640)) break;
            plVar3 = (long *)plVar4[0x640];
            plVar6 = plVar4;
            plVar4 = plVar3;
          } while (plVar3 != (long *)0x0);
          lVar7 = plVar3[0x642];
        }
        else {
          lVar7 = plVar6[0x642];
          plVar3 = plVar6;
          plVar6 = (long *)0x0;
        }
        if (lVar7 != 0) goto LAB__text__0050c008;
LAB__text__0050c080:
        plVar3[0x642] = (long)plVar11;
        *plVar11 = 0;
        iVar1 = (int)plVar3[0x641] + 1;
        *(int *)(plVar3 + 0x641) = iVar1;
      }
      if (iVar1 == 0x40) {
        plVar11 = param_1 + 0xb;
        if ((long *)param_1[0xb] != plVar3) {
          plVar11 = plVar6 + 0x640;
        }
        *plVar11 = plVar3[0x640];
        FUN__text__00400fc0(10);
      }
      if (((lVar9 != 0) && (lVar9 != param_1[0xf])) && (*(int *)(lVar9 + 0x38) == 0)) {
        FUN__text__0050ace0(param_1,lVar9);
      }
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
LAB__text__0050c0a0:
  if ((int)param_1[4] != 0) {
    plVar11 = *(long **)param_1[3];
    if (plVar11 == (long *)0x0) {
      uVar10 = 0;
      do {
        if ((int)param_1[4] - 1 == uVar10) goto LAB__text__0050c280;
        plVar11 = (long *)((undefined8 *)param_1[3])[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (plVar11 == (long *)0x0);
    }
    else {
      uVar10 = 0;
    }
    uVar5 = uVar10 & 0xffffffff;
    do {
      plVar6 = (long *)plVar11[0xf];
      plVar12 = plVar6;
      if (plVar6 == (long *)0x0) {
        uVar2 = *(uint *)(param_1 + 4);
        if (uVar2 <= (int)uVar10 + 1U) {
          uVar2 = (int)uVar10 + 1;
        }
        uVar5 = (ulong)uVar2;
        uVar8 = uVar10 & 0xffffffff;
        do {
          if (uVar2 - 1 == (int)uVar8) {
            plVar12 = (long *)0x0;
            goto LAB__text__0050c154;
          }
          uVar8 = (ulong)((int)uVar8 + 1);
          plVar12 = *(long **)(param_1[3] + uVar8 * 8);
        } while (plVar12 == (long *)0x0);
        uVar5 = uVar8;
      }
LAB__text__0050c154:
      *(long **)(param_1[3] + (uVar10 & 0xffffffff) * 8) = plVar6;
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      FUN__text__0050eaf0(plVar11);
      plVar6 = (long *)param_1[0xc];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        plVar3 = (long *)0x0;
joined_r0x0050c1b4:
        plVar4 = (long *)&DAT_00017800;
        lVar9 = _DAT_00017810;
        if (_DAT_00017810 == 0) goto LAB__text__0050c240;
LAB__text__0050c20c:
        *plVar11 = lVar9;
        plVar4[2] = (long)plVar11;
        iVar1 = (int)plVar4[1] + 1;
        *(int *)(plVar4 + 1) = iVar1;
      }
      else {
        if ((plVar11 < plVar6) || (plVar6 + 0x2f00 <= plVar11)) {
          plVar3 = (long *)plVar6[0x2f00];
          if (plVar3 == (long *)0x0) goto joined_r0x0050c1b4;
          do {
            if ((plVar3 <= plVar11) && (plVar4 = plVar3, plVar11 < plVar3 + 0x2f00)) break;
            plVar4 = (long *)plVar3[0x2f00];
            plVar6 = plVar3;
            plVar3 = plVar4;
          } while (plVar4 != (long *)0x0);
          lVar9 = plVar4[0x2f02];
          plVar3 = plVar4;
        }
        else {
          lVar9 = plVar6[0x2f02];
          plVar3 = plVar6;
          plVar6 = (long *)0x0;
        }
        plVar4 = plVar3 + 0x2f00;
        if (lVar9 != 0) goto LAB__text__0050c20c;
LAB__text__0050c240:
        plVar4[2] = (long)plVar11;
        *plVar11 = 0;
        iVar1 = (int)plVar4[1] + 1;
        *(int *)(plVar4 + 1) = iVar1;
      }
      if (iVar1 == 0x40) {
        plVar11 = param_1 + 0xc;
        if ((long *)param_1[0xc] != plVar3) {
          plVar11 = plVar6 + 0x2f00;
        }
        *plVar11 = *plVar4;
        FUN__text__00400fc0(10);
      }
      uVar10 = uVar5;
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
LAB__text__0050c280:
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  return;
}


