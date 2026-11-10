/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e8e18; name: FUN_.text__005e8e18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005e8e18(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((*_DAT_008a5b58 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(_DAT_008a5b58), uVar1 = _DAT_008a5b60, iVar2 != 0)) {
    FUN__text__005e9090(_DAT_008a5b60);
    FUN__text__001001d0(_DAT_008a5b68,uVar1,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_008a5b58);
    return _DAT_008a5b60;
  }
  return _DAT_008a5b60;
}


