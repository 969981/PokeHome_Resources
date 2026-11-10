/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e98a0; name: FUN_.text__003e98a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003e98a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(long **)(*(long *)(param_2 + 0xe8) + 0x18);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,param_3,1);
  puVar1 = _DAT_008a52c0;
  if (plVar3 != (long *)0x0) {
    if ((*_DAT_008a52b8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(_DAT_008a52b8);
      puVar4 = _DAT_0089f8a0;
      if (iVar2 != 0) {
        if (((*_DAT_0089f898 & 1) == 0) && (iVar2 = __cxa_guard_acquire(_DAT_0089f898), iVar2 != 0))
        {
          *puVar4 = 0;
          __cxa_guard_release(_DAT_0089f898);
        }
        *puVar1 = puVar4;
        __cxa_guard_release(_DAT_008a52b8);
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (puVar4 != puVar1) {
      do {
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != puVar1 && puVar4 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) {
        plVar3 = (long *)0x0;
      }
    }
  }
  return plVar3;
}


