/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d3950; name: FUN_.text__002d3950
 */


undefined4 FUN__text__002d3950(long param_1)

{
  uint *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}


