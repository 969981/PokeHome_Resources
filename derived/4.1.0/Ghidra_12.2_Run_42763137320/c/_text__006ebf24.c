/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ebf24; name: FUN_.text__006ebf24
 */


void FUN__text__006ebf24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x404] = 0;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 0x402) = 1;
  *(byte *)((long)param_1 + 0x2011) = *(byte *)((long)param_1 + 0x2011) | 1;
  return;
}


