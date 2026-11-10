/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb7a4; name: FUN_.text__004eb7a4
 */


void FUN__text__004eb7a4(undefined8 *param_1)

{
  FUN__text__004ec468();
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = 0x88f3e8;
  param_1[5] = 0x88f4a0;
  param_1[6] = 0;
  param_1[3] = 0x88f478;
  param_1[9] = 0;
  param_1[10] = 0xffffffff3f800000;
  *(byte *)((long)param_1 + 0x5a) = *(byte *)((long)param_1 + 0x5a) & 0xe0;
  return;
}


