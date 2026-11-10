/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016b360; name: FUN_.text__0016b360
 */


void FUN__text__0016b360(void)

{
  if (DAT_008e1d70 != (undefined8 *)0x0) {
    nn::ngc::ProfanityFilter::Finalize();
    (**(code **)*DAT_008e1d70)();
    (**(code **)(*DAT_008e1d60 + 0x18))(DAT_008e1d60,DAT_008e1d70,0x30,8);
    DAT_008e1d70 = (undefined8 *)0x0;
  }
  if (DAT_008e1d68 != 0) {
    (**(code **)(*DAT_008e1d60 + 0x18))(DAT_008e1d60,DAT_008e1d68,0x20000,0x1000);
    DAT_008e1d68 = 0;
  }
  DAT_008e1d60 = (long *)0x0;
  return;
}


