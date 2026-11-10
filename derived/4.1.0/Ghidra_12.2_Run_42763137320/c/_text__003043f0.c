/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003043f0; name: FUN_.text__003043f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003043f0(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                        undefined4 param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [12];
  
  plVar11 = *(long **)(param_2 + 8);
  if (0 < (int)*(uint *)(param_2 + 0x700fdc)) {
    lVar10 = *param_3;
    lVar7 = 0;
    iVar3 = 0;
    uVar5 = 5;
    param_5 = 0x14;
    do {
      lVar1 = param_2 + lVar7;
      if (lVar10 == *(long *)(lVar1 + 0x2f0)) {
        uVar5 = 0;
LAB__text__003047c8:
        FUN__text__00300448(param_1,param_2,iVar3,uVar5,plVar11);
        return;
      }
      if (lVar10 == *(long *)(lVar1 + 0x620)) {
        uVar5 = 1;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x950)) {
        uVar5 = 2;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0xc80)) {
        uVar5 = 3;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0xfb0)) {
        uVar5 = 4;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x12e0)) goto LAB__text__003047c8;
      if (lVar10 == *(long *)(lVar1 + 0x1610)) {
        uVar5 = 6;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x1940)) {
        uVar5 = 7;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x1c70)) {
        uVar5 = 8;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x1fa0)) {
        uVar5 = 9;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x22d0)) {
        uVar5 = 10;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x2600)) {
        uVar5 = 0xb;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x2930)) {
        uVar5 = 0xc;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x2c60)) {
        uVar5 = 0xd;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x2f90)) {
        uVar5 = 0xe;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x32c0)) {
        uVar5 = 0xf;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x35f0)) {
        uVar5 = 0x10;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x3920)) {
        uVar5 = 0x11;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x3c50)) {
        uVar5 = 0x12;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x3f80)) {
        uVar5 = 0x13;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x42b0)) {
        uVar5 = 0x14;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x45e0)) {
        uVar5 = 0x15;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x4910)) {
        uVar5 = 0x16;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x4c40)) {
        uVar5 = 0x17;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x4f70)) {
        uVar5 = 0x18;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x52a0)) {
        uVar5 = 0x19;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x55d0)) {
        uVar5 = 0x1a;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x5900)) {
        uVar5 = 0x1b;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x5c30)) {
        uVar5 = 0x1c;
        goto LAB__text__003047c8;
      }
      if (lVar10 == *(long *)(lVar1 + 0x5f60)) {
        uVar5 = 0x1d;
        goto LAB__text__003047c8;
      }
      lVar7 = lVar7 + 0x5fa0;
      iVar3 = iVar3 + 1;
    } while ((ulong)*(uint *)(param_2 + 0x700fdc) * 0x5fa0 != lVar7);
  }
  uVar12 = tpidr_el0;
  uVar12 = uVar12 & 0xffffffffffffe000;
  if (*(long *)(uVar12 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  uVar6 = 0;
  *(long **)(uVar12 + *(long *)(uVar12 + 0x98) * 8 + 0x18) = plVar11;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xb0);
  if (plVar2 != (long *)0x0) {
    plVar2[0x14] = 0;
    plVar2[0x15] = 0;
    plVar2[0x11] = 0;
    plVar2[10] = 0;
    plVar2[8] = 0;
    plVar2[0x12] = 0;
    plVar2[0x13] = 0;
    plVar8 = plVar2 + 9;
    *plVar8 = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    lVar7 = _DAT_008a2a18 + 0x10;
    *plVar8 = _DAT_008a2a18 + 0x48;
    *(undefined4 *)(plVar2 + 0x12) = 3;
    plVar2[0x11] = 0;
    *(undefined8 *)((long)plVar2 + 0x94) = 0;
    *(undefined1 *)((long)plVar2 + 0x9c) = 0;
    *param_1 = plVar2;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0xb0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[0xb] = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    plVar2[0x10] = 0;
    *plVar2 = lVar7;
    plVar2[1] = (long)plVar11;
    plVar2[4] = 8;
    plVar2[5] = 0;
    *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x003046e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(plVar8);
    return;
  }
  auVar13 = (**(code **)(*plVar11 + 0xb8))(plVar11);
  uVar4 = auVar13._8_4_;
  if ((-1 < (int)uVar4) && (uVar4 < 0x403)) {
    if ((uVar6 & 1) == 0) {
      uVar9 = 0xfe0;
    }
    else {
      uVar9 = 0xfe4;
    }
    *(undefined4 *)(auVar13._0_8_ + (ulong)uVar4 * 8 + (ulong)(uVar9 | 0x700000)) = param_5;
  }
  return;
}


