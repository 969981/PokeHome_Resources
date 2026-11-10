/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020beec; name: FUN_.text__0020beec
 */


long FUN__text__0020beec(long param_1,int param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)(param_3 + *(int *)(param_1 + 0x74) * param_2);
  if ((ulong)((*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2) * -0xf0f0f0f0f0f0f0f) <=
      uVar1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  return *(long *)(param_1 + 0x78) + uVar1 * 0x44;
}


