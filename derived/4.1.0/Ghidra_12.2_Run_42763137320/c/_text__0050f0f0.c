/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050f0f0; name: FUN_.text__0050f0f0
 */


undefined2 FUN__text__0050f0f0(long param_1,int param_2)

{
  return *(undefined2 *)
          (*(long *)(param_1 + 8) +
           (ulong)(ushort)((uint)(param_2 - *(int *)(param_1 + 0x20)) >> 6) * 8 + 6);
}


