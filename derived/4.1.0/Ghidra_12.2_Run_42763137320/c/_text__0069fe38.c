/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069fe38; name: FUN_.text__0069fe38
 */


void FUN__text__0069fe38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN__text__006b2060(param_1,0,0,param_2,param_4);
  *param_1 = 0x89d178;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd | *(char *)(param_4 + 0xde) << 1;
  return;
}


