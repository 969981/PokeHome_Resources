/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320780; name: FUN_.text__00320780
 */


void FUN__text__00320780(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  
  if (DAT_008ef050 - 1U < 6) {
                    /* WARNING: Could not emulate address calculation at 0x003207c0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__003207cc + (ulong)*(byte *)((ulong)(DAT_008ef050 - 1U) + 0x734bdd) * 4))
              ();
    return;
  }
  lVar1 = *(long *)(DAT_008e14b8 + 0x240);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN__text__0035d240(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00320864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


