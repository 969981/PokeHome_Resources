/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c6d0c; name: FUN_.text__006c6d0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__006c6d0c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (((*_DAT_0089fb48 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(_DAT_0089fb48), puVar2 = _DAT_0089fb50, puVar1 = _DAT_0089f8a0,
     iVar3 == 0)) {
    return _DAT_0089fb50;
  }
  if (((*_DAT_0089f898 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_0089f898), iVar3 != 0)) {
    *puVar1 = 0;
    __cxa_guard_release(_DAT_0089f898);
  }
  *puVar2 = puVar1;
  __cxa_guard_release(_DAT_0089fb48);
  return _DAT_0089fb50;
}


