/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8160; name: FUN_.text__005d8160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d8160(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[0x21];
  lVar1 = _DAT_008a5a08 + 0x78;
  lVar2 = _DAT_008a5a08 + 0xb8;
  *param_1 = _DAT_008a5a08 + 0x10;
  param_1[9] = lVar1;
  param_1[10] = lVar2;
  if (lVar5 != 0) {
    plVar6 = (long *)param_1[0x20];
    do {
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      lVar5 = lVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (lVar5 != 0);
  }
  param_1[0x21] = 0;
  if (param_1[0x22] != 0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))
              ((long *)param_1[0x18],param_1[0x20],param_1[0x22] << 3,8);
  }
  plVar3 = (long *)param_1[0x1e];
  plVar6 = param_1 + 0x1a;
  if (plVar3 == plVar6) {
    puVar4 = (undefined8 *)(*plVar6 + 0x20);
LAB__text__005d821c:
    (*(code *)*puVar4)(plVar6);
  }
  else if (plVar3 != (long *)0x0) {
    puVar4 = (undefined8 *)(*plVar3 + 0x28);
    plVar6 = plVar3;
    goto LAB__text__005d821c;
  }
  plVar3 = (long *)param_1[0x14];
  plVar6 = param_1 + 0x10;
  if (plVar3 == plVar6) {
    puVar4 = (undefined8 *)(*plVar6 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB__text__005d8258;
    puVar4 = (undefined8 *)(*plVar3 + 0x28);
    plVar6 = plVar3;
  }
  (*(code *)*puVar4)(plVar6);
LAB__text__005d8258:
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


