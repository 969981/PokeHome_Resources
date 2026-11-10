/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6ec0; name: FUN_.text__004e6ec0
 */


void FUN__text__004e6ec0(long param_1,uint *param_2)

{
  uint uVar1;
  
  FUN__text__004e6884();
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      FUN__text__004e6b40(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  *(uint *)(param_1 + 0x60) = param_2[1];
  *(uint *)(param_1 + 100) = param_2[2];
  *(uint *)(param_1 + 0x68) = param_2[3];
  return;
}


