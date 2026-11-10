/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068e1ac; name: FUN_.text__0068e1ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0068e1ac(void)

{
  int iVar1;
  
  if (((*_DAT_008a6690 & 1) == 0) && (iVar1 = __cxa_guard_acquire(_DAT_008a6690), iVar1 != 0)) {
    *_DAT_008a6698 = 0;
    __cxa_guard_release(_DAT_008a6690);
    return _DAT_008a6698;
  }
  return _DAT_008a6698;
}


