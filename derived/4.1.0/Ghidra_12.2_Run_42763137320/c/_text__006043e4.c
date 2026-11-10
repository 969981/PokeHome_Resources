/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006043e4; name: FUN_.text__006043e4
 */


/* WARNING: Removing unreachable block (ram,0x0060441c) */
/* WARNING: Removing unreachable block (ram,0x00604428) */

undefined8 FUN__text__006043e4(byte param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00604410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK__text__00604414 + (ulong)*(byte *)((ulong)param_1 + 0x75a314) * 4))(0);
  return uVar1;
}


