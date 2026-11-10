/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dac0c; name: FUN_.text__004dac0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004dac0c(long param_1,long *param_2)

{
  long lVar1;
  
  *(long **)(param_1 + 8) = param_2;
  lVar1 = param_2[3];
  *(long *)(param_1 + 0xe8) = lVar1;
  (**(code **)(*param_2 + 0x40))(param_2);
  FUN__text__0041ac80(param_1 + 0x10,lVar1 + 0x2b0,param_1 + 0xb0,*_DAT_008a4b68);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}


