/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf4fc; name: FUN_.text__003cf4fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__003cf4fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (((*_DAT_008a3700 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(_DAT_008a3700), puVar2 = _DAT_008a3718, puVar1 = _DAT_008a3708,
     iVar3 == 0)) {
    return _DAT_008a3708;
  }
  if (((*_DAT_008a3710 & 1) == 0) && (iVar3 = __cxa_guard_acquire(_DAT_008a3710), iVar3 != 0)) {
    *puVar2 = 0;
    __cxa_guard_release(_DAT_008a3710);
  }
  *puVar1 = puVar2;
  __cxa_guard_release(_DAT_008a3700);
  return _DAT_008a3708;
}


