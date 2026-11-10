/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006300e0; name: FUN_.text__006300e0
 */


undefined1 FUN__text__006300e0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x2a;
  if ((uVar1 < 0xc) && ((0xfefU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined1 *)(*(long *)((long)(int)uVar1 * 8 + 0x75a768) * 8 + 0x75a710);
  }
  return 0;
}


