/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002052e0; name: FUN_.text__002052e0
 */


void FUN__text__002052e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  param_2[2] = uVar2;
  *param_2 = uVar1;
  return;
}


