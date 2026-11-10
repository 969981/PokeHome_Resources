/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561c60; name: FUN_.text__00561c60
 */


undefined8 FUN__text__00561c60(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0x24) = *param_2;
  fVar2 = exp2f(*(float *)(param_2 + 1) * 0.00083333335);
  *(float *)(param_1 + 0x1c) = fVar2;
  fVar2 = exp2f(*(float *)(param_2 + 5) * 0.1660964);
  *(float *)(param_1 + 0x20) = fVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x40) = param_2[0x19];
  fVar2 = exp2f(*(float *)(param_2 + 0x1a) * 0.00083333335);
  *(float *)(param_1 + 0x38) = fVar2;
  fVar2 = exp2f(*(float *)(param_2 + 0x1e) * 0.1660964);
  *(float *)(param_1 + 0x3c) = fVar2;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x32);
  fVar2 = exp2f(*(float *)(param_2 + 0x36) * 0.1660964);
  *(float *)(param_1 + 0x48) = fVar2;
  fVar2 = exp2f(*(float *)(param_2 + 0x3a) * 0.1660964);
  *(float *)(param_1 + 0x4c) = fVar2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x54) = param_2[0x42];
  uVar1 = param_2[0x43];
  *(undefined2 *)(param_1 + 8) = 0xffff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined1 *)(param_1 + 0x55) = uVar1;
  return 1;
}


