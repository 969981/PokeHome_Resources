/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00142718; name: FUN_.text__00142718
 */


undefined8 FUN__text__00142718(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN__text__00128db0(lVar1,0,1);
  if (*(code **)(lVar1 + 0x750) != (code *)0x0) {
    (**(code **)(lVar1 + 0x750))(lVar1 + 0x770);
  }
  if (*(code **)(lVar1 + 0x850) != (code *)0x0) {
    (**(code **)(lVar1 + 0x850))(lVar1 + 0x870);
  }
  return 1;
}


