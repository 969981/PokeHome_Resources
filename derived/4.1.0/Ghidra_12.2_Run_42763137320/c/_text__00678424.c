/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00678424; name: FUN_.text__00678424
 */


ulong FUN__text__00678424(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (DAT_00c5f810 == (code *)0x0) {
    return 0;
  }
  lVar1 = (*DAT_00c5f810)(param_1 + 7 + param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = param_1 + 7 + lVar1 & -param_1;
    *(long *)(uVar2 - 8) = lVar1;
  }
  return uVar2;
}


