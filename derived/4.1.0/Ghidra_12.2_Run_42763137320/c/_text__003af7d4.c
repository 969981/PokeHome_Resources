/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af7d4; name: FUN_.text__003af7d4
 */


float FUN__text__003af7d4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN__text__003b7494(*(undefined8 *)(param_1 + 0x800));
  return *(float *)(param_1 + 0x6f4) + (float)iVar1 * *(float *)(param_1 + 0x6fc);
}


