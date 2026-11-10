/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f5d8; name: FUN_.text__0028f5d8
 */


void FUN__text__0028f5d8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  FUN__text__00128ec0(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0028f610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x650))(lVar1 + 0x670);
  return;
}


