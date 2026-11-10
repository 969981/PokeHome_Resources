/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057bf00; name: FUN_.text__0057bf00
 */


uint FUN__text__0057bf00(float *param_1,float *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(0.0 < *param_1 - *param_2);
  if (*param_1 - *param_2 < 0.0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


