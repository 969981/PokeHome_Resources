/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192c00; name: FUN_.text__00192c00
 */


int FUN__text__00192c00(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  if (*(uint *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar2 = 0;
  puVar4 = (undefined8 *)(param_1 + 0x10);
  do {
    iVar1 = FUN__text__00191f00(*puVar4);
    iVar2 = iVar1 + iVar2;
    uVar3 = uVar3 - 1;
    puVar4 = puVar4 + 4;
  } while (uVar3 != 0);
  return iVar2;
}


