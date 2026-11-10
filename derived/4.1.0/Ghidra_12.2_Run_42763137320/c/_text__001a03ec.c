/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a03ec; name: FUN_.text__001a03ec
 */


void FUN__text__001a03ec(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0xe8) + 0x24);
  FUN__text__001be33c(*(undefined8 *)
                       (param_1 + (ulong)(*(int *)(param_1 + 0x1b0) != iVar1 &&
                                         *(int *)(param_1 + 0x1b4) == iVar1) * 0x20 + 0x68));
  return;
}


