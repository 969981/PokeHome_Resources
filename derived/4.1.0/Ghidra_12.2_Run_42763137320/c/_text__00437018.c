/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437018; name: FUN_.text__00437018
 */


undefined8 FUN__text__00437018(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)FUN__text__00438880(param_1 + 0x40);
  if ((puVar1 == (ushort *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    return 0;
  }
  *param_3 = *(undefined4 *)(*(long *)(param_1 + 0x28) + (ulong)*puVar1 * 0x28 + 0x20);
  return 1;
}


