/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001307f8; name: FUN_.text__001307f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__001307f8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (((*_DAT_0089fac8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_0089fac8), puVar5 = _DAT_0089fad0, puVar4 = _DAT_0089fac0,
     iVar6 != 0)) {
    if (((*_DAT_0089fab8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_0089fab8), puVar3 = _DAT_0089fa20, iVar6 != 0)) {
      if (((*_DAT_0089fa18 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(_DAT_0089fa18), puVar2 = _DAT_0089f798, iVar6 != 0)) {
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
        *puVar3 = puVar2;
        __cxa_guard_release(_DAT_0089fa18);
      }
      *puVar4 = puVar3;
      __cxa_guard_release(_DAT_0089fab8);
    }
    *puVar5 = puVar4;
    __cxa_guard_release(_DAT_0089fac8);
  }
  return _DAT_0089fad0;
}


