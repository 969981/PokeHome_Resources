/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004913e0; name: FUN_.text__004913e0
 */


undefined4 FUN__text__004913e0(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0xd8);
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      uVar1 = iVar3 + (uVar2 >> 1);
      uVar4 = *(ulong *)(*(long *)(param_1 + 0xd0) +
                        (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar4 == param_2) {
        return *(undefined4 *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar1 * 0x10 + 8);
      }
      if (uVar4 < param_2) {
        iVar3 = uVar1 + 1;
      }
      uVar1 = uVar2 - (uVar4 < param_2);
      uVar2 = uVar1 >> 1;
    } while (1 < uVar1);
  }
  return 0;
}


