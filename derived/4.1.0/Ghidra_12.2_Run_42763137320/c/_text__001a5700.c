/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5700; name: FUN_.text__001a5700
 */


int FUN__text__001a5700(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar4 <= uVar2) {
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x4c)) {
      iVar3 = 0;
      do {
        uVar5 = *(uint *)(param_1 + 0x44);
        do {
          uVar6 = (ulong)uVar5;
          uVar1 = (ulong)uVar5;
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + (uint)*(byte *)(param_1 + (ulong)uVar4 + uVar6 + uVar1 * 4 + 0x54);
        } while (uVar5 <= *(uint *)(param_1 + 0x4c));
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar2);
      return iVar3;
    }
    do {
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar2);
  }
  return 0;
}


