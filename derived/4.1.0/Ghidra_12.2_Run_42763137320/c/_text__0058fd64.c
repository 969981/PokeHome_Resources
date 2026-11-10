/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fd64; name: FUN_.text__0058fd64
 */


void FUN__text__0058fd64(long param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(param_1 + 0xde);
  if (*(short *)(param_1 + 0x54) != 1) {
    puVar1 = (undefined2 *)(param_1 + 0xd2);
  }
  FUN__text__00585d70(param_1 + 0x68,param_2,*puVar1);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return;
}


