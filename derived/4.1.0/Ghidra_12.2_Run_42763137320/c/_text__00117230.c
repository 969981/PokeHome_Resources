/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00117230; name: FUN_.text__00117230
 */


void FUN__text__00117230(long param_1)

{
  int iVar1;
  long *local_8;
  
  iVar1 = FUN__text__005d84b0();
  if (iVar1 == 2) {
    FUN__text__005d84d4(&local_8,param_1);
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 0x80))(local_8,*(undefined8 *)(param_1 + 0x120));
      if (local_8 != (long *)0x0) {
        (**(code **)(local_8[9] + 0x18))();
      }
    }
  }
  return;
}


