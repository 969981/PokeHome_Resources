/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fd7c; name: FUN_.text__0012fd7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0012fd7c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  lVar2 = FUN__text__00119418(*_DAT_0089f4e8);
  if (iVar1 == 2) {
    return param_1 + 0x138;
  }
  if (iVar1 == 0) {
    lVar2 = param_1 + 0x10;
  }
  return lVar2;
}


