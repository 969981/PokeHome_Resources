/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004145d8; name: FUN_.text__004145d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004145d8(void)

{
  int iVar1;
  ulong uVar2;
  
  FUN__text__0041ab84();
  FUN__text__0041ef10();
  uVar2 = FUN__text__00400f10();
  if (((((uVar2 & 1) != 0) && (DAT_00ae8858 != 0)) && (iVar1 = FUN__text__00405d1c(2), iVar1 == 1))
     && ((iVar1 = FUN__text__00425300(DAT_00ae9b30), iVar1 == 1 &&
         (iVar1 = FUN__text__00472e10(), iVar1 == 1)))) {
    FUN__text__00481b30();
    iVar1 = FUN__text__00408f10();
    if (iVar1 == 1) {
      FUN__text__004de7e8(_DAT_008a4d70,0x40,0x40);
      return;
    }
  }
  return;
}


