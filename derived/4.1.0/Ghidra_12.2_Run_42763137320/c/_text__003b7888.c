/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7888; name: FUN_.text__003b7888
 */


uint FUN__text__003b7888(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  iVar2 = 0;
  if (*piVar1 != 0) {
    iVar2 = param_2 / *piVar1;
  }
  uVar3 = iVar2 - *(int *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar3) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  return uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
}


