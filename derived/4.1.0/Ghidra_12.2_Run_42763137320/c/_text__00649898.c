/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00649898; name: FUN_.text__00649898
 */


void FUN__text__00649898(undefined4 *param_1,undefined8 *param_2,void *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  memcpy(param_1,param_3,0x148);
  uVar1 = param_4[1];
  *param_2 = *param_4;
  param_2[1] = uVar1;
  FUN__text__0063a140(param_1 + 2,0x140,*param_1);
  FUN__text__0063a140(param_2,0x10,*param_1);
  return;
}


