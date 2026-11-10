/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040d100; name: FUN_.text__0040d100
 */


void FUN__text__0040d100(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *param_1 = 0;
  param_1[1] = 0x40000000000ff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x20000000001;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x80000000100000;
  *(undefined2 *)((long)param_1 + 100) = 0x101;
  *(undefined4 *)(param_1 + 0xc) = 1000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x11] = 0x4180000000008000;
  thunk_FUN__text__0040625c((long)param_1 + 0x24);
  FUN__text__004135f0(param_1 + 7);
  return;
}


