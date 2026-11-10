/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129950; name: FUN_.text__00129950
 */


void FUN__text__00129950(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x88);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_2 + 0x80) + 0xb0;
    do {
      pcVar3 = *(code **)(lVar5 + -0x18);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x10) = 0;
        *(undefined8 *)(lVar5 + -8) = 0;
        *(undefined8 *)(lVar5 + -0x20) = 0;
        *(undefined8 *)(lVar5 + -0x18) = 0;
        (*pcVar3)(lVar5);
      }
      pcVar3 = *(code **)(lVar5 + -0x98);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar5 + -0x90) = 0;
        *(undefined8 *)(lVar5 + -0x88) = 0;
        *(undefined8 *)(lVar5 + -0xa0) = 0;
        *(undefined8 *)(lVar5 + -0x98) = 0;
        (*pcVar3)(lVar5 + -0x80);
      }
      lVar6 = lVar6 + -1;
      lVar5 = lVar5 + 0x110;
    } while (lVar6 != 0);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    (**(code **)(**(long **)(param_2 + 0x40) + 0x18))
              (*(long **)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x80),
               *(long *)(param_2 + 0x90) * 0x110,0x10);
  }
  plVar1 = *(long **)(param_2 + 0x70);
  plVar2 = (long *)(param_2 + 0x50);
  if (plVar1 == plVar2) {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__00129a14:
    (*(code *)*puVar4)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar4 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__00129a14;
  }
  plVar1 = *(long **)(param_2 + 0x30);
  plVar2 = (long *)(param_2 + 0x10);
  if (plVar1 == plVar2) {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__00129a50;
    puVar4 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar4)(plVar2);
LAB__text__00129a50:
                    /* WARNING: Could not recover jumptable at 0x00129a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


