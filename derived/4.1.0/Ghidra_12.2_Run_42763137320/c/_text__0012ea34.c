/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012ea34; name: FUN_.text__0012ea34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__0012ea34(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (((*_DAT_0089f8e0 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(_DAT_0089f8e0), puVar4 = _DAT_0089f8f8, puVar3 = _DAT_0089f8e8,
     iVar7 != 0)) {
    if (((*_DAT_0089f8f0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(_DAT_0089f8f0), puVar5 = _DAT_0089f908, iVar7 != 0)) {
      if (((*_DAT_0089f900 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(_DAT_0089f900), puVar6 = _DAT_0089f918, iVar7 != 0)) {
        if (((*_DAT_0089f910 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(_DAT_0089f910), puVar2 = _DAT_0089f798, iVar7 != 0)) {
          if (((*_DAT_0089f790 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(_DAT_0089f790), puVar1 = _DAT_0089f4a0, iVar7 != 0)) {
            if (((*_DAT_0089f498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(_DAT_0089f498), iVar7 != 0)) {
              *puVar1 = 0;
              __cxa_guard_release(_DAT_0089f498);
            }
            *puVar2 = puVar1;
            __cxa_guard_release(_DAT_0089f790);
          }
          *puVar6 = puVar2;
          __cxa_guard_release(_DAT_0089f910);
        }
        *puVar5 = puVar6;
        __cxa_guard_release(_DAT_0089f900);
      }
      *puVar4 = puVar5;
      __cxa_guard_release(_DAT_0089f8f0);
    }
    *puVar3 = puVar4;
    __cxa_guard_release(_DAT_0089f8e0);
  }
  return _DAT_0089f8e8;
}


