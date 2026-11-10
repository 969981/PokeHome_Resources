/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044a450; name: FUN_.text__0044a450
 */


void FUN__text__0044a450(long param_1)

{
  long local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  local_50 = param_1;
  FUN__text__0043d9f0(param_1 + 0x68,&local_50);
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  FUN__text__004471ec(param_1);
  return;
}


