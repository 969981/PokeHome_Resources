/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a08a8; name: FUN_.text__001a08a8
 */


void FUN__text__001a08a8(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x128) + 0x24);
  FUN__text__001be4e0(*(undefined8 *)
                       (param_1 + (ulong)(*(int *)(param_1 + 0x1b0) != iVar1 &&
                                         *(int *)(param_1 + 0x1b4) == iVar1) * 0x20 + 0x68));
  return;
}


