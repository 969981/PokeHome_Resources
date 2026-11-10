/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00162d50; name: FUN_.text__00162d50
 */


void FUN__text__00162d50(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 0x19220);
  lVar4 = *(long *)(param_1 + 0x19298);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x19290);
    do {
      if (*plVar5 != 0) {
        (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
        *plVar5 = 0;
      }
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_1 + 0x192a0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x19250) + 0x18))
              (*(long **)(param_1 + 0x19250),*(undefined8 *)(param_1 + 0x19290),
               *(long *)(param_1 + 0x192a0) << 3,8);
  }
  plVar1 = *(long **)(param_1 + 0x19280);
  plVar5 = (long *)(param_1 + 0x19260);
  if (plVar1 == plVar5) {
    puVar2 = (undefined8 *)(*plVar5 + 0x20);
LAB__text__00162df8:
    (*(code *)*puVar2)(plVar5);
  }
  else if (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)(*plVar1 + 0x28);
    plVar5 = plVar1;
    goto LAB__text__00162df8;
  }
  plVar5 = *(long **)(param_1 + 0x19240);
  if (plVar5 == plVar3) {
    puVar2 = (undefined8 *)(*plVar3 + 0x20);
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB__text__00162e34;
    puVar2 = (undefined8 *)(*plVar5 + 0x28);
    plVar3 = plVar5;
  }
  (*(code *)*puVar2)(plVar3);
LAB__text__00162e34:
  FUN__text__0068ed90(param_1 + 0x17338);
  return;
}


