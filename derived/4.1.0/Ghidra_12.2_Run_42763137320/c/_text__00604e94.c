/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00604e94; name: FUN_.text__00604e94
 */


void FUN__text__00604e94(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  FUN__text__00622f2c();
  uVar1 = (param_2 & 0xff) - 1;
  if (uVar1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00604ed0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00604ee0 + (ulong)*(byte *)((ulong)uVar1 + 0x75a414) * 4))();
    return;
  }
  return;
}


