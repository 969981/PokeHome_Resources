/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005952ac; name: FUN_.text__005952ac
 */


void FUN__text__005952ac(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if ((*(float *)(param_1 + 0x30) < 0.0) || (uVar1 = 0x42c80000, 100.0 < *(float *)(param_1 + 0x30))
     ) {
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  uVar1 = 0;
  if ((*(float *)(param_1 + 0xc) < 0.0) || (uVar1 = 0x42c80000, 100.0 < *(float *)(param_1 + 0xc)))
  {
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  uVar1 = 0;
  if ((*(float *)(param_1 + 0x10) < 0.0) || (uVar1 = 0x42c80000, 100.0 < *(float *)(param_1 + 0x10))
     ) {
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = 0;
  if ((*(float *)(param_1 + 0x14) < 0.0) || (uVar1 = 0x43480000, 200.0 < *(float *)(param_1 + 0x14))
     ) {
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  uVar1 = 0x41a00000;
  if ((*(float *)(param_1 + 0x18) < 20.0) ||
     (uVar1 = 0x44160000, 600.0 < *(float *)(param_1 + 0x18))) {
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  uVar1 = 0x442f0000;
  if ((*(float *)(param_1 + 0x1c) < 700.0) ||
     (uVar1 = 0x461c4000, 10000.0 < *(float *)(param_1 + 0x1c))) {
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  uVar1 = 0xc1400000;
  if ((*(float *)(param_1 + 0x20) < -12.0) ||
     (uVar1 = 0x41c00000, 24.0 < *(float *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  uVar1 = 0xc1400000;
  if ((*(float *)(param_1 + 0x24) < -12.0) ||
     (uVar1 = 0x41c00000, 24.0 < *(float *)(param_1 + 0x24))) {
    *(undefined4 *)(param_1 + 0x24) = uVar1;
  }
  uVar1 = 0;
  if ((*(float *)(param_1 + 0x28) < 0.0) || (uVar1 = 0x3f800000, 1.0 < *(float *)(param_1 + 0x28)))
  {
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    fVar2 = *(float *)(param_1 + 0x38);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x38);
  }
  if (100.0 <= fVar2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x42c80000;
  return;
}


