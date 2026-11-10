/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e9e4; name: FUN_.text__0066e9e4
 */


undefined8 FUN__text__0066e9e4(long param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    if (param_3 == 0) {
      if (param_2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0066eac0 */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(&UNK__text__0066eacc + (ulong)*(byte *)((ulong)param_2 + 0x760c50) * 4))
                          ();
        return uVar1;
      }
    }
    else if (param_2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0066ea2c */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0066ea3c + (ulong)*(byte *)((ulong)param_2 + 0x760c46) * 4))();
      return uVar1;
    }
    uVar1 = 9;
  }
  return uVar1;
}


