/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063b5b0; name: FUN_.text__0063b5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0063b5b0(void)

{
  long *plVar1;
  
  plVar1 = _DAT_008a6310;
  if (_DAT_008a6310[7] != 0) {
    (**(code **)(*(long *)(_DAT_008a6310[7] + 0x48) + 0x18))();
    plVar1[7] = 0;
  }
  if (plVar1[6] != 0) {
    (**(code **)(*(long *)(plVar1[6] + 0x48) + 0x18))();
    plVar1[6] = 0;
  }
  if (plVar1[5] != 0) {
    (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
    plVar1[5] = 0;
  }
  if (plVar1[4] != 0) {
    (**(code **)(*(long *)(plVar1[4] + 0x48) + 0x18))();
    plVar1[4] = 0;
  }
  if (plVar1[3] != 0) {
    (**(code **)(*(long *)(plVar1[3] + 0x48) + 0x18))();
    plVar1[3] = 0;
  }
  if (plVar1[2] != 0) {
    (**(code **)(*(long *)(plVar1[2] + 0x48) + 0x18))();
    plVar1[2] = 0;
  }
  if (plVar1[1] != 0) {
    (**(code **)(*(long *)(plVar1[1] + 0x48) + 0x18))();
    plVar1[1] = 0;
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  return;
}


