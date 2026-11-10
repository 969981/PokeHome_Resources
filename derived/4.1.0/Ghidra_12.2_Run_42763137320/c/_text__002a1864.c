/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a1864; name: FUN_.text__002a1864
 */


undefined8 FUN__text__002a1864(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x25;
  if (param_1 < 0x25) {
    return 0;
  }
  if (0xe < uVar1) {
    uVar1 = 0xf;
  }
  return *(undefined8 *)((ulong)uVar1 * 8 + 0x732828);
}


