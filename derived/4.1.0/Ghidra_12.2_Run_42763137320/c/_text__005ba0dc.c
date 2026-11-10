/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ba0dc; name: FUN_.text__005ba0dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__005ba0dc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (((*_DAT_008a5830 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_008a5830), puVar5 = _DAT_008a5838, puVar4 = _DAT_008a00e0,
     iVar6 != 0)) {
    if (((*_DAT_008a00d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_008a00d8), puVar3 = _DAT_0089f8c0, iVar6 != 0)) {
      if (((*_DAT_0089f8b8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(_DAT_0089f8b8), puVar2 = _DAT_0089f798, iVar6 != 0)) {
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
        __cxa_guard_release(_DAT_0089f8b8);
      }
      *puVar4 = puVar3;
      __cxa_guard_release(_DAT_008a00d8);
    }
    *puVar5 = puVar4;
    __cxa_guard_release(_DAT_008a5830);
  }
  return _DAT_008a5838;
}


