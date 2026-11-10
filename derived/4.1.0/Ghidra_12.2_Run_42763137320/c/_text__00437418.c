/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437418; name: FUN_.text__00437418
 */


void FUN__text__00437418(long param_1,undefined8 param_2)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  FUN__text__0043a150(param_1 + 0x40,param_1 + 0x28,param_2,&local_50,&local_50);
  if ((*(char *)(param_1 + 0x44) == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
    FUN__text__00436aa0(param_1 + 0x28);
  }
  return;
}


