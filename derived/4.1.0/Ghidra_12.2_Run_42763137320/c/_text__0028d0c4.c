/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028d0c4; name: FUN_.text__0028d0c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028d0c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar1 = _DAT_008a20b0 + 0x10;
  lVar2 = _DAT_008a20b0 + 0x98;
  param_1[9] = _DAT_008a20b0 + 0x58;
  param_1[10] = lVar2;
  *param_1 = lVar1;
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],param_1[0x1c],param_1[0x1e] << 5,8);
  }
  plVar3 = (long *)param_1[0x1a];
  plVar4 = param_1 + 0x16;
  if (plVar3 == plVar4) {
    puVar5 = (undefined8 *)(*plVar4 + 0x20);
LAB__text__0028d140:
    (*(code *)*puVar5)(plVar4);
  }
  else if (plVar3 != (long *)0x0) {
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
    plVar4 = plVar3;
    goto LAB__text__0028d140;
  }
  plVar3 = (long *)param_1[0x12];
  plVar4 = param_1 + 0xe;
  if (plVar3 == plVar4) {
    puVar5 = (undefined8 *)(*plVar4 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB__text__0028d17c;
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
    plVar4 = plVar3;
  }
  (*(code *)*puVar5)(plVar4);
LAB__text__0028d17c:
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


