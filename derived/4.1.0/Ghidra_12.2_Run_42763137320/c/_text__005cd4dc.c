/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd4dc; name: FUN_.text__005cd4dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005cd4dc(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*_DAT_0089f5b8 + 0x859c);
  if (iVar1 == 2) {
    return *(undefined4 *)(param_1 + 0x78);
  }
  if ((iVar1 == 1) || (iVar1 != 0)) {
    return *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined4 *)(param_1 + 0x6c);
}


