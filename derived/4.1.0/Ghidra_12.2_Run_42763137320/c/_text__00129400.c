/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129400; name: FUN_.text__00129400
 */


void FUN__text__00129400(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  plVar4 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if (*(int *)(lVar5 + 0x54) == 0) goto LAB__text__00129538;
  puVar6 = *(undefined8 **)(lVar5 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
LAB__text__001294b8:
    puVar6 = (undefined8 *)0x0;
    lVar5 = *(long *)(param_1 + 8);
  }
  else {
    plVar1 = (long *)(**(code **)*puVar6)(puVar6);
    plVar2 = (long *)FUN__text__001280e4();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) goto LAB__text__001294b8;
    }
    puVar6 = puVar6 + -10;
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 == 0) {
    FUN__text__00129260(puVar6[0xc2],0);
    goto LAB__text__00129538;
  }
  plVar1 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  puVar7 = *(undefined8 **)(lVar5 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
LAB__text__0012951c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    plVar3 = (long *)FUN__text__001280e4();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) goto LAB__text__0012951c;
    }
    puVar7 = puVar7 + -10;
  }
  FUN__text__00129260(puVar6[0xc2],puVar7);
  (**(code **)(*plVar1 + 0x18))(plVar1);
LAB__text__00129538:
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0012956c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4);
  return;
}


