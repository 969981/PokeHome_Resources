/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c61b8; name: FUN_.text__003c61b8
 */


void FUN__text__003c61b8(undefined8 param_1,undefined4 param_2,undefined8 param_3,long *param_4)

{
  undefined1 local_24 [4];
  int local_8;
  undefined4 local_4;
  
  local_24[0] = 0;
  FUN__text__00321c50(param_2,local_24,&local_8);
  local_4 = *(undefined4 *)((long)local_8 * 4 + 0x73a854);
  (**(code **)(*param_4 + 0x28))(param_4,0,&local_4);
  (**(code **)(*param_4 + 0x28))(param_4,1,&local_4);
  (**(code **)(*param_4 + 0x28))(param_4,2,&local_4);
  (**(code **)(*param_4 + 0x28))(param_4,3,&local_4);
  return;
}


