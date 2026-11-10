/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155418; name: FUN_.text__00155418
 */


void FUN__text__00155418(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  
  piVar2 = (int *)*param_2;
  if (((piVar2 != (int *)0x0 && *(uint *)(param_2 + 1) != 0xffffffff) &&
      (4 < *(ushort *)((long)piVar2 - (long)*piVar2))) &&
     (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 != 0)) {
    puVar3 = (uint *)((long)piVar2 + uVar4);
    puVar3 = (uint *)((long)puVar3 + (ulong)*(uint *)(param_2 + 1) * 4 + (ulong)*puVar3 + 4);
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    if (param_3 < *puVar3) {
      FUN__text__0015533c(param_1,piVar2,puVar3[(param_3 & 0xffffffff) + 1]);
      return;
    }
  }
  FUN__text__00155348(param_1);
  return;
}


