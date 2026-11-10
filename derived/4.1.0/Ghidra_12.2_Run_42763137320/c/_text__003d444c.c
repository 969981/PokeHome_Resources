/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d444c; name: FUN_.text__003d444c
 */


undefined8 FUN__text__003d444c(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    return 0;
  }
  if (*(uint *)(param_1 + 0xb4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x003d4484 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__003d4490 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xb4) + 0x73a942) * 4))();
    return uVar1;
  }
  return 0;
}


