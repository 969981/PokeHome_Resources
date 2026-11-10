/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001020a4; name: FUN_.text__001020a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__001020a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (((*_DAT_0089f458 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_0089f458), puVar2 = _DAT_0089f470, puVar1 = _DAT_0089f460,
     iVar6 != 0)) {
    if (((*_DAT_0089f468 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(_DAT_0089f468), puVar3 = _DAT_0089f480, iVar6 != 0)) {
      if (((*_DAT_0089f478 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(_DAT_0089f478), puVar4 = _DAT_0089f490, iVar6 != 0)) {
        if (((*_DAT_0089f488 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(_DAT_0089f488), puVar5 = _DAT_0089f4a0, iVar6 != 0)) {
          if (((*_DAT_0089f498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(_DAT_0089f498), iVar6 != 0)) {
            *puVar5 = 0;
            __cxa_guard_release(_DAT_0089f498);
          }
          *puVar4 = puVar5;
          __cxa_guard_release(_DAT_0089f488);
        }
        *puVar3 = puVar4;
        __cxa_guard_release(_DAT_0089f478);
      }
      *puVar2 = puVar3;
      __cxa_guard_release(_DAT_0089f468);
    }
    *puVar1 = puVar2;
    __cxa_guard_release(_DAT_0089f458);
  }
  return _DAT_0089f460;
}


