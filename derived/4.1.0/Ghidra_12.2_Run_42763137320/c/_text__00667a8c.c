/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667a8c; name: FUN_.text__00667a8c
 */


undefined8 FUN__text__00667a8c(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0xe8);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 >> (ulong)(param_2 & 0x1f) & 1) == 0) || (*(code **)(puVar1 + 4) == (code *)0x0)) {
    return 0;
  }
  (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
  return 0;
}


