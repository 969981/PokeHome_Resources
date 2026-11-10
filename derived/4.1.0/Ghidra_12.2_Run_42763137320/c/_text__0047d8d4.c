/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d8d4; name: FUN_.text__0047d8d4
 */


/* WARNING: Removing unreachable block (ram,0x0047d918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0047d8d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = FUN__text__00447b30(*_DAT_008a45e0,param_1);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = 0;
  if (*(long *)(lVar2 + 0x20) != 0) {
    lVar1 = *(long *)(lVar2 + 0x20) + 0x3c;
  }
  return lVar1;
}


