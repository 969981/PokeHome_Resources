/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e40ec; name: FUN_.text__005e40ec
 */


void FUN__text__005e40ec(void)

{
  long lVar1;
  
  lVar1 = DAT_00b112d0;
  DAT_00b112d0 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN__text__005e3c7c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x005e4130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00b112d8 + 0x18))(DAT_00b112d8,lVar1,DAT_00b112e0,DAT_00b112e8);
  return;
}


