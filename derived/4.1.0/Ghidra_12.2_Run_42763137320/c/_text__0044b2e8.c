/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044b2e8; name: FUN_.text__0044b2e8
 */


void FUN__text__0044b2e8(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_2;
  uStack_4 = param_1;
  FUN__text__0044b330(param_3 + 0x20,param_4,&local_8,1);
  *(byte *)(param_3 + 0x7c) = *(byte *)(param_3 + 0x7c) | 1;
  return;
}


