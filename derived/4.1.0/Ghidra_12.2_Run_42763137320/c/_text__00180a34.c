/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00180a34; name: FUN_.text__00180a34
 */


void FUN__text__00180a34(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[0x12],param_1[0x14] << 3,4);
  }
  plVar1 = (long *)param_1[0x10];
  plVar2 = param_1 + 0xc;
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__00180a94:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__00180a94;
  }
  plVar1 = (long *)param_1[8];
  plVar2 = param_1 + 4;
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__00180ad0;
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar3)(plVar2);
LAB__text__00180ad0:
  param_1[-10] = 0x867b90;
  param_1[-1] = 0x867bd0;
  *param_1 = 0x867c10;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


