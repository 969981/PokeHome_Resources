/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00493260; name: FUN_.text__00493260
 */


void FUN__text__00493260(long param_1)

{
  undefined1 auStack_70 [80];
  
  FUN__text__004921c4(auStack_70,param_1);
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 8),auStack_70);
  }
  FUN__text__00492200(auStack_70);
  return;
}


