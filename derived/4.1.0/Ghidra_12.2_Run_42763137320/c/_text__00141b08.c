/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00141b08; name: FUN_.text__00141b08
 */


void FUN__text__00141b08(long param_1,int param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  
  if (*(code **)(param_1 + 0x650) != (code *)0x0) {
    local_28 = param_2;
    (**(code **)(param_1 + 0x650))(param_1 + 0x670,&local_28);
  }
  if (*(code **)(param_1 + 2000) != (code *)0x0) {
    local_24 = param_2;
    iVar1 = (**(code **)(param_1 + 2000))(param_1 + 0x7f0,&local_24);
    FUN__text__0012c378(param_1 + 0x110,(long)param_2 * 0x20 + 0x7244b8 + (long)iVar1 * 8);
  }
  return;
}


