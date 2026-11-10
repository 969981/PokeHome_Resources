/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006035fc; name: FUN_.text__006035fc
 */


/* WARNING: Removing unreachable block (ram,0x00603634) */
/* WARNING: Removing unreachable block (ram,0x00603640) */

undefined8 FUN__text__006035fc(byte param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00603628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&UNK__text__0060362c + (ulong)*(byte *)((ulong)param_1 + 0x759f14) * 4))(0);
  return uVar1;
}


