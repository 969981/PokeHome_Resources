/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00139b48; name: FUN_.text__00139b48
 */


undefined8 FUN__text__00139b48(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x00139b64 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00139b70 + (ulong)*(byte *)((ulong)param_2 + 0x721a08) * 4))();
    return uVar1;
  }
  return 0;
}


