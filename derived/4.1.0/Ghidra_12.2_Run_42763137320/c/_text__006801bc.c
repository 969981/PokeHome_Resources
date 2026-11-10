/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006801bc; name: FUN_.text__006801bc
 */


undefined4 FUN__text__006801bc(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0xfffffe02;
  }
  iVar1 = FUN__text__0067b1e8();
  if (iVar1 == 0) {
    if ((*(byte *)(param_2 + 0xe5) >> 1 & 1) == 0) {
      if ((*(uint *)(param_2 + 0xb8) == 0) ||
         (((*(uint *)(param_2 + 0xb8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1) != 0)) {
        uVar3 = 0xfffffe01;
        if (*(int *)(param_2 + 0xdc) != 3) {
          uVar3 = 0xfffffdfe;
        }
        uVar2 = 0;
        if (*(int *)(param_2 + 0xdc) != 2) {
          uVar2 = uVar3;
        }
      }
      else {
        uVar3 = 0xfffffdfe;
        if (*(int *)(param_2 + 0xdc) != 4) {
          uVar3 = 0;
        }
        uVar2 = 0xfffffe01;
        if (*(int *)(param_2 + 0xdc) != 3) {
          uVar2 = uVar3;
        }
      }
    }
    else {
      uVar2 = 0xfffffe00;
    }
  }
  else {
    uVar2 = 0xfffffdee;
  }
  return uVar2;
}


