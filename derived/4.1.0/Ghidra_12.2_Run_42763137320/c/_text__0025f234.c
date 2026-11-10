/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f234; name: FUN_.text__0025f234
 */


void FUN__text__0025f234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[4];
  param_2[3] = param_1[3];
  param_2[4] = uVar3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}


