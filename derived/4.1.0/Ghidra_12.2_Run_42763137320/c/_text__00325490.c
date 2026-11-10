/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00325490; name: FUN_.text__00325490
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00325490(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_88;
  long local_80;
  uint6 uStack_76;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined2 uStack_68;
  undefined6 uStack_66;
  
  local_70 = 0;
  uStack_6e = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  DAT_008eef66 = 0x101;
  uRam00000000008eef8a = 0;
  DAT_008eef7a = (ulong)uStack_76;
  DAT_008eef40 = 0;
  DAT_008eef48 = 0;
  DAT_008eefb8 = 0;
  DAT_008eefc0 = 0;
  DAT_008eef4a = 0;
  DAT_008eef82._0_6_ = 0;
  DAT_008eef82._6_2_ = 0;
  DAT_00960988 = 0;
  DAT_008eef70 = 0;
  DAT_008eef68 = 0;
  DAT_008eef74 = 0;
  DAT_008eef78 = 0;
  DAT_00960a80 = 0;
  DAT_008eef30 = 0;
  DAT_008eef38 = 0;
  DAT_008eefa8 = 0;
  DAT_008eefb0 = 0;
  DAT_008eef50 = 0;
  DAT_008eef58._0_6_ = 0;
  DAT_008eef58._6_2_ = 0;
  uRam00000000008eef60 = 0;
  DAT_008eef90 = 0;
  DAT_008eefc4 = 0;
  DAT_008ef050 = 0;
  DAT_008eef98 = 0;
  DAT_008eefa0 = 0;
  lVar6 = *(long *)(*_DAT_008a2a00 + 0x68);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar9 = 0;
  puVar8 = &DAT_009606a8;
  do {
    if ((lVar9 < DAT_00960798) && (uVar2 = FUN__text__00302598(lVar6,puVar8), (uVar2 & 1) == 0)) {
      (&DAT_00960898)[DAT_00960988] = *puVar8;
      DAT_00960988 = DAT_00960988 + 1;
    }
    if (lVar9 < DAT_00960890) {
      uVar2 = FUN__text__00302598(lVar6,puVar8 + 0x1f);
      if ((uVar2 & 1) == 0) {
        (&DAT_00960990)[DAT_00960a80] = puVar8[0x1f];
        DAT_00960a80 = DAT_00960a80 + 1;
      }
    }
    lVar9 = lVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (lVar9 != 0x1e);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  DAT_00960ac8 = 0;
  DAT_00978ac8 = 0;
  FUN__text__00304b90();
  FUN__text__00305ba4();
  lVar6 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar6 + 0x700fd8) = 0;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__00304870(lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = *(long *)(DAT_00ae8070 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__00300180(lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar3 = (long *)FUN__text__0064c260();
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x340,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN__text__0064d958(plVar4,plVar3,0);
  lVar6 = _DAT_008a17b8;
  plVar4[0x24] = 0;
  plVar4[0x25] = 0;
  plVar4[0x26] = 0;
  plVar4[0x27] = 0;
  plVar4[0x44] = 0;
  plVar4[0x34] = 0;
  plVar4[0x35] = 0;
  plVar4[0x45] = 0;
  plVar4[0x46] = 0;
  plVar4[0x47] = 0;
  plVar4[0x54] = 0;
  plVar4[0x55] = 0;
  plVar4[0x56] = 0;
  plVar4[0x57] = 0;
  plVar7 = plVar4 + 9;
  *plVar7 = lVar6 + 0x70;
  plVar4[10] = lVar6 + 0xb0;
  *(undefined1 *)(plVar4 + 100) = 0;
  *(undefined1 *)(plVar4 + 0x65) = 0;
  *(undefined1 *)(plVar4 + 0x66) = 0;
  plVar4[4] = 0x10;
  *plVar4 = lVar6 + 0x10;
  plVar4[1] = (long)plVar3;
  plVar4[0x36] = 0;
  plVar4[0x37] = 0;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x340;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN__text__00219250(&local_88,plVar4);
  FUN__text__00325270(&local_80,local_88);
  lVar6 = local_80;
  iVar1 = FUN__text__0064d950(local_80);
  if (iVar1 == 0) {
    pcVar5 = *(code **)(lVar6 + 0x228);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x230) = 0;
      *(undefined8 *)(lVar6 + 0x238) = 0;
      *(undefined8 *)(lVar6 + 0x220) = 0;
      *(undefined8 *)(lVar6 + 0x228) = 0;
      (*pcVar5)(lVar6 + 0x240);
    }
    *(undefined **)(lVar6 + 0x220) = &DAT__text__0032b4e0;
    *(undefined **)(lVar6 + 0x228) = &DAT__text__0032b4e4;
    *(undefined **)(lVar6 + 0x230) = &DAT__text__0032b4e8;
    *(undefined **)(lVar6 + 0x238) = &DAT__text__0032b4ec;
  }
  plVar3 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN__text__0064db90(lVar6);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  lVar9 = DAT_008e1d98;
  if (*(long *)(DAT_008e1d98 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(DAT_008e1d98 + 0x50) + 0x48) + 0x18))();
  }
  *(long *)(lVar9 + 0x50) = lVar6;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar3);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
}


