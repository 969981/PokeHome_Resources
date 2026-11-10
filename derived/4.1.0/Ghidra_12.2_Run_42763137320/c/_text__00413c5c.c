/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413c5c; name: FUN_.text__00413c5c
 */


void FUN__text__00413c5c(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  FUN__text__00413460(lVar1 + (param_2 & 0xffffffff) * 8,*(undefined8 *)(lVar1 + (ulong)param_3 * 8)
                     );
  return;
}


