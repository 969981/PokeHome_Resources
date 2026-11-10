/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063ccf0; name: FUN_.text__0063ccf0
 */


undefined4 FUN__text__0063ccf0(undefined4 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = DAT_00c16290;
  if (DAT_00c16290 == 0) {
    return 0;
  }
  plVar7 = (long *)(DAT_00c16290 + 0x48);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar3 = FUN__text__0063d690(lVar1,param_1);
  lVar1 = DAT_00c162d0;
  if ((lVar3 == 0) || (DAT_00c162d0 == 0)) {
    uVar2 = 0;
  }
  else {
    plVar6 = (long *)(DAT_00c162d0 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    *(long *)(lVar1 + 0x60) = lVar3;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar1 + 0x50))();
    plVar5 = (long *)FUN__text__0063d3a8();
    plVar7 = plVar6;
    if (plVar5 != plVar4) {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4 != plVar5 && plVar4 != (long *)0x0);
      if (plVar4 == (long *)0x0) {
        uVar2 = 0;
        goto LAB__text__0063cdc0;
      }
    }
    uVar2 = FUN__text__00645390(lVar1);
  }
LAB__text__0063cdc0:
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return uVar2;
}


