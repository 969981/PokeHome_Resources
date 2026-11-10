/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002170f4; name: FUN_.text__002170f4
 */


undefined8
FUN__text__002170f4(long param_1,uint param_2,void *param_3,uint param_4,undefined4 *param_5)

{
  if (param_5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (((param_2 < 0xe) && (param_3 != (void *)0x0)) && (0x95f < param_4)) {
    memcpy(param_3,(void *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 0x960 + 4),0x960);
    *param_5 = 0x960;
    return 1;
  }
  return 0;
}


