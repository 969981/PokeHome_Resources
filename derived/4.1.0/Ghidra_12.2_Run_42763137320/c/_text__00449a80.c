/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00449a80; name: FUN_.text__00449a80
 */


undefined8 FUN__text__00449a80(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(DAT_00ae9a50 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    plVar3 = (long *)(*(long *)(DAT_00ae9a50 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      if (plVar3[1] == param_2) {
        return plVar3[2];
      }
    }
  }
  return 0;
}


