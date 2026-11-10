/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8950; name: FUN_.text__005e8950
 */


bool FUN__text__005e8950(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = tpidr_el0;
  lVar2 = 0;
  if ((uVar1 & 0xffffffffffffe000) != 0) {
    lVar2 = *(long *)((uVar1 & 0xffffffffffffe000) + 0xa8);
  }
  return lVar2 == param_1;
}


