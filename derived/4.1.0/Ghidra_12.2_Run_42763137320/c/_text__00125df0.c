/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00125df0; name: FUN_.text__00125df0
 */


void FUN__text__00125df0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  FUN__text__00125f90();
  if (param_1[0x10] == 0) {
    puVar9 = (undefined8 *)param_1[1];
    puVar10 = (undefined8 *)param_1[2];
  }
  else {
    uVar5 = param_1[0xe];
    puVar9 = (undefined8 *)param_1[1];
    if ((uVar5 != 0) && ((uVar5 & 0x1ff) != 0)) {
      puVar10 = puVar9;
      do {
        puVar10 = puVar10 + 1;
      } while (puVar10 <= puVar9 + (uVar5 >> 9));
    }
    puVar10 = (undefined8 *)param_1[2];
    uVar5 = uVar5 + param_1[0x10];
    uVar6 = uVar5 >> 9;
    uVar8 = (long)puVar10 - (long)puVar9;
    uVar4 = (uVar8 & 0x3ffffffffffffff) >> 3;
    if ((uVar5 != uVar8 * 0x40 && (uVar8 & 7) != 0) && uVar6 <= uVar4) {
      puVar7 = puVar9 + uVar6;
      do {
        puVar7 = puVar7 + 1;
      } while (puVar7 <= puVar9 + uVar4);
    }
  }
  for (; puVar9 != puVar10; puVar9 = puVar9 + 1) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))((long *)param_1[0x12],*puVar9,0x1000,8);
  }
  plVar1 = (long *)param_1[0x18];
  plVar2 = param_1 + 0x14;
  if (plVar1 == plVar2) {
    puVar9 = (undefined8 *)(*plVar2 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB__text__00125ee8;
    puVar9 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
  }
  (*(code *)*puVar9)(plVar2);
LAB__text__00125ee8:
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,param_1[4] - lVar3,8);
  }
  plVar2 = (long *)param_1[0xc];
  param_1 = param_1 + 8;
  if (plVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x00125f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00125f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}


