/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001553ac; name: FUN_.text__001553ac
 */


undefined4 FUN__text__001553ac(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  if (((piVar2 == (int *)0x0 || *(uint *)(param_1 + 1) == 0xffffffff) ||
      (*(ushort *)((long)piVar2 - (long)*piVar2) < 5)) ||
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar2 + uVar3);
  puVar1 = (uint *)((long)puVar1 + (ulong)*(uint *)(param_1 + 1) * 4 + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}


