/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059cb64; name: FUN_.text__0059cb64
 */


void FUN__text__0059cb64(long param_1,long *param_2)

{
  undefined8 local_8;
  
  (**(code **)(*param_2 + 0x10))(&local_8,param_2);
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x130) = local_8;
  return;
}


