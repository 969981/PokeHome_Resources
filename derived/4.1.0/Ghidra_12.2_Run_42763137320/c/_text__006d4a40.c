/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d4a40; name: FUN_.text__006d4a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__006d4a40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (((*_DAT_008a69f8 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(_DAT_008a69f8), puVar2 = _DAT_008a6a00, puVar1 = _DAT_008a68b0,
     iVar3 == 0)) {
    return _DAT_008a6a00;
  }
  if (((*_DAT_008a68a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a68a8), iVar3 != 0)) {
    *puVar1 = 0;
    __cxa_guard_release(_DAT_008a68a8);
  }
  *puVar2 = puVar1;
  __cxa_guard_release(_DAT_008a69f8);
  return _DAT_008a6a00;
}


