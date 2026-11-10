/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00156750; name: FUN_.text__00156750
 */


undefined8 FUN__text__00156750(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00156768 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__0015677c + (ulong)*(byte *)((ulong)param_3 + 0x724d74) * 4))
                      (param_1,1);
    return uVar1;
  }
  return 0;
}


