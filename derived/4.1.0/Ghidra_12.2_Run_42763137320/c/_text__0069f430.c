/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069f430; name: FUN_.text__0069f430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0069f430(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((*_DAT_008a6900 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(_DAT_008a6900), puVar2 = _DAT_0089f8a0, iVar1 != 0)) {
    if (((*_DAT_0089f898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(_DAT_0089f898), iVar1 != 0)) {
      *puVar2 = 0;
      __cxa_guard_release(_DAT_0089f898);
    }
    *_DAT_008a6908 = puVar2;
    __cxa_guard_release(_DAT_008a6900);
  }
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  if (puVar2 != _DAT_008a6908) {
    do {
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != _DAT_008a6908 && puVar2 != (undefined8 *)0x0);
    if (puVar2 == (undefined8 *)0x0) {
      return (long *)0x0;
    }
  }
  return param_1;
}


