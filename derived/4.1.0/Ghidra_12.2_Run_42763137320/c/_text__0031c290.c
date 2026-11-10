/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031c290; name: FUN_.text__0031c290
 */


undefined8 FUN__text__0031c290(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 & 0x7f) < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0031c2cc */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0031c2dc +
                      (ulong)*(byte *)((ulong)(*param_2 & 0x7f) + 0x734858) * 4))();
    return uVar1;
  }
  FUN__text__003dce14(param_1,0xe);
  return param_1;
}


