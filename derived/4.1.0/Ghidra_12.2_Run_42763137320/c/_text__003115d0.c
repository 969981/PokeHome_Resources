/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003115d0; name: FUN_.text__003115d0
 */


void FUN__text__003115d0(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  
  param_3 = param_3 & 0xffff;
  if ((param_3 == 0x3e9) || (*(ushort *)(*(long *)(param_2 + 0x7ef98) + 0x62) <= param_3)) {
    *param_1 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + (ulong)param_3 * 8 + 0x7efa0);
    *param_1 = lVar1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00311614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      return;
    }
  }
  return;
}


