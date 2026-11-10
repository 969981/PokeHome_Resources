/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fe54; name: FUN_.text__0012fe54
 */


void FUN__text__0012fe54(long param_1)

{
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long local_28;
  
  FUN__text__00131abc();
  FUN__text__005e9290(auStack_40,*(long *)(param_1 + 0x7c8) + 0x630);
  FUN__text__001321b4(param_1,local_38);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


