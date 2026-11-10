/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00206710; name: FUN_.text__00206710
 */


undefined2 FUN__text__00206710(int param_1,uint param_2)

{
  ulong uVar1;
  
  if (param_2 < 899) {
    uVar1 = (ulong)param_2;
    if (param_1 == 2) {
      return *(undefined2 *)(uVar1 * 8 + 0x7272bc);
    }
    if (param_1 == 1) {
      return *(undefined2 *)(uVar1 * 8 + 0x7272ba);
    }
    if (param_1 == 0) {
      return *(undefined2 *)(uVar1 * 8 + 0x7272b8);
    }
  }
  return 0;
}


