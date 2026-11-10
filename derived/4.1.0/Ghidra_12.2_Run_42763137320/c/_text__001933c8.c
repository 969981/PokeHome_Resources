/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001933c8; name: FUN_.text__001933c8
 */


undefined1 FUN__text__001933c8(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN__text__00325bc0();
  uVar1 = *(int *)(lVar2 + 0x2c) - 1;
  if (uVar1 < 10) {
    return *(undefined1 *)((long)(int)uVar1 + 0x725950);
  }
  return 0;
}


