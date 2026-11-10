/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019bb68; name: FUN_.text__0019bb68
 */


void FUN__text__0019bb68(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar4 == 0) goto LAB__text__0019bc2c;
  if (*(long *)(lVar4 + 0x100) != 0) {
    (**(code **)(**(long **)(lVar4 + 0xb0) + 0x18))
              (*(long **)(lVar4 + 0xb0),*(undefined8 *)(lVar4 + 0xf0),
               *(long *)(lVar4 + 0x100) * 0x1c,4);
  }
  plVar1 = *(long **)(lVar4 + 0xe0);
  plVar2 = (long *)(lVar4 + 0xc0);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__0019bbd8:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__0019bbd8;
  }
  plVar1 = *(long **)(lVar4 + 0xa0);
  plVar2 = (long *)(lVar4 + 0x80);
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__0019bc0c:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__0019bc0c;
  }
  (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar4,param_1[0xe],param_1[0xf]);
LAB__text__0019bc2c:
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


