/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00574808; name: FUN_.text__00574808
 */


undefined8 FUN__text__00574808(undefined8 param_1,short param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = 1;
    if ((uint)(int)param_2 < 0x6f) {
                    /* WARNING: Could not emulate address calculation at 0x00574838 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__00574844 +
                        (ulong)*(ushort *)((ulong)(uint)(int)param_2 * 2 + 0x73e9ec) * 4))(1);
      return uVar1;
    }
  }
  return uVar1;
}


