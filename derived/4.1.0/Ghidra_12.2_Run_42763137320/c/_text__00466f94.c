/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00466f94; name: FUN_.text__00466f94
 */


void FUN__text__00466f94(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      FUN__text__00400fc0(0);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
    }
    FUN__text__00400fc0(2,lVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}


