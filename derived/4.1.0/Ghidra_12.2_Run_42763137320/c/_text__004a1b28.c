/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1b28; name: FUN_.text__004a1b28
 */


void FUN__text__004a1b28(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                        int param_5,int param_6)

{
  *(undefined8 *)(param_1 + 2) = param_3;
  *param_1 = (int)param_2;
  param_1[1] = (int)((ulong)param_2 >> 0x20);
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = param_4;
  param_1[0x19] = param_6 + param_5;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xf0 | param_4 != 0;
  param_1[0x1b] = 0x10;
  param_1[0x1c] = param_6;
  return;
}


