/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a3d7c; name: FUN_.text__003a3d7c
 */


ulong FUN__text__003a3d7c(long param_1)

{
  ulong uVar1;
  
  if (*(uint *)(param_1 + 0xa0) < 0x13) {
                    /* WARNING: Could not emulate address calculation at 0x003a3da8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__003a3db8 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xa0) + 0x73a76a) * 4))();
    return uVar1;
  }
  return (ulong)(*(char *)(param_1 + 0x81) == '\0');
}


