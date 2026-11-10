/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d6888; name: FUN_.text__001d6888
 */


void FUN__text__001d6888(long param_1)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(**(long **)(param_1 + 0x690) + 0x10))();
  iVar1 = *(int *)(*(long *)(param_1 + 0x690) + 0x6dc);
  *(undefined4 *)(*(long *)(param_1 + 0x690) + 0x6dc) = 0;
  uVar2 = iVar1 - 1;
  if (uVar2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x001d68cc */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001d68d8 + (ulong)*(byte *)((ulong)uVar2 + 0x725ef0) * 4))();
    return;
  }
  return;
}


