/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da014; name: FUN_.text__004da014
 */


void FUN__text__004da014(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                        int param_5)

{
  if (param_5 - 5U < 0x20) {
                    /* WARNING: Could not emulate address calculation at 0x004da050 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__004da05c + (ulong)*(byte *)((ulong)(param_5 - 5U) + 0x73da9f) * 4))
              (*(undefined8 *)(param_3 + 0x1d0));
    return;
  }
  FUN__text__004787c4(param_1,param_2,param_3);
  return;
}


