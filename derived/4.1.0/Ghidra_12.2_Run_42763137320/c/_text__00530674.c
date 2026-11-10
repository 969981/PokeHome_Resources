/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00530674; name: FUN_.text__00530674
 */


undefined4 * FUN__text__00530674(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (uVar2 <= uVar5) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN__text__00530960(param_1 + 0x30,iVar1);
    if ((uVar3 & 1) == 0) {
      return (undefined4 *)0x0;
    }
    if (*(uint *)(param_1 + 0x3c) <= uVar5) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x38) = uVar5 + 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)(*(long *)(param_1 + 0x30) + (ulong)uVar5 * 0x118);
  *puVar4 = 0;
  memset(puVar4 + 2,0,0x108);
  puVar4[0x44] = 0x42c80000;
  return puVar4;
}


