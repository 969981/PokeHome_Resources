/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ce2c0; name: FUN_.text__005ce2c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ce2c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
    param_1[0x35] = 0;
  }
  lVar7 = param_1[0x2f];
  if (lVar7 != 0) {
    param_1[0x30] = lVar7;
    (**(code **)(*(long *)param_1[0x32] + 0x18))
              ((long *)param_1[0x32],lVar7,param_1[0x31] - lVar7,8);
  }
  plVar3 = (long *)param_1[0x29];
  while (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    (**(code **)(*(long *)param_1[0x2a] + 0x18))((long *)param_1[0x2a],plVar3,0x20,8);
    plVar3 = (long *)lVar7;
  }
  lVar7 = param_1[0x24];
  param_1[0x24] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)param_1[0x26] + 0x18))((long *)param_1[0x26],lVar7,param_1[0x25] << 3,8);
  }
  puVar6 = (undefined8 *)param_1[0x16];
  puVar2 = (undefined8 *)param_1[0x17];
  lVar7 = _DAT_008a5950 + 0x40;
  *param_1 = _DAT_008a5950 + 0x10;
  param_1[9] = lVar7;
  if (puVar6 != puVar2) {
    do {
      puVar9 = puVar6 + 1;
      puVar6 = (undefined8 *)*puVar6;
      uVar8 = puVar6[4];
      plVar3 = (long *)puVar6[1];
      uVar1 = puVar6[2];
      uVar4 = puVar6[3];
      (**(code **)*puVar6)();
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,uVar4,uVar8);
      puVar6 = puVar9;
    } while (puVar9 != puVar2);
    puVar6 = (undefined8 *)param_1[0x16];
  }
  param_1[0x17] = (long)puVar6;
  lVar7 = param_1[0x1d];
  lVar5 = param_1[0x1e];
  if (lVar7 != lVar5) {
    do {
      puVar6 = *(undefined8 **)(lVar7 + 8);
      plVar3 = (long *)puVar6[1];
      uVar1 = puVar6[2];
      uVar4 = puVar6[3];
      uVar8 = puVar6[4];
      (**(code **)*puVar6)();
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar1,uVar4,uVar8);
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar5);
    lVar7 = param_1[0x1d];
  }
  param_1[0x1e] = lVar7;
  FUN__text__006ee53c(param_1 + 10,_DAT_008a0448);
  lVar7 = param_1[0x1d];
  if (lVar7 != 0) {
    param_1[0x1e] = lVar7;
    (**(code **)(*(long *)param_1[0x20] + 0x18))
              ((long *)param_1[0x20],lVar7,param_1[0x1f] - lVar7,8);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1c));
  lVar7 = param_1[0x16];
  if (lVar7 != 0) {
    param_1[0x17] = lVar7;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],lVar7,param_1[0x18] - lVar7,8);
  }
  FUN__text__005b509c(param_1 + 0x12);
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  FUN__text__006ee430(param_1 + 10);
  return;
}


