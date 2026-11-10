/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002528e0; name: FUN_.text__002528e0
 */


void FUN__text__002528e0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0x753f74378b49da9c;
  uStack_38 = 0x7167d4;
  local_30 = 8;
  local_28 = 0;
  uVar1 = FUN__text__0024e9c0(*(undefined8 *)(param_1 + 0x60),&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  FUN__text__00252950(uVar1);
  return;
}


