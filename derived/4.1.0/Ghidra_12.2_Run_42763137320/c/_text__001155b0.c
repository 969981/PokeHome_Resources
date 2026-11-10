/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001155b0; name: FUN_.text__001155b0
 */


uint FUN__text__001155b0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x2230);
  if (*(uint *)(param_1 + 0x2230) == 0) {
    return 1;
  }
  uVar4 = 0;
  plVar5 = (long *)(param_1 + 0x18);
  uVar3 = 1;
  do {
    while (*plVar5 == 0) {
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 3;
      if (uVar2 <= uVar4) {
        return uVar3;
      }
    }
    uVar1 = FUN__text__001593f4();
    uVar2 = (ulong)*(uint *)(param_1 + 0x2230);
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 & uVar1;
    plVar5 = plVar5 + 3;
  } while (uVar4 < uVar2);
  return uVar3;
}


