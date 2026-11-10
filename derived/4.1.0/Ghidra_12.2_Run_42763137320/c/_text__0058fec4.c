/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fec4; name: FUN_.text__0058fec4
 */


void FUN__text__0058fec4(long *param_1)

{
  FUN__text__00585f10(param_1 + 0xd);
  (**(code **)(*param_1 + 0x18))(param_1);
  if (param_1[0x1f] != 0) {
    FUN__text__00400fc0(5);
    param_1[0x1f] = 0;
  }
  if (param_1[0x23] != 0) {
    FUN__text__00400fc0(5);
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN__text__004dd8a0(param_1);
  return;
}


