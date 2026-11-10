/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00322230; name: FUN_.text__00322230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00322230(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long local_40;
  long local_38;
  
  FUN__text__00322470();
  plVar4 = (long *)FUN__text__0064c260();
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar4;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x340,0x10);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN__text__0064d958(plVar5,plVar4,0);
  lVar1 = _DAT_008a17b8;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x26] = 0;
  plVar5[0x27] = 0;
  plVar5[0x44] = 0;
  plVar5[0x34] = 0;
  plVar5[0x35] = 0;
  plVar5[0x45] = 0;
  plVar5[0x46] = 0;
  plVar5[0x47] = 0;
  plVar5[0x54] = 0;
  plVar5[0x55] = 0;
  plVar5[0x56] = 0;
  plVar5[0x57] = 0;
  plVar7 = plVar5 + 9;
  *plVar7 = lVar1 + 0x70;
  plVar5[10] = lVar1 + 0xb0;
  *(undefined1 *)(plVar5 + 100) = 0;
  *(undefined1 *)(plVar5 + 0x65) = 0;
  *(undefined1 *)(plVar5 + 0x66) = 0;
  plVar5[4] = 0x10;
  *plVar5 = lVar1 + 0x10;
  plVar5[1] = (long)plVar4;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0x340;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN__text__00219250(&local_40,plVar5);
  FUN__text__00322604(&local_38,local_40);
  lVar1 = local_38;
  iVar3 = FUN__text__0064d950(local_38);
  if (iVar3 == 0) {
    pcVar6 = *(code **)(lVar1 + 0x228);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x230) = 0;
      *(undefined8 *)(lVar1 + 0x238) = 0;
      *(undefined8 *)(lVar1 + 0x220) = 0;
      *(undefined8 *)(lVar1 + 0x228) = 0;
      (*pcVar6)(lVar1 + 0x240);
    }
    *(undefined **)(lVar1 + 0x220) = &DAT__text__00329bd0;
    *(undefined **)(lVar1 + 0x228) = &DAT__text__00329bd4;
    *(undefined **)(lVar1 + 0x230) = &DAT__text__00329bd8;
    *(undefined **)(lVar1 + 0x238) = &DAT__text__00329bdc;
  }
  plVar4 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN__text__0064db90(lVar1);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  lVar2 = DAT_008e1d98;
  if (*(long *)(DAT_008e1d98 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(DAT_008e1d98 + 0x50) + 0x48) + 0x18))();
  }
  *(long *)(lVar2 + 0x50) = lVar1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
}


