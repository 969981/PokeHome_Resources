/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ea3ac; name: FUN_.text__001ea3ac
 */


void FUN__text__001ea3ac(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x180);
  if (param_2 < *(uint *)(lVar1 + 0x23284)) {
    if (param_2 >> 4 < 0x465) {
      FUN__text__001e62c0(param_1,*(undefined4 *)(param_1 + 0x17c),
                          *(undefined4 *)(lVar1 + (ulong)param_2 * 4));
      FUN__text__001e61f0(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 1;
    if (param_2 >> 4 < 0x465) {
      *(int *)(param_1 + 0x9c) = *(int *)(lVar1 + (ulong)param_2 * 4) + 0x30;
      FUN__text__001e67f0(param_1,*(undefined4 *)(param_1 + 0x17c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__0011a180(0x717b65);
}


