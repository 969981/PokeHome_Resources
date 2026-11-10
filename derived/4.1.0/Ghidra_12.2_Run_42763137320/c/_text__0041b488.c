/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b488; name: FUN_.text__0041b488
 */


void FUN__text__0041b488(float param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = false;
  if ((*(char *)(param_2 + 0x6e) == '\0') &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x68)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x68) == param_1;
  }
  if (!bVar1) {
    fVar4 = *(float *)(param_2 + 100);
    fVar3 = exp2f(param_1 * 0.00083333335);
    *(float *)(param_2 + 0x68) = param_1;
    *(undefined1 *)(param_2 + 0x6e) = 0;
    fVar3 = fVar4 * 65536.0 * fVar3 + 0.5;
    uVar2 = (uint)fVar3;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    if (2.1474836e+09 <= fVar3) {
      uVar2 = 0x7fffffff;
    }
    *(uint *)(param_2 + 0x34) = uVar2;
    *(uint *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
  }
  return;
}


