/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1950; name: FUN_.text__006c1950
 */


uint * FUN__text__006c1950(long param_1,char *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 8);
  if (*(ushort *)(param_1 + 8) != 0) {
    puVar2 = (uint *)(param_1 + 0xc);
    do {
      iVar1 = strcmp((char *)(param_1 + (ulong)*puVar2),param_2);
      if (iVar1 == 0) {
        return puVar2;
      }
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0xc;
    } while (uVar3 != 0);
  }
  return (uint *)0x0;
}


