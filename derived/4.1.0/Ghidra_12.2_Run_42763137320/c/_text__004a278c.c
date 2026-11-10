/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a278c; name: FUN_.text__004a278c
 */


undefined8 FUN__text__004a278c(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x004a27c4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__004a27d4 + (ulong)*(byte *)((ulong)*param_2 + 0x73d8e8) * 4))();
    return uVar1;
  }
  return 1;
}


