/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d389c; name: FUN_.text__002d389c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN__text__002d389c(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 local_18;
  
  piVar2 = *(int **)(param_1 + 8);
  if (((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
    return (uint *)0x0;
  }
  puVar1 = (uint *)((long)piVar2 + uVar3);
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  local_18 = *(undefined8 *)(param_2 + 8);
  puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,_DAT_008a2880);
  if (puVar1 != (uint *)0x0) {
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  }
  return puVar1;
}


