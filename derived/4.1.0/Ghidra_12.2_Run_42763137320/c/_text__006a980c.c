/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a980c; name: FUN_.text__006a980c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__006a980c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (((*_DAT_008a6830 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(_DAT_008a6830), puVar3 = _DAT_008a6838, puVar2 = _DAT_008a67d8,
     iVar4 == 0)) {
    return _DAT_008a6838;
  }
  if (((*_DAT_008a67d0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(_DAT_008a67d0), puVar1 = _DAT_008a67c8, iVar4 != 0)) {
    if (((*_DAT_008a67c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_008a67c0), iVar4 != 0)) {
      *puVar1 = 0;
      __cxa_guard_release(_DAT_008a67c0);
    }
    *puVar2 = puVar1;
    __cxa_guard_release(_DAT_008a67d0);
  }
  *puVar3 = puVar2;
  __cxa_guard_release(_DAT_008a6830);
  return _DAT_008a6838;
}


