/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fd24; name: FUN_.text__0067fd24
 */


undefined8 FUN__text__0067fd24(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__00680914();
  uVar2 = 0;
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) && (*(int *)(lVar1 + 0xdc) != 5)) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


