/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a6738; name: FUN_.text__005a6738
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a6738(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar3 = param_2[3];
  param_2[3] = 0;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar3 = param_2[7];
  param_2[7] = 0;
  lVar1 = _DAT_0089f4b0 + 0x10;
  param_1[7] = uVar3;
  param_1[8] = lVar1;
  uVar3 = param_2[9];
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = uVar3;
  if ((code *)param_2[0xd] != (code *)0x0) {
    (*(code *)param_2[0xd])(param_2 + 0xe,param_1 + 0xe);
    uVar3 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    uVar5 = param_2[0xc];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar5;
    pcVar4 = (code *)param_2[0xb];
    if (pcVar4 != (code *)0x0) {
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      (*pcVar4)(param_2 + 0xe);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_2[0x1d] != (code *)0x0) {
    (*(code *)param_2[0x1d])(param_2 + 0x1e,param_1 + 0x1e);
    uVar3 = param_2[0x1b];
    param_1[0x1d] = param_2[0x1d];
    uVar5 = param_2[0x1c];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar5;
    pcVar4 = (code *)param_2[0x1b];
    if (pcVar4 != (code *)0x0) {
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      (*pcVar4)(param_2 + 0x1e);
    }
  }
  lVar1 = _DAT_008a0110;
  param_1[8] = _DAT_0089f4c0 + 0x10;
  param_1[0x2a] = lVar1 + 0x10;
  uVar3 = param_2[0x2b];
  param_2[0x2b] = 0;
  param_1[0x2b] = uVar3;
  uVar3 = param_2[0x2c];
  param_2[0x2c] = 0;
  param_1[0x2c] = uVar3;
  uVar3 = param_2[0x2d];
  param_2[0x2d] = 0;
  param_1[0x2d] = uVar3;
  uVar3 = param_2[0x2e];
  param_2[0x2e] = 0;
  param_1[0x2e] = uVar3;
  uVar3 = param_2[0x2f];
  param_2[0x2f] = 0;
  param_1[0x2f] = uVar3;
  uVar3 = param_2[0x3d];
  uVar2 = *(undefined1 *)(param_2 + 0x3e);
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
  *(undefined1 *)(param_1 + 0x3e) = uVar2;
  param_1[0x3c] = uVar3;
  return;
}


