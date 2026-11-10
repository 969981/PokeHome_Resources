/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bff30; name: FUN_.text__005bff30
 */


void FUN__text__005bff30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  lVar2 = param_2[7];
  param_1[7] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[8] = 0x8675a8;
  lVar2 = param_2[9];
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  if ((code *)param_2[0xc] != (code *)0x0) {
    (*(code *)param_2[0xc])(param_2 + 0xe,param_1 + 0xe);
    uVar3 = param_2[0xd];
    param_1[0xb] = param_2[0xb];
    param_1[0xd] = uVar3;
    uVar3 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[10] = uVar3;
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1c] != (code *)0x0) {
    (*(code *)param_2[0x1c])(param_2 + 0x1e,param_1 + 0x1e);
    uVar3 = param_2[0x1d];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1d] = uVar3;
    uVar3 = param_2[0x1a];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1a] = uVar3;
  }
  param_1[8] = 0x867738;
  param_1[0x2a] = 0x86a4f0;
  lVar2 = param_2[0x2b];
  param_1[0x2b] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[0x2c];
  param_1[0x2c] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[0x2d];
  param_1[0x2d] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[0x2e];
  param_1[0x2e] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = param_2[0x2f];
  param_1[0x2f] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar3 = param_2[0x3d];
  uVar1 = *(undefined1 *)(param_2 + 0x3e);
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3d] = uVar3;
  uVar3 = param_2[0x39];
  param_1[0x37] = param_2[0x37];
  param_1[0x39] = uVar3;
  uVar3 = param_2[0x35];
  param_1[0x33] = param_2[0x33];
  param_1[0x35] = uVar3;
  param_1[0x31] = param_2[0x31];
  uVar3 = param_2[0x30];
  param_1[0x32] = param_2[0x32];
  param_1[0x30] = uVar3;
  uVar3 = param_2[0x34];
  param_1[0x36] = param_2[0x36];
  param_1[0x34] = uVar3;
  uVar3 = param_2[0x38];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x38] = uVar3;
  uVar3 = param_2[0x3c];
  *(undefined1 *)(param_1 + 0x3e) = uVar1;
  param_1[0x3c] = uVar3;
  return;
}


