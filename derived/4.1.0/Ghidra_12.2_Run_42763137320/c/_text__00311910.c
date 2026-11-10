/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311910; name: FUN_.text__00311910
 */


void FUN__text__00311910(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = param_1 + 0x54;
  do {
    FUN__text__005fc07c(lVar1,*(undefined8 *)(param_1 + 0x7efa0 + lVar2 * 8));
    lVar2 = lVar2 + 1;
    lVar1 = lVar1 + 0x104;
  } while (lVar2 != 1000);
  return;
}


