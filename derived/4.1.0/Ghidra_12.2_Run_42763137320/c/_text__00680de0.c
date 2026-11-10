/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680de0; name: FUN_.text__00680de0
 */


undefined8 FUN__text__00680de0(long param_1,ulong param_2)

{
  if (1 < *(uint *)(param_1 + 0xe4)) {
    return 0xfffffdf9;
  }
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(ulong *)(param_1 + 0xd0) = param_2;
  }
  *(ulong *)(param_1 + 200) = param_2;
  *(ulong *)(param_1 + 0x30) = param_2;
  FUN__text__00680cfc(param_1,0);
  return 0;
}


