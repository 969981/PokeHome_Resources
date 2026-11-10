/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d930; name: FUN_.text__0069d930
 */


void FUN__text__0069d930(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 0x210) = *param_4;
  *(undefined4 *)(param_2 + 0x214) = param_4[1];
  *(undefined4 *)(param_2 + 0x218) = *param_3;
  *(undefined4 *)(param_2 + 0x21c) = param_3[1];
  FUN__text__0069df34(param_1,param_2 + 0x40);
  return;
}


