/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c59c8; name: FUN_.text__004c59c8
 */


void FUN__text__004c59c8(undefined8 *param_1,undefined4 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5)

{
  if (((*(ushort *)((long)param_1 + 0xc) & 0x7c) == 4) && (param_1[2] != 0)) {
    FUN__text__00400fc0(0);
  }
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[1] = param_5;
  param_1[2] = param_3;
  *param_1 = param_4;
  *(ushort *)((long)param_1 + 0xc) = (ushort)((ulong)param_5 >> 0x20) | 0x80;
  return;
}


