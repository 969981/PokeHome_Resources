/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5804; name: FUN_.text__005f5804
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__005f5804(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (((*_DAT_008a5cd0 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(_DAT_008a5cd0), puVar3 = _DAT_008a5cd8, puVar1 = _DAT_0089f490,
     iVar4 == 0)) {
    return _DAT_008a5cd8;
  }
  if (((*_DAT_0089f488 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(_DAT_0089f488), puVar2 = _DAT_0089f4a0, iVar4 != 0)) {
    if (((*_DAT_0089f498 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_0089f498), iVar4 != 0)) {
      *puVar2 = 0;
      __cxa_guard_release(_DAT_0089f498);
    }
    *puVar1 = puVar2;
    __cxa_guard_release(_DAT_0089f488);
  }
  *puVar3 = puVar1;
  __cxa_guard_release(_DAT_008a5cd0);
  return _DAT_008a5cd8;
}


