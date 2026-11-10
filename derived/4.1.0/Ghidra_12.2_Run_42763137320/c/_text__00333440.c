/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00333440; name: FUN_.text__00333440
 */


bool FUN__text__00333440(void)

{
  long lVar1;
  
  lVar1 = FUN__text__00321ac0();
  if (*(int *)(lVar1 + 0x79fcc) == 10) {
    return true;
  }
  lVar1 = FUN__text__00321ac0();
  return *(int *)(lVar1 + 0x79fcc) == 0x14;
}


