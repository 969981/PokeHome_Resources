/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec040; name: FUN_.text__006ec040
 */


uint FUN__text__006ec040(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2 - 0x1a;
  if (uVar1 < 0x21) {
    if (param_2 - 0x27 < 0x14) {
      uVar3 = *(uint *)((long)(int)(param_2 - 0x27) * 4 + 0x77eae8);
    }
    else {
      uVar3 = 4;
    }
    iVar2 = param_1 + uVar3;
    param_1 = 0;
    if (uVar3 != 0) {
      param_1 = (iVar2 - 1U) / uVar3;
    }
  }
  if (uVar1 < 0x22) {
    return *(int *)((long)(int)uVar1 * 4 + 0x77eb38) * param_1;
  }
  if ((int)param_2 < 3) {
    return param_1;
  }
  if (param_2 < 0xb) {
    return param_1 * 2;
  }
  if (param_2 < 0x15) {
    return param_1 * 4;
  }
  if (param_2 < 0x18) {
    return param_1 * 8;
  }
  iVar2 = 0xc;
  if (param_2 != 0x18) {
    iVar2 = 0x10;
  }
  return iVar2 * param_1;
}


