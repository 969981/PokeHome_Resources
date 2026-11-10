/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00588dc0; name: FUN_.text__00588dc0
 */


undefined8 FUN__text__00588dc0(void)

{
  undefined8 uVar1;
  long in_x5;
  
  if (*(uint *)(in_x5 + 0x24) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00588dd8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK__text__00588de4 +
                      (ulong)*(byte *)((ulong)*(uint *)(in_x5 + 0x24) + 0x745574) * 4))();
    return uVar1;
  }
  return 0;
}


