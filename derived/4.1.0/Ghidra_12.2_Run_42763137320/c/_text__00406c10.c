/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406c10; name: FUN_.text__00406c10
 */


void FUN__text__00406c10(long param_1)

{
  FUN__text__0041edb0(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4dc) = 0x2b;
  *(undefined8 *)(param_1 + 0x4e4) = 0;
  *(undefined8 *)(param_1 + 0x4ec) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x4f4) = 0x1ffffffff;
  FUN__text__0041edb0(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x50c) = 0x2b;
  *(undefined8 *)(param_1 + 0x514) = 0;
  *(undefined8 *)(param_1 + 0x51c) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0x524) = 0x1ffffffff;
  if (*(long *)(param_1 + 0x538) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x538) = 0;
  }
  if (*(long *)(param_1 + 0x540) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x540) = 0;
  }
  FUN__text__004df354(param_1 + 0xa0);
  return;
}


