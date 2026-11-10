/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8298; name: FUN_.text__006a8298
 */


void FUN__text__006a8298(float param_1,float param_2,long param_3)

{
  int iVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  ushort uVar2;
  ushort uVar3;
  uint in_w8;
  uint uVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_3 + 0x20) + param_1 * param_2;
  if (in_ZR || in_NG != in_OV) {
    if (0.0 < fVar5) goto LAB__text__006a83c0;
    iVar1 = *(int *)(param_3 + 0x40);
    if (iVar1 == 2) {
      fVar5 = -fVar5;
      *(float *)(param_3 + 0x3c) = -param_2;
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB__text__006a83c0;
        *(undefined4 *)(param_3 + 0x3c) = 0;
        uVar4 = in_w8 | 1;
        fVar5 = 0.0;
        goto LAB__text__006a83bc;
      }
      uVar2 = FUN__text__00697398(param_3);
      in_w8 = *(uint *)(param_3 + 0x44);
      fVar5 = fVar5 + (float)uVar2;
    }
    uVar4 = in_w8 | 4;
  }
  else {
    uVar2 = FUN__text__00697398(param_3);
    if (fVar5 < (float)uVar2) goto LAB__text__006a83c0;
    iVar1 = *(int *)(param_3 + 0x40);
    if (iVar1 == 2) {
      uVar2 = FUN__text__00697398(param_3);
      uVar3 = FUN__text__00697398(param_3);
      fVar5 = ((float)uVar3 - fVar5) + (float)uVar2;
      *(float *)(param_3 + 0x3c) = -*(float *)(param_3 + 0x3c);
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 0) goto LAB__text__006a83c0;
        uVar2 = FUN__text__00697398(param_3);
        *(undefined4 *)(param_3 + 0x3c) = 0;
        fVar5 = (float)uVar2;
        uVar4 = *(uint *)(param_3 + 0x44) | 1;
        goto LAB__text__006a83bc;
      }
      uVar2 = FUN__text__00697398(param_3);
      fVar5 = fVar5 - (float)uVar2;
    }
    uVar4 = *(uint *)(param_3 + 0x44) | 2;
  }
LAB__text__006a83bc:
  *(uint *)(param_3 + 0x44) = uVar4;
LAB__text__006a83c0:
  *(float *)(param_3 + 0x20) = fVar5;
  return;
}


