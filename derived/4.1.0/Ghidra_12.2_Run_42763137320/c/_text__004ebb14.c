/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ebb14; name: FUN_.text__004ebb14
 */


void FUN__text__004ebb14(undefined8 param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = CONCAT44(param_2,param_2 + -0x1000000);
  if ((uint)(uVar1 >> 0x18) < 8) {
                    /* WARNING: Could not recover jumptable at 0x004ebb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__004ebb68 + (ulong)*(byte *)((uVar1 >> 0x18 & 0xffffffff) + 0x73e325) * 4)
    )();
    return;
  }
  return;
}


