/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00449940; name: FUN_.text__00449940
 */


bool FUN__text__00449940(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    return false;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)param_2 / uVar1;
  }
  for (plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
      (plVar3 != (long *)0x0 && (plVar3[1] != param_2)); plVar3 = (long *)*plVar3) {
  }
  return plVar3 != (long *)0x0;
}


