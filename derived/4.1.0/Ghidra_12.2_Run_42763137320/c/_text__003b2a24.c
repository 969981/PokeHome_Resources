/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b2a24; name: FUN_.text__003b2a24
 */


void FUN__text__003b2a24(void *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(long *)((long)param_1 + 0xb0) != 0) {
    (**(code **)(**(long **)((long)param_1 + 0x60) + 0x18))
              (*(long **)((long)param_1 + 0x60),*(undefined8 *)((long)param_1 + 0xa0),
               *(long *)((long)param_1 + 0xb0) * 0x30,0x10);
  }
  plVar1 = *(long **)((long)param_1 + 0x90);
  plVar2 = (long *)((long)param_1 + 0x70);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003b2a88:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003b2a88;
  }
  plVar1 = *(long **)((long)param_1 + 0x50);
  plVar2 = (long *)((long)param_1 + 0x30);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__003b2ac4;
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar3)(plVar2);
LAB__text__003b2ac4:
  operator_delete(param_1);
  return;
}


