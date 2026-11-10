/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd5c8; name: FUN_.text__005cd5c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005cd5c8(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x74);
  if (*(int *)(*_DAT_0089f5b8 + 0x70) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
  }
  return *puVar1;
}


