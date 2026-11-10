/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027a5c0; name: FUN_.text__0027a5c0
 */


int FUN__text__0027a5c0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + (ulong)*(uint *)(param_1 + (long)param_2 * 0x18 + 0x698d8) * 0x10 +
                   0x7b238);
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = 0;
  iVar4 = 0;
  do {
    uVar5 = (uint)uVar6;
    uVar3 = uVar6 & 0x3f;
    uVar1 = uVar5 + 1;
    uVar6 = (ulong)uVar1;
    iVar4 = iVar4 + ((uint)(*(ulong *)(param_1 + (long)param_2 * 0x18 + 0x698e0 +
                                      (ulong)(uVar5 >> 6 & 0x3ff) * 8) >> uVar3) & 1);
  } while (uVar2 != uVar1);
  return iVar4;
}


