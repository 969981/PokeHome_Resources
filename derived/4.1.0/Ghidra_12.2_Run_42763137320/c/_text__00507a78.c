/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00507a78; name: FUN_.text__00507a78
 */


void FUN__text__00507a78(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN__text__00507b30(param_1 + 0x80);
  FUN__text__00529e60(param_1 + 0x110);
  FUN__text__00507b30(param_1 + 0x80);
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN__text__00400fc0(0xb);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  FUN__text__0051cae0(param_1 + 0x90);
  return;
}


