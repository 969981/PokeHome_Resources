/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028dfac; name: FUN_.text__0028dfac
 */


void FUN__text__0028dfac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}


