/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f21c0; name: FUN_.text__004f21c0
 */


void FUN__text__004f21c0(undefined8 *param_1)

{
  FUN__text__004938cc();
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *param_1 = 0x88feb0;
  param_1[1] = 0x890178;
  param_1[5] = 0x8901d0;
  param_1[2] = 0x890190;
  *(byte *)((long)param_1 + 0x11c) = *(byte *)((long)param_1 + 0x11c) & 0xf0;
  return;
}


