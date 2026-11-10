/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002201a4; name: FUN_.text__002201a4
 */


void FUN__text__002201a4(long param_1,undefined8 *param_2,undefined1 param_3)

{
  long *plVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_27;
  
  local_27 = 0x1010001;
  local_38 = *param_2;
  uStack_30 = 1;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x640) + 0x60);
  local_28 = param_3;
  (**(code **)(*plVar1 + 8))(plVar1,0);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0xf0),&local_38);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0xf0),0);
  return;
}


