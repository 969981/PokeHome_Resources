/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d862c; name: FUN_.text__005d862c
 */


ulong FUN__text__005d862c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x100) + (*(long *)(param_1 + 0x108) + -1) * 8) +
                   0x68);
  if (uVar1 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x005d8674 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__005d8680 + (ulong)*(byte *)((ulong)uVar1 + 0x757d30) * 4))();
    return uVar2;
  }
  return (ulong)*(uint *)(param_1 + 100);
}


