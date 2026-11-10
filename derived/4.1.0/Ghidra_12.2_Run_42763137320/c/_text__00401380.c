/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401380; name: FUN_.text__00401380
 */


void FUN__text__00401380(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x18) != -1) {
    FUN__text__00403ce0(0);
  }
  *(long *)(lVar1 + 0x18) = 0;
  return;
}


