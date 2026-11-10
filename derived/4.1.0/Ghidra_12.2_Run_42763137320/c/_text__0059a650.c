/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059a650; name: FUN_.text__0059a650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0059a650(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (((*_DAT_008a0010 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_008a0010), puVar4 = _DAT_008a0028, puVar3 = _DAT_008a0018,
     iVar6 != 0)) {
    if (((*_DAT_008a0020 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_008a0020), puVar5 = _DAT_008a0038, iVar6 != 0)) {
      if (((*_DAT_008a0030 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(_DAT_008a0030), puVar2 = _DAT_0089f798, iVar6 != 0)) {
        if (((*_DAT_0089f790 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(_DAT_0089f790), puVar1 = _DAT_0089f4a0, iVar6 != 0)) {
          if (((*_DAT_0089f498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(_DAT_0089f498), iVar6 != 0)) {
            *puVar1 = 0;
            __cxa_guard_release(_DAT_0089f498);
          }
          *puVar2 = puVar1;
          __cxa_guard_release(_DAT_0089f790);
        }
        *puVar5 = puVar2;
        __cxa_guard_release(_DAT_008a0030);
      }
      *puVar4 = puVar5;
      __cxa_guard_release(_DAT_008a0020);
    }
    *puVar3 = puVar4;
    __cxa_guard_release(_DAT_008a0010);
  }
  return _DAT_008a0018;
}


