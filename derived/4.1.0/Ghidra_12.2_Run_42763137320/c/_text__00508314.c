/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00508314; name: FUN_.text__00508314
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00508314(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(lVar7 + 0x18);
  if (plVar6 != (long *)0x0) {
LAB__text__0050832c:
    FUN__text__004932ac(plVar6,_DAT_008a41c8);
    return 1;
  }
  plVar6 = (long *)FUN__text__00400f80(4,0x50);
  if (plVar6 != (long *)0x0) {
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    plVar6[5] = 0;
    plVar6[8] = 0;
    plVar6[9] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    piVar4 = _DAT_008a3fa0;
    piVar2 = *(int **)(_DAT_008a3fa0 + 2);
    lVar3 = *(long *)(_DAT_008a3fa0 + 4);
    plVar6[3] = (long)piVar2;
    plVar6[4] = 0;
    piVar1 = piVar4;
    if (lVar3 != 0) {
      piVar1 = piVar2;
    }
    *(long **)(piVar4 + 2) = plVar6;
    *(long **)(piVar1 + 4) = plVar6;
    *piVar4 = *piVar4 + 1;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[8] = 0;
    *(undefined2 *)(plVar6 + 9) = 0;
    *plVar6 = (long)&DAT_00889e18;
    *(undefined1 *)((long)plVar6 + 0x4a) = 1;
    *(long **)(lVar7 + 0x18) = plVar6;
    plVar6[1] = lVar7;
    iVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(lVar7 + 0x58));
    if (iVar5 == 1) goto LAB__text__0050832c;
    (**(code **)*plVar6)(plVar6);
    FUN__text__00400fc0(4,plVar6);
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
  return 2;
}


