/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00681ffc; name: FUN_.text__00681ffc
 */


undefined8 FUN__text__00681ffc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 - 2U < 0x1a) {
                    /* WARNING: Could not emulate address calculation at 0x00682014 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00682020 + (ulong)*(ushort *)((param_2 - 2U) * 2 + 0x761958) * 4)
            )();
    return uVar1;
  }
  return 0xffffffff;
}


