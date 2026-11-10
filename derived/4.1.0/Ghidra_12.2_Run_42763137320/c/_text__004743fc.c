/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004743fc; name: FUN_.text__004743fc
 */


void FUN__text__004743fc(long param_1,uint *param_2)

{
  if ((*(long *)(param_2 + 2) == 0 || *(long *)(param_2 + 2) == *(long *)(param_1 + 0x20)) &&
     (((param_2[4] == 0 || (param_2[4] == *(uint *)(param_1 + 0x280))) && (*param_2 < 6)))) {
                    /* WARNING: Could not emulate address calculation at 0x00474440 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((ulong)*param_2 + 0x73b518) * 4 + 0x474424))();
    return;
  }
  return;
}


