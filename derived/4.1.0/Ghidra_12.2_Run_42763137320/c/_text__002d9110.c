/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9110; name: FUN_.text__002d9110
 */


void FUN__text__002d9110(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  FUN__text__002d9300();
  if (param_1[0x10] == 0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  else {
    uVar6 = param_1[0xe];
    puVar7 = (undefined8 *)param_1[1];
    if ((uVar6 != 0) && (uVar6 % 0x19 != 0)) {
      puVar8 = puVar7;
      do {
        puVar8 = puVar8 + 1;
      } while (puVar8 <= puVar7 + uVar6 / 0x19);
    }
    puVar8 = (undefined8 *)param_1[2];
    uVar6 = uVar6 + param_1[0x10];
    uVar4 = ((long)puVar8 - (long)puVar7 >> 3) * 0x19;
    if (uVar6 != uVar4) {
      uVar6 = uVar6 / 0x19;
      if (uVar6 <= uVar4 / 0x19 && uVar4 % 0x19 != 0) {
        puVar5 = puVar7 + uVar6;
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 <= puVar7 + uVar4 / 0x19);
      }
    }
  }
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))((long *)param_1[0x12],*puVar7,4000,0x10);
  }
  plVar1 = (long *)param_1[0x18];
  plVar2 = param_1 + 0x14;
  if (plVar1 == plVar2) {
    puVar7 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__002d9258;
    puVar7 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar7)(plVar2);
LAB__text__002d9258:
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,param_1[4] - lVar3,0x10);
  }
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x002d92e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002d92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}


