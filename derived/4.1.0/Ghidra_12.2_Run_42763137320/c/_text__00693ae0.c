/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00693ae0; name: FUN_.text__00693ae0
 */


undefined8 FUN__text__00693ae0(uint param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffff00) == 0x2000) {
    if (param_1 - 0x200b < 0x56) {
                    /* WARNING: Could not emulate address calculation at 0x00693b08 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__00693b18 +
                        (ulong)*(byte *)((ulong)(param_1 - 0x200b) + 0x765e68) * 4))(0);
      return uVar1;
    }
    if (param_1 - 0x2066 < 4) {
      return 0;
    }
  }
  return 1;
}


