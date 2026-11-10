/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00581f28; name: FUN_.text__00581f28
 */


undefined8 FUN__text__00581f28(long param_1,undefined4 *param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  fVar1 = exp2f((float)param_2[1] * 0.1660964);
  *(float *)(param_1 + 0xc) = fVar1;
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  return 1;
}


