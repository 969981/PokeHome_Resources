/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00645f58; name: FUN_.text__00645f58
 */


undefined4 FUN__text__00645f58(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN__text__006468c8(param_2,param_3);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x2e - (long)*piVar2)));
  return *(undefined4 *)((long)puVar1 + (ulong)*puVar1);
}


