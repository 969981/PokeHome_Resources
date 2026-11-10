/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016ad94; name: FUN_.text__0016ad94
 */


void FUN__text__0016ad94(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff) - 1;
  if (uVar1 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0016adb4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0016adc0 + (ulong)*(byte *)((ulong)uVar1 + 0x7252e5) * 4))(2);
    return;
  }
  return;
}


