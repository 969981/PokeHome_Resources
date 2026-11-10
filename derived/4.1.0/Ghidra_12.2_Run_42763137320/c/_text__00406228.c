/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406228; name: FUN_.text__00406228
 */


void FUN__text__00406228(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = FUN__text__0040a500();
  if (lVar1 == 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0xf8) = param_2;
  FUN__text__0047d840();
  return;
}


