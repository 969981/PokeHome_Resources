/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d619c; name: FUN_.text__005d619c
 */


void FUN__text__005d619c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  
  FUN__text__005d620c(&local_38,param_2);
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = local_38;
  FUN__text__005d6038(local_38,param_2,param_3,param_4);
  return;
}


