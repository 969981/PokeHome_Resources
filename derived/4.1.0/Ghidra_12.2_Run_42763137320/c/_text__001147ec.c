/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001147ec; name: FUN_.text__001147ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__001147ec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (((*_DAT_0089f7f8 & 1) != 0) ||
     (iVar5 = __cxa_guard_acquire(_DAT_0089f7f8), puVar4 = _DAT_0089f800, puVar2 = _DAT_0089f788,
     iVar5 == 0)) {
    return _DAT_0089f800;
  }
  if (((*_DAT_0089f780 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(_DAT_0089f780), puVar3 = _DAT_0089f798, iVar5 != 0)) {
    if (((*_DAT_0089f790 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(_DAT_0089f790), puVar1 = _DAT_0089f4a0, iVar5 != 0)) {
      if (((*_DAT_0089f498 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f498), iVar5 != 0)) {
        *puVar1 = 0;
        __cxa_guard_release(_DAT_0089f498);
      }
      *puVar3 = puVar1;
      __cxa_guard_release(_DAT_0089f790);
    }
    *puVar2 = puVar3;
    __cxa_guard_release(_DAT_0089f780);
  }
  *puVar4 = puVar2;
  __cxa_guard_release(_DAT_0089f7f8);
  return _DAT_0089f800;
}


