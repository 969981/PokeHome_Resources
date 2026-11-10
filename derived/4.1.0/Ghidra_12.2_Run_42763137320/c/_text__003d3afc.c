/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d3afc; name: FUN_.text__003d3afc
 */


void FUN__text__003d3afc(undefined8 param_1,undefined4 param_2)

{
  long local_50 [6];
  
  FUN__text__003cc3c4(local_50,0x713edf,1);
  FUN__text__003d3b98(param_1,local_50,param_2);
  if ((local_50[3] != 0) && (local_50[0] != 0)) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  local_50[0] = 0;
  local_50[1] = 0xcbf29ce484222645;
  local_50[2] = 0x70f683;
  local_50[3] = 0;
  if (local_50[4] != 0) {
    (**(code **)(*(long *)(local_50[4] + 0x48) + 0x18))();
  }
  return;
}


