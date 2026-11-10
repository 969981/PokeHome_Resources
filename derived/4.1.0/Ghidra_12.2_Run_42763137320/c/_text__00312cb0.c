/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312cb0; name: FUN_.text__00312cb0
 */


int FUN__text__00312cb0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  iVar3 = 0;
  uVar5 = 0x10000;
  do {
    uVar2 = uVar5 >> 3;
    uVar4 = (uint)uVar5;
    uVar1 = uVar4 + 1;
    uVar5 = (ulong)uVar1;
    iVar3 = (*(byte *)(param_1 + 0xdc + (uVar2 & 0x1fff)) >> (ulong)(uVar4 & 7) & 1) + iVar3;
  } while (uVar1 != 0x10329);
  return iVar3;
}


