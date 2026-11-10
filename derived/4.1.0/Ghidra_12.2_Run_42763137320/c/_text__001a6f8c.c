/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a6f8c; name: FUN_.text__001a6f8c
 */


undefined8 FUN__text__001a6f8c(long param_1,uint *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar4 = *param_2;
  if (uVar3 <= uVar4 && uVar4 <= *(uint *)(param_1 + 0x4c)) {
    uVar5 = param_2[1];
    uVar6 = *(uint *)(param_1 + 0x48);
    if (uVar5 < uVar6) {
      *param_3 = 0;
      return 0;
    }
    if (uVar5 <= *(uint *)(param_1 + 0x50)) {
      uVar4 = *(int *)(param_1 + 0x88) + uVar4;
      uVar5 = uVar5 + *(int *)(param_1 + 0x8c);
      iVar1 = 0;
      if (uVar3 <= uVar4) {
        iVar1 = uVar4 - uVar3;
      }
      iVar2 = 0;
      if (uVar6 <= uVar5) {
        iVar2 = uVar5 - uVar6;
      }
      *param_3 = CONCAT44(iVar2,iVar1);
      return 1;
    }
  }
  *param_3 = 0;
  return 0;
}


