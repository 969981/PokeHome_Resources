/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066e580; name: FUN_.text__0066e580
 */


undefined8 FUN__text__0066e580(long param_1,uint param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 2;
  }
  else {
    *param_3 = 0;
    if (param_2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0066e5cc */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&UNK__text__0066e5f0 + (ulong)*(byte *)((ulong)param_2 + 0x760c3c) * 4))
                        (param_4,10);
      return uVar1;
    }
    uVar1 = 9;
  }
  return uVar1;
}


