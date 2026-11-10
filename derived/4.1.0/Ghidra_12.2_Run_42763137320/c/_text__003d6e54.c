/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6e54; name: FUN_.text__003d6e54
 */


undefined8 FUN__text__003d6e54(long *param_1,uint *param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0x2bca30519c58bfff < *param_1 + 0x89f87d19fd70000U) {
    return 0x22;
  }
  uVar1 = (int)((*param_1 + 0x8a09f909ae60000U) / 864000000000) - 0x3c;
  uVar2 = uVar1 % 0x23ab1;
  if (uVar2 < 0x23ab0) {
    iVar4 = (uVar2 / 0x8eac) * 100;
    uVar5 = (uVar2 % 0x8eac) / 0x5b5;
    uVar2 = (uVar2 % 0x8eac) % 0x5b5;
    if (0x5b3 < uVar2) goto LAB__text__003d6fa0;
    uVar3 = uVar2 % 0x16d;
    uVar1 = iVar4 + (uVar1 / 0x23ab1) * 400 + uVar5 * 4 + uVar2 / 0x16d;
    if (uVar3 < 0x132) {
      uVar5 = uVar1 * -0x3d70a3d7 + 0x51eb850;
      iVar4 = 0x3b;
      if (0x28f5c28 < (uVar5 >> 2 | (uVar2 / 0x16d) * 0x40000000) && uVar2 < 0x16d ||
          (uVar5 >> 4 | uVar1 * -0x70000000) < 0xa3d70b) {
        iVar4 = 0x3c;
      }
      uVar3 = iVar4 + uVar3;
      goto LAB__text__003d6fbc;
    }
  }
  else {
    iVar4 = 300;
    uVar5 = 0x18;
LAB__text__003d6fa0:
    uVar3 = 0x16d;
    uVar1 = iVar4 + (uVar1 / 0x23ab1) * 400 + uVar5 * 4 + 3;
  }
  uVar1 = uVar1 + 1;
  uVar3 = uVar3 - 0x132;
LAB__text__003d6fbc:
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  if (param_3 == (uint *)0x0 && param_4 == (int *)0x0) {
    return 0;
  }
  if ((int)uVar3 < 0x1f) {
    uVar1 = 1;
  }
  else {
    uVar5 = uVar1 * -0x3d70a3d7 + 0x51eb850;
    uVar2 = 0x3b;
    if (0x28f5c28 < (uVar5 >> 2 | uVar1 * 0x40000000) && (uVar1 & 3) == 0 ||
        (uVar5 >> 4 | uVar1 * -0x70000000) < 0xa3d70b) {
      uVar2 = 0x3c;
    }
    if (uVar3 < uVar2) {
      uVar1 = 2;
      uVar3 = uVar3 - 0x1f;
    }
    else {
      iVar4 = (int)(short)((short)(uVar3 - uVar2) * 5 + 2) / 0x99;
      uVar1 = iVar4 + 3U & 0xffff;
      uVar3 = (uVar3 - uVar2) - (iVar4 * 0x99 + 2U & 0xffff) / 5;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = uVar3 + 1;
  }
  return 0;
}


