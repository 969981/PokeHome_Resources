/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce540; name: FUN_.text__004ce540
 */


void FUN__text__004ce540(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN__text__004ce53c(lVar1);
    FUN__text__00400fc0(2,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


