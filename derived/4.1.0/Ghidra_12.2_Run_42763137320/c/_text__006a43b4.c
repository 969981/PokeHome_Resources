/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a43b4; name: FUN_.text__006a43b4
 */


void FUN__text__006a43b4(long param_1,long param_2,long param_3,undefined8 param_4,float *param_5)

{
  FUN__text__006a43a0(param_1,param_3);
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(float *)(param_1 + 0x28) = (*(float *)(param_2 + 0x50) / *param_5) * *(float *)(param_3 + 0x58);
  *(float *)(param_1 + 0x2c) =
       (*(float *)(param_2 + 0x54) / param_5[1]) * *(float *)(param_3 + 0x5c);
  return;
}


