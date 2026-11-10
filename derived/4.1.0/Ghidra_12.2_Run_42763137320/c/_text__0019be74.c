/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019be74; name: FUN_.text__0019be74
 */


void FUN__text__0019be74(void *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(long *)((long)param_1 + 0x100) != 0) {
    (**(code **)(**(long **)((long)param_1 + 0xb0) + 0x18))
              (*(long **)((long)param_1 + 0xb0),*(undefined8 *)((long)param_1 + 0xf0),
               *(long *)((long)param_1 + 0x100) * 0x1c,4);
  }
  plVar1 = *(long **)((long)param_1 + 0xe0);
  plVar2 = (long *)((long)param_1 + 0xc0);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__0019bed8:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__0019bed8;
  }
  plVar1 = *(long **)((long)param_1 + 0xa0);
  plVar2 = (long *)((long)param_1 + 0x80);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__0019bf14;
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar3)(plVar2);
LAB__text__0019bf14:
  operator_delete(param_1);
  return;
}


