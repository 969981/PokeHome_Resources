/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c3250; name: FUN_.text__001c3250
 */


void FUN__text__001c3250(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(**(long **)(param_1 + 0x6b8) + 0x10))();
  (**(code **)(**(long **)(param_1 + 0x698) + 0x10))(*(long **)(param_1 + 0x698),param_2,param_3);
  iVar1 = *(int *)(*(long *)(param_1 + 0x698) + 0x4c0);
  *(undefined4 *)(*(long *)(param_1 + 0x698) + 0x4c0) = 0;
  uVar2 = iVar1 - 1;
  if (uVar2 < 0x12) {
                    /* WARNING: Could not emulate address calculation at 0x001c32b8 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001c32c4 + (ulong)*(byte *)((ulong)uVar2 + 0x725e46) * 4))();
    return;
  }
  FUN__text__0019ef34(*(undefined8 *)(param_1 + 0x6f8),param_2,param_3);
  FUN__text__001c340c(param_1);
  return;
}


