/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041aeb4; name: FUN_.text__0041aeb4
 */


void FUN__text__0041aeb4(float param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_2 + 0x6e) == '\0') {
    if (*(float *)(param_2 + 0x68) == param_1) goto LAB__text__0041af90;
  }
  else {
    fVar6 = *(float *)(param_2 + 100);
    fVar5 = exp2f(param_1 * 0.00083333335);
    *(float *)(param_2 + 0x68) = param_1;
    *(undefined1 *)(param_2 + 0x6e) = 0;
    fVar5 = fVar6 * 65536.0 * fVar5 + 0.5;
    uVar3 = (uint)fVar5;
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    if (2.1474836e+09 <= fVar5) {
      uVar3 = 0x7fffffff;
    }
    *(uint *)(param_2 + 0x34) = uVar3;
    *(uint *)(param_2 + 0x38) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
    if (!NAN(param_1)) {
LAB__text__0041af90:
      uVar3 = *(uint *)(param_2 + 0x38);
      goto LAB__text__0041aff8;
    }
  }
  if (*(int *)(param_2 + 0x60) == 2) {
    iVar2 = (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) * *(int *)(param_2 + 0x3c);
    iVar1 = iVar2 + 0x3ff;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar1 = *(int *)(param_2 + 0x34) + (iVar1 >> 10);
    *(int *)(param_2 + 0x34) = iVar1;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      if (-1 < iVar1) goto LAB__text__0041afa0;
      uVar4 = 0x7fffffff;
    }
    *(undefined4 *)(param_2 + 0x34) = uVar4;
  }
LAB__text__0041afa0:
  fVar6 = *(float *)(param_2 + 100);
  *(undefined4 *)(param_2 + 0x3c) = 0;
  fVar5 = exp2f(param_1 * 0.00083333335);
  *(float *)(param_2 + 0x68) = param_1;
  fVar5 = fVar6 * 65536.0 * fVar5 + 0.5;
  uVar3 = (uint)fVar5;
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  if (2.1474836e+09 <= fVar5) {
    uVar3 = 0x7fffffff;
  }
  *(uint *)(param_2 + 0x38) = uVar3;
  if ((param_3 & 1) == 0) {
    *(uint *)(param_2 + 0x34) = uVar3;
  }
LAB__text__0041aff8:
  if (*(uint *)(param_2 + 0x34) != uVar3) {
    *(undefined4 *)(param_2 + 0x60) = 2;
    return;
  }
  if (uVar3 == 0x10000) {
    *(undefined4 *)(param_2 + 0x60) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x60) = 1;
  return;
}


