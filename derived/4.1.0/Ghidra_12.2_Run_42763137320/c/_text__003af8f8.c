/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af8f8; name: FUN_.text__003af8f8
 */


void FUN__text__003af8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *local_40;
  undefined8 uStack_38;
  long local_18;
  
  puVar1 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x6e8);
  uStack_38 = *puVar1;
  local_40 = &local_18;
  local_18 = 0;
  FUN__text__003aa1c0(param_1 + -0xa0,&local_40,0);
  local_40 = *(long **)(local_18 + 0x88);
  (**(code **)(**(long **)(param_1 + -8) + 0x28))(*(long **)(param_1 + -8),&local_40,param_3);
  return;
}


