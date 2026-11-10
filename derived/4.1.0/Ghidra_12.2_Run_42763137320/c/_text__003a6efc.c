/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6efc; name: FUN_.text__003a6efc
 */


void FUN__text__003a6efc(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    if (puVar4[10] != 0) {
      (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,puVar4[8],puVar4[10] << 4,8);
    }
    plVar1 = (long *)puVar4[6];
    plVar2 = puVar4 + 2;
    if (plVar1 == plVar2) {
      puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003a6f68:
      (*(code *)*puVar3)(plVar2);
    }
    else if (plVar1 != (long *)0x0) {
      puVar3 = (undefined8 *)(*plVar1 + 0x28);
      plVar2 = plVar1;
      goto LAB__text__003a6f68;
    }
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),puVar4,*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58));
  }
  lVar5 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar5 + 0x30);
  plVar2 = (long *)(lVar5 + 0x10);
  if (plVar1 == plVar2) {
    puVar4 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__003a6fd4;
    puVar4 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar4)(plVar2);
LAB__text__003a6fd4:
                    /* WARNING: Could not recover jumptable at 0x003a6ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
            (*(long **)(param_1 + 0x28),lVar5,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}


