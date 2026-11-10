/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de928; name: FUN_.text__004de928
 */


void FUN__text__004de928(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[7] = 0xffffffffffffffff;
  return;
}


