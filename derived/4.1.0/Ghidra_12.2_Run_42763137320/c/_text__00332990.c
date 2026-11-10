/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00332990; name: FUN_.text__00332990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00332990(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long local_58;
  long local_50;
  long local_48;
  
  lVar3 = FUN__text__00321ac0();
  if (0 < *(int *)(lVar3 + 0x934c8)) {
    local_48 = 0;
    iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_48);
    if (iVar2 != 0) {
      return;
    }
    lVar4 = FUN__text__00321ac0();
    lVar3 = *(int *)(lVar4 + 0x934c8) - local_48;
    if (lVar3 == 0 || *(int *)(lVar4 + 0x934c8) < local_48) {
      lVar3 = FUN__text__00321ac0();
      *(undefined4 *)(lVar3 + 0x934c8) = 0;
      return;
    }
    lVar3 = (lVar3 * 1000000000) / 1000000000;
    if (0x1111111111111110 < lVar3 * -0x1111111111111111 + 0x888888888888888U ||
        DAT_00ae8100 == lVar3) {
      return;
    }
    lVar4 = *(long *)(DAT_008e1d98 + 0x50);
    DAT_00ae8100 = lVar3;
    if (lVar4 != 0) {
      plVar8 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar5 = FUN__text__0064db70(lVar4);
      if ((uVar5 & 1) == 0) {
        lVar3 = *plVar8;
        goto LAB__text__00332cdc;
      }
    }
    plVar8 = (long *)FUN__text__0064c260();
    uVar5 = tpidr_el0;
    uVar5 = uVar5 & 0xffffffffffffe000;
    if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar8;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
    plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x340,0x10);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN__text__0064d958(plVar6,plVar8,0);
    lVar3 = _DAT_008a17b8;
    plVar6[0x24] = 0;
    plVar6[0x25] = 0;
    plVar6[0x26] = 0;
    plVar6[0x27] = 0;
    plVar6[0x44] = 0;
    plVar6[0x34] = 0;
    plVar6[0x35] = 0;
    plVar6[0x45] = 0;
    plVar6[0x46] = 0;
    plVar6[0x47] = 0;
    plVar6[0x54] = 0;
    plVar6[0x55] = 0;
    plVar6[0x56] = 0;
    plVar6[0x57] = 0;
    plVar9 = plVar6 + 9;
    *plVar9 = lVar3 + 0x70;
    plVar6[10] = lVar3 + 0xb0;
    *(undefined1 *)(plVar6 + 100) = 0;
    *(undefined1 *)(plVar6 + 0x65) = 0;
    *(undefined1 *)(plVar6 + 0x66) = 0;
    plVar6[4] = 0x10;
    *plVar6 = lVar3 + 0x10;
    plVar6[1] = (long)plVar8;
    plVar6[0x36] = 0;
    plVar6[0x37] = 0;
    plVar6[2] = (long)plVar6;
    plVar6[3] = 0x340;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN__text__00219250(&local_58,plVar6);
    FUN__text__0032fa90(&local_50,local_58);
    lVar3 = local_50;
    iVar2 = FUN__text__0064d950(local_50);
    if (iVar2 == 0) {
      pcVar7 = *(code **)(lVar3 + 0x228);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar3 + 0x230) = 0;
        *(undefined8 *)(lVar3 + 0x238) = 0;
        *(undefined8 *)(lVar3 + 0x220) = 0;
        *(undefined8 *)(lVar3 + 0x228) = 0;
        (*pcVar7)(lVar3 + 0x240);
      }
      *(code **)(lVar3 + 0x220) = FUN__text__0034064c;
      *(undefined **)(lVar3 + 0x228) = &DAT__text__00340670;
      *(undefined **)(lVar3 + 0x230) = &DAT__text__00340674;
      *(undefined **)(lVar3 + 0x238) = &DAT__text__00340678;
    }
    plVar8 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN__text__0064db90(lVar3);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar1 = DAT_008e1d98;
    if (*(long *)(DAT_008e1d98 + 0x50) != 0) {
      (**(code **)(*(long *)(*(long *)(DAT_008e1d98 + 0x50) + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x50) = lVar3;
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar8);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x48);
LAB__text__00332cdc:
      (**(code **)(lVar3 + 0x18))(lVar4 + 0x48);
      return;
    }
  }
  return;
}


