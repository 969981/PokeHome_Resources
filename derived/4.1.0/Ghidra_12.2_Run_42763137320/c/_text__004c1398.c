/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1398; name: FUN_.text__004c1398
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__004c1398(void)

{
  long lVar1;
  
  if (DAT_00aeab68 != 0) {
    return DAT_00aeab68;
  }
  lVar1 = FUN__text__00400f80(0,0x38);
  if (lVar1 != 0) {
    FUN__text__004c1528();
  }
  if (DAT_00aeab68 == 0) {
    return 0;
  }
  FUN__text__0040b5a0(_DAT_008a4458,0x10,0,8,0,0x322);
  return DAT_00aeab68;
}


