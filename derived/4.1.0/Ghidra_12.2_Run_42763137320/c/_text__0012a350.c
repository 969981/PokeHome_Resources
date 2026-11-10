/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012a350; name: FUN_.text__0012a350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0012a350(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *extraout_x8;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long *local_70;
  long local_68;
  
  puVar7 = _DAT_0089f550;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_70 = *(long **)(param_1 + 0x10);
  FUN__text__0010e730(&local_68,*_DAT_0089f550,1,param_1 + 0x28,0,local_70,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
  }
  lVar3 = local_68;
  *(long *)(param_1 + 0xb8) = local_68;
  if (local_68 != 0) {
    plVar5 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(param_1 + 0xc0) != 0 || *(long *)(param_1 + 0x140) != 0) {
      FUN__text__005d9010(lVar3,param_1 + 0xb0,1);
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *puVar7;
    *(undefined1 *)(param_1 + 0x4f9) = 1;
    FUN__text__0012d5e0(&local_68,uVar2,1,param_1 + 0x58,0,local_70,0);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x48) + 0x18))();
    }
    lVar3 = local_68;
    *(long *)(param_1 + 0x2c8) = local_68;
    if (local_68 != 0) {
      plVar5 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      if (*(long *)(param_1 + 0x2d0) != 0 || *(long *)(param_1 + 0x350) != 0) {
        FUN__text__005d9010(lVar3,param_1 + 0x2c0,1);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar5 = local_70;
  uVar1 = *(uint *)(param_1 + 0x8c);
  uVar8 = tpidr_el0;
  if (uVar1 != 0) {
    lVar3 = (**(code **)(*local_70 + 0x10))(local_70,(ulong)uVar1 * 0x670,0x10);
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar5;
    lVar10 = 0;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    do {
      puVar7 = (undefined8 *)(lVar3 + lVar10);
      memset(puVar7,0,0x670);
      FUN__text__003d0f70(puVar7);
      lVar10 = lVar10 + 0x670;
      *puVar7 = 0x8846e0;
      *(undefined4 *)(puVar7 + 0xcb) = 0;
      *(undefined1 *)((long)puVar7 + 0x65c) = 1;
      puVar7[0xcc] = 0x3f8000003f800000;
      puVar7[0xcd] = 0;
    } while ((ulong)uVar1 * 0x670 != lVar10);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    puVar7 = *(undefined8 **)(param_1 + 0x3d8);
    *(long *)(param_1 + 0x3d8) = lVar3;
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = *(ulong *)(param_1 + 1000);
      if (0x66f < uVar9) {
        uVar9 = uVar9 / 0x670;
        puVar6 = puVar7;
        do {
          (**(code **)*puVar6)(puVar6);
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 0xce;
        } while (uVar9 != 0);
        uVar9 = *(ulong *)(param_1 + 1000);
      }
      (**(code **)(**(long **)(param_1 + 0x3e0) + 0x18))
                (*(long **)(param_1 + 0x3e0),puVar7,uVar9,*(undefined8 *)(param_1 + 0x3f0));
    }
    *(long **)(param_1 + 0x3e0) = plVar5;
    *(ulong *)(param_1 + 1000) = (ulong)uVar1 * 0x670;
    *(undefined8 *)(param_1 + 0x3f0) = 0x10;
  }
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN__text__0012af94(&local_68,local_70,&local_70);
    if (*(long *)(param_1 + 0x448) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x448) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x448) = local_68;
    FUN__text__003d3afc(local_68,0);
  }
  if (*(char *)(param_1 + 0x95) != '\0') {
    FUN__text__0012b0b0(&local_68,local_70,&local_70);
    if (*(long *)(param_1 + 0x440) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x440) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x440) = local_68;
    FUN__text__003d3474(local_68,0);
  }
  if (*(char *)(param_1 + 0x96) != '\0') {
    FUN__text__0012b1cc(&local_68,local_70,&local_70);
    if (*(long *)(param_1 + 0x450) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x450) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x450) = local_68;
    FUN__text__003c6598(local_68,0);
  }
  plVar5 = local_70;
  uVar1 = *(uint *)(param_1 + 0x9c);
  if (uVar1 != 0) {
    lVar3 = (**(code **)(*local_70 + 0x10))(local_70,(ulong)uVar1 * 0x660,0x10);
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    lVar10 = 0;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar5;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    do {
      puVar7 = (undefined8 *)(lVar3 + lVar10);
      memset(puVar7,0,0x660);
      FUN__text__003d0f70(puVar7);
      lVar10 = lVar10 + 0x660;
      *puVar7 = 0x8846b0;
    } while ((ulong)uVar1 * 0x660 != lVar10);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    puVar7 = *(undefined8 **)(param_1 + 0x3f8);
    *(long *)(param_1 + 0x3f8) = lVar3;
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x408);
      if (0x65f < uVar9) {
        uVar9 = uVar9 / 0x660;
        puVar6 = puVar7;
        do {
          (**(code **)*puVar6)(puVar6);
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 0xcc;
        } while (uVar9 != 0);
        uVar9 = *(ulong *)(param_1 + 0x408);
      }
      (**(code **)(**(long **)(param_1 + 0x400) + 0x18))
                (*(long **)(param_1 + 0x400),puVar7,uVar9,*(undefined8 *)(param_1 + 0x410));
    }
    *(long **)(param_1 + 0x400) = plVar5;
    *(ulong *)(param_1 + 0x408) = (ulong)uVar1 * 0x660;
    *(undefined8 *)(param_1 + 0x410) = 0x10;
  }
  plVar5 = local_70;
  uVar1 = *(uint *)(param_1 + 0xa0);
  if (uVar1 != 0) {
    lVar3 = (**(code **)(*local_70 + 0x10))(local_70,(ulong)uVar1 * 0x660,0x10);
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    lVar10 = 0;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar5;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    do {
      puVar7 = (undefined8 *)(lVar3 + lVar10);
      memset(puVar7,0,0x660);
      FUN__text__003d0f70(puVar7);
      lVar10 = lVar10 + 0x660;
      *puVar7 = 0x884710;
    } while ((ulong)uVar1 * 0x660 != lVar10);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    puVar7 = *(undefined8 **)(param_1 + 0x418);
    *(long *)(param_1 + 0x418) = lVar3;
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = *(ulong *)(param_1 + 0x428);
      if (0x65f < uVar9) {
        uVar9 = uVar9 / 0x660;
        puVar6 = puVar7;
        do {
          (**(code **)*puVar6)(puVar6);
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 0xcc;
        } while (uVar9 != 0);
        uVar9 = *(ulong *)(param_1 + 0x428);
      }
      (**(code **)(**(long **)(param_1 + 0x420) + 0x18))
                (*(long **)(param_1 + 0x420),puVar7,uVar9,*(undefined8 *)(param_1 + 0x430));
    }
    *(long **)(param_1 + 0x420) = plVar5;
    *(ulong *)(param_1 + 0x428) = (ulong)uVar1 * 0x660;
    *(undefined8 *)(param_1 + 0x430) = 0x10;
  }
  plVar5 = local_70;
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    lVar3 = (**(code **)(*local_70 + 0x10))(local_70,0x1b0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN__text__003d2bb0(lVar3,local_70,*(undefined4 *)(param_1 + 0x90));
    *(long **)(lVar3 + 8) = plVar5;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    if (*(long *)(param_1 + 0x438) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x438) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x438) = lVar3;
    FUN__text__003d2db4(lVar3,0);
  }
  plVar5 = local_70;
  if (*(char *)(param_1 + 0x97) != '\0') {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) goto LAB__text__0012af78;
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1730 + 0x50;
    *plVar4 = _DAT_008a1730 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x458) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x458) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x458) = plVar4;
    FUN__text__003d0c68(plVar4,0);
  }
  plVar5 = local_70;
  if (*(char *)(param_1 + 0x98) != '\0') {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) goto LAB__text__0012af78;
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1738 + 0x50;
    *plVar4 = _DAT_008a1738 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x460) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x460) = plVar4;
    FUN__text__003d0c68(plVar4,0);
  }
  plVar5 = local_70;
  if (*(char *)(param_1 + 0x99) != '\0') {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) goto LAB__text__0012af78;
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1740;
    *(undefined4 *)(plVar4 + 0x2f) = 0xb;
    *plVar4 = lVar3 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3 + 0x50;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x468) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x468) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x468) = plVar4;
    FUN__text__003d0c68(plVar4,0);
  }
  plVar5 = local_70;
  if (*(char *)(param_1 + 0x9a) != '\0') {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) goto LAB__text__0012af78;
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1748;
    *(undefined4 *)(plVar4 + 0x2f) = 0xb;
    *plVar4 = lVar3 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3 + 0x50;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x470) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x470) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x470) = plVar4;
    FUN__text__003d0c68(plVar4,0);
  }
  plVar5 = local_70;
  if (*(char *)(param_1 + 0x9b) != '\0') {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) goto LAB__text__0012af78;
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1750 + 0x50;
    *plVar4 = _DAT_008a1750 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x478) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x478) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x478) = plVar4;
    FUN__text__003d0c68(plVar4,0);
  }
  plVar5 = local_70;
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar9 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) goto LAB__text__0012af70;
    *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = local_70;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    plVar4 = (long *)(**(code **)(*local_70 + 0x10))(local_70,0x180,0x10);
    if (plVar4 == (long *)0x0) {
LAB__text__0012af78:
      (**(code **)(*plVar5 + 0xb8))(plVar5);
      auVar11 = FUN__text__003d0bd8(0,local_70);
      plVar5 = auVar11._0_8_;
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar5;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x180,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
        FUN__text__003d3994(0,*auVar11._8_8_);
        _DAT_00000010 = 0;
        _DAT_00000018 = 0x180;
        _DAT_00000020 = 0x10;
        _DAT_00000008 = plVar5;
        *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
        *extraout_x8 = 0;
        return;
      }
      FUN__text__003d3994(lVar3,*auVar11._8_8_);
      *(long **)(lVar3 + 8) = plVar5;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x180;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      *extraout_x8 = lVar3;
      return;
    }
    FUN__text__003d0bd8(plVar4,local_70);
    lVar3 = _DAT_008a1758;
    plVar4[0x2f] = 0;
    *plVar4 = lVar3 + 0x10;
    plVar4[1] = (long)plVar5;
    plVar4[9] = lVar3 + 0x50;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x180;
    plVar4[4] = 0x10;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    (**(code **)(plVar4[9] + 0x10))();
    if (*(long *)(param_1 + 0x480) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x480) + 0x48) + 0x18))();
    }
    *(long **)(param_1 + 0x480) = plVar4;
    FUN__text__003c5c48(plVar4,*(undefined8 *)(param_1 + 0xa8));
    FUN__text__003d0c68(*(undefined8 *)(param_1 + 0x480),0);
  }
  plVar5 = local_70;
  uVar1 = *(uint *)(param_1 + 0xa4);
  if (uVar1 != 0) {
    lVar3 = (**(code **)(*local_70 + 0x10))(local_70,(ulong)uVar1 * 0x20068,8);
    uVar8 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar8 + 0x98) == 0x10) {
LAB__text__0012af70:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    lVar10 = 0;
    *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar5;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    do {
      FUN__text__003cf11c(lVar3 + lVar10);
      lVar10 = lVar10 + 0x20068;
    } while ((ulong)uVar1 * 0x20068 != lVar10);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    lVar10 = *(long *)(param_1 + 0x488);
    *(long *)(param_1 + 0x488) = lVar3;
    if (lVar10 != 0) {
      uVar8 = *(ulong *)(param_1 + 0x498);
      if (0x20067 < uVar8) {
        uVar8 = uVar8 / 0x20068;
        lVar3 = lVar10;
        do {
          FUN__text__003cf1a0(lVar3);
          uVar8 = uVar8 - 1;
          lVar3 = lVar3 + 0x20068;
        } while (uVar8 != 0);
        uVar8 = *(ulong *)(param_1 + 0x498);
      }
      (**(code **)(**(long **)(param_1 + 0x490) + 0x18))
                (*(long **)(param_1 + 0x490),lVar10,uVar8,*(undefined8 *)(param_1 + 0x4a0));
    }
    *(long **)(param_1 + 0x490) = plVar5;
    *(ulong *)(param_1 + 0x498) = (ulong)uVar1 * 0x20068;
    *(undefined8 *)(param_1 + 0x4a0) = 8;
  }
  return;
}


