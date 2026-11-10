/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4298; name: FUN_.text__005f4298
 */


undefined8 FUN__text__005f4298(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  if (*(uint *)(param_1 + 0xa8) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x005f42c0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__005f42d8 +
                      (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xa8) + 0x757d7c) * 4))(4);
    return uVar1;
  }
  return 1;
}


