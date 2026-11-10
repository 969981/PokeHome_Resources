/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020ca10; name: FUN_.text__0020ca10
 */


bool FUN__text__0020ca10(long param_1)

{
  int iVar1;
  
  if ((DAT_008e20e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_008e20e0);
    if (iVar1 != 0) {
      DAT_008e20d8 = 0x12;
      __cxa_guard_release(&DAT_008e20e0);
    }
  }
  return (DAT_008e20d8 & *(byte *)(param_1 + 0x11)) != 0;
}


