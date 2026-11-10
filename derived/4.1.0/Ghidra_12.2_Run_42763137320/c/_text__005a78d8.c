/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a78d8; name: FUN_.text__005a78d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005a78d8(long param_1,int param_2,int param_3)

{
  return *(long *)(param_1 + (long)*(int *)(*_DAT_0089f5b8 + 0x70) * 0x198 + 400) +
         (ulong)(uint)(param_2 + *(int *)(param_1 + 0x58c) * param_3) * 0x48;
}


