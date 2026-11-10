/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4e4c; name: FUN_.text__003f4e4c
 */


undefined8 FUN__text__003f4e4c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if (((ulong)param_3 <
       (ulong)*(uint *)(param_2 + 0xc) + (ulong)*(uint *)(param_2 + 0x10) +
       (ulong)*(uint *)(param_2 + 0x14) + (ulong)*(uint *)(param_2 + 0x18) + 0x1c) ||
     (*(int *)(param_2 + 8) == 0)) {
    return 2;
  }
  *(long *)(param_1 + 0x10) = param_2 + 0x1c;
  lVar1 = param_2 + 0x1c + (ulong)*(uint *)(param_2 + 0xc);
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = lVar1 + (ulong)*(uint *)(param_2 + 0x10);
  *(long *)(param_1 + 0x20) = lVar1;
  *(ulong *)(param_1 + 0x28) = lVar1 + (ulong)*(uint *)(param_2 + 0x14);
  return 1;
}


