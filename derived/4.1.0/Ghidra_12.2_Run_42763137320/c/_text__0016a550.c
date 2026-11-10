/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016a550; name: FUN_.text__0016a550
 */


undefined8 FUN__text__0016a550(void)

{
  uint uVar1;
  
  uVar1 = *(byte *)(DAT_008e1560 + 0x50) - 1;
  if (uVar1 < 0xb) {
    return *(undefined8 *)((long)(char)uVar1 * 8 + 0x7253a0);
  }
  return 0x53552d6e65;
}


