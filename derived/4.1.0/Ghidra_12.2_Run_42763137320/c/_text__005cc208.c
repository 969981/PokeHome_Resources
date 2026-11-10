/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cc208; name: FUN_.text__005cc208
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__005cc208(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (((*_DAT_008a5920 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(_DAT_008a5920), puVar6 = _DAT_008a5928, puVar5 = _DAT_008a5340,
     iVar7 != 0)) {
    if (((*_DAT_008a5338 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(_DAT_008a5338), puVar4 = _DAT_0089fd50, iVar7 != 0)) {
      if (((*_DAT_0089fd48 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(_DAT_0089fd48), puVar3 = _DAT_0089fd20, iVar7 != 0)) {
        if (((*_DAT_0089fd18 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(_DAT_0089fd18), puVar2 = _DAT_0089f798, iVar7 != 0)) {
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
          *puVar3 = puVar2;
          __cxa_guard_release(_DAT_0089fd18);
        }
        *puVar4 = puVar3;
        __cxa_guard_release(_DAT_0089fd48);
      }
      *puVar5 = puVar4;
      __cxa_guard_release(_DAT_008a5338);
    }
    *puVar6 = puVar5;
    __cxa_guard_release(_DAT_008a5920);
  }
  return _DAT_008a5928;
}


