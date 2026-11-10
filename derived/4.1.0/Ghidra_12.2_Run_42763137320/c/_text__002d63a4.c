/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d63a4; name: FUN_.text__002d63a4
 */


void FUN__text__002d63a4(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x10);
  *puVar1 = param_3;
  *(int *)(puVar1 + 1) = (int)param_4;
  *(char *)((long)puVar1 + 0xc) = (char)((ulong)param_4 >> 0x20);
  return;
}


