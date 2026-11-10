/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cb06c; name: FUN_.text__001cb06c
 */


void FUN__text__001cb06c(long param_1,undefined8 param_2)

{
  undefined1 auStack_30 [24];
  long local_18;
  
  FUN__text__0019e97c(*(undefined8 *)(param_1 + 0x38),param_2,0,0);
  FUN__text__005e927c(auStack_30,0x86dfd8);
  FUN__text__003c1e4c(auStack_30);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


