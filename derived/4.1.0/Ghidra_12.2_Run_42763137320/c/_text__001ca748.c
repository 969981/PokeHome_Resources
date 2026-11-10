/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca748; name: FUN_.text__001ca748
 */


void FUN__text__001ca748(long param_1,int param_2,uint param_3)

{
  FUN__text__001ca698();
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,
                      param_1 + (long)param_2 * 0x20 + (long)(int)param_3 * 8 + 0x3f8);
  *(bool *)(param_1 + 0x4ca) = (param_3 & 0xfffffffd) == 0;
  return;
}


