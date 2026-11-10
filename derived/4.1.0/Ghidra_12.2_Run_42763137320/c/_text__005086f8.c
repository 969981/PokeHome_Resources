/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005086f8; name: FUN_.text__005086f8
 */


undefined4 FUN__text__005086f8(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    if ((*(long *)(*(long *)(lVar6 + 8) + 0x58) == param_2) &&
       (*(char *)(*(long *)(lVar6 + 8) + 100) != '\0')) goto LAB__text__00508794;
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + -1;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (param_2 != -1) {
    lVar6 = FUN__text__00447b30(DAT_00ae9a50);
    if (lVar6 == 0) {
      return 2;
    }
    plVar7 = *(long **)(lVar6 + 0x20);
    if ((plVar7 == (long *)0x0) &&
       (plVar7 = (long *)FUN__text__00400f80(4,0xa0), plVar7 != (long *)0x0)) {
      FUN__text__0047d448(plVar7);
      *(long **)(lVar6 + 0x20) = plVar7;
      plVar7[1] = lVar6;
      iVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(lVar6 + 0x58));
      if (iVar1 != 1) {
        (**(code **)*plVar7)(plVar7);
        FUN__text__00400fc0(4,plVar7);
        plVar7 = (long *)0x0;
        *(undefined8 *)(lVar6 + 0x20) = 0;
      }
    }
    lVar2 = FUN__text__005067d0(lVar6);
    if (*(long *)(lVar6 + 0x38) == 0) {
      plVar4 = (long *)FUN__text__00400f80(4,0xe0);
      if (plVar4 == (long *)0x0) goto LAB__text__0050888c;
      FUN__text__0048fa0c();
      *(long **)(lVar6 + 0x38) = plVar4;
      plVar4[1] = lVar6;
      iVar1 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar6 + 0x58));
      if (iVar1 != 1) {
        (**(code **)*plVar4)(plVar4);
        FUN__text__00400fc0(4,plVar4);
        *(undefined8 *)(lVar6 + 0x38) = 0;
        goto LAB__text__0050888c;
      }
    }
    if ((plVar7 == (long *)0x0) || (lVar2 == 0)) {
LAB__text__0050888c:
      if (*(long *)(lVar6 + 0x48) != 0) {
        FUN__text__004471a8((long *)(lVar6 + 0x48));
      }
      return 2;
    }
    *(long *)(param_1 + 0x30) = lVar2;
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
  }
LAB__text__00508794:
  uVar3 = FUN__text__005088c0(param_1 + 0x20,
                              *(undefined2 *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x38));
  uVar5 = 1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 2;
  }
  return uVar5;
}


