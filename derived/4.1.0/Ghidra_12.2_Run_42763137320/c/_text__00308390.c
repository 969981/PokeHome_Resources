/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308390; name: FUN_.text__00308390
 */


uint FUN__text__00308390(long param_1)

{
  uint uVar1;
  long local_8;
  
  FUN__text__003204a0(&local_8);
  uVar1 = FUN__text__003028c4(local_8,param_1 + 0x60);
  if (local_8 != 0) {
    (**(code **)(*(long *)(local_8 + 0x48) + 0x18))();
  }
  return (uVar1 ^ 0xffffffff) & 1;
}


