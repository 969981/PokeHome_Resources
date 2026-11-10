/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057ec4c; name: FUN_.text__0057ec4c
 */


undefined8 FUN__text__0057ec4c(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  if ((uint)(int)param_2 < 0x11) {
                    /* WARNING: Could not emulate address calculation at 0x0057ec74 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0057ec88 +
                      (ulong)*(byte *)((ulong)(uint)(int)param_2 + 0x745134) * 4))();
    return uVar1;
  }
  return 0x1f;
}


