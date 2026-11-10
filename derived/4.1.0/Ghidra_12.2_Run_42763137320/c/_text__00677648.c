/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677648; name: FUN_.text__00677648
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677648(void)

{
  if ((DAT_00c5f6e5 & 1) == 0) {
    FUN__text__00677db0(&DAT_00c5f6e6,0x50);
    _DAT_008b4610 = &DAT_00c5f6e6;
    _DAT_008b4608 =
         _DAT_008b4608 & 0xffc00000 |
         _DAT_008b4608 & 0x1fffff | (*(uint *)(_DAT_008b4668 + 0x10) >> 4 & 1) << 0x15;
    _DAT_008b4620 = FUN__text__006891e0();
    DAT_00c5f6e5 = 1;
  }
  return 0x8b45e8;
}


