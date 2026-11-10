/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de754; name: FUN_.text__004de754
 */


void FUN__text__004de754(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,
                        undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = *param_2;
  uVar1 = param_2[1];
  param_1[5] = param_6;
  param_1[3] = uVar1;
  param_1[4] = param_5;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 2);
  return;
}


