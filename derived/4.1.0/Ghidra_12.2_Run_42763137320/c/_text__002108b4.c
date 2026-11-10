/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002108b4; name: FUN_.text__002108b4
 */


void FUN__text__002108b4(long param_1)

{
  undefined8 local_8;
  
  FUN__text__00109fd4(&local_8,0x719f01);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x70) = local_8;
  FUN__text__00210910(param_1);
  return;
}


