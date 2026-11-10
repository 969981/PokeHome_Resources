/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293774; name: FUN_.text__00293774
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00293774(long *param_1,uint *param_2)

{
  undefined4 local_18;
  uint local_14;
  
  local_14 = *param_2;
  local_18 = **(undefined4 **)(_DAT_008a2140 + (ulong)local_14 * 8);
  (**(code **)(*param_1 + 0x1560))(*param_1 + 0x1580,&local_14,&local_18);
  return;
}


