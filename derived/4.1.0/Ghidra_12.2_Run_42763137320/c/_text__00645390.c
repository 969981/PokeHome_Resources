/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00645390; name: FUN_.text__00645390
 */


undefined4 FUN__text__00645390(long param_1)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = *(uint **)(param_1 + 0x60);
  if (puVar2 != (uint *)0x0) {
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar3 != 0)) {
      return *(undefined4 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}


