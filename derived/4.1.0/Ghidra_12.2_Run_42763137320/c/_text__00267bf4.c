/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00267bf4; name: FUN_.text__00267bf4
 */


void FUN__text__00267bf4(void)

{
  long lVar1;
  
  lVar1 = *(long *)(DAT_008e15a0 + 0x80);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__0011265c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00267c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


