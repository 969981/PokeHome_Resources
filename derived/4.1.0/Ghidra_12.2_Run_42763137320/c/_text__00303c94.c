/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303c94; name: FUN_.text__00303c94
 */


bool FUN__text__00303c94(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) {
    bVar1 = *(char *)(param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330 + 0x350) != '\0';
  }
  return bVar1;
}


