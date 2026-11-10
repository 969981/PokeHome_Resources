/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00384b5c; name: FUN_.text__00384b5c
 */


undefined8 FUN__text__00384b5c(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *param_3;
  if (lVar8 != 0) {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if ((0x20 < param_4) || (0x1d < param_5)) goto LAB__text__00384c00;
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN__text__005fc564(lVar8,*(long *)(param_1 + 0x9f0) + (ulong)param_4 * 0x2850 +
                            (ulong)param_5 * 0x158);
  FUN__text__00633bc0(lVar8);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
LAB__text__00384c00:
  plVar9 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  uVar5 = FUN__text__00631174(lVar8);
  (**(code **)(*plVar9 + 0x18))(plVar9);
  if (((uVar5 & 1) == 0) ||
     ((((iVar3 = FUN__text__00631008(*param_2), iVar3 == 0x3ef ||
        (iVar3 = FUN__text__00631008(*param_2), iVar3 == 0x3f0)) &&
       (uVar5 = FUN__text__00635dd4(*param_2), param_4 != 0x20)) && ((uVar5 & 1) != 0)))) {
    return 0;
  }
  FUN__text__005fc460(*(long *)(param_1 + 0x9f0) + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158,
                      *param_2);
  lVar8 = *param_2;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar5 = FUN__text__00631174(lVar8);
  param_5 = param_5 + param_4 * 0x1e;
  if (0x3dd < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x7132d0);
  }
  lVar1 = param_1 + 0x60;
  uVar6 = (ulong)(param_5 >> 6);
  uVar7 = 1L << ((ulong)param_5 & 0x3f);
  if ((uVar5 & 1) == 0) {
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8) | uVar7;
  }
  else {
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar7;
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar8 = *param_2;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar5 = FUN__text__00635dd4(lVar8);
  if (((uVar5 & 1) == 0) && (uVar4 = FUN__text__00631008(lVar8), uVar4 != 0)) {
    uVar5 = FUN__text__00633b34(lVar8,2);
    if ((uVar5 & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x160 + (ulong)uVar4 * 2);
      if (uVar2 < 0x3de) {
        *(ushort *)(param_1 + 0x160 + (ulong)uVar4 * 2) = uVar2 + 1;
      }
    }
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if (*(code **)(param_1 + 0x970) != (code *)0x0) {
    (**(code **)(param_1 + 0x970))(param_1 + 0x990);
  }
  return 1;
}


