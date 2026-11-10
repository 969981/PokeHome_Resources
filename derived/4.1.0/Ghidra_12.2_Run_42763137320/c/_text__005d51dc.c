/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d51dc; name: FUN_.text__005d51dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d51dc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,
                        undefined4 param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[6] = param_5[2];
  lVar1 = param_5[3];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[8] = _DAT_0089f4b0 + 0x10;
  lVar1 = param_2[9];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
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
  lVar2 = _DAT_008a0110;
  lVar1 = _DAT_0089f4c0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[8] = lVar1 + 0x10;
  param_1[0x2a] = lVar2 + 0x10;
  param_1[0x2b] = 0;
  lVar1 = param_2[0x2f];
  param_1[0x2f] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar3 = param_2[0x33];
  param_1[0x31] = param_2[0x31];
  param_1[0x33] = uVar3;
  uVar3 = param_2[0x30];
  uVar4 = param_2[0x32];
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3c] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3d) = param_3;
  *(undefined4 *)((long)param_1 + 0x1ec) = param_4;
  param_1[0x32] = uVar4;
  param_1[0x30] = uVar3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  lVar1 = param_2[0x2c];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = param_1[0x2c];
  param_1[0x2c] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  param_1[0x35] = param_2[0x35];
  uVar3 = param_2[0x34];
  param_1[0x36] = param_2[0x36];
  param_1[0x34] = uVar3;
  lVar1 = param_2[0x2d];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = param_1[0x2d];
  param_1[0x2d] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar3 = param_2[0x37];
  uVar4 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar4;
  param_1[0x37] = uVar3;
  lVar1 = param_2[0x2e];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = param_1[0x2e];
  param_1[0x2e] = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  param_1[0x3b] = param_2[0x3b];
  uVar3 = param_2[0x3a];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3a] = uVar3;
  return;
}


