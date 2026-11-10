/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037a1ac; name: FUN_.text__0037a1ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037a1ac(long param_1)

{
  undefined8 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = _DAT_0089f448;
  local_24 = 0;
  FUN__text__00371260(*_DAT_0089f448,&local_24);
  FUN__text__00374640();
  local_28 = 1;
  FUN__text__00371260(*puVar1,&local_28);
  FUN__text__00374640();
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


