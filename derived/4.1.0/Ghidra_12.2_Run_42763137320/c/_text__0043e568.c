/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043e568; name: FUN_.text__0043e568
 */


void FUN__text__0043e568(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  *(char *)(param_3 + 0x41) = *(char *)(param_3 + 0x41) + '\x01';
  *(char *)(param_3 + 0x40) = *(char *)(param_3 + 0x40) + '\x04';
  local_38 = param_3;
  uStack_30 = param_4;
  local_28 = param_1;
  uStack_24 = param_2;
  FUN__text__00441660(param_3 + 0x30,&local_38);
  *(char *)(param_3 + 0x40) = *(char *)(param_3 + 0x40) + -4;
  return;
}


