/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029c8e8; name: FUN_.text__0029c8e8
 */


void FUN__text__0029c8e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x9e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9e8) = 0;
  }
  if (*(long *)(param_1 + 0x9e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9e0) = 0;
  }
  pcVar3 = *(code **)(param_1 + 0x968);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x978) = 0;
    *(undefined8 *)(param_1 + 0x970) = 0;
    *(undefined8 *)(param_1 + 0x968) = 0;
    *(undefined8 *)(param_1 + 0x960) = 0;
    (*pcVar3)(param_1 + 0x980);
  }
  if (*(long *)(param_1 + 0x950) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x950) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x950) = 0;
  }
  if (*(long *)(param_1 + 0x948) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x948) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x948) = 0;
  }
  if (*(long *)(param_1 + 0x930) != 0) {
    (**(code **)(**(long **)(param_1 + 0x8e0) + 0x18))
              (*(long **)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x920),
               *(long *)(param_1 + 0x930) << 5,8);
  }
  plVar1 = *(long **)(param_1 + 0x910);
  plVar2 = (long *)(param_1 + 0x8f0);
  if (plVar1 == plVar2) {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__0029c9c8:
    (*(code *)*puVar4)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar4 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__0029c9c8;
  }
  if (*(long *)(param_1 + 0x8d0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x880) + 0x18))
              (*(long **)(param_1 + 0x880),*(undefined8 *)(param_1 + 0x8c0),
               *(long *)(param_1 + 0x8d0) << 5,8);
  }
  plVar1 = *(long **)(param_1 + 0x8b0);
  plVar2 = (long *)(param_1 + 0x890);
  if (plVar1 == plVar2) {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__0029ca28;
    puVar4 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar4)(plVar2);
LAB__text__0029ca28:
  FUN__text__0028bbfc(param_1);
  return;
}


