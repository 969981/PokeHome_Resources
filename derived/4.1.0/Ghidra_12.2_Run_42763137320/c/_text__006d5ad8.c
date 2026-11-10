/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d5ad8; name: FUN_.text__006d5ad8
 */


void FUN__text__006d5ad8(ulong param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long local_38;
  long local_18;
  
  local_18 = 0;
  local_38 = 0;
  FUN__text__006d529c(&local_18,&local_38);
  lVar1 = (param_1 & 0xffffffff) * 4;
  *param_2 = *(undefined4 *)(local_18 + lVar1);
  *param_3 = *(undefined4 *)(local_38 + lVar1);
  return;
}


