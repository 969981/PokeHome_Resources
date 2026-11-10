/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068e0ec; name: FUN_.text__0068e0ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0068e0ec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (((*_DAT_008a6708 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(_DAT_008a6708), puVar2 = _DAT_008a6710, puVar1 = _DAT_008a6668,
     iVar3 == 0)) {
    return _DAT_008a6710;
  }
  if (((*_DAT_008a6660 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a6660), iVar3 != 0)) {
    *puVar1 = 0;
    __cxa_guard_release(_DAT_008a6660);
  }
  *puVar2 = puVar1;
  __cxa_guard_release(_DAT_008a6708);
  return _DAT_008a6710;
}


