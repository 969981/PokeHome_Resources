/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677a40; name: FUN_.text__00677a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677a40(void)

{
  undefined8 uVar1;
  
  if ((DAT_00c5f736 & 1) == 0) {
    DAT_00c5f736 = 1;
                    /* WARNING: Could not recover jumptable at 0x00677a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*_DAT_008a6598 + 0x20))();
    return uVar1;
  }
  return 1;
}


