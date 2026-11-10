/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011beec; name: FUN_.text__0011beec
 */


void FUN__text__0011beec(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_008e15a0;
  if (DAT_008e15a0 != 0) {
    lVar2 = *(long *)(DAT_008e15a0 + 0x80);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *(undefined1 *)(lVar2 + 0x724) = 1;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (*(long *)(lVar1 + 0xb0) != 0) {
      FUN__text__001537b0(*(long *)(lVar1 + 0xb0),0);
      return;
    }
  }
  return;
}


