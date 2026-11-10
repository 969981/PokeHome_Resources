/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022075c; name: FUN_.text__0022075c
 */


void FUN__text__0022075c(long param_1)

{
  long *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_24 = 1;
  local_38 = *(undefined8 *)(param_1 + 0x1b0);
  uStack_30 = 0;
  local_28 = 0x1000100;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60);
  (**(code **)(*plVar1 + 8))(plVar1,1);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_38);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
  return;
}


