/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d3aa0; name: FUN_.text__006d3aa0
 */


undefined8 FUN__text__006d3aa0(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar3 = 0;
    do {
      uVar1 = **(uint **)(*(long *)(param_2 + 0x18) + uVar3 * 8);
      if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x006d3b28 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__006d3b34 + (ulong)*(byte *)((ulong)uVar1 + 0x7666d1) * 4))();
        return uVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0x10));
  }
  return 0;
}


