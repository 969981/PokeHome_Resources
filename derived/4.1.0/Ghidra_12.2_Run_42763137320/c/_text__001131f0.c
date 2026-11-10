/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001131f0; name: FUN_.text__001131f0
 */


undefined8 * FUN__text__001131f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  lVar5 = param_2[5];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = param_1[5];
  param_1[5] = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  lVar5 = param_2[9];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = param_1[9];
  param_1[9] = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  lVar5 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar5 + 0x68) = *(undefined8 *)((long)param_2 + lVar5 + 0x68);
    *(undefined8 *)((long)param_1 + lVar5 + 0x70) = *(undefined8 *)((long)param_2 + lVar5 + 0x70);
    *(undefined8 *)((long)param_1 + lVar5 + 0x78) = *(undefined8 *)((long)param_2 + lVar5 + 0x78);
    *(undefined8 *)((long)param_1 + lVar5 + 0x80) = *(undefined8 *)((long)param_2 + lVar5 + 0x80);
    lVar3 = *(long *)((long)param_2 + lVar5 + 0x88);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)((long)param_1 + lVar5 + 0x88);
    *(long *)((long)param_1 + lVar5 + 0x88) = lVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar3 = lVar5 + 0x30;
    *(undefined8 *)((long)param_1 + lVar5 + 0x90) = *(undefined8 *)((long)param_2 + lVar5 + 0x90);
    lVar5 = lVar3;
  } while (lVar3 != 0x180);
  return param_1;
}


