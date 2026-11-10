/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005569c8; name: FUN_.text__005569c8
 */


void FUN__text__005569c8(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN__text__00555690();
  uVar1 = *param_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = param_2;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  param_1[1] = param_2 - uVar2 * uVar1;
  return;
}


