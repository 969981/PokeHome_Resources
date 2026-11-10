/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144014; name: FUN_.text__00144014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00144014(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (((DAT_008e1ae0 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(&DAT_008e1ae0), puVar2 = _DAT_0089f850, iVar4 == 0)) {
    return &DAT_008e1ad8;
  }
  if (((*_DAT_0089f848 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(_DAT_0089f848), puVar3 = _DAT_0089f860, iVar4 != 0)) {
    if (((*_DAT_0089f858 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(_DAT_0089f858), puVar1 = _DAT_0089f4a0, iVar4 != 0)) {
      if (((*_DAT_0089f498 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_0089f498), iVar4 != 0)) {
        *puVar1 = 0;
        __cxa_guard_release(_DAT_0089f498);
      }
      *puVar3 = puVar1;
      __cxa_guard_release(_DAT_0089f858);
    }
    *puVar2 = puVar3;
    __cxa_guard_release(_DAT_0089f848);
  }
  DAT_008e1ad8 = puVar2;
  __cxa_guard_release(&DAT_008e1ae0);
  return &DAT_008e1ad8;
}


