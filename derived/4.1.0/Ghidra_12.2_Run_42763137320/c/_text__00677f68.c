/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677f68; name: FUN_.text__00677f68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00677f68(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN__text__00677970(0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00677f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(_DAT_008b4668 + 0x20))();
    return uVar2;
  }
  return 1;
}


