/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068c250; name: FUN_.text__0068c250
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0068c250(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (((*_DAT_008a66c8 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(_DAT_008a66c8), puVar3 = _DAT_008a66e0, puVar2 = _DAT_008a66d0,
     iVar4 == 0)) {
    return _DAT_008a66d0;
  }
  if (((*_DAT_008a66d8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(_DAT_008a66d8), puVar1 = _DAT_008a6668, iVar4 != 0)) {
    if (((*_DAT_008a6660 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_008a6660), iVar4 != 0)) {
      *puVar1 = 0;
      __cxa_guard_release(_DAT_008a6660);
    }
    *puVar3 = puVar1;
    __cxa_guard_release(_DAT_008a66d8);
  }
  *puVar2 = puVar3;
  __cxa_guard_release(_DAT_008a66c8);
  return _DAT_008a66d0;
}


