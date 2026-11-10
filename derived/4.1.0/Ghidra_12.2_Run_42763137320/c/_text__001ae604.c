/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ae604; name: FUN_.text__001ae604
 */


void FUN__text__001ae604(undefined8 param_1)

{
  long lVar1;
  long local_8;
  
  local_8 = 0;
  lVar1 = FUN__text__00325bc0();
  FUN__text__001ae650(param_1,&local_8,*(undefined4 *)(lVar1 + 0x2c),0);
  if (local_8 != 0) {
    (**(code **)(*(long *)(local_8 + 0x48) + 0x18))();
  }
  return;
}


