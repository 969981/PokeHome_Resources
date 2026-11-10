/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fd28; name: FUN_.text__0012fd28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0012fd28(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__00119418(*_DAT_0089f4e8);
  if (param_2 == 2) {
    return param_1 + 0x138;
  }
  if (param_2 == 0) {
    lVar1 = param_1 + 0x10;
  }
  return lVar1;
}


