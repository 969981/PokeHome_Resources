/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5bac; name: FUN_.text__003b5bac
 */


void FUN__text__003b5bac(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 0x40) + (ulong)param_2 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4 & 1;
  return;
}


