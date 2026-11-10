/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ea444; name: FUN_.text__001ea444
 */


void FUN__text__001ea444(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN__text__001e736c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (0x464 < (uint)((param_2 & 0xffffffff) >> 4)) {
                    /* WARNING: Subroutine does not return */
    FUN__text__0011a180(0x717b65);
  }
  FUN__text__001e62b0(param_1,*(undefined4 *)(param_1 + 0x17c),
                      *(undefined4 *)(*(long *)(param_1 + 0x180) + (param_2 & 0xffffffff) * 4));
  FUN__text__001e6130(param_1);
  return;
}


