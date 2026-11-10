/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013b640; name: FUN_.text__0013b640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0013b640(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)FUN__text__003c79c0();
  if (((*_DAT_0089f888 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(_DAT_0089f888), puVar3 = _DAT_0089f8a0, iVar1 != 0)) {
    if (((*_DAT_0089f898 & 1) == 0) && (iVar1 = __cxa_guard_acquire(_DAT_0089f898), iVar1 != 0)) {
      *puVar3 = 0;
      __cxa_guard_release(_DAT_0089f898);
    }
    *_DAT_0089f890 = puVar3;
    __cxa_guard_release(_DAT_0089f888);
  }
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (puVar3 != _DAT_0089f890) {
    do {
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != _DAT_0089f890 && puVar3 != (undefined8 *)0x0);
    if (puVar3 == (undefined8 *)0x0) {
      return (long *)0x0;
    }
  }
  return plVar2;
}


